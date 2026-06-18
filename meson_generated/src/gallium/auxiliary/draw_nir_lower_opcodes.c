#include "draw/draw_nir.h"

#include "nir.h"
#include "nir_builder.h"
#include "nir_search.h"
#include "nir_search_helpers.h"

/* What follows is NIR algebraic transform code for the following 11
 * transforms:
 *    ('fmulz', 'a', 'b') => ('bcsel', ('ior', ('feq', 'a', 0.0), ('feq', 'b', 0.0)), 0.0, ('fmul', 'a', 'b'))
 *    ('ffmaz', 'a', 'b', 'c') => ('bcsel', ('ior', ('feq', 'a', 0.0), ('feq', 'b', 0.0)), 'c', ('ffma', 'a', 'b', 'c'))
 *    ('bitfield_select', 'a', 'b', 'c') => ('ixor', 'c', ('iand', 'a', ('ixor', 'b', 'c')))
 *    ('ubfe', 'a', 'b', 'c') => ('ubitfield_extract', 'a', ('iand', 'b', 31), ('iand', 'c', 31))
 *    ('ibfe', 'a', 'b', 'c') => ('ibitfield_extract', 'a', ('iand', 'b', 31), ('iand', 'c', 31))
 *    ('bfm', 'a', 'b') => ('ishl', ('isub', ('ishl', 1, ('iand', 'a', 31)), 1), ('iand', 'b', 31))
 *    ('bfi', 'a', 'b', 'c') => ('ixor', 'c', ('iand', 'a', ('ixor', ('ishl', 'b', ('find_lsb', 'a')), 'c')))
 *    ('ufind_msb_rev', 'a') => ('bcsel', ('ige', ('ufind_msb', 'a'), 0), ('isub', 31, ('ufind_msb', 'a')), -1)
 *    ('ifind_msb_rev', 'a') => ('bcsel', ('ige', ('ifind_msb', 'a'), 0), ('isub', 31, ('ifind_msb', 'a')), -1)
 *    ('uclz', 'a') => ('umin', 32, ('bcsel', ('ige', ('ufind_msb', 'a'), 0), ('isub', 31, ('ufind_msb', 'a')), -1))
 *    ('shfr', 'a', 'b', 'c') => ('bcsel', ('ieq', ('iand', 'c', 31), 0), 'b', ('ior', ('ishl', 'a', ('iadd', 32, ('ineg', ('iand', 'c', 31)))), ('ushr', 'b', ('iand', 'c', 31))))
 */


static const nir_search_value_union draw_nir_lower_opcodes_values[] = {
   /* ('fmulz', 'a', 'b') => ('bcsel', ('ior', ('feq', 'a', 0.0), ('feq', 'b', 0.0)), 0.0, ('fmul', 'a', 'b')) */
   { .variable = {
      { nir_search_value_variable, 32 },
      0, /* a */
      false,
      -1,
      {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15},
   } },
   { .variable = {
      { nir_search_value_variable, 32 },
      1, /* b */
      false,
      -1,
      {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15},
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_fmulz,
      0, 1,
      { 0, 1 },
      -1,
   } },

   /* replace0_0_0_0 -> 0 in the cache */
   { .constant = {
      { nir_search_value_constant, 32 },
      nir_type_float, { 0x0ull /* 0.0 */ },
   } },
   { .expression = {
      { nir_search_value_expression, 1 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      true,
      -1,
      nir_op_feq,
      1, 1,
      { 0, 3 },
      -1,
   } },
   /* replace0_0_1_0 -> 1 in the cache */
   /* replace0_0_1_1 -> 3 in the cache */
   { .expression = {
      { nir_search_value_expression, 1 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      true,
      -1,
      nir_op_feq,
      2, 1,
      { 1, 3 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, 1 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ior,
      0, 3,
      { 4, 5 },
      -1,
   } },
   /* replace0_1 -> 3 in the cache */
   /* replace0_2_0 -> 0 in the cache */
   /* replace0_2_1 -> 1 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_fmul,
      3, 1,
      { 0, 1 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      true,
      -1,
      nir_op_bcsel,
      -1, 4,
      { 6, 3, 7 },
      -1,
   } },

   /* ('ffmaz', 'a', 'b', 'c') => ('bcsel', ('ior', ('feq', 'a', 0.0), ('feq', 'b', 0.0)), 'c', ('ffma', 'a', 'b', 'c')) */
   /* search1_0 -> 0 in the cache */
   /* search1_1 -> 1 in the cache */
   { .variable = {
      { nir_search_value_variable, 32 },
      2, /* c */
      false,
      -1,
      {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15},
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ffmaz,
      0, 1,
      { 0, 1, 9 },
      -1,
   } },

   /* replace1_0_0_0 -> 0 in the cache */
   /* replace1_0_0_1 -> 3 in the cache */
   /* replace1_0_0 -> 4 in the cache */
   /* replace1_0_1_0 -> 1 in the cache */
   /* replace1_0_1_1 -> 3 in the cache */
   /* replace1_0_1 -> 5 in the cache */
   /* replace1_0 -> 6 in the cache */
   /* replace1_1 -> 9 in the cache */
   /* replace1_2_0 -> 0 in the cache */
   /* replace1_2_1 -> 1 in the cache */
   /* replace1_2_2 -> 9 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ffma,
      3, 1,
      { 0, 1, 9 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_bcsel,
      -1, 4,
      { 6, 9, 11 },
      -1,
   } },

   /* ('bitfield_select', 'a', 'b', 'c') => ('ixor', 'c', ('iand', 'a', ('ixor', 'b', 'c'))) */
   { .variable = {
      { nir_search_value_variable, -3 },
      0, /* a */
      false,
      -1,
      {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15},
   } },
   { .variable = {
      { nir_search_value_variable, -3 },
      1, /* b */
      false,
      -1,
      {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15},
   } },
   { .variable = {
      { nir_search_value_variable, -3 },
      2, /* c */
      false,
      -1,
      {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15},
   } },
   { .expression = {
      { nir_search_value_expression, -3 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_bitfield_select,
      -1, 0,
      { 13, 14, 15 },
      -1,
   } },

   /* replace2_0 -> 15 in the cache */
   /* replace2_1_0 -> 13 in the cache */
   /* replace2_1_1_0 -> 14 in the cache */
   /* replace2_1_1_1 -> 15 in the cache */
   { .expression = {
      { nir_search_value_expression, -3 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ixor,
      2, 1,
      { 14, 15 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, -3 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_iand,
      1, 2,
      { 13, 17 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, -3 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ixor,
      0, 3,
      { 15, 18 },
      -1,
   } },

   /* ('ubfe', 'a', 'b', 'c') => ('ubitfield_extract', 'a', ('iand', 'b', 31), ('iand', 'c', 31)) */
   /* search3_0 -> 0 in the cache */
   /* search3_1 -> 1 in the cache */
   /* search3_2 -> 9 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ubfe,
      -1, 0,
      { 0, 1, 9 },
      -1,
   } },

   /* replace3_0 -> 0 in the cache */
   /* replace3_1_0 -> 1 in the cache */
   { .constant = {
      { nir_search_value_constant, 32 },
      nir_type_int, { 0x1full /* 31 */ },
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      true,
      -1,
      nir_op_iand,
      0, 1,
      { 1, 21 },
      -1,
   } },
   /* replace3_2_0 -> 9 in the cache */
   /* replace3_2_1 -> 21 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      true,
      -1,
      nir_op_iand,
      1, 1,
      { 9, 21 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ubitfield_extract,
      -1, 2,
      { 0, 22, 23 },
      -1,
   } },

   /* ('ibfe', 'a', 'b', 'c') => ('ibitfield_extract', 'a', ('iand', 'b', 31), ('iand', 'c', 31)) */
   /* search4_0 -> 0 in the cache */
   /* search4_1 -> 1 in the cache */
   /* search4_2 -> 9 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ibfe,
      -1, 0,
      { 0, 1, 9 },
      -1,
   } },

   /* replace4_0 -> 0 in the cache */
   /* replace4_1_0 -> 1 in the cache */
   /* replace4_1_1 -> 21 in the cache */
   /* replace4_1 -> 22 in the cache */
   /* replace4_2_0 -> 9 in the cache */
   /* replace4_2_1 -> 21 in the cache */
   /* replace4_2 -> 23 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ibitfield_extract,
      -1, 2,
      { 0, 22, 23 },
      -1,
   } },

   /* ('bfm', 'a', 'b') => ('ishl', ('isub', ('ishl', 1, ('iand', 'a', 31)), 1), ('iand', 'b', 31)) */
   /* search5_0 -> 0 in the cache */
   /* search5_1 -> 1 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_bfm,
      -1, 0,
      { 0, 1 },
      -1,
   } },

   { .constant = {
      { nir_search_value_constant, 32 },
      nir_type_int, { 0x1ull /* 1 */ },
   } },
   /* replace5_0_0_1_0 -> 0 in the cache */
   /* replace5_0_0_1_1 -> 21 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      true,
      -1,
      nir_op_iand,
      0, 1,
      { 0, 21 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ishl,
      -1, 1,
      { 28, 29 },
      -1,
   } },
   /* replace5_0_1 -> 28 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      true,
      -1,
      nir_op_isub,
      -1, 1,
      { 30, 28 },
      -1,
   } },
   /* replace5_1_0 -> 1 in the cache */
   /* replace5_1_1 -> 21 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      true,
      -1,
      nir_op_iand,
      1, 1,
      { 1, 21 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ishl,
      -1, 2,
      { 31, 32 },
      -1,
   } },

   /* ('bfi', 'a', 'b', 'c') => ('ixor', 'c', ('iand', 'a', ('ixor', ('ishl', 'b', ('find_lsb', 'a')), 'c'))) */
   /* search6_0 -> 0 in the cache */
   /* search6_1 -> 1 in the cache */
   /* search6_2 -> 9 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_bfi,
      -1, 0,
      { 0, 1, 9 },
      -1,
   } },

   /* replace6_0 -> 9 in the cache */
   /* replace6_1_0 -> 0 in the cache */
   /* replace6_1_1_0_0 -> 1 in the cache */
   /* replace6_1_1_0_1_0 -> 0 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_find_lsb,
      -1, 0,
      { 0 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ishl,
      -1, 0,
      { 1, 35 },
      -1,
   } },
   /* replace6_1_1_1 -> 9 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ixor,
      2, 1,
      { 36, 9 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_iand,
      1, 2,
      { 0, 37 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ixor,
      0, 3,
      { 9, 38 },
      -1,
   } },

   /* ('ufind_msb_rev', 'a') => ('bcsel', ('ige', ('ufind_msb', 'a'), 0), ('isub', 31, ('ufind_msb', 'a')), -1) */
   { .variable = {
      { nir_search_value_variable, -1 },
      0, /* a */
      false,
      -1,
      {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15},
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ufind_msb_rev,
      -1, 0,
      { 40 },
      -1,
   } },

   /* replace7_0_0_0 -> 40 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ufind_msb,
      -1, 0,
      { 40 },
      -1,
   } },
   { .constant = {
      { nir_search_value_constant, 32 },
      nir_type_int, { 0x0ull /* 0 */ },
   } },
   { .expression = {
      { nir_search_value_expression, 1 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      true,
      -1,
      nir_op_ige,
      -1, 0,
      { 42, 43 },
      -1,
   } },
   /* replace7_1_0 -> 21 in the cache */
   /* replace7_1_1_0 -> 40 in the cache */
   /* replace7_1_1 -> 42 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_isub,
      -1, 0,
      { 21, 42 },
      -1,
   } },
   { .constant = {
      { nir_search_value_constant, 32 },
      nir_type_int, { 0xffffffffffffffffull /* -1 */ },
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_bcsel,
      -1, 0,
      { 44, 45, 46 },
      -1,
   } },

   /* ('ifind_msb_rev', 'a') => ('bcsel', ('ige', ('ifind_msb', 'a'), 0), ('isub', 31, ('ifind_msb', 'a')), -1) */
   /* search8_0 -> 0 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ifind_msb_rev,
      -1, 0,
      { 0 },
      -1,
   } },

   /* replace8_0_0_0 -> 0 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ifind_msb,
      -1, 0,
      { 0 },
      -1,
   } },
   /* replace8_0_1 -> 43 in the cache */
   { .expression = {
      { nir_search_value_expression, 1 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      true,
      -1,
      nir_op_ige,
      -1, 0,
      { 49, 43 },
      -1,
   } },
   /* replace8_1_0 -> 21 in the cache */
   /* replace8_1_1_0 -> 0 in the cache */
   /* replace8_1_1 -> 49 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_isub,
      -1, 0,
      { 21, 49 },
      -1,
   } },
   /* replace8_2 -> 46 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_bcsel,
      -1, 0,
      { 50, 51, 46 },
      -1,
   } },

   /* ('uclz', 'a') => ('umin', 32, ('bcsel', ('ige', ('ufind_msb', 'a'), 0), ('isub', 31, ('ufind_msb', 'a')), -1)) */
   /* search9_0 -> 0 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_uclz,
      -1, 0,
      { 0 },
      -1,
   } },

   { .constant = {
      { nir_search_value_constant, 32 },
      nir_type_int, { 0x20ull /* 32 */ },
   } },
   /* replace9_1_0_0_0 -> 0 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ufind_msb,
      -1, 0,
      { 0 },
      -1,
   } },
   /* replace9_1_0_1 -> 43 in the cache */
   { .expression = {
      { nir_search_value_expression, 1 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      true,
      -1,
      nir_op_ige,
      -1, 0,
      { 55, 43 },
      -1,
   } },
   /* replace9_1_1_0 -> 21 in the cache */
   /* replace9_1_1_1_0 -> 0 in the cache */
   /* replace9_1_1_1 -> 55 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_isub,
      -1, 0,
      { 21, 55 },
      -1,
   } },
   /* replace9_1_2 -> 46 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_bcsel,
      -1, 0,
      { 56, 57, 46 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_umin,
      0, 1,
      { 54, 58 },
      -1,
   } },

   /* ('shfr', 'a', 'b', 'c') => ('bcsel', ('ieq', ('iand', 'c', 31), 0), 'b', ('ior', ('ishl', 'a', ('iadd', 32, ('ineg', ('iand', 'c', 31)))), ('ushr', 'b', ('iand', 'c', 31)))) */
   /* search10_0 -> 0 in the cache */
   /* search10_1 -> 1 in the cache */
   /* search10_2 -> 9 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_shfr,
      -1, 0,
      { 0, 1, 9 },
      -1,
   } },

   /* replace10_0_0_0 -> 9 in the cache */
   /* replace10_0_0_1 -> 21 in the cache */
   /* replace10_0_0 -> 23 in the cache */
   /* replace10_0_1 -> 43 in the cache */
   { .expression = {
      { nir_search_value_expression, 1 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      true,
      -1,
      nir_op_ieq,
      0, 2,
      { 23, 43 },
      -1,
   } },
   /* replace10_1 -> 1 in the cache */
   /* replace10_2_0_0 -> 0 in the cache */
   /* replace10_2_0_1_0 -> 54 in the cache */
   /* replace10_2_0_1_1_0_0 -> 9 in the cache */
   /* replace10_2_0_1_1_0_1 -> 21 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      true,
      -1,
      nir_op_iand,
      4, 1,
      { 9, 21 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ineg,
      -1, 1,
      { 62 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_iadd,
      3, 2,
      { 54, 63 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ishl,
      -1, 2,
      { 0, 64 },
      -1,
   } },
   /* replace10_2_1_0 -> 1 in the cache */
   /* replace10_2_1_1_0 -> 9 in the cache */
   /* replace10_2_1_1_1 -> 21 in the cache */
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      true,
      -1,
      nir_op_iand,
      5, 1,
      { 9, 21 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ushr,
      -1, 1,
      { 1, 66 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_ior,
      2, 4,
      { 65, 67 },
      -1,
   } },
   { .expression = {
      { nir_search_value_expression, 32 },
      nir_fp_fast_math,
      nir_fp_fast_math,
      false,
      -1,
      nir_op_bcsel,
      -1, 6,
      { 61, 1, 68 },
      -1,
   } },

};



static const struct transform draw_nir_lower_opcodes_transforms[] = {
   { ~0, ~0, ~0 }, /* Sentinel */

   { 2, 8, 0 },
   { ~0, ~0, ~0 }, /* Sentinel */

   { 10, 12, 0 },
   { ~0, ~0, ~0 }, /* Sentinel */

   { 16, 19, 0 },
   { ~0, ~0, ~0 }, /* Sentinel */

   { 20, 24, 0 },
   { ~0, ~0, ~0 }, /* Sentinel */

   { 25, 26, 0 },
   { ~0, ~0, ~0 }, /* Sentinel */

   { 27, 33, 0 },
   { ~0, ~0, ~0 }, /* Sentinel */

   { 34, 39, 0 },
   { ~0, ~0, ~0 }, /* Sentinel */

   { 41, 47, 0 },
   { ~0, ~0, ~0 }, /* Sentinel */

   { 48, 52, 0 },
   { ~0, ~0, ~0 }, /* Sentinel */

   { 53, 59, 0 },
   { ~0, ~0, ~0 }, /* Sentinel */

   { 60, 69, 0 },
   { ~0, ~0, ~0 }, /* Sentinel */

};

static const struct per_op_table draw_nir_lower_opcodes_pass_op_table[nir_num_search_ops] = {
   [nir_op_fmulz] = {
      .filter = NULL,
      
      .num_filtered_states = 1,
      .table = (const uint16_t []) {
      
         2,
      },
   },
   [nir_op_ffmaz] = {
      .filter = NULL,
      
      .num_filtered_states = 1,
      .table = (const uint16_t []) {
      
         3,
      },
   },
   [nir_op_bitfield_select] = {
      .filter = NULL,
      
      .num_filtered_states = 1,
      .table = (const uint16_t []) {
      
         4,
      },
   },
   [nir_op_ubfe] = {
      .filter = NULL,
      
      .num_filtered_states = 1,
      .table = (const uint16_t []) {
      
         5,
      },
   },
   [nir_op_ibfe] = {
      .filter = NULL,
      
      .num_filtered_states = 1,
      .table = (const uint16_t []) {
      
         6,
      },
   },
   [nir_op_bfm] = {
      .filter = NULL,
      
      .num_filtered_states = 1,
      .table = (const uint16_t []) {
      
         7,
      },
   },
   [nir_op_bfi] = {
      .filter = NULL,
      
      .num_filtered_states = 1,
      .table = (const uint16_t []) {
      
         8,
      },
   },
   [nir_op_ufind_msb_rev] = {
      .filter = NULL,
      
      .num_filtered_states = 1,
      .table = (const uint16_t []) {
      
         9,
      },
   },
   [nir_op_ifind_msb_rev] = {
      .filter = NULL,
      
      .num_filtered_states = 1,
      .table = (const uint16_t []) {
      
         10,
      },
   },
   [nir_op_uclz] = {
      .filter = NULL,
      
      .num_filtered_states = 1,
      .table = (const uint16_t []) {
      
         11,
      },
   },
   [nir_op_shfr] = {
      .filter = NULL,
      
      .num_filtered_states = 1,
      .table = (const uint16_t []) {
      
         12,
      },
   },
};

/* Mapping from state index to offset in transforms (0 being no transforms) */
static const uint16_t draw_nir_lower_opcodes_transform_offsets[] = {
   0,
   0,
   1,
   3,
   5,
   7,
   9,
   11,
   13,
   15,
   17,
   19,
   21,
};

static const nir_algebraic_table draw_nir_lower_opcodes_table = {
   .transforms = draw_nir_lower_opcodes_transforms,
   .transform_offsets = draw_nir_lower_opcodes_transform_offsets,
   .pass_op_table = draw_nir_lower_opcodes_pass_op_table,
   .values = draw_nir_lower_opcodes_values,
   .expression_cond = NULL,
   .variable_cond = NULL,
};

bool
draw_nir_lower_opcodes(
   nir_shader *shader
) {
   bool progress = false;
   bool condition_flags[1];
   const nir_shader_compiler_options *options = shader->options;
   const shader_info *info = &shader->info;
   (void) options;
   (void) info;

   STATIC_ASSERT(70 == ARRAY_SIZE(draw_nir_lower_opcodes_values));
   condition_flags[0] = true;

   nir_foreach_function_impl(impl, shader) {
     progress |= nir_algebraic_impl(impl, condition_flags, &draw_nir_lower_opcodes_table);
   }

   return progress;
}

