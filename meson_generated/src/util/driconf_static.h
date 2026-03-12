/* Copyright (C) 2021 Google, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

struct driconf_option {
    const char *name;
    const char *value;
};

struct driconf_application {
    const char *name;
    const char *executable;
    const char *executable_regexp;
    const char *sha1;
    const char *application_name_match;
    const char *application_versions;
    unsigned num_options;
    const struct driconf_option *options;
};

struct driconf_engine {
    const char *engine_name_match;
    const char *engine_versions;
    unsigned num_options;
    const struct driconf_option *options;
};

struct driconf_device {
    const char *driver;
    const char *device;
    unsigned num_engines;
    const struct driconf_engine *engines;
    unsigned num_applications;
    const struct driconf_application *applications;
};



    
static const struct driconf_option engine_397_options[] = {
    { .name = "vk_x11_strict_image_count", .value = "true" },
};


static const struct driconf_engine device_1_engines[] = {
    { .engine_name_match = "UnrealEngine4.*",
      .engine_versions = "0:23",
      .num_options = 1,
      .options = engine_397_options,
    },
};

    
static const struct driconf_option application_2_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
};

    
static const struct driconf_option application_4_options[] = {
    { .name = "force_glsl_extensions_warn", .value = "true" },
    { .name = "disable_blend_func_extended", .value = "true" },
    { .name = "disable_arb_gpu_shader5", .value = "true" },
};

    
static const struct driconf_option application_8_options[] = {
    { .name = "force_glsl_extensions_warn", .value = "true" },
    { .name = "disable_blend_func_extended", .value = "true" },
    { .name = "disable_arb_gpu_shader5", .value = "true" },
};

    
static const struct driconf_option application_12_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
    { .name = "dual_color_blend_by_location", .value = "true" },
};

    
static const struct driconf_option application_15_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
    { .name = "dual_color_blend_by_location", .value = "true" },
};

    
static const struct driconf_option application_18_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
    { .name = "dual_color_blend_by_location", .value = "true" },
};

    
static const struct driconf_option application_21_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
    { .name = "dual_color_blend_by_location", .value = "true" },
};

    
static const struct driconf_option application_24_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
    { .name = "dual_color_blend_by_location", .value = "true" },
};

    
static const struct driconf_option application_27_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
    { .name = "dual_color_blend_by_location", .value = "true" },
};

    
static const struct driconf_option application_30_options[] = {
    { .name = "disable_blend_func_extended", .value = "true" },
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
};

    
static const struct driconf_option application_33_options[] = {
    { .name = "disable_blend_func_extended", .value = "true" },
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
};

    
static const struct driconf_option application_36_options[] = {
    { .name = "disable_glsl_line_continuations", .value = "true" },
};

    
static const struct driconf_option application_38_options[] = {
    { .name = "disable_uniform_array_resize", .value = "true" },
};

    
static const struct driconf_option application_40_options[] = {
    { .name = "always_have_depth_buffer", .value = "true" },
};

    
static const struct driconf_option application_42_options[] = {
    { .name = "always_have_depth_buffer", .value = "true" },
};

    
static const struct driconf_option application_44_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
    { .name = "allow_glsl_builtin_variable_redeclaration", .value = "true" },
};

    
static const struct driconf_option application_47_options[] = {
    { .name = "allow_glsl_builtin_variable_redeclaration", .value = "true" },
};

    
static const struct driconf_option application_49_options[] = {
    { .name = "allow_glsl_builtin_variable_redeclaration", .value = "true" },
    { .name = "force_glsl_extensions_warn", .value = "true" },
};

    
static const struct driconf_option application_52_options[] = {
    { .name = "disable_uniform_array_resize", .value = "true" },
};

    
static const struct driconf_option application_54_options[] = {
    { .name = "disable_uniform_array_resize", .value = "true" },
    { .name = "alias_shader_extension", .value = "GL_ATI_shader_texture_lod:GL_ARB_shader_texture_lod" },
    { .name = "allow_vertex_texture_bias", .value = "true" },
};

    
static const struct driconf_option application_58_options[] = {
    { .name = "glsl_zero_init", .value = "true" },
};

    
static const struct driconf_option application_60_options[] = {
    { .name = "allow_glsl_builtin_variable_redeclaration", .value = "true" },
    { .name = "dual_color_blend_by_location", .value = "true" },
};

    
static const struct driconf_option application_63_options[] = {
    { .name = "glsl_zero_init", .value = "true" },
};

    
static const struct driconf_option application_65_options[] = {
    { .name = "allow_glsl_builtin_variable_redeclaration", .value = "true" },
};

    
static const struct driconf_option application_67_options[] = {
    { .name = "allow_glsl_builtin_variable_redeclaration", .value = "true" },
    { .name = "force_gl_map_buffer_synchronized", .value = "true" },
};

    
static const struct driconf_option application_70_options[] = {
    { .name = "allow_glsl_builtin_variable_redeclaration", .value = "true" },
    { .name = "force_gl_map_buffer_synchronized", .value = "true" },
};

    
static const struct driconf_option application_73_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
};

    
static const struct driconf_option application_75_options[] = {
    { .name = "force_gl_depth_component_type_int", .value = "true" },
};

    
static const struct driconf_option application_77_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
};

    
static const struct driconf_option application_79_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
};

    
static const struct driconf_option application_81_options[] = {
    { .name = "glsl_zero_init", .value = "true" },
};

    
static const struct driconf_option application_83_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
    { .name = "glsl_correct_derivatives_after_discard", .value = "true" },
    { .name = "force_gl_vendor", .value = "ATI Technologies, Inc." },
};

    
static const struct driconf_option application_87_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
};

    
static const struct driconf_option application_89_options[] = {
    { .name = "allow_higher_compat_version", .value = "true" },
};

    
static const struct driconf_option application_91_options[] = {
    { .name = "allow_higher_compat_version", .value = "true" },
};

    
static const struct driconf_option application_93_options[] = {
    { .name = "allow_higher_compat_version", .value = "true" },
};

    
static const struct driconf_option application_95_options[] = {
    { .name = "allow_higher_compat_version", .value = "true" },
};

    
static const struct driconf_option application_97_options[] = {
    { .name = "allow_higher_compat_version", .value = "true" },
};

    
static const struct driconf_option application_99_options[] = {
    { .name = "allow_higher_compat_version", .value = "true" },
};

    
static const struct driconf_option application_101_options[] = {
    { .name = "force_compat_shaders", .value = "true" },
};

    
static const struct driconf_option application_103_options[] = {
    { .name = "force_compat_shaders", .value = "true" },
};

    
static const struct driconf_option application_105_options[] = {
    { .name = "force_glsl_version", .value = "440" },
};

    
static const struct driconf_option application_107_options[] = {
    { .name = "force_glsl_abs_sqrt", .value = "true" },
};

    
static const struct driconf_option application_109_options[] = {
    { .name = "force_glsl_abs_sqrt", .value = "true" },
};

    
static const struct driconf_option application_111_options[] = {
    { .name = "force_compat_shaders", .value = "true" },
    { .name = "glx_clear_context_reset_isolation_bit", .value = "true" },
};

    
static const struct driconf_option application_114_options[] = {
    { .name = "force_compat_profile", .value = "true" },
};

    
static const struct driconf_option application_116_options[] = {
    { .name = "glsl_zero_init", .value = "true" },
};

    
static const struct driconf_option application_118_options[] = {
    { .name = "glsl_zero_init", .value = "true" },
};

    
static const struct driconf_option application_120_options[] = {
    { .name = "force_glsl_version", .value = "130" },
    { .name = "glsl_ignore_write_to_readonly_var", .value = "true" },
};

    
static const struct driconf_option application_123_options[] = {
    { .name = "allow_glsl_embedded_structure_declarations", .value = "true" },
};

    
static const struct driconf_option application_125_options[] = {
    { .name = "glsl_correct_derivatives_after_discard", .value = "true" },
};

    
static const struct driconf_option application_127_options[] = {
    { .name = "glsl_correct_derivatives_after_discard", .value = "true" },
};

    
static const struct driconf_option application_129_options[] = {
    { .name = "allow_glsl_cross_stage_interpolation_mismatch", .value = "true" },
};

    
static const struct driconf_option application_131_options[] = {
    { .name = "allow_glsl_cross_stage_interpolation_mismatch", .value = "true" },
};

    
static const struct driconf_option application_133_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_135_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_137_options[] = {
    { .name = "allow_glsl_cross_stage_interpolation_mismatch", .value = "true" },
};

    
static const struct driconf_option application_139_options[] = {
    { .name = "allow_glsl_cross_stage_interpolation_mismatch", .value = "true" },
};

    
static const struct driconf_option application_141_options[] = {
    { .name = "allow_glsl_cross_stage_interpolation_mismatch", .value = "true" },
};

    
static const struct driconf_option application_143_options[] = {
    { .name = "allow_glsl_builtin_const_expression", .value = "true" },
    { .name = "allow_glsl_relaxed_es", .value = "true" },
};

    
static const struct driconf_option application_146_options[] = {
    { .name = "allow_extra_pp_tokens", .value = "true" },
};

    
static const struct driconf_option application_148_options[] = {
    { .name = "force_compat_profile", .value = "true" },
};

    
static const struct driconf_option application_150_options[] = {
    { .name = "glsl_correct_derivatives_after_discard", .value = "true" },
};

    
static const struct driconf_option application_152_options[] = {
    { .name = "force_compat_profile", .value = "true" },
};

    
static const struct driconf_option application_154_options[] = {
    { .name = "glsl_zero_init", .value = "true" },
};

    
static const struct driconf_option application_156_options[] = {
    { .name = "glsl_zero_init", .value = "true" },
};

    
static const struct driconf_option application_158_options[] = {
    { .name = "force_integer_tex_nearest", .value = "true" },
};

    
static const struct driconf_option application_160_options[] = {
    { .name = "force_integer_tex_nearest", .value = "true" },
};

    
static const struct driconf_option application_162_options[] = {
    { .name = "vs_position_always_invariant", .value = "true" },
};

    
static const struct driconf_option application_164_options[] = {
    { .name = "force_integer_tex_nearest", .value = "true" },
};

    
static const struct driconf_option application_166_options[] = {
    { .name = "lower_depth_range_rate", .value = "0.8" },
};

    
static const struct driconf_option application_168_options[] = {
    { .name = "lower_depth_range_rate", .value = "0.8" },
};

    
static const struct driconf_option application_170_options[] = {
    { .name = "allow_multisampled_copyteximage", .value = "true" },
    { .name = "vertex_program_default_out", .value = "true" },
};

    
static const struct driconf_option application_173_options[] = {
    { .name = "allow_multisampled_copyteximage", .value = "true" },
    { .name = "vertex_program_default_out", .value = "true" },
};

    
static const struct driconf_option application_176_options[] = {
    { .name = "vblank_mode", .value = "0" },
    { .name = "glthread_nop_check_framebuffer_status", .value = "true" },
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
    { .name = "force_gl_vendor", .value = "NVIDIA Corporation" },
    { .name = "force_glsl_extensions_warn", .value = "true" },
    { .name = "mesa_no_error", .value = "true" },
    { .name = "allow_rgb10_configs", .value = "false" },
    { .name = "allow_invalid_glx_destroy_window", .value = "true" },
};

    
static const struct driconf_option application_186_options[] = {
    { .name = "ignore_map_unsynchronized", .value = "true" },
};

    
static const struct driconf_option application_188_options[] = {
    { .name = "force_integer_tex_nearest", .value = "true" },
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
};

    
static const struct driconf_option application_191_options[] = {
    { .name = "glsl_correct_derivatives_after_discard", .value = "true" },
};

    
static const struct driconf_option application_193_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_195_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_197_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_199_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_201_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_203_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_205_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_207_options[] = {
    { .name = "mesa_extension_override", .value = "-GL_MESA_pack_invert -GL_MESA_framebuffer_flip_y -GL_MESA_window_pos" },
};

    
static const struct driconf_option application_209_options[] = {
    { .name = "mesa_extension_override", .value = "-GL_MESA_pack_invert -GL_MESA_framebuffer_flip_y -GL_MESA_window_pos" },
    { .name = "do_dce_before_clip_cull_analysis", .value = "true" },
};

    
static const struct driconf_option application_212_options[] = {
    { .name = "mesa_extension_override", .value = "-GL_MESA_pack_invert -GL_MESA_framebuffer_flip_y -GL_MESA_window_pos" },
};

    
static const struct driconf_option application_214_options[] = {
    { .name = "force_glsl_extensions_warn", .value = "true" },
};

    
static const struct driconf_option application_216_options[] = {
    { .name = "force_direct_glx_context", .value = "true" },
};

    
static const struct driconf_option application_218_options[] = {
    { .name = "keep_native_window_glx_drawable", .value = "true" },
    { .name = "allow_rgb10_configs", .value = "false" },
};

    
static const struct driconf_option application_221_options[] = {
    { .name = "force_gl_vendor", .value = "ATI Technologies Inc." },
};

    
static const struct driconf_option application_223_options[] = {
    { .name = "force_compat_shaders", .value = "true" },
};

    
static const struct driconf_option application_225_options[] = {
    { .name = "mesa_glthread_app_profile", .value = "0" },
};

    
static const struct driconf_option application_227_options[] = {
    { .name = "vk_wsi_force_swapchain_to_current_extent", .value = "true" },
    { .name = "vk_x11_ignore_suboptimal", .value = "true" },
};

    
static const struct driconf_option application_230_options[] = {
    { .name = "vk_wsi_force_swapchain_to_current_extent", .value = "true" },
    { .name = "vk_x11_ignore_suboptimal", .value = "true" },
};

    
static const struct driconf_option application_233_options[] = {
    { .name = "vk_wsi_force_swapchain_to_current_extent", .value = "true" },
    { .name = "vk_x11_ignore_suboptimal", .value = "true" },
};

    
static const struct driconf_option application_236_options[] = {
    { .name = "vk_wsi_force_swapchain_to_current_extent", .value = "true" },
    { .name = "vk_x11_ignore_suboptimal", .value = "true" },
};

    
static const struct driconf_option application_239_options[] = {
    { .name = "vk_wsi_force_swapchain_to_current_extent", .value = "true" },
    { .name = "vk_x11_ignore_suboptimal", .value = "true" },
};

    
static const struct driconf_option application_242_options[] = {
    { .name = "vk_wsi_force_swapchain_to_current_extent", .value = "true" },
    { .name = "vk_x11_ignore_suboptimal", .value = "true" },
};

    
static const struct driconf_option application_245_options[] = {
    { .name = "mesa_glthread_app_profile", .value = "0" },
};

    
static const struct driconf_option application_247_options[] = {
    { .name = "mesa_glthread_app_profile", .value = "0" },
};

    
static const struct driconf_option application_249_options[] = {
    { .name = "mesa_glthread_app_profile", .value = "0" },
};

    
static const struct driconf_option application_251_options[] = {
    { .name = "adaptive_sync", .value = "false" },
    { .name = "v3d_nonmsaa_texture_size_limit", .value = "true" },
};

    
static const struct driconf_option application_254_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_256_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_258_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_260_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_262_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_264_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_266_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_268_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_270_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_272_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_274_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_276_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_278_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_280_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_282_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_284_options[] = {
    { .name = "adaptive_sync", .value = "false" },
    { .name = "v3d_nonmsaa_texture_size_limit", .value = "true" },
};

    
static const struct driconf_option application_287_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_289_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_291_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_293_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_295_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_297_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_299_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_301_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_303_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_305_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_307_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_309_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_311_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_313_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_315_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_317_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_319_options[] = {
    { .name = "v3d_nonmsaa_texture_size_limit", .value = "true" },
};

    
static const struct driconf_option application_321_options[] = {
    { .name = "mesa_glthread_app_profile", .value = "0" },
    { .name = "vk_x11_override_min_image_count", .value = "2" },
    { .name = "vk_wsi_force_bgra8_unorm_first", .value = "true" },
};

    
static const struct driconf_option application_325_options[] = {
    { .name = "vk_x11_override_min_image_count", .value = "2" },
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option application_328_options[] = {
    { .name = "vk_x11_override_min_image_count", .value = "2" },
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option application_331_options[] = {
    { .name = "vk_x11_override_min_image_count", .value = "3" },
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option application_334_options[] = {
    { .name = "glx_extension_override", .value = "-GLX_OML_swap_method" },
    { .name = "allow_higher_compat_version", .value = "true" },
};

    
static const struct driconf_option application_337_options[] = {
    { .name = "glsl_correct_derivatives_after_discard", .value = "true" },
};

    
static const struct driconf_option application_339_options[] = {
    { .name = "glsl_correct_derivatives_after_discard", .value = "true" },
};

    
static const struct driconf_option application_341_options[] = {
    { .name = "vs_position_always_precise", .value = "true" },
};

    
static const struct driconf_option application_343_options[] = {
    { .name = "vs_position_always_precise", .value = "true" },
};

    
static const struct driconf_option application_345_options[] = {
    { .name = "vs_position_always_precise", .value = "true" },
};

    
static const struct driconf_option application_347_options[] = {
    { .name = "vs_position_always_precise", .value = "true" },
};

    
static const struct driconf_option application_349_options[] = {
    { .name = "glsl_zero_init", .value = "true" },
};

    
static const struct driconf_option application_351_options[] = {
    { .name = "ignore_discard_framebuffer", .value = "true" },
};

    
static const struct driconf_option application_353_options[] = {
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option application_355_options[] = {
    { .name = "vk_x11_ensure_min_image_count", .value = "true" },
};

    
static const struct driconf_option application_357_options[] = {
    { .name = "vk_zero_vram", .value = "true" },
};

    
static const struct driconf_option application_359_options[] = {
    { .name = "vk_zero_vram", .value = "true" },
};

    
static const struct driconf_option application_361_options[] = {
    { .name = "vk_zero_vram", .value = "true" },
};

    
static const struct driconf_option application_363_options[] = {
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option application_365_options[] = {
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option application_367_options[] = {
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option application_369_options[] = {
    { .name = "vk_dont_care_as_load", .value = "true" },
};

    
static const struct driconf_option application_371_options[] = {
    { .name = "vk_dont_care_as_load", .value = "true" },
};

    
static const struct driconf_option application_373_options[] = {
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option application_375_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_377_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_379_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_381_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_383_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_385_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_387_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_389_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_391_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_393_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_395_options[] = {
    { .name = "vk_x11_strict_image_count", .value = "true" },
};


static const struct driconf_application device_1_applications[] = {
    { .name = "Akka Arrh",
      .executable = "Project-A.exe",
      .num_options = 1,
      .options = application_2_options,
    },
    { .name = "Unigine Sanctuary",
      .executable = "Sanctuary",
      .num_options = 3,
      .options = application_4_options,
    },
    { .name = "Unigine Tropics",
      .executable = "Tropics",
      .num_options = 3,
      .options = application_8_options,
    },
    { .name = "Unigine Heaven (32-bit)",
      .executable = "heaven_x86",
      .num_options = 2,
      .options = application_12_options,
    },
    { .name = "Unigine Heaven (64-bit)",
      .executable = "heaven_x64",
      .num_options = 2,
      .options = application_15_options,
    },
    { .name = "Unigine Heaven (Windows)",
      .executable = "heaven.exe",
      .num_options = 2,
      .options = application_18_options,
    },
    { .name = "Unigine Valley (32-bit)",
      .executable = "valley_x86",
      .num_options = 2,
      .options = application_21_options,
    },
    { .name = "Unigine Valley (64-bit)",
      .executable = "valley_x64",
      .num_options = 2,
      .options = application_24_options,
    },
    { .name = "Unigine Valley (Windows)",
      .executable = "valley.exe",
      .num_options = 2,
      .options = application_27_options,
    },
    { .name = "Unigine OilRush (32-bit)",
      .executable = "OilRush_x86",
      .num_options = 2,
      .options = application_30_options,
    },
    { .name = "Unigine OilRush (64-bit)",
      .executable = "OilRush_x64",
      .num_options = 2,
      .options = application_33_options,
    },
    { .name = "Savage 2",
      .executable = "savage2.bin",
      .num_options = 1,
      .options = application_36_options,
    },
    { .name = "Team Fortress 2",
      .executable = "tf_linux64",
      .num_options = 1,
      .options = application_38_options,
    },
    { .name = "Topogun (32-bit)",
      .executable = "topogun32",
      .num_options = 1,
      .options = application_40_options,
    },
    { .name = "Topogun (64-bit)",
      .executable = "topogun64",
      .num_options = 1,
      .options = application_42_options,
    },
    { .name = "Dead Island (incl. Definitive Edition)",
      .executable = "DeadIslandGame",
      .num_options = 2,
      .options = application_44_options,
    },
    { .name = "Dead Island Riptide Definitive Edition",
      .executable = "DeadIslandRiptideGame",
      .num_options = 1,
      .options = application_47_options,
    },
    { .name = "Doom 3: BFG",
      .executable = "Doom3BFG.exe",
      .num_options = 2,
      .options = application_49_options,
    },
    { .name = "Dune: Spice Wars",
      .executable = "D4X.exe",
      .num_options = 1,
      .options = application_52_options,
    },
    { .name = "The Chronicles of Riddick: Assault on Dark Athena",
      .executable = "DarkAthena.exe",
      .num_options = 3,
      .options = application_54_options,
    },
    { .name = "Cursemark",
      .executable = "Cursemark.exe",
      .num_options = 1,
      .options = application_58_options,
    },
    { .name = "Dying Light",
      .executable = "DyingLightGame",
      .num_options = 2,
      .options = application_60_options,
    },
    { .name = "Exanima",
      .executable = "Exanima.exe",
      .num_options = 1,
      .options = application_63_options,
    },
    { .name = "Full Bore",
      .executable = "fullbore",
      .num_options = 1,
      .options = application_65_options,
    },
    { .name = "RAGE (64-bit)",
      .executable = "Rage64.exe",
      .num_options = 2,
      .options = application_67_options,
    },
    { .name = "RAGE (32-bit)",
      .executable = "Rage.exe",
      .num_options = 2,
      .options = application_70_options,
    },
    { .name = "Second Life",
      .executable = "do-not-directly-run-secondlife-bin",
      .num_options = 1,
      .options = application_73_options,
    },
    { .name = "TombRaider 4-5-6 Remastered",
      .executable = "tomb456.exe",
      .num_options = 1,
      .options = application_75_options,
    },
    { .name = "Warsow (32-bit)",
      .executable = "warsow.i386",
      .num_options = 1,
      .options = application_77_options,
    },
    { .name = "Warsow (64-bit)",
      .executable = "warsow.x86_64",
      .num_options = 1,
      .options = application_79_options,
    },
    { .name = "Rust",
      .executable = "rust",
      .num_options = 1,
      .options = application_81_options,
    },
    { .name = "Divinity: Original Sin Enhanced Edition",
      .executable = "EoCApp",
      .num_options = 3,
      .options = application_83_options,
    },
    { .name = "Metro 2033 Redux / Metro Last Night Redux",
      .executable = "metro",
      .num_options = 1,
      .options = application_87_options,
    },
    { .name = "Worms W.M.D",
      .executable = "Worms W.M.Dx64",
      .num_options = 1,
      .options = application_89_options,
    },
    { .name = "Crookz - The Big Heist",
      .executable = "Crookz",
      .num_options = 1,
      .options = application_91_options,
    },
    { .name = "Tropico 5",
      .executable = "Tropico5",
      .num_options = 1,
      .options = application_93_options,
    },
    { .name = "Faster than Light (32-bit)",
      .executable = "FTL.x86",
      .num_options = 1,
      .options = application_95_options,
    },
    { .name = "Faster than Light (64-bit)",
      .executable = "FTL.amd64",
      .num_options = 1,
      .options = application_97_options,
    },
    { .name = "Final Fantasy VIII: Remastered",
      .executable = "FFVIII.exe",
      .num_options = 1,
      .options = application_99_options,
    },
    { .name = "SNK HEROINES Tag Team Frenzy",
      .executable = "SNKHEROINES.exe",
      .num_options = 1,
      .options = application_101_options,
    },
    { .name = "Metal Slug XX",
      .executable = "MSXX_main.exe",
      .num_options = 1,
      .options = application_103_options,
    },
    { .name = "The Culling",
      .executable = "Victory",
      .num_options = 1,
      .options = application_105_options,
    },
    { .name = "Spec Ops: The Line (32-bit)",
      .executable = "specops.i386",
      .num_options = 1,
      .options = application_107_options,
    },
    { .name = "Spec Ops: The Line (64-bit)",
      .executable = "specops",
      .num_options = 1,
      .options = application_109_options,
    },
    { .name = "Interstellar Rift",
      .executable = "IR.exe",
      .num_options = 2,
      .options = application_111_options,
    },
    { .name = "Jamestown+",
      .executable = "JamestownPlus.exe",
      .num_options = 1,
      .options = application_114_options,
    },
    { .name = "Kerbal Space Program (32-bit)",
      .executable = "KSP.x86",
      .num_options = 1,
      .options = application_116_options,
    },
    { .name = "Kerbal Space Program (64-bit)",
      .executable = "KSP.x86_64",
      .num_options = 1,
      .options = application_118_options,
    },
    { .name = "Luna Sky",
      .executable = "lunasky",
      .num_options = 2,
      .options = application_120_options,
    },
    { .name = "MDK2 HD",
      .executable = "mdk2hd.exe",
      .num_options = 1,
      .options = application_123_options,
    },
    { .name = "Rocket League",
      .executable = "RocketLeague",
      .num_options = 1,
      .options = application_125_options,
    },
    { .name = "The Witcher 2",
      .executable = "witcher2",
      .num_options = 1,
      .options = application_127_options,
    },
    { .name = "Unreal 4 Editor",
      .executable = "UE4Editor",
      .num_options = 1,
      .options = application_129_options,
    },
    { .name = "Observer",
      .executable = "TheObserver-Linux-Shipping",
      .num_options = 1,
      .options = application_131_options,
    },
    { .name = "Pixel Game Maker MV",
      .executable = "player.exe",
      .num_options = 1,
      .options = application_133_options,
    },
    { .name = "Eden Gamma",
      .executable = "EdenGammaGame-0.3.0.2.exe",
      .num_options = 1,
      .options = application_135_options,
    },
    { .name = "Steamroll",
      .executable = "Steamroll-Linux-Shipping",
      .num_options = 1,
      .options = application_137_options,
    },
    { .name = "Refunct",
      .executable = "Refunct-Linux-Shipping",
      .num_options = 1,
      .options = application_139_options,
    },
    { .name = "We Happy Few",
      .executable = "GlimpseGame",
      .num_options = 1,
      .options = application_141_options,
    },
    { .name = "Google Earth VR",
      .executable = "Earth.exe",
      .num_options = 2,
      .options = application_143_options,
    },
    { .name = "Champions of Regnum",
      .executable = "game",
      .num_options = 1,
      .options = application_146_options,
    },
    { .name = "Wolfenstein The Old Blood",
      .executable = "WolfOldBlood_x64.exe",
      .num_options = 1,
      .options = application_148_options,
    },
    { .name = "ARMA 3",
      .executable = "arma3.x86_64",
      .num_options = 1,
      .options = application_150_options,
    },
    { .name = "Epic Games Launcher",
      .executable = "EpicGamesLauncher.exe",
      .num_options = 1,
      .options = application_152_options,
    },
    { .name = "GpuTest",
      .executable = "GpuTest",
      .num_options = 1,
      .options = application_154_options,
    },
    { .name = "Curse of the Dead Gods",
      .executable = "Curse of the Dead Gods.exe",
      .num_options = 1,
      .options = application_156_options,
    },
    { .name = "GRID Autosport",
      .executable = "GridAutosport",
      .num_options = 1,
      .options = application_158_options,
    },
    { .name = "DIRT: Showdown",
      .executable = "dirt.i386",
      .num_options = 1,
      .options = application_160_options,
    },
    { .name = "DiRT Rally",
      .executable = "DirtRally",
      .num_options = 1,
      .options = application_162_options,
    },
    { .name = "Foundation",
      .executable = "foundation.exe",
      .num_options = 1,
      .options = application_164_options,
    },
    { .name = "Homerun Clash",
      .executable = "com.haegin.homerunclash",
      .num_options = 1,
      .options = application_166_options,
    },
    { .name = "The Spirit and The Mouse",
      .executable = "TheSpiritAndTheMouse.exe",
      .num_options = 1,
      .options = application_168_options,
    },
    { .name = "Penumbra: Overture (Windows)",
      .executable = "Penumbra.exe",
      .num_options = 2,
      .options = application_170_options,
    },
    { .name = "Penumbra: Overture",
      .executable = "penumbra.bin",
      .num_options = 2,
      .options = application_173_options,
    },
    { .name = "SPECviewperf13",
      .executable = "viewperf",
      .num_options = 9,
      .options = application_176_options,
    },
    { .name = "Dead-Cells",
      .executable = "com.playdigious.deadcells.mobile",
      .num_options = 1,
      .options = application_186_options,
    },
    { .name = "Teardown",
      .executable = "teardown.exe",
      .num_options = 2,
      .options = application_188_options,
    },
    { .name = "Golf With Your Friends",
      .executable = "Golf With Your Friends.x86_64",
      .num_options = 1,
      .options = application_191_options,
    },
    { .name = "Cossacks 3",
      .executable = "cossacks.exe",
      .num_options = 1,
      .options = application_193_options,
    },
    { .name = "Kaiju-A-Gogo",
      .executable = "kaiju.exe",
      .num_options = 1,
      .options = application_195_options,
    },
    { .name = "Captain Lycop: Invasion of the Heters (Wine)",
      .executable = "lycop.exe",
      .num_options = 1,
      .options = application_197_options,
    },
    { .name = "Captain Lycop: Invasion of the Heters",
      .executable = "lycop",
      .num_options = 1,
      .options = application_199_options,
    },
    { .name = "Joe Danger (Wine)",
      .executable = "JoeDanger.exe",
      .num_options = 1,
      .options = application_201_options,
    },
    { .name = "Joe Danger 2 (Wine)",
      .executable = "JoeDanger2.exe",
      .num_options = 1,
      .options = application_203_options,
    },
    { .name = "Investigation Stories : gunsound (Wine)",
      .executable = "gunsound.exe",
      .num_options = 1,
      .options = application_205_options,
    },
    { .name = "BETA CAE Systems - GL detect tool",
      .executable = "detect_opengl_tool",
      .num_options = 1,
      .options = application_207_options,
    },
    { .name = "BETA CAE Systems - ANSA",
      .executable = "ansa_linux_x86_64",
      .num_options = 2,
      .options = application_209_options,
    },
    { .name = "BETA CAE Systems - META",
      .executable = "meta_post_x86_64",
      .num_options = 1,
      .options = application_212_options,
    },
    { .name = "Mari",
      .executable_regexp = "Mari[0-9]+[.][0-9]+v[0-9]+",
      .num_options = 1,
      .options = application_214_options,
    },
    { .name = "Discovery Studio 2020",
      .executable = "DiscoveryStudio2020-bin",
      .num_options = 1,
      .options = application_216_options,
    },
    { .name = "Abaqus",
      .executable = "ABQcaeK",
      .num_options = 2,
      .options = application_218_options,
    },
    { .name = "Maya",
      .executable = "maya.bin",
      .num_options = 1,
      .options = application_221_options,
    },
    { .name = "SD Gundam G Generation Cross Rays",
      .executable = "togg.exe",
      .num_options = 1,
      .options = application_223_options,
    },
    { .name = "FINAL FANTASY XI",
      .executable = "pol.exe",
      .num_options = 1,
      .options = application_225_options,
    },
    { .name = "Talos Principle",
      .executable = "Talos",
      .num_options = 2,
      .options = application_227_options,
    },
    { .name = "Talos Principle (Unrestricted)",
      .executable = "Talos_Unrestricted",
      .num_options = 2,
      .options = application_230_options,
    },
    { .name = "Talos Principle VR",
      .executable = "Talos_VR",
      .num_options = 2,
      .options = application_233_options,
    },
    { .name = "Talos Principle VR (Unrestricted)",
      .executable = "Talos_Unrestricted_VR",
      .num_options = 2,
      .options = application_236_options,
    },
    { .name = "Serious Sam Fusion",
      .executable = "Sam2017",
      .num_options = 2,
      .options = application_239_options,
    },
    { .name = "Serious Sam Fusion (Unrestricted)",
      .executable = "Sam2017_Unrestricted",
      .num_options = 2,
      .options = application_242_options,
    },
    { .name = "DeusExMD",
      .executable = "DeusExMD",
      .num_options = 1,
      .options = application_245_options,
    },
    { .name = "F1 2015",
      .executable = "F12015",
      .num_options = 1,
      .options = application_247_options,
    },
    { .name = "KWin Wayland",
      .executable = "kwin_wayland",
      .num_options = 1,
      .options = application_249_options,
    },
    { .name = "gnome-shell",
      .executable = "gnome-shell",
      .num_options = 2,
      .options = application_251_options,
    },
    { .name = "Desktop — Plasma",
      .executable = "plasmashell",
      .num_options = 1,
      .options = application_254_options,
    },
    { .name = "budgie-wm",
      .executable = "budgie-wm",
      .num_options = 1,
      .options = application_256_options,
    },
    { .name = "kwin_x11",
      .executable = "kwin_x11",
      .num_options = 1,
      .options = application_258_options,
    },
    { .name = "ksmserver-logout-greeter",
      .executable = "ksmserver-logout-greeter",
      .num_options = 1,
      .options = application_260_options,
    },
    { .name = "ksmserver-switchuser-greeter",
      .executable = "ksmserver-switchuser-greeter",
      .num_options = 1,
      .options = application_262_options,
    },
    { .name = "kscreenlocker_greet",
      .executable = "kscreenlocker_greet",
      .num_options = 1,
      .options = application_264_options,
    },
    { .name = "startplasma",
      .executable = "startplasma",
      .num_options = 1,
      .options = application_266_options,
    },
    { .name = "sddm-greeter",
      .executable = "sddm-greeter",
      .num_options = 1,
      .options = application_268_options,
    },
    { .name = "krunner",
      .executable = "krunner",
      .num_options = 1,
      .options = application_270_options,
    },
    { .name = "spectacle",
      .executable = "spectacle",
      .num_options = 1,
      .options = application_272_options,
    },
    { .name = "marco",
      .executable = "marco",
      .num_options = 1,
      .options = application_274_options,
    },
    { .name = "compton",
      .executable = "compton",
      .num_options = 1,
      .options = application_276_options,
    },
    { .name = "picom",
      .executable = "picom",
      .num_options = 1,
      .options = application_278_options,
    },
    { .name = "xfwm4",
      .executable = "xfwm4",
      .num_options = 1,
      .options = application_280_options,
    },
    { .name = "Enlightenment",
      .executable = "enlightenment",
      .num_options = 1,
      .options = application_282_options,
    },
    { .name = "mutter",
      .executable = "mutter",
      .num_options = 2,
      .options = application_284_options,
    },
    { .name = "muffin",
      .executable = "muffin",
      .num_options = 1,
      .options = application_287_options,
    },
    { .name = "cinnamon",
      .executable = "cinnamon",
      .num_options = 1,
      .options = application_289_options,
    },
    { .name = "compiz",
      .executable = "compiz",
      .num_options = 1,
      .options = application_291_options,
    },
    { .name = "Firefox",
      .executable = "firefox",
      .num_options = 1,
      .options = application_293_options,
    },
    { .name = "Firefox ESR",
      .executable = "firefox-esr",
      .num_options = 1,
      .options = application_295_options,
    },
    { .name = "Chromium",
      .executable = "chromium",
      .num_options = 1,
      .options = application_297_options,
    },
    { .name = "Google Chrome",
      .executable = "chrome",
      .num_options = 1,
      .options = application_299_options,
    },
    { .name = "Iceweasel",
      .executable = "iceweasel",
      .num_options = 1,
      .options = application_301_options,
    },
    { .name = "Epiphany",
      .executable = "epiphany",
      .num_options = 1,
      .options = application_303_options,
    },
    { .name = "Konqueror",
      .executable = "konqueror",
      .num_options = 1,
      .options = application_305_options,
    },
    { .name = "Falkon",
      .executable = "falkon",
      .num_options = 1,
      .options = application_307_options,
    },
    { .name = "Seamonkey",
      .executable = "seamonkey",
      .num_options = 1,
      .options = application_309_options,
    },
    { .name = "Waterfox",
      .executable = "waterfox",
      .num_options = 1,
      .options = application_311_options,
    },
    { .name = "VLC Media Player",
      .executable = "vlc",
      .num_options = 1,
      .options = application_313_options,
    },
    { .name = "Totem",
      .executable = "totem",
      .num_options = 1,
      .options = application_315_options,
    },
    { .name = "Dragon Player",
      .executable = "dragon",
      .num_options = 1,
      .options = application_317_options,
    },
    { .name = "Xorg",
      .executable = "Xorg",
      .num_options = 1,
      .options = application_319_options,
    },
    { .name = "gfxbench",
      .executable = "testfw_app",
      .num_options = 3,
      .options = application_321_options,
    },
    { .name = "Rainbow Six Siege (Vulkan)",
      .executable = "RainbowSix_Vulkan.exe",
      .num_options = 2,
      .options = application_325_options,
    },
    { .name = "Rainbow Six Extraction (Wine)",
      .executable = "R6-Extraction.exe",
      .num_options = 2,
      .options = application_328_options,
    },
    { .name = "Hades",
      .executable = "Hades.exe",
      .num_options = 2,
      .options = application_331_options,
    },
    { .name = "Brink",
      .executable = "brink.exe",
      .num_options = 2,
      .options = application_334_options,
    },
    { .name = "Enter The Gungeon (32 bits)",
      .executable = "EtG.x86",
      .num_options = 1,
      .options = application_337_options,
    },
    { .name = "Enter The Gungeon (64 bits)",
      .executable = "EtG.x86_64",
      .num_options = 1,
      .options = application_339_options,
    },
    { .name = "Assault Android Cactus (32-bit)",
      .executable = "cactus_demo.x86",
      .num_options = 1,
      .options = application_341_options,
    },
    { .name = "Assault Android Cactus (64-bit)",
      .executable = "cactus_demo.x86_64",
      .num_options = 1,
      .options = application_343_options,
    },
    { .name = "Assault Android Cactus (32-bit)",
      .executable = "cactus.x86",
      .num_options = 1,
      .options = application_345_options,
    },
    { .name = "Assault Android Cactus (64-bit)",
      .executable = "cactus.x86_64",
      .num_options = 1,
      .options = application_347_options,
    },
    { .name = "Limbo",
      .executable = "limbo",
      .num_options = 1,
      .options = application_349_options,
    },
    { .name = "Genshin Impact",
      .executable = "com.miHoYo.GenshinImpact",
      .num_options = 1,
      .options = application_351_options,
    },
    { .name = "DOOM",
      .executable = "DOOMx64vk.exe",
      .num_options = 1,
      .options = application_353_options,
    },
    { .name = "DOOMEternal",
      .executable = "DOOMEternalx64vk.exe",
      .num_options = 1,
      .options = application_355_options,
    },
    { .name = "Path of Exile",
      .executable = "PathOfExile_x64Steam.exe",
      .num_options = 1,
      .options = application_357_options,
    },
    { .name = "Path of Exile",
      .executable = "PathOfExileSteam.exe",
      .num_options = 1,
      .options = application_359_options,
    },
    { .name = "X4 Foundations",
      .executable = "X4",
      .num_options = 1,
      .options = application_361_options,
    },
    { .name = "Wolfenstein: Youngblood(x64vk)",
      .executable = "Youngblood_x64vk.exe",
      .num_options = 1,
      .options = application_363_options,
    },
    { .name = "Wolfenstein II: The New Colossus",
      .executable = "NewColossus_x64vk.exe",
      .num_options = 1,
      .options = application_365_options,
    },
    { .name = "Metro: Exodus",
      .application_name_match = "metroexodus",
      .num_options = 1,
      .options = application_367_options,
    },
    { .name = "Forsaken Remastered",
      .executable = "ForsakenEx",
      .num_options = 1,
      .options = application_369_options,
    },
    { .name = "Spilled!",
      .executable = "Spilled!.exe",
      .num_options = 1,
      .options = application_371_options,
    },
    { .name = "Atlas Fallen",
      .executable = "AtlasFallen (VK).exe",
      .num_options = 1,
      .options = application_373_options,
    },
    { .name = "Firefox",
      .executable = "firefox",
      .num_options = 1,
      .options = application_375_options,
    },
    { .name = "Firefox ESR",
      .executable = "firefox-esr",
      .num_options = 1,
      .options = application_377_options,
    },
    { .name = "Chromium",
      .executable = "chromium",
      .num_options = 1,
      .options = application_379_options,
    },
    { .name = "Google Chrome",
      .executable = "chrome",
      .num_options = 1,
      .options = application_381_options,
    },
    { .name = "Iceweasel",
      .executable = "iceweasel",
      .num_options = 1,
      .options = application_383_options,
    },
    { .name = "Epiphany",
      .executable = "epiphany",
      .num_options = 1,
      .options = application_385_options,
    },
    { .name = "Konqueror",
      .executable = "konqueror",
      .num_options = 1,
      .options = application_387_options,
    },
    { .name = "Falkon",
      .executable = "falkon",
      .num_options = 1,
      .options = application_389_options,
    },
    { .name = "Seamonkey",
      .executable = "seamonkey",
      .num_options = 1,
      .options = application_391_options,
    },
    { .name = "Waterfox",
      .executable = "waterfox",
      .num_options = 1,
      .options = application_393_options,
    },
    { .name = "Detroit Become Human",
      .application_name_match = "DetroitBecomeHuman",
      .num_options = 1,
      .options = application_395_options,
    },
};

static const struct driconf_device device_1 = {
    .num_engines = 1,
    .engines = device_1_engines,
    .num_applications = 172,
    .applications = device_1_applications,
};


    
static const struct driconf_option application_400_options[] = {
    { .name = "glx_extension_override", .value = "-GLX_OML_sync_control -GLX_SGI_video_sync" },
};

    
static const struct driconf_option application_402_options[] = {
    { .name = "glx_extension_override", .value = "-GLX_OML_sync_control -GLX_SGI_video_sync" },
};

    
static const struct driconf_option application_404_options[] = {
    { .name = "glx_extension_override", .value = "-GLX_OML_sync_control" },
};


static const struct driconf_application device_399_applications[] = {
    { .name = "gnome-shell",
      .executable = "gnome-shell",
      .num_options = 1,
      .options = application_400_options,
    },
    { .name = "cinnamon",
      .executable = "cinnamon",
      .num_options = 1,
      .options = application_402_options,
    },
    { .name = "Compiz",
      .executable = "Compiz",
      .num_options = 1,
      .options = application_404_options,
    },
};

static const struct driconf_device device_399 = {
    .driver = "vmwgfx",
    .num_engines = 0,
    .num_applications = 3,
    .applications = device_399_applications,
};


    
static const struct driconf_option application_407_options[] = {
    { .name = "force_gl_vendor", .value = "X.Org" },
};

    
static const struct driconf_option application_409_options[] = {
    { .name = "radeonsi_zerovram", .value = "true" },
};

    
static const struct driconf_option application_411_options[] = {
    { .name = "radeonsi_zerovram", .value = "true" },
    { .name = "radeonsi_clamp_div_by_zero", .value = "true" },
};

    
static const struct driconf_option application_414_options[] = {
    { .name = "radeonsi_zerovram", .value = "true" },
};

    
static const struct driconf_option application_416_options[] = {
    { .name = "radeonsi_zerovram", .value = "true" },
};

    
static const struct driconf_option application_418_options[] = {
    { .name = "radeonsi_zerovram", .value = "true" },
};

    
static const struct driconf_option application_420_options[] = {
    { .name = "radeonsi_sync_compile", .value = "true" },
    { .name = "radeonsi_zerovram", .value = "true" },
};

    
static const struct driconf_option application_423_options[] = {
    { .name = "radeonsi_sync_compile", .value = "true" },
};

    
static const struct driconf_option application_425_options[] = {
    { .name = "radeonsi_sync_compile", .value = "true" },
};

    
static const struct driconf_option application_427_options[] = {
    { .name = "radeonsi_sync_compile", .value = "true" },
};

    
static const struct driconf_option application_429_options[] = {
    { .name = "radeonsi_sync_compile", .value = "true" },
};

    
static const struct driconf_option application_431_options[] = {
    { .name = "radeonsi_sync_compile", .value = "true" },
};

    
static const struct driconf_option application_433_options[] = {
    { .name = "radeonsi_no_infinite_interp", .value = "true" },
};

    
static const struct driconf_option application_435_options[] = {
    { .name = "radeonsi_zerovram", .value = "true" },
};

    
static const struct driconf_option application_437_options[] = {
    { .name = "radeonsi_zerovram", .value = "true" },
};

    
static const struct driconf_option application_439_options[] = {
    { .name = "radeonsi_sync_compile", .value = "true" },
};

    
static const struct driconf_option application_441_options[] = {
    { .name = "radeonsi_clamp_div_by_zero", .value = "true" },
};

    
static const struct driconf_option application_443_options[] = {
    { .name = "radeonsi_clamp_div_by_zero", .value = "true" },
};

    
static const struct driconf_option application_445_options[] = {
    { .name = "radeonsi_clamp_div_by_zero", .value = "true" },
    { .name = "radeonsi_no_infinite_interp", .value = "true" },
};

    
static const struct driconf_option application_448_options[] = {
    { .name = "force_gl_vendor", .value = "X.Org" },
};

    
static const struct driconf_option application_450_options[] = {
    { .name = "force_gl_vendor", .value = "ATI Technologies Inc." },
};

    
static const struct driconf_option application_452_options[] = {
    { .name = "force_gl_vendor", .value = "ATI Technologies Inc." },
};

    
static const struct driconf_option application_454_options[] = {
    { .name = "force_gl_vendor", .value = "ATI Technologies Inc." },
    { .name = "radeonsi_force_use_fma32", .value = "true" },
};

    
static const struct driconf_option application_457_options[] = {
    { .name = "radeonsi_zerovram", .value = "true" },
};


static const struct driconf_application device_406_applications[] = {
    { .name = "Alien Isolation",
      .executable = "AlienIsolation",
      .num_options = 1,
      .options = application_407_options,
    },
    { .name = "American Truck Simulator",
      .executable = "amtrucks",
      .num_options = 1,
      .options = application_409_options,
    },
    { .name = "Counter-Strike Global Offensive",
      .executable = "csgo_linux64",
      .num_options = 2,
      .options = application_411_options,
    },
    { .name = "Exanima",
      .executable = "Exanima.exe",
      .num_options = 1,
      .options = application_414_options,
    },
    { .name = "Nowhere Patrol",
      .executable = "NowherePatrol.exe",
      .num_options = 1,
      .options = application_416_options,
    },
    { .name = "Rocket League",
      .executable = "RocketLeague",
      .num_options = 1,
      .options = application_418_options,
    },
    { .name = "Monolith demo5",
      .executable = "runner",
      .sha1 = "0c40d509a74e357f0280cb1bd882e9cd94b91bdf",
      .num_options = 2,
      .options = application_420_options,
    },
    { .name = "Memoranda / Riptale",
      .executable = "runner",
      .sha1 = "aa13dec6af63c88f308ebb487693896434a4db56",
      .num_options = 1,
      .options = application_423_options,
    },
    { .name = "Nuclear Throne",
      .executable = "runner",
      .sha1 = "84814e8db125e889f5d9d4195a0ca72a871ea1fd",
      .num_options = 1,
      .options = application_425_options,
    },
    { .name = "Undertale",
      .executable = "runner",
      .sha1 = "dfa302e7ec78641d0696dbbc1a06fc29f34ff1ff",
      .num_options = 1,
      .options = application_427_options,
    },
    { .name = "Turmoil",
      .executable = "runner",
      .sha1 = "cbbf757aaab289859f8dae191a7d63afc30643d9",
      .num_options = 1,
      .options = application_429_options,
    },
    { .name = "Peace, Death!",
      .executable = "runner",
      .sha1 = "5b909f3d21799773370adf084f649848f098234e",
      .num_options = 1,
      .options = application_431_options,
    },
    { .name = "Kerbal Space Program",
      .executable = "KSP.x86_64",
      .num_options = 1,
      .options = application_433_options,
    },
    { .name = "7 Days to Die",
      .executable = "7DaysToDie.x86_64",
      .num_options = 1,
      .options = application_435_options,
    },
    { .name = "7 Days to Die",
      .executable = "7DaysToDie.x86",
      .num_options = 1,
      .options = application_437_options,
    },
    { .name = "SPECviewperf13",
      .executable = "viewperf",
      .num_options = 1,
      .options = application_439_options,
    },
    { .name = "Road Redemption",
      .executable = "RoadRedemption.x86_64",
      .num_options = 1,
      .options = application_441_options,
    },
    { .name = "Wasteland 2",
      .executable = "WL2",
      .num_options = 1,
      .options = application_443_options,
    },
    { .name = "Teardown",
      .executable = "teardown.exe",
      .num_options = 2,
      .options = application_445_options,
    },
    { .name = "SpaceEngine",
      .executable = "SpaceEngine.exe",
      .num_options = 1,
      .options = application_448_options,
    },
    { .name = "BETA CAE Systems - GL detect tool",
      .executable = "detect_opengl_tool",
      .num_options = 1,
      .options = application_450_options,
    },
    { .name = "BETA CAE Systems - ANSA",
      .executable = "ansa_linux_x86_64",
      .num_options = 1,
      .options = application_452_options,
    },
    { .name = "BETA CAE Systems - META",
      .executable = "meta_post_x86_64",
      .num_options = 2,
      .options = application_454_options,
    },
    { .name = "Black Geyser: Couriers of Darkness",
      .executable = "BlackGeyser.x86_64",
      .num_options = 1,
      .options = application_457_options,
    },
};

static const struct driconf_device device_406 = {
    .driver = "radeonsi",
    .num_engines = 0,
    .num_applications = 24,
    .applications = device_406_applications,
};


    
static const struct driconf_option application_460_options[] = {
    { .name = "mesa_glthread_app_profile", .value = "0" },
};

    
static const struct driconf_option application_462_options[] = {
    { .name = "glsl_correct_derivatives_after_discard", .value = "true" },
};

    
static const struct driconf_option application_464_options[] = {
    { .name = "mesa_extension_override", .value = "+GL_EXT_shader_image_load_store" },
};

    
static const struct driconf_option application_466_options[] = {
    { .name = "zink_emulate_point_smooth", .value = "true" },
};

    
static const struct driconf_option application_468_options[] = {
    { .name = "zink_emulate_point_smooth", .value = "true" },
};

    
static const struct driconf_option application_470_options[] = {
    { .name = "zink_emulate_point_smooth", .value = "true" },
};

    
static const struct driconf_option application_472_options[] = {
    { .name = "zink_shader_object_enable", .value = "true" },
};


static const struct driconf_application device_459_applications[] = {
    { .name = "Hyperdimension Neptunia Re;Birth1",
      .executable = "NeptuniaReBirth1.exe",
      .num_options = 1,
      .options = application_460_options,
    },
    { .name = "Borderlands 2 (Native, OpenGL, 32bit)",
      .executable = "Borderlands2",
      .num_options = 1,
      .options = application_462_options,
    },
    { .name = "SPECviewperf13",
      .executable = "viewperf",
      .num_options = 1,
      .options = application_464_options,
    },
    { .name = "Quake II",
      .executable = "quake2-engine",
      .num_options = 1,
      .options = application_466_options,
    },
    { .name = "Quake II (yamagi)",
      .executable = "yamagi-quake2",
      .num_options = 1,
      .options = application_468_options,
    },
    { .name = "Quake II (wine)",
      .executable = "quake2.exe",
      .num_options = 1,
      .options = application_470_options,
    },
    { .name = "Tomb Raider 2013",
      .executable = "TombRaider",
      .num_options = 1,
      .options = application_472_options,
    },
};

static const struct driconf_device device_459 = {
    .driver = "zink",
    .num_engines = 0,
    .num_applications = 7,
    .applications = device_459_applications,
};


    
static const struct driconf_option application_475_options[] = {
    { .name = "vs_position_always_invariant", .value = "true" },
};

    
static const struct driconf_option application_477_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_479_options[] = {
    { .name = "force_gl_vendor", .value = "X.Org" },
};

    
static const struct driconf_option application_481_options[] = {
    { .name = "force_gl_vendor", .value = "X.Org" },
};

    
static const struct driconf_option application_483_options[] = {
    { .name = "intel_disable_threaded_context", .value = "true" },
};

    
static const struct driconf_option application_485_options[] = {
    { .name = "intel_disable_threaded_context", .value = "true" },
};

    
static const struct driconf_option application_487_options[] = {
    { .name = "mesa_extension_override", .value = "+GL_EXT_shader_image_load_store" },
};


static const struct driconf_application device_474_applications[] = {
    { .name = "Middle Earth: Shadow of Mordor",
      .executable = "ShadowOfMordor",
      .num_options = 1,
      .options = application_475_options,
    },
    { .name = "glmark2",
      .executable = "glmark2",
      .num_options = 1,
      .options = application_477_options,
    },
    { .name = "Counter-Strike: Global Offensive",
      .executable = "csgo_linux64",
      .num_options = 1,
      .options = application_479_options,
    },
    { .name = "Insurgency",
      .executable = "insurgency_linux",
      .num_options = 1,
      .options = application_481_options,
    },
    { .name = "Amnesia Bunker",
      .executable = "AmnesiaTheBunker.exe",
      .num_options = 1,
      .options = application_483_options,
    },
    { .name = "Amnesia Bunker",
      .executable = "AmnesiaTheBunker_NoSteam.exe",
      .num_options = 1,
      .options = application_485_options,
    },
    { .name = "SPECviewperf13",
      .executable = "viewperf",
      .num_options = 1,
      .options = application_487_options,
    },
};

static const struct driconf_device device_474 = {
    .driver = "iris",
    .num_engines = 0,
    .num_applications = 7,
    .applications = device_474_applications,
};


    
static const struct driconf_option application_490_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_492_options[] = {
    { .name = "force_gl_vendor", .value = "X.Org" },
};

    
static const struct driconf_option application_494_options[] = {
    { .name = "force_gl_vendor", .value = "X.Org" },
};


static const struct driconf_application device_489_applications[] = {
    { .name = "glmark2",
      .executable = "glmark2",
      .num_options = 1,
      .options = application_490_options,
    },
    { .name = "Counter-Strike: Global Offensive",
      .executable = "csgo_linux64",
      .num_options = 1,
      .options = application_492_options,
    },
    { .name = "Insurgency",
      .executable = "insurgency_linux",
      .num_options = 1,
      .options = application_494_options,
    },
};

static const struct driconf_device device_489 = {
    .driver = "crocus",
    .num_engines = 0,
    .num_applications = 3,
    .applications = device_489_applications,
};
    
static const struct driconf_option engine_592_options[] = {
    { .name = "anv_force_filter_addr_rounding", .value = "true" },
};

    
static const struct driconf_option engine_594_options[] = {
    { .name = "anv_enable_buffer_comp", .value = "true" },
};

    
static const struct driconf_option engine_596_options[] = {
    { .name = "anv_enable_buffer_comp", .value = "true" },
};

    
static const struct driconf_option engine_598_options[] = {
    { .name = "vk_wsi_disable_unordered_submits", .value = "true" },
};

    
static const struct driconf_option engine_600_options[] = {
    { .name = "anv_disable_drm_ccs_modifiers", .value = "true" },
};

    
static const struct driconf_option engine_602_options[] = {
    { .name = "no_16bit", .value = "true" },
};

    
static const struct driconf_option engine_604_options[] = {
    { .name = "anv_disable_fcv", .value = "true" },
    { .name = "anv_assume_full_subgroups", .value = "16" },
};

    
static const struct driconf_option engine_607_options[] = {
    { .name = "compression_control_enabled", .value = "true" },
};

    
static const struct driconf_option engine_609_options[] = {
    { .name = "custom_border_colors_without_format", .value = "true" },
};


static const struct driconf_engine device_496_engines[] = {
    { .engine_name_match = "vkd3d|DXVK",
      .num_options = 1,
      .options = engine_592_options,
    },
    { .engine_name_match = "Source2",
      .num_options = 1,
      .options = engine_594_options,
    },
    { .engine_name_match = "vkd3d",
      .num_options = 1,
      .options = engine_596_options,
    },
    { .engine_name_match = "GTK",
      .engine_versions = "16777216:16859138",
      .num_options = 1,
      .options = engine_598_options,
    },
    { .engine_name_match = "GTK",
      .engine_versions = "16777216:16859138",
      .num_options = 1,
      .options = engine_600_options,
    },
    { .engine_name_match = "mesa zink",
      .num_options = 1,
      .options = engine_602_options,
    },
    { .engine_name_match = "UnrealEngine5.1",
      .num_options = 2,
      .options = engine_604_options,
    },
    { .engine_name_match = "vkd3d",
      .num_options = 1,
      .options = engine_607_options,
    },
    { .engine_name_match = "ANGLE",
      .num_options = 1,
      .options = engine_609_options,
    },
};

    
static const struct driconf_option application_497_options[] = {
    { .name = "anv_assume_full_subgroups", .value = "32" },
};

    
static const struct driconf_option application_499_options[] = {
    { .name = "intel_storage_cache_policy_wt", .value = "true" },
};

    
static const struct driconf_option application_501_options[] = {
    { .name = "anv_assume_full_subgroups_with_barrier", .value = "true" },
};

    
static const struct driconf_option application_503_options[] = {
    { .name = "hasvk_report_vk_1_3_version", .value = "true" },
};

    
static const struct driconf_option application_505_options[] = {
    { .name = "anv_assume_full_subgroups", .value = "32" },
};

    
static const struct driconf_option application_507_options[] = {
    { .name = "anv_assume_full_subgroups", .value = "32" },
    { .name = "fp64_workaround_enabled", .value = "true" },
};

    
static const struct driconf_option application_510_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_512_options[] = {
    { .name = "anv_large_workgroup_non_coherent_image_workaround", .value = "true" },
};

    
static const struct driconf_option application_514_options[] = {
    { .name = "anv_large_workgroup_non_coherent_image_workaround", .value = "true" },
};

    
static const struct driconf_option application_516_options[] = {
    { .name = "anv_assume_full_subgroups_with_shared_memory", .value = "true" },
};

    
static const struct driconf_option application_518_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_520_options[] = {
    { .name = "anv_sample_mask_out_opengl_behaviour", .value = "true" },
};

    
static const struct driconf_option application_522_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_524_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_526_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_528_options[] = {
    { .name = "vk_lower_terminate_to_discard", .value = "true" },
};

    
static const struct driconf_option application_530_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_532_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_534_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_536_options[] = {
    { .name = "shader_spilling_rate", .value = "15" },
};

    
static const struct driconf_option application_538_options[] = {
    { .name = "fake_sparse", .value = "true" },
};

    
static const struct driconf_option application_540_options[] = {
    { .name = "fake_sparse", .value = "true" },
};

    
static const struct driconf_option application_542_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
    { .name = "shader_spilling_rate", .value = "0" },
};

    
static const struct driconf_option application_545_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_547_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
    { .name = "intel_storage_cache_policy_wt", .value = "true" },
};

    
static const struct driconf_option application_550_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_552_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_554_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_556_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_558_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_560_options[] = {
    { .name = "intel_storage_cache_policy_wt", .value = "true" },
};

    
static const struct driconf_option application_562_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_564_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_566_options[] = {
    { .name = "anv_disable_fcv", .value = "true" },
};

    
static const struct driconf_option application_568_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_570_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_572_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_574_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_576_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_578_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_580_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_582_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_584_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_586_options[] = {
    { .name = "fp64_workaround_enabled", .value = "true" },
};

    
static const struct driconf_option application_588_options[] = {
    { .name = "anv_upper_bound_descriptor_pool_sampler", .value = "true" },
};

    
static const struct driconf_option application_590_options[] = {
    { .name = "anv_fake_nonlocal_memory", .value = "true" },
};


static const struct driconf_application device_496_applications[] = {
    { .name = "Aperture Desk Job",
      .executable = "deskjob",
      .num_options = 1,
      .options = application_497_options,
    },
    { .name = "A Plague Tale : Requiem",
      .executable = "APlagueTaleRequiem_x64.exe",
      .num_options = 1,
      .options = application_499_options,
    },
    { .name = "Breaking Limit",
      .executable = "GPUScoreVulkan",
      .num_options = 1,
      .options = application_501_options,
    },
    { .name = "Brawlhalla",
      .executable = "BrawlhallaGame.exe",
      .num_options = 1,
      .options = application_503_options,
    },
    { .name = "Detroit: Become Human",
      .executable = "DetroitBecomeHuman.exe",
      .num_options = 1,
      .options = application_505_options,
    },
    { .name = "DOOMEternal",
      .executable = "DOOMEternalx64vk.exe",
      .num_options = 2,
      .options = application_507_options,
    },
    { .name = "Drive Beyond Horizons",
      .executable = "DriveBeyondHorizons.exe",
      .num_options = 1,
      .options = application_510_options,
    },
    { .name = "The Last Of Us Part I",
      .executable = "tlou-i.exe",
      .num_options = 1,
      .options = application_512_options,
    },
    { .name = "The Last Of Us Part II Remastered",
      .executable = "tlou-ii.exe",
      .num_options = 1,
      .options = application_514_options,
    },
    { .name = "RESIDENT EVIL 2",
      .executable = "re2.exe",
      .num_options = 1,
      .options = application_516_options,
    },
    { .name = "Wolfenstein: Youngblood(x64vk)",
      .executable = "Youngblood_x64vk.exe",
      .num_options = 1,
      .options = application_518_options,
    },
    { .name = "Batman™: Arkham Knight",
      .executable = "BatmanAK.exe",
      .num_options = 1,
      .options = application_520_options,
    },
    { .name = "Company of Heroes 3",
      .executable = "RelicCoH3.exe",
      .num_options = 1,
      .options = application_522_options,
    },
    { .name = "Rise of the Tomb Raider",
      .executable = "RiseOfTheTombRaider",
      .num_options = 1,
      .options = application_524_options,
    },
    { .name = "Rise of the Tomb Raider",
      .executable = "ROTTR.exe",
      .num_options = 1,
      .options = application_526_options,
    },
    { .name = "Sky: Children of the Light",
      .executable = "Sky.exe",
      .num_options = 1,
      .options = application_528_options,
    },
    { .name = "NieR Replicant ver.1.22474487139",
      .executable = "NieR Replicant ver.1.22474487139.exe",
      .num_options = 1,
      .options = application_530_options,
    },
    { .name = "NieR:Automata",
      .executable = "NieRAutomata.exe",
      .num_options = 1,
      .options = application_532_options,
    },
    { .name = "Valheim",
      .executable = "valheim.x86_64",
      .num_options = 1,
      .options = application_534_options,
    },
    { .name = "Cyberpunk 2077",
      .executable = "Cyberpunk2077.exe",
      .num_options = 1,
      .options = application_536_options,
    },
    { .name = "Elden Ring",
      .executable = "eldenring.exe",
      .num_options = 1,
      .options = application_538_options,
    },
    { .name = "Armored Core 6",
      .executable = "armoredcore6.exe",
      .num_options = 1,
      .options = application_540_options,
    },
    { .name = "Marvel's Spider-Man Remastered",
      .executable = "Spider-Man.exe",
      .num_options = 2,
      .options = application_542_options,
    },
    { .name = "Hitman 3",
      .executable = "hitman3.exe",
      .num_options = 1,
      .options = application_545_options,
    },
    { .name = "Hogwarts Legacy",
      .executable = "HogwartsLegacy.exe",
      .num_options = 2,
      .options = application_547_options,
    },
    { .name = "DEATH STRANDING",
      .executable = "ds.exe",
      .num_options = 1,
      .options = application_550_options,
    },
    { .name = "Diablo IV",
      .executable = "Diablo IV.exe",
      .num_options = 1,
      .options = application_552_options,
    },
    { .name = "Faaast Penguin",
      .executable = "FaaastPenguinClient.exe",
      .num_options = 1,
      .options = application_554_options,
    },
    { .name = "Satisfactory Steam",
      .executable = "FactoryGameSteam-Win64-Shipping.exe",
      .num_options = 1,
      .options = application_556_options,
    },
    { .name = "Satisfactory EGS",
      .executable = "FactoryGameEGS-Win64-Shipping.exe",
      .num_options = 1,
      .options = application_558_options,
    },
    { .name = "Space Engineers 2",
      .executable = "SpaceEngineers2.exe",
      .num_options = 1,
      .options = application_560_options,
    },
    { .name = "Dying Light 2",
      .executable = "DyingLightGame_x64_rwdi.exe",
      .num_options = 1,
      .options = application_562_options,
    },
    { .name = "Witcher3",
      .executable = "witcher3.exe",
      .num_options = 1,
      .options = application_564_options,
    },
    { .name = "Baldur's Gate 3",
      .executable = "bg3.exe",
      .num_options = 1,
      .options = application_566_options,
    },
    { .name = "The Finals",
      .executable = "Discovery.exe",
      .num_options = 1,
      .options = application_568_options,
    },
    { .name = "Palworld2",
      .executable = "Palworld-Win64-Shipping.exe",
      .num_options = 1,
      .options = application_570_options,
    },
    { .name = "Red Dead Redemption 2",
      .executable = "RDR2.exe",
      .num_options = 1,
      .options = application_572_options,
    },
    { .name = "Shadow of the Tomb Raider",
      .executable = "SOTTR.exe",
      .num_options = 1,
      .options = application_574_options,
    },
    { .name = "Silent Hill 2",
      .executable = "SHProto-Win64-Shipping.exe",
      .num_options = 1,
      .options = application_576_options,
    },
    { .name = "Marvel Rivals",
      .executable = "Marvel-Win64-Shipping.exe",
      .num_options = 1,
      .options = application_578_options,
    },
    { .name = "Bellwright",
      .executable = "BellwrightGame-Win64-Shipping.exe",
      .num_options = 1,
      .options = application_580_options,
    },
    { .name = "A Game About Digging A Hole",
      .executable = "DiggingGame.exe",
      .num_options = 1,
      .options = application_582_options,
    },
    { .name = "Jusant",
      .executable = "ASC-Win64-Shipping.exe",
      .num_options = 1,
      .options = application_584_options,
    },
    { .name = "DIRT 5",
      .executable = "DIRT5.exe",
      .num_options = 1,
      .options = application_586_options,
    },
    { .name = "X4 Foundations",
      .executable = "X4",
      .num_options = 1,
      .options = application_588_options,
    },
    { .name = "Total War: WARHAMMER III",
      .executable = "TotalWarhammer3",
      .num_options = 1,
      .options = application_590_options,
    },
};

static const struct driconf_device device_496 = {
    .driver = "anv",
    .num_engines = 9,
    .engines = device_496_engines,
    .num_applications = 46,
    .applications = device_496_applications,
};


    
static const struct driconf_option application_612_options[] = {
    { .name = "dzn_enable_8bit_loads_stores", .value = "true" },
    { .name = "dzn_claim_wide_lines", .value = "true" },
};

    
static const struct driconf_option application_615_options[] = {
    { .name = "dzn_claim_wide_lines", .value = "true" },
};

    
static const struct driconf_option application_617_options[] = {
    { .name = "dzn_disable", .value = "true" },
};

    
static const struct driconf_option application_619_options[] = {
    { .name = "dzn_disable", .value = "true" },
};


static const struct driconf_application device_611_applications[] = {
    { .name = "DOOMEternal",
      .executable = "DOOMEternalx64vk.exe",
      .num_options = 2,
      .options = application_612_options,
    },
    { .name = "No Man's Sky",
      .executable = "NMS.exe",
      .num_options = 1,
      .options = application_615_options,
    },
    { .name = "Red Dead Redemption 2",
      .executable = "RDR2.exe",
      .num_options = 1,
      .options = application_617_options,
    },
    { .name = "Baldur's Gate 3",
      .executable = "bg3.exe",
      .num_options = 1,
      .options = application_619_options,
    },
};

static const struct driconf_device device_611 = {
    .driver = "dzn",
    .num_engines = 0,
    .num_applications = 4,
    .applications = device_611_applications,
};


    
static const struct driconf_option application_622_options[] = {
    { .name = "mesa_extension_override", .value = "+GL_ARB_texture_view" },
};


static const struct driconf_application device_621_applications[] = {
    { .name = "Blender",
      .executable = "blender.exe",
      .num_options = 1,
      .options = application_622_options,
    },
};

static const struct driconf_device device_621 = {
    .driver = "d3d12",
    .num_engines = 0,
    .num_applications = 1,
    .applications = device_621_applications,
};


    
static const struct driconf_option application_625_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_627_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_629_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_631_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};


static const struct driconf_application device_624_applications[] = {
    { .name = "Artifact Classic",
      .executable = "dcg",
      .num_options = 1,
      .options = application_625_options,
    },
    { .name = "Deep Rock Galactic",
      .executable = "FSD.exe",
      .num_options = 1,
      .options = application_627_options,
    },
    { .name = "No Man's Sky",
      .executable = "NMS.exe",
      .num_options = 1,
      .options = application_629_options,
    },
    { .name = "X4 Foundations",
      .executable = "X4",
      .num_options = 1,
      .options = application_631_options,
    },
};

static const struct driconf_device device_624 = {
    .driver = "nvk",
    .num_engines = 0,
    .num_applications = 4,
    .applications = device_624_applications,
};


    
static const struct driconf_option application_634_options[] = {
    { .name = "r300_nohiz", .value = "true" },
    { .name = "r300_nozmask", .value = "true" },
};

    
static const struct driconf_option application_637_options[] = {
    { .name = "r300_nohiz", .value = "true" },
    { .name = "r300_nozmask", .value = "true" },
};

    
static const struct driconf_option application_640_options[] = {
    { .name = "r300_nohiz", .value = "true" },
    { .name = "r300_nozmask", .value = "true" },
};

    
static const struct driconf_option application_643_options[] = {
    { .name = "r300_nohiz", .value = "true" },
    { .name = "r300_nozmask", .value = "true" },
};

    
static const struct driconf_option application_646_options[] = {
    { .name = "r300_nohiz", .value = "true" },
    { .name = "r300_nozmask", .value = "true" },
};

    
static const struct driconf_option application_649_options[] = {
    { .name = "r300_nohiz", .value = "true" },
    { .name = "r300_nozmask", .value = "true" },
};

    
static const struct driconf_option application_652_options[] = {
    { .name = "r300_nohiz", .value = "true" },
    { .name = "r300_nozmask", .value = "true" },
};

    
static const struct driconf_option application_655_options[] = {
    { .name = "r300_nohiz", .value = "true" },
    { .name = "r300_nozmask", .value = "true" },
};

    
static const struct driconf_option application_658_options[] = {
    { .name = "r300_ffmath", .value = "true" },
};

    
static const struct driconf_option application_660_options[] = {
    { .name = "r300_ffmath", .value = "true" },
};


static const struct driconf_application device_633_applications[] = {
    { .name = "X server",
      .executable = "X",
      .num_options = 2,
      .options = application_634_options,
    },
    { .name = "X server",
      .executable = "Xorg",
      .num_options = 2,
      .options = application_637_options,
    },
    { .name = "Compiz",
      .executable = "check_gl_texture_size",
      .num_options = 2,
      .options = application_640_options,
    },
    { .name = "Compiz",
      .executable = "Compiz",
      .num_options = 2,
      .options = application_643_options,
    },
    { .name = "GNOME Shell",
      .executable = "gnome-session-check-accelerated-helper",
      .num_options = 2,
      .options = application_646_options,
    },
    { .name = "GNOME Shell",
      .executable = "gnome-shell",
      .num_options = 2,
      .options = application_649_options,
    },
    { .name = "KWin",
      .executable = "kwin_opengl_test",
      .num_options = 2,
      .options = application_652_options,
    },
    { .name = "KWin",
      .executable = "kwin",
      .num_options = 2,
      .options = application_655_options,
    },
    { .name = "Unigine Tropics",
      .executable = "Tropics",
      .num_options = 1,
      .options = application_658_options,
    },
    { .name = "Oilrush",
      .executable = "Oilrush_x86",
      .num_options = 1,
      .options = application_660_options,
    },
};

static const struct driconf_device device_633 = {
    .driver = "r300",
    .num_engines = 0,
    .num_applications = 10,
    .applications = device_633_applications,
};


    
static const struct driconf_option application_663_options[] = {
    { .name = "mesa_extension_override", .value = "-GL_ARB_shader_image_load_store" },
};


static const struct driconf_application device_662_applications[] = {
    { .name = "Tomb Raider 2013",
      .executable = "TombRaider",
      .num_options = 1,
      .options = application_663_options,
    },
};

static const struct driconf_device device_662 = {
    .driver = "r600",
    .num_engines = 0,
    .num_applications = 1,
    .applications = device_662_applications,
};


    
static const struct driconf_option application_666_options[] = {
    { .name = "format_l8_srgb_enable_readback", .value = "true" },
};


static const struct driconf_application device_665_applications[] = {
    { .name = "Counter-Strike Global Offensive",
      .executable = "csgo_linux64",
      .num_options = 1,
      .options = application_666_options,
    },
};

static const struct driconf_device device_665 = {
    .driver = "virtio_gpu",
    .num_engines = 0,
    .num_applications = 1,
    .applications = device_665_applications,
};


    
static const struct driconf_option application_669_options[] = {
    { .name = "force_gl_renderer", .value = "Adreno (TM) 618" },
    { .name = "force_gl_vendor", .value = "Qualcomm" },
};

    
static const struct driconf_option application_672_options[] = {
    { .name = "force_gl_renderer", .value = "Adreno (TM) 630" },
    { .name = "force_gl_vendor", .value = "Qualcomm" },
};

    
static const struct driconf_option application_675_options[] = {
    { .name = "force_gl_renderer", .value = "Adreno (TM) 618" },
    { .name = "force_gl_vendor", .value = "Qualcomm" },
};

    
static const struct driconf_option application_678_options[] = {
    { .name = "force_gl_renderer", .value = "Adreno (TM) 630" },
    { .name = "force_gl_vendor", .value = "Qualcomm" },
};


static const struct driconf_application device_668_applications[] = {
    { .name = "Call of Duty Mobile",
      .executable = "com.activision.callofduty.shooter",
      .num_options = 2,
      .options = application_669_options,
    },
    { .name = "Asphalt 8",
      .executable = "com.gameloft.android.ANMP.GloftA8HM",
      .num_options = 2,
      .options = application_672_options,
    },
    { .name = "Asphalt 9",
      .executable = "com.gameloft.android.ANMP.GloftA9HM",
      .num_options = 2,
      .options = application_675_options,
    },
    { .name = "PUBG Mobile",
      .executable = "com.tencent.ig",
      .num_options = 2,
      .options = application_678_options,
    },
};

static const struct driconf_device device_668 = {
    .driver = "msm",
    .device = "FD618",
    .num_engines = 0,
    .num_applications = 4,
    .applications = device_668_applications,
};


    
static const struct driconf_option application_682_options[] = {
    { .name = "force_gl_vendor", .value = "angleisbroken" },
};

    
static const struct driconf_option application_684_options[] = {
    { .name = "force_gl_vendor", .value = "angleisbroken" },
};

    
static const struct driconf_option application_686_options[] = {
    { .name = "force_gl_vendor", .value = "angleisbroken" },
};

    
static const struct driconf_option application_688_options[] = {
    { .name = "force_gl_vendor", .value = "angleisbroken" },
};

    
static const struct driconf_option application_690_options[] = {
    { .name = "force_gl_vendor", .value = "angleisbroken" },
};

    
static const struct driconf_option application_692_options[] = {
    { .name = "force_gl_vendor", .value = "angleisbroken" },
};

    
static const struct driconf_option application_694_options[] = {
    { .name = "force_gl_vendor", .value = "angleisbroken" },
};

    
static const struct driconf_option application_696_options[] = {
    { .name = "disable_explicit_sync_heuristic", .value = "true" },
};


static const struct driconf_application device_681_applications[] = {
    { .name = "Chromium",
      .executable = "chromium",
      .num_options = 1,
      .options = application_682_options,
    },
    { .name = "Chromium",
      .executable = "chromium-browser",
      .num_options = 1,
      .options = application_684_options,
    },
    { .name = "Chromium",
      .executable = "chrome",
      .num_options = 1,
      .options = application_686_options,
    },
    { .name = "VS Code",
      .executable = "code",
      .num_options = 1,
      .options = application_688_options,
    },
    { .name = "element-desktop",
      .executable = "element-desktop",
      .num_options = 1,
      .options = application_690_options,
    },
    { .name = "vivaldi-bin",
      .executable = "vivaldi-bin",
      .num_options = 1,
      .options = application_692_options,
    },
    { .name = "code",
      .executable = "vivaldi-bin",
      .num_options = 1,
      .options = application_694_options,
    },
    { .name = "Xwayland",
      .executable = "Xwayland",
      .num_options = 1,
      .options = application_696_options,
    },
};

static const struct driconf_device device_681 = {
    .driver = "msm",
    .num_engines = 0,
    .num_applications = 8,
    .applications = device_681_applications,
};
    
static const struct driconf_option engine_703_options[] = {
    { .name = "tu_allow_oob_indirect_ubo_loads", .value = "true" },
};

    
static const struct driconf_option engine_705_options[] = {
    { .name = "tu_disable_d24s8_border_color_workaround", .value = "true" },
    { .name = "tu_use_tex_coord_round_nearest_even_mode", .value = "true" },
};

    
static const struct driconf_option engine_708_options[] = {
    { .name = "tu_enable_softfloat32", .value = "true" },
};


static const struct driconf_engine device_698_engines[] = {
    { .engine_name_match = "DXVK",
      .engine_versions = "0:8400896",
      .num_options = 1,
      .options = engine_703_options,
    },
    { .engine_name_match = "DXVK|vkd3d",
      .num_options = 2,
      .options = engine_705_options,
    },
    { .engine_name_match = "vkd3d",
      .num_options = 1,
      .options = engine_708_options,
    },
};

    
static const struct driconf_option application_699_options[] = {
    { .name = "tu_ignore_frag_depth_direction", .value = "true" },
};

    
static const struct driconf_option application_701_options[] = {
    { .name = "tu_allow_oob_indirect_ubo_loads", .value = "true" },
};


static const struct driconf_application device_698_applications[] = {
    { .name = "Sons Of The Forest",
      .executable = "SonsOfTheForest.exe",
      .num_options = 1,
      .options = application_699_options,
    },
    { .name = "Yooka-Laylee",
      .application_name_match = "YookaLaylee.x86_64",
      .num_options = 1,
      .options = application_701_options,
    },
};

static const struct driconf_device device_698 = {
    .driver = "turnip",
    .num_engines = 3,
    .engines = device_698_engines,
    .num_applications = 2,
    .applications = device_698_applications,
};


    
static const struct driconf_option application_711_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_713_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_715_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_717_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_719_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_721_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_723_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_725_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_727_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_729_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_731_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_733_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};


static const struct driconf_application device_710_applications[] = {
    { .name = "Firefox",
      .executable = "firefox",
      .num_options = 1,
      .options = application_711_options,
    },
    { .name = "Firefox ESR",
      .executable = "firefox-esr",
      .num_options = 1,
      .options = application_713_options,
    },
    { .name = "Chromium",
      .executable = "chromium",
      .num_options = 1,
      .options = application_715_options,
    },
    { .name = "Chromium",
      .executable = "chromium-browser",
      .num_options = 1,
      .options = application_717_options,
    },
    { .name = "Google Chrome",
      .executable = "chrome",
      .num_options = 1,
      .options = application_719_options,
    },
    { .name = "vivaldi-bin",
      .executable = "vivaldi-bin",
      .num_options = 1,
      .options = application_721_options,
    },
    { .name = "Iceweasel",
      .executable = "iceweasel",
      .num_options = 1,
      .options = application_723_options,
    },
    { .name = "Epiphany",
      .executable = "epiphany",
      .num_options = 1,
      .options = application_725_options,
    },
    { .name = "Konqueror",
      .executable = "konqueror",
      .num_options = 1,
      .options = application_727_options,
    },
    { .name = "Falkon",
      .executable = "falkon",
      .num_options = 1,
      .options = application_729_options,
    },
    { .name = "Seamonkey",
      .executable = "seamonkey",
      .num_options = 1,
      .options = application_731_options,
    },
    { .name = "Waterfox",
      .executable = "waterfox",
      .num_options = 1,
      .options = application_733_options,
    },
};

static const struct driconf_device device_710 = {
    .driver = "asahi",
    .num_engines = 0,
    .num_applications = 12,
    .applications = device_710_applications,
};
    
static const struct driconf_option engine_736_options[] = {
    { .name = "hk_disable_border_emulation", .value = "true" },
    { .name = "hk_enable_vertex_pipeline_stores_atomics", .value = "true" },
};

    
static const struct driconf_option engine_739_options[] = {
    { .name = "hk_fake_minmax", .value = "true" },
    { .name = "hk_image_view_min_lod", .value = "true" },
};


static const struct driconf_engine device_735_engines[] = {
    { .engine_name_match = "DXVK|vkd3d",
      .num_options = 2,
      .options = engine_736_options,
    },
    { .engine_name_match = "vkd3d",
      .num_options = 2,
      .options = engine_739_options,
    },
};



static const struct driconf_device device_735 = {
    .driver = "hk",
    .num_engines = 2,
    .engines = device_735_engines,
    .num_applications = 0,
};
    
static const struct driconf_option engine_743_options[] = {
    { .name = "pan_enable_vertex_pipeline_stores_atomics", .value = "true" },
};


static const struct driconf_engine device_742_engines[] = {
    { .engine_name_match = "ANGLE",
      .num_options = 1,
      .options = engine_743_options,
    },
};



static const struct driconf_device device_742 = {
    .driver = "panvk",
    .num_engines = 1,
    .engines = device_742_engines,
    .num_applications = 0,
};


    
static const struct driconf_option application_746_options[] = {
    { .name = "allow_rgb16_configs", .value = "false" },
};


static const struct driconf_application device_745_applications[] = {
    { .name = "all-default",
      .num_options = 1,
      .options = application_746_options,
    },
};

static const struct driconf_device device_745 = {
    .driver = "panfrost",
    .num_engines = 0,
    .num_applications = 1,
    .applications = device_745_applications,
};

static const struct driconf_device *driconf[] = {
    &device_1,
    &device_399,
    &device_406,
    &device_459,
    &device_474,
    &device_489,
    &device_496,
    &device_611,
    &device_621,
    &device_624,
    &device_633,
    &device_662,
    &device_665,
    &device_668,
    &device_681,
    &device_698,
    &device_710,
    &device_735,
    &device_742,
    &device_745,
};
