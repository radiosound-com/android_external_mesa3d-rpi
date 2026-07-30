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
    const char *blake3;
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



    
static const struct driconf_option engine_408_options[] = {
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option engine_410_options[] = {
    { .name = "vk_dont_care_as_load", .value = "true" },
};


static const struct driconf_engine device_1_engines[] = {
    { .engine_name_match = "UnrealEngine4.*",
      .engine_versions = "0:23",
      .num_options = 1,
      .options = engine_408_options,
    },
    { .engine_name_match = "Kex Engine",
      .num_options = 1,
      .options = engine_410_options,
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
    { .name = "force_glsl_version", .value = "130" },
};

    
static const struct driconf_option application_59_options[] = {
    { .name = "glsl_zero_init", .value = "true" },
};

    
static const struct driconf_option application_61_options[] = {
    { .name = "allow_glsl_builtin_variable_redeclaration", .value = "true" },
    { .name = "dual_color_blend_by_location", .value = "true" },
};

    
static const struct driconf_option application_64_options[] = {
    { .name = "glsl_zero_init", .value = "true" },
};

    
static const struct driconf_option application_66_options[] = {
    { .name = "allow_glsl_builtin_variable_redeclaration", .value = "true" },
};

    
static const struct driconf_option application_68_options[] = {
    { .name = "allow_glsl_builtin_variable_redeclaration", .value = "true" },
    { .name = "force_gl_map_buffer_synchronized", .value = "true" },
};

    
static const struct driconf_option application_71_options[] = {
    { .name = "allow_glsl_builtin_variable_redeclaration", .value = "true" },
    { .name = "force_gl_map_buffer_synchronized", .value = "true" },
};

    
static const struct driconf_option application_74_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
};

    
static const struct driconf_option application_76_options[] = {
    { .name = "force_gl_depth_component_type_int", .value = "true" },
};

    
static const struct driconf_option application_78_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
};

    
static const struct driconf_option application_80_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
};

    
static const struct driconf_option application_82_options[] = {
    { .name = "glsl_zero_init", .value = "true" },
};

    
static const struct driconf_option application_84_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
    { .name = "glsl_correct_derivatives_after_discard", .value = "true" },
    { .name = "force_gl_vendor", .value = "ATI Technologies, Inc." },
};

    
static const struct driconf_option application_88_options[] = {
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
};

    
static const struct driconf_option application_90_options[] = {
    { .name = "allow_higher_compat_version", .value = "true" },
};

    
static const struct driconf_option application_92_options[] = {
    { .name = "allow_higher_compat_version", .value = "true" },
};

    
static const struct driconf_option application_94_options[] = {
    { .name = "allow_higher_compat_version", .value = "true" },
};

    
static const struct driconf_option application_96_options[] = {
    { .name = "allow_higher_compat_version", .value = "true" },
};

    
static const struct driconf_option application_98_options[] = {
    { .name = "allow_higher_compat_version", .value = "true" },
};

    
static const struct driconf_option application_100_options[] = {
    { .name = "allow_higher_compat_version", .value = "true" },
};

    
static const struct driconf_option application_102_options[] = {
    { .name = "force_explicit_uniform_loc_zero", .value = "fQualityFactor" },
    { .name = "force_compat_profile", .value = "true" },
};

    
static const struct driconf_option application_105_options[] = {
    { .name = "force_compat_shaders", .value = "true" },
};

    
static const struct driconf_option application_107_options[] = {
    { .name = "force_compat_shaders", .value = "true" },
};

    
static const struct driconf_option application_109_options[] = {
    { .name = "force_glsl_version", .value = "440" },
};

    
static const struct driconf_option application_111_options[] = {
    { .name = "force_glsl_abs_sqrt", .value = "true" },
};

    
static const struct driconf_option application_113_options[] = {
    { .name = "force_glsl_abs_sqrt", .value = "true" },
};

    
static const struct driconf_option application_115_options[] = {
    { .name = "force_compat_shaders", .value = "true" },
    { .name = "glx_clear_context_reset_isolation_bit", .value = "true" },
};

    
static const struct driconf_option application_118_options[] = {
    { .name = "force_compat_profile", .value = "true" },
};

    
static const struct driconf_option application_120_options[] = {
    { .name = "glsl_zero_init", .value = "true" },
};

    
static const struct driconf_option application_122_options[] = {
    { .name = "glsl_zero_init", .value = "true" },
};

    
static const struct driconf_option application_124_options[] = {
    { .name = "force_glsl_version", .value = "130" },
    { .name = "glsl_ignore_write_to_readonly_var", .value = "true" },
};

    
static const struct driconf_option application_127_options[] = {
    { .name = "allow_glsl_embedded_structure_declarations", .value = "true" },
};

    
static const struct driconf_option application_129_options[] = {
    { .name = "glsl_correct_derivatives_after_discard", .value = "true" },
};

    
static const struct driconf_option application_131_options[] = {
    { .name = "glsl_correct_derivatives_after_discard", .value = "true" },
};

    
static const struct driconf_option application_133_options[] = {
    { .name = "allow_glsl_cross_stage_interpolation_mismatch", .value = "true" },
};

    
static const struct driconf_option application_135_options[] = {
    { .name = "allow_glsl_cross_stage_interpolation_mismatch", .value = "true" },
};

    
static const struct driconf_option application_137_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_139_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_141_options[] = {
    { .name = "allow_glsl_cross_stage_interpolation_mismatch", .value = "true" },
};

    
static const struct driconf_option application_143_options[] = {
    { .name = "allow_glsl_cross_stage_interpolation_mismatch", .value = "true" },
};

    
static const struct driconf_option application_145_options[] = {
    { .name = "allow_glsl_cross_stage_interpolation_mismatch", .value = "true" },
};

    
static const struct driconf_option application_147_options[] = {
    { .name = "allow_glsl_builtin_const_expression", .value = "true" },
    { .name = "allow_glsl_relaxed_es", .value = "true" },
};

    
static const struct driconf_option application_150_options[] = {
    { .name = "allow_extra_pp_tokens", .value = "true" },
};

    
static const struct driconf_option application_152_options[] = {
    { .name = "force_compat_profile", .value = "true" },
};

    
static const struct driconf_option application_154_options[] = {
    { .name = "glsl_correct_derivatives_after_discard", .value = "true" },
};

    
static const struct driconf_option application_156_options[] = {
    { .name = "force_compat_profile", .value = "true" },
};

    
static const struct driconf_option application_158_options[] = {
    { .name = "glsl_zero_init", .value = "true" },
};

    
static const struct driconf_option application_160_options[] = {
    { .name = "glsl_zero_init", .value = "true" },
};

    
static const struct driconf_option application_162_options[] = {
    { .name = "force_integer_tex_nearest", .value = "true" },
};

    
static const struct driconf_option application_164_options[] = {
    { .name = "force_integer_tex_nearest", .value = "true" },
};

    
static const struct driconf_option application_166_options[] = {
    { .name = "vs_position_always_invariant", .value = "true" },
};

    
static const struct driconf_option application_168_options[] = {
    { .name = "force_integer_tex_nearest", .value = "true" },
};

    
static const struct driconf_option application_170_options[] = {
    { .name = "lower_depth_range_rate", .value = "0.8" },
};

    
static const struct driconf_option application_172_options[] = {
    { .name = "lower_depth_range_rate", .value = "0.8" },
};

    
static const struct driconf_option application_174_options[] = {
    { .name = "allow_multisampled_copyteximage", .value = "true" },
    { .name = "vertex_program_default_out", .value = "true" },
};

    
static const struct driconf_option application_177_options[] = {
    { .name = "allow_multisampled_copyteximage", .value = "true" },
    { .name = "vertex_program_default_out", .value = "true" },
};

    
static const struct driconf_option application_180_options[] = {
    { .name = "vblank_mode", .value = "0" },
    { .name = "glthread_nop_check_framebuffer_status", .value = "true" },
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
    { .name = "force_gl_vendor", .value = "NVIDIA Corporation" },
    { .name = "force_glsl_extensions_warn", .value = "true" },
    { .name = "mesa_no_error", .value = "true" },
    { .name = "allow_rgb10_configs", .value = "false" },
    { .name = "allow_invalid_glx_destroy_window", .value = "true" },
    { .name = "allow_rgb16_configs", .value = "false" },
};

    
static const struct driconf_option application_191_options[] = {
    { .name = "ignore_map_unsynchronized", .value = "true" },
};

    
static const struct driconf_option application_193_options[] = {
    { .name = "zero_invalidated_buffers", .value = "true" },
};

    
static const struct driconf_option application_195_options[] = {
    { .name = "zero_invalidated_buffers", .value = "true" },
};

    
static const struct driconf_option application_197_options[] = {
    { .name = "force_integer_tex_nearest", .value = "true" },
    { .name = "allow_glsl_extension_directive_midshader", .value = "true" },
};

    
static const struct driconf_option application_200_options[] = {
    { .name = "glsl_correct_derivatives_after_discard", .value = "true" },
};

    
static const struct driconf_option application_202_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_204_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_206_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_208_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_210_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_212_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_214_options[] = {
    { .name = "allow_glsl_120_subset_in_110", .value = "true" },
};

    
static const struct driconf_option application_216_options[] = {
    { .name = "mesa_extension_override", .value = "+GL_EXT_geometry_shader4" },
};

    
static const struct driconf_option application_218_options[] = {
    { .name = "mesa_extension_override", .value = "-GL_MESA_pack_invert -GL_MESA_framebuffer_flip_y -GL_MESA_window_pos" },
};

    
static const struct driconf_option application_220_options[] = {
    { .name = "mesa_extension_override", .value = "-GL_MESA_pack_invert -GL_MESA_framebuffer_flip_y -GL_MESA_window_pos" },
    { .name = "do_dce_before_clip_cull_analysis", .value = "true" },
};

    
static const struct driconf_option application_223_options[] = {
    { .name = "mesa_extension_override", .value = "-GL_MESA_pack_invert -GL_MESA_framebuffer_flip_y -GL_MESA_window_pos" },
};

    
static const struct driconf_option application_225_options[] = {
    { .name = "force_glsl_extensions_warn", .value = "true" },
};

    
static const struct driconf_option application_227_options[] = {
    { .name = "force_direct_glx_context", .value = "true" },
};

    
static const struct driconf_option application_229_options[] = {
    { .name = "keep_native_window_glx_drawable", .value = "true" },
    { .name = "allow_rgb10_configs", .value = "false" },
};

    
static const struct driconf_option application_232_options[] = {
    { .name = "force_gl_vendor", .value = "ATI Technologies Inc." },
};

    
static const struct driconf_option application_234_options[] = {
    { .name = "force_compat_shaders", .value = "true" },
};

    
static const struct driconf_option application_236_options[] = {
    { .name = "mesa_glthread_app_profile", .value = "0" },
};

    
static const struct driconf_option application_238_options[] = {
    { .name = "vk_wsi_force_swapchain_to_current_extent", .value = "true" },
    { .name = "vk_x11_ignore_suboptimal", .value = "true" },
};

    
static const struct driconf_option application_241_options[] = {
    { .name = "vk_wsi_force_swapchain_to_current_extent", .value = "true" },
    { .name = "vk_x11_ignore_suboptimal", .value = "true" },
};

    
static const struct driconf_option application_244_options[] = {
    { .name = "vk_wsi_force_swapchain_to_current_extent", .value = "true" },
    { .name = "vk_x11_ignore_suboptimal", .value = "true" },
};

    
static const struct driconf_option application_247_options[] = {
    { .name = "vk_wsi_force_swapchain_to_current_extent", .value = "true" },
    { .name = "vk_x11_ignore_suboptimal", .value = "true" },
};

    
static const struct driconf_option application_250_options[] = {
    { .name = "vk_wsi_force_swapchain_to_current_extent", .value = "true" },
    { .name = "vk_x11_ignore_suboptimal", .value = "true" },
};

    
static const struct driconf_option application_253_options[] = {
    { .name = "vk_wsi_force_swapchain_to_current_extent", .value = "true" },
    { .name = "vk_x11_ignore_suboptimal", .value = "true" },
};

    
static const struct driconf_option application_256_options[] = {
    { .name = "mesa_glthread_app_profile", .value = "0" },
};

    
static const struct driconf_option application_258_options[] = {
    { .name = "mesa_glthread_app_profile", .value = "0" },
};

    
static const struct driconf_option application_260_options[] = {
    { .name = "mesa_glthread_app_profile", .value = "0" },
};

    
static const struct driconf_option application_262_options[] = {
    { .name = "adaptive_sync", .value = "false" },
    { .name = "v3d_nonmsaa_texture_size_limit", .value = "true" },
};

    
static const struct driconf_option application_265_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_267_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_269_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_271_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_273_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_275_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_277_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_279_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_281_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_283_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_285_options[] = {
    { .name = "adaptive_sync", .value = "false" },
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
    { .name = "v3d_nonmsaa_texture_size_limit", .value = "true" },
};

    
static const struct driconf_option application_298_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_300_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_302_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_304_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_306_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_308_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_310_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_312_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_314_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_316_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_318_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_320_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_322_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_324_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_326_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_328_options[] = {
    { .name = "adaptive_sync", .value = "false" },
};

    
static const struct driconf_option application_330_options[] = {
    { .name = "v3d_nonmsaa_texture_size_limit", .value = "true" },
};

    
static const struct driconf_option application_332_options[] = {
    { .name = "mesa_glthread_app_profile", .value = "0" },
    { .name = "vk_x11_override_min_image_count", .value = "2" },
    { .name = "vk_wsi_force_bgra8_unorm_first", .value = "true" },
};

    
static const struct driconf_option application_336_options[] = {
    { .name = "vk_x11_override_min_image_count", .value = "2" },
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option application_339_options[] = {
    { .name = "vk_x11_override_min_image_count", .value = "2" },
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option application_342_options[] = {
    { .name = "vk_x11_override_min_image_count", .value = "3" },
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option application_345_options[] = {
    { .name = "glx_extension_override", .value = "-GLX_OML_swap_method" },
    { .name = "allow_higher_compat_version", .value = "true" },
};

    
static const struct driconf_option application_348_options[] = {
    { .name = "glsl_correct_derivatives_after_discard", .value = "true" },
};

    
static const struct driconf_option application_350_options[] = {
    { .name = "glsl_correct_derivatives_after_discard", .value = "true" },
};

    
static const struct driconf_option application_352_options[] = {
    { .name = "vs_position_always_precise", .value = "true" },
};

    
static const struct driconf_option application_354_options[] = {
    { .name = "vs_position_always_precise", .value = "true" },
};

    
static const struct driconf_option application_356_options[] = {
    { .name = "vs_position_always_precise", .value = "true" },
};

    
static const struct driconf_option application_358_options[] = {
    { .name = "vs_position_always_precise", .value = "true" },
};

    
static const struct driconf_option application_360_options[] = {
    { .name = "glsl_zero_init", .value = "true" },
};

    
static const struct driconf_option application_362_options[] = {
    { .name = "ignore_discard_framebuffer", .value = "true" },
};

    
static const struct driconf_option application_364_options[] = {
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option application_366_options[] = {
    { .name = "vk_x11_ensure_min_image_count", .value = "true" },
};

    
static const struct driconf_option application_368_options[] = {
    { .name = "vk_zero_vram", .value = "true" },
};

    
static const struct driconf_option application_370_options[] = {
    { .name = "vk_zero_vram", .value = "true" },
};

    
static const struct driconf_option application_372_options[] = {
    { .name = "vk_zero_vram", .value = "true" },
};

    
static const struct driconf_option application_374_options[] = {
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option application_376_options[] = {
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option application_378_options[] = {
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option application_380_options[] = {
    { .name = "vk_dont_care_as_load", .value = "true" },
};

    
static const struct driconf_option application_382_options[] = {
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option application_384_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_386_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_388_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_390_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_392_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_394_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_396_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_398_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_400_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_402_options[] = {
    { .name = "no_fp16", .value = "true" },
};

    
static const struct driconf_option application_404_options[] = {
    { .name = "vk_x11_strict_image_count", .value = "true" },
};

    
static const struct driconf_option application_406_options[] = {
    { .name = "wgl_require_gdi_compat", .value = "true" },
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
      .num_options = 4,
      .options = application_54_options,
    },
    { .name = "Cursemark",
      .executable = "Cursemark.exe",
      .num_options = 1,
      .options = application_59_options,
    },
    { .name = "Dying Light",
      .executable = "DyingLightGame",
      .num_options = 2,
      .options = application_61_options,
    },
    { .name = "Exanima",
      .executable = "Exanima.exe",
      .num_options = 1,
      .options = application_64_options,
    },
    { .name = "Full Bore",
      .executable = "fullbore",
      .num_options = 1,
      .options = application_66_options,
    },
    { .name = "RAGE (64-bit)",
      .executable = "Rage64.exe",
      .num_options = 2,
      .options = application_68_options,
    },
    { .name = "RAGE (32-bit)",
      .executable = "Rage.exe",
      .num_options = 2,
      .options = application_71_options,
    },
    { .name = "Second Life",
      .executable = "do-not-directly-run-secondlife-bin",
      .num_options = 1,
      .options = application_74_options,
    },
    { .name = "TombRaider 4-5-6 Remastered",
      .executable = "tomb456.exe",
      .num_options = 1,
      .options = application_76_options,
    },
    { .name = "Warsow (32-bit)",
      .executable = "warsow.i386",
      .num_options = 1,
      .options = application_78_options,
    },
    { .name = "Warsow (64-bit)",
      .executable = "warsow.x86_64",
      .num_options = 1,
      .options = application_80_options,
    },
    { .name = "Rust",
      .executable = "rust",
      .num_options = 1,
      .options = application_82_options,
    },
    { .name = "Divinity: Original Sin Enhanced Edition",
      .executable = "EoCApp",
      .num_options = 3,
      .options = application_84_options,
    },
    { .name = "Metro 2033 Redux / Metro Last Night Redux",
      .executable = "metro",
      .num_options = 1,
      .options = application_88_options,
    },
    { .name = "Worms W.M.D",
      .executable = "Worms W.M.Dx64",
      .num_options = 1,
      .options = application_90_options,
    },
    { .name = "Crookz - The Big Heist",
      .executable = "Crookz",
      .num_options = 1,
      .options = application_92_options,
    },
    { .name = "Tropico 5",
      .executable = "Tropico5",
      .num_options = 1,
      .options = application_94_options,
    },
    { .name = "Faster than Light (32-bit)",
      .executable = "FTL.x86",
      .num_options = 1,
      .options = application_96_options,
    },
    { .name = "Faster than Light (64-bit)",
      .executable = "FTL.amd64",
      .num_options = 1,
      .options = application_98_options,
    },
    { .name = "Final Fantasy VIII: Remastered",
      .executable = "FFVIII.exe",
      .num_options = 1,
      .options = application_100_options,
    },
    { .name = "Lethis - Path Of Progress",
      .executable = "Lethis-Path_Of_Progress.exe",
      .num_options = 2,
      .options = application_102_options,
    },
    { .name = "SNK HEROINES Tag Team Frenzy",
      .executable = "SNKHEROINES.exe",
      .num_options = 1,
      .options = application_105_options,
    },
    { .name = "Metal Slug XX",
      .executable = "MSXX_main.exe",
      .num_options = 1,
      .options = application_107_options,
    },
    { .name = "The Culling",
      .executable = "Victory",
      .num_options = 1,
      .options = application_109_options,
    },
    { .name = "Spec Ops: The Line (32-bit)",
      .executable = "specops.i386",
      .num_options = 1,
      .options = application_111_options,
    },
    { .name = "Spec Ops: The Line (64-bit)",
      .executable = "specops",
      .num_options = 1,
      .options = application_113_options,
    },
    { .name = "Interstellar Rift",
      .executable = "IR.exe",
      .num_options = 2,
      .options = application_115_options,
    },
    { .name = "Jamestown+",
      .executable = "JamestownPlus.exe",
      .num_options = 1,
      .options = application_118_options,
    },
    { .name = "Kerbal Space Program (32-bit)",
      .executable = "KSP.x86",
      .num_options = 1,
      .options = application_120_options,
    },
    { .name = "Kerbal Space Program (64-bit)",
      .executable = "KSP.x86_64",
      .num_options = 1,
      .options = application_122_options,
    },
    { .name = "Luna Sky",
      .executable = "lunasky",
      .num_options = 2,
      .options = application_124_options,
    },
    { .name = "MDK2 HD",
      .executable = "mdk2hd.exe",
      .num_options = 1,
      .options = application_127_options,
    },
    { .name = "Rocket League",
      .executable = "RocketLeague",
      .num_options = 1,
      .options = application_129_options,
    },
    { .name = "The Witcher 2",
      .executable = "witcher2",
      .num_options = 1,
      .options = application_131_options,
    },
    { .name = "Unreal 4 Editor",
      .executable = "UE4Editor",
      .num_options = 1,
      .options = application_133_options,
    },
    { .name = "Observer",
      .executable = "TheObserver-Linux-Shipping",
      .num_options = 1,
      .options = application_135_options,
    },
    { .name = "Pixel Game Maker MV",
      .executable = "player.exe",
      .num_options = 1,
      .options = application_137_options,
    },
    { .name = "Eden Gamma",
      .executable = "EdenGammaGame-0.3.0.2.exe",
      .num_options = 1,
      .options = application_139_options,
    },
    { .name = "Steamroll",
      .executable = "Steamroll-Linux-Shipping",
      .num_options = 1,
      .options = application_141_options,
    },
    { .name = "Refunct",
      .executable = "Refunct-Linux-Shipping",
      .num_options = 1,
      .options = application_143_options,
    },
    { .name = "We Happy Few",
      .executable = "GlimpseGame",
      .num_options = 1,
      .options = application_145_options,
    },
    { .name = "Google Earth VR",
      .executable = "Earth.exe",
      .num_options = 2,
      .options = application_147_options,
    },
    { .name = "Champions of Regnum",
      .executable = "game",
      .num_options = 1,
      .options = application_150_options,
    },
    { .name = "Wolfenstein The Old Blood",
      .executable = "WolfOldBlood_x64.exe",
      .num_options = 1,
      .options = application_152_options,
    },
    { .name = "ARMA 3",
      .executable = "arma3.x86_64",
      .num_options = 1,
      .options = application_154_options,
    },
    { .name = "Epic Games Launcher",
      .executable = "EpicGamesLauncher.exe",
      .num_options = 1,
      .options = application_156_options,
    },
    { .name = "GpuTest",
      .executable = "GpuTest",
      .num_options = 1,
      .options = application_158_options,
    },
    { .name = "Curse of the Dead Gods",
      .executable = "Curse of the Dead Gods.exe",
      .num_options = 1,
      .options = application_160_options,
    },
    { .name = "GRID Autosport",
      .executable = "GridAutosport",
      .num_options = 1,
      .options = application_162_options,
    },
    { .name = "DIRT: Showdown",
      .executable = "dirt.i386",
      .num_options = 1,
      .options = application_164_options,
    },
    { .name = "DiRT Rally",
      .executable = "DirtRally",
      .num_options = 1,
      .options = application_166_options,
    },
    { .name = "Foundation",
      .executable = "foundation.exe",
      .num_options = 1,
      .options = application_168_options,
    },
    { .name = "Homerun Clash",
      .executable = "com.haegin.homerunclash",
      .num_options = 1,
      .options = application_170_options,
    },
    { .name = "The Spirit and The Mouse",
      .executable = "TheSpiritAndTheMouse.exe",
      .num_options = 1,
      .options = application_172_options,
    },
    { .name = "Penumbra: Overture (Windows)",
      .executable = "Penumbra.exe",
      .num_options = 2,
      .options = application_174_options,
    },
    { .name = "Penumbra: Overture",
      .executable = "penumbra.bin",
      .num_options = 2,
      .options = application_177_options,
    },
    { .name = "SPECviewperf13",
      .executable = "viewperf",
      .num_options = 10,
      .options = application_180_options,
    },
    { .name = "Dead-Cells",
      .executable = "com.playdigious.deadcells.mobile",
      .num_options = 1,
      .options = application_191_options,
    },
    { .name = "Little Inferno",
      .executable = "LittleInferno.bin.x86_64",
      .num_options = 1,
      .options = application_193_options,
    },
    { .name = "Little Inferno (32-bit)",
      .executable = "LittleInferno.bin.x86",
      .num_options = 1,
      .options = application_195_options,
    },
    { .name = "Teardown",
      .executable = "teardown.exe",
      .num_options = 2,
      .options = application_197_options,
    },
    { .name = "Golf With Your Friends",
      .executable = "Golf With Your Friends.x86_64",
      .num_options = 1,
      .options = application_200_options,
    },
    { .name = "Cossacks 3",
      .executable = "cossacks.exe",
      .num_options = 1,
      .options = application_202_options,
    },
    { .name = "Kaiju-A-Gogo",
      .executable = "kaiju.exe",
      .num_options = 1,
      .options = application_204_options,
    },
    { .name = "Captain Lycop: Invasion of the Heters (Wine)",
      .executable = "lycop.exe",
      .num_options = 1,
      .options = application_206_options,
    },
    { .name = "Captain Lycop: Invasion of the Heters",
      .executable = "lycop",
      .num_options = 1,
      .options = application_208_options,
    },
    { .name = "Joe Danger (Wine)",
      .executable = "JoeDanger.exe",
      .num_options = 1,
      .options = application_210_options,
    },
    { .name = "Joe Danger 2 (Wine)",
      .executable = "JoeDanger2.exe",
      .num_options = 1,
      .options = application_212_options,
    },
    { .name = "Investigation Stories : gunsound (Wine)",
      .executable = "gunsound.exe",
      .num_options = 1,
      .options = application_214_options,
    },
    { .name = "Blockland (Wine)",
      .executable = "Blockland.exe",
      .num_options = 1,
      .options = application_216_options,
    },
    { .name = "BETA CAE Systems - GL detect tool",
      .executable = "detect_opengl_tool",
      .num_options = 1,
      .options = application_218_options,
    },
    { .name = "BETA CAE Systems - ANSA",
      .executable = "ansa_linux_x86_64",
      .num_options = 2,
      .options = application_220_options,
    },
    { .name = "BETA CAE Systems - META",
      .executable = "meta_post_x86_64",
      .num_options = 1,
      .options = application_223_options,
    },
    { .name = "Mari",
      .executable_regexp = "Mari[0-9]+[.][0-9]+v[0-9]+",
      .num_options = 1,
      .options = application_225_options,
    },
    { .name = "Discovery Studio 2020",
      .executable = "DiscoveryStudio2020-bin",
      .num_options = 1,
      .options = application_227_options,
    },
    { .name = "Abaqus",
      .executable = "ABQcaeK",
      .num_options = 2,
      .options = application_229_options,
    },
    { .name = "Maya",
      .executable = "maya.bin",
      .num_options = 1,
      .options = application_232_options,
    },
    { .name = "SD Gundam G Generation Cross Rays",
      .executable = "togg.exe",
      .num_options = 1,
      .options = application_234_options,
    },
    { .name = "FINAL FANTASY XI",
      .executable = "pol.exe",
      .num_options = 1,
      .options = application_236_options,
    },
    { .name = "Talos Principle",
      .executable = "Talos",
      .num_options = 2,
      .options = application_238_options,
    },
    { .name = "Talos Principle (Unrestricted)",
      .executable = "Talos_Unrestricted",
      .num_options = 2,
      .options = application_241_options,
    },
    { .name = "Talos Principle VR",
      .executable = "Talos_VR",
      .num_options = 2,
      .options = application_244_options,
    },
    { .name = "Talos Principle VR (Unrestricted)",
      .executable = "Talos_Unrestricted_VR",
      .num_options = 2,
      .options = application_247_options,
    },
    { .name = "Serious Sam Fusion",
      .executable = "Sam2017",
      .num_options = 2,
      .options = application_250_options,
    },
    { .name = "Serious Sam Fusion (Unrestricted)",
      .executable = "Sam2017_Unrestricted",
      .num_options = 2,
      .options = application_253_options,
    },
    { .name = "DeusExMD",
      .executable = "DeusExMD",
      .num_options = 1,
      .options = application_256_options,
    },
    { .name = "F1 2015",
      .executable = "F12015",
      .num_options = 1,
      .options = application_258_options,
    },
    { .name = "KWin Wayland",
      .executable = "kwin_wayland",
      .num_options = 1,
      .options = application_260_options,
    },
    { .name = "gnome-shell",
      .executable = "gnome-shell",
      .num_options = 2,
      .options = application_262_options,
    },
    { .name = "Desktop — Plasma",
      .executable = "plasmashell",
      .num_options = 1,
      .options = application_265_options,
    },
    { .name = "budgie-wm",
      .executable = "budgie-wm",
      .num_options = 1,
      .options = application_267_options,
    },
    { .name = "kwin_x11",
      .executable = "kwin_x11",
      .num_options = 1,
      .options = application_269_options,
    },
    { .name = "ksmserver-logout-greeter",
      .executable = "ksmserver-logout-greeter",
      .num_options = 1,
      .options = application_271_options,
    },
    { .name = "ksmserver-switchuser-greeter",
      .executable = "ksmserver-switchuser-greeter",
      .num_options = 1,
      .options = application_273_options,
    },
    { .name = "kscreenlocker_greet",
      .executable = "kscreenlocker_greet",
      .num_options = 1,
      .options = application_275_options,
    },
    { .name = "startplasma",
      .executable = "startplasma",
      .num_options = 1,
      .options = application_277_options,
    },
    { .name = "sddm-greeter",
      .executable = "sddm-greeter",
      .num_options = 1,
      .options = application_279_options,
    },
    { .name = "krunner",
      .executable = "krunner",
      .num_options = 1,
      .options = application_281_options,
    },
    { .name = "spectacle",
      .executable = "spectacle",
      .num_options = 1,
      .options = application_283_options,
    },
    { .name = "marco",
      .executable = "marco",
      .num_options = 1,
      .options = application_285_options,
    },
    { .name = "compton",
      .executable = "compton",
      .num_options = 1,
      .options = application_287_options,
    },
    { .name = "picom",
      .executable = "picom",
      .num_options = 1,
      .options = application_289_options,
    },
    { .name = "xfwm4",
      .executable = "xfwm4",
      .num_options = 1,
      .options = application_291_options,
    },
    { .name = "Enlightenment",
      .executable = "enlightenment",
      .num_options = 1,
      .options = application_293_options,
    },
    { .name = "mutter",
      .executable = "mutter",
      .num_options = 2,
      .options = application_295_options,
    },
    { .name = "muffin",
      .executable = "muffin",
      .num_options = 1,
      .options = application_298_options,
    },
    { .name = "cinnamon",
      .executable = "cinnamon",
      .num_options = 1,
      .options = application_300_options,
    },
    { .name = "compiz",
      .executable = "compiz",
      .num_options = 1,
      .options = application_302_options,
    },
    { .name = "Firefox",
      .executable = "firefox",
      .num_options = 1,
      .options = application_304_options,
    },
    { .name = "Firefox ESR",
      .executable = "firefox-esr",
      .num_options = 1,
      .options = application_306_options,
    },
    { .name = "Chromium",
      .executable = "chromium",
      .num_options = 1,
      .options = application_308_options,
    },
    { .name = "Google Chrome",
      .executable = "chrome",
      .num_options = 1,
      .options = application_310_options,
    },
    { .name = "Iceweasel",
      .executable = "iceweasel",
      .num_options = 1,
      .options = application_312_options,
    },
    { .name = "Epiphany",
      .executable = "epiphany",
      .num_options = 1,
      .options = application_314_options,
    },
    { .name = "Konqueror",
      .executable = "konqueror",
      .num_options = 1,
      .options = application_316_options,
    },
    { .name = "Falkon",
      .executable = "falkon",
      .num_options = 1,
      .options = application_318_options,
    },
    { .name = "Seamonkey",
      .executable = "seamonkey",
      .num_options = 1,
      .options = application_320_options,
    },
    { .name = "Waterfox",
      .executable = "waterfox",
      .num_options = 1,
      .options = application_322_options,
    },
    { .name = "VLC Media Player",
      .executable = "vlc",
      .num_options = 1,
      .options = application_324_options,
    },
    { .name = "Totem",
      .executable = "totem",
      .num_options = 1,
      .options = application_326_options,
    },
    { .name = "Dragon Player",
      .executable = "dragon",
      .num_options = 1,
      .options = application_328_options,
    },
    { .name = "Xorg",
      .executable = "Xorg",
      .num_options = 1,
      .options = application_330_options,
    },
    { .name = "gfxbench",
      .executable = "testfw_app",
      .num_options = 3,
      .options = application_332_options,
    },
    { .name = "Rainbow Six Siege (Vulkan)",
      .executable = "RainbowSix_Vulkan.exe",
      .num_options = 2,
      .options = application_336_options,
    },
    { .name = "Rainbow Six Extraction (Wine)",
      .executable = "R6-Extraction.exe",
      .num_options = 2,
      .options = application_339_options,
    },
    { .name = "Hades",
      .executable = "Hades.exe",
      .num_options = 2,
      .options = application_342_options,
    },
    { .name = "Brink",
      .executable = "brink.exe",
      .num_options = 2,
      .options = application_345_options,
    },
    { .name = "Enter The Gungeon (32 bits)",
      .executable = "EtG.x86",
      .num_options = 1,
      .options = application_348_options,
    },
    { .name = "Enter The Gungeon (64 bits)",
      .executable = "EtG.x86_64",
      .num_options = 1,
      .options = application_350_options,
    },
    { .name = "Assault Android Cactus (32-bit)",
      .executable = "cactus_demo.x86",
      .num_options = 1,
      .options = application_352_options,
    },
    { .name = "Assault Android Cactus (64-bit)",
      .executable = "cactus_demo.x86_64",
      .num_options = 1,
      .options = application_354_options,
    },
    { .name = "Assault Android Cactus (32-bit)",
      .executable = "cactus.x86",
      .num_options = 1,
      .options = application_356_options,
    },
    { .name = "Assault Android Cactus (64-bit)",
      .executable = "cactus.x86_64",
      .num_options = 1,
      .options = application_358_options,
    },
    { .name = "Limbo",
      .executable = "limbo",
      .num_options = 1,
      .options = application_360_options,
    },
    { .name = "Genshin Impact",
      .executable = "com.miHoYo.GenshinImpact",
      .num_options = 1,
      .options = application_362_options,
    },
    { .name = "DOOM",
      .executable = "DOOMx64vk.exe",
      .num_options = 1,
      .options = application_364_options,
    },
    { .name = "DOOMEternal",
      .executable = "DOOMEternalx64vk.exe",
      .num_options = 1,
      .options = application_366_options,
    },
    { .name = "Path of Exile",
      .executable = "PathOfExile_x64Steam.exe",
      .num_options = 1,
      .options = application_368_options,
    },
    { .name = "Path of Exile",
      .executable = "PathOfExileSteam.exe",
      .num_options = 1,
      .options = application_370_options,
    },
    { .name = "X4 Foundations",
      .executable = "X4",
      .num_options = 1,
      .options = application_372_options,
    },
    { .name = "Wolfenstein: Youngblood(x64vk)",
      .executable = "Youngblood_x64vk.exe",
      .num_options = 1,
      .options = application_374_options,
    },
    { .name = "Wolfenstein II: The New Colossus",
      .executable = "NewColossus_x64vk.exe",
      .num_options = 1,
      .options = application_376_options,
    },
    { .name = "Metro: Exodus",
      .application_name_match = "metroexodus",
      .num_options = 1,
      .options = application_378_options,
    },
    { .name = "Spilled!",
      .executable = "Spilled!.exe",
      .num_options = 1,
      .options = application_380_options,
    },
    { .name = "Atlas Fallen",
      .executable = "AtlasFallen (VK).exe",
      .num_options = 1,
      .options = application_382_options,
    },
    { .name = "Firefox",
      .executable = "firefox",
      .num_options = 1,
      .options = application_384_options,
    },
    { .name = "Firefox ESR",
      .executable = "firefox-esr",
      .num_options = 1,
      .options = application_386_options,
    },
    { .name = "Chromium",
      .executable = "chromium",
      .num_options = 1,
      .options = application_388_options,
    },
    { .name = "Google Chrome",
      .executable = "chrome",
      .num_options = 1,
      .options = application_390_options,
    },
    { .name = "Iceweasel",
      .executable = "iceweasel",
      .num_options = 1,
      .options = application_392_options,
    },
    { .name = "Epiphany",
      .executable = "epiphany",
      .num_options = 1,
      .options = application_394_options,
    },
    { .name = "Konqueror",
      .executable = "konqueror",
      .num_options = 1,
      .options = application_396_options,
    },
    { .name = "Falkon",
      .executable = "falkon",
      .num_options = 1,
      .options = application_398_options,
    },
    { .name = "Seamonkey",
      .executable = "seamonkey",
      .num_options = 1,
      .options = application_400_options,
    },
    { .name = "Waterfox",
      .executable = "waterfox",
      .num_options = 1,
      .options = application_402_options,
    },
    { .name = "Detroit Become Human",
      .application_name_match = "DetroitBecomeHuman",
      .num_options = 1,
      .options = application_404_options,
    },
    { .name = "文香白板",
      .executable = "WxBoardMain.exe",
      .num_options = 1,
      .options = application_406_options,
    },
};

static const struct driconf_device device_1 = {
    .num_engines = 2,
    .engines = device_1_engines,
    .num_applications = 176,
    .applications = device_1_applications,
};


    
static const struct driconf_option application_413_options[] = {
    { .name = "glx_extension_override", .value = "-GLX_OML_sync_control -GLX_SGI_video_sync" },
};

    
static const struct driconf_option application_415_options[] = {
    { .name = "glx_extension_override", .value = "-GLX_OML_sync_control -GLX_SGI_video_sync" },
};

    
static const struct driconf_option application_417_options[] = {
    { .name = "glx_extension_override", .value = "-GLX_OML_sync_control" },
};


static const struct driconf_application device_412_applications[] = {
    { .name = "gnome-shell",
      .executable = "gnome-shell",
      .num_options = 1,
      .options = application_413_options,
    },
    { .name = "cinnamon",
      .executable = "cinnamon",
      .num_options = 1,
      .options = application_415_options,
    },
    { .name = "Compiz",
      .executable = "Compiz",
      .num_options = 1,
      .options = application_417_options,
    },
};

static const struct driconf_device device_412 = {
    .driver = "vmwgfx",
    .num_engines = 0,
    .num_applications = 3,
    .applications = device_412_applications,
};


    
static const struct driconf_option application_420_options[] = {
    { .name = "force_gl_vendor", .value = "X.Org" },
};

    
static const struct driconf_option application_422_options[] = {
    { .name = "radeonsi_zerovram", .value = "true" },
};

    
static const struct driconf_option application_424_options[] = {
    { .name = "radeonsi_zerovram", .value = "true" },
    { .name = "radeonsi_clamp_div_by_zero", .value = "true" },
};

    
static const struct driconf_option application_427_options[] = {
    { .name = "radeonsi_zerovram", .value = "true" },
};

    
static const struct driconf_option application_429_options[] = {
    { .name = "radeonsi_zerovram", .value = "true" },
};

    
static const struct driconf_option application_431_options[] = {
    { .name = "radeonsi_zerovram", .value = "true" },
};

    
static const struct driconf_option application_433_options[] = {
    { .name = "radeonsi_sync_compile", .value = "true" },
    { .name = "radeonsi_zerovram", .value = "true" },
};

    
static const struct driconf_option application_436_options[] = {
    { .name = "radeonsi_sync_compile", .value = "true" },
};

    
static const struct driconf_option application_438_options[] = {
    { .name = "radeonsi_no_infinite_interp", .value = "true" },
};

    
static const struct driconf_option application_440_options[] = {
    { .name = "radeonsi_zerovram", .value = "true" },
};

    
static const struct driconf_option application_442_options[] = {
    { .name = "radeonsi_zerovram", .value = "true" },
};

    
static const struct driconf_option application_444_options[] = {
    { .name = "radeonsi_sync_compile", .value = "true" },
};

    
static const struct driconf_option application_446_options[] = {
    { .name = "radeonsi_clamp_div_by_zero", .value = "true" },
};

    
static const struct driconf_option application_448_options[] = {
    { .name = "radeonsi_clamp_div_by_zero", .value = "true" },
};

    
static const struct driconf_option application_450_options[] = {
    { .name = "radeonsi_clamp_div_by_zero", .value = "true" },
    { .name = "radeonsi_no_infinite_interp", .value = "true" },
};

    
static const struct driconf_option application_453_options[] = {
    { .name = "force_gl_vendor", .value = "X.Org" },
};

    
static const struct driconf_option application_455_options[] = {
    { .name = "force_gl_vendor", .value = "ATI Technologies Inc." },
};

    
static const struct driconf_option application_457_options[] = {
    { .name = "force_gl_vendor", .value = "ATI Technologies Inc." },
};

    
static const struct driconf_option application_459_options[] = {
    { .name = "force_gl_vendor", .value = "ATI Technologies Inc." },
    { .name = "radeonsi_force_use_fma32", .value = "true" },
};

    
static const struct driconf_option application_462_options[] = {
    { .name = "radeonsi_zerovram", .value = "true" },
};


static const struct driconf_application device_419_applications[] = {
    { .name = "Alien Isolation",
      .executable = "AlienIsolation",
      .num_options = 1,
      .options = application_420_options,
    },
    { .name = "American Truck Simulator",
      .executable = "amtrucks",
      .num_options = 1,
      .options = application_422_options,
    },
    { .name = "Counter-Strike Global Offensive",
      .executable = "csgo_linux64",
      .num_options = 2,
      .options = application_424_options,
    },
    { .name = "Exanima",
      .executable = "Exanima.exe",
      .num_options = 1,
      .options = application_427_options,
    },
    { .name = "Nowhere Patrol",
      .executable = "NowherePatrol.exe",
      .num_options = 1,
      .options = application_429_options,
    },
    { .name = "Rocket League",
      .executable = "RocketLeague",
      .num_options = 1,
      .options = application_431_options,
    },
    { .name = "any runner executable",
      .executable = "runner",
      .num_options = 2,
      .options = application_433_options,
    },
    { .name = "Gun Godz",
      .executable = "GUNGODZ",
      .num_options = 1,
      .options = application_436_options,
    },
    { .name = "Kerbal Space Program",
      .executable = "KSP.x86_64",
      .num_options = 1,
      .options = application_438_options,
    },
    { .name = "7 Days to Die",
      .executable = "7DaysToDie.x86_64",
      .num_options = 1,
      .options = application_440_options,
    },
    { .name = "7 Days to Die",
      .executable = "7DaysToDie.x86",
      .num_options = 1,
      .options = application_442_options,
    },
    { .name = "SPECviewperf13",
      .executable = "viewperf",
      .num_options = 1,
      .options = application_444_options,
    },
    { .name = "Road Redemption",
      .executable = "RoadRedemption.x86_64",
      .num_options = 1,
      .options = application_446_options,
    },
    { .name = "Wasteland 2",
      .executable = "WL2",
      .num_options = 1,
      .options = application_448_options,
    },
    { .name = "Teardown",
      .executable = "teardown.exe",
      .num_options = 2,
      .options = application_450_options,
    },
    { .name = "SpaceEngine",
      .executable = "SpaceEngine.exe",
      .num_options = 1,
      .options = application_453_options,
    },
    { .name = "BETA CAE Systems - GL detect tool",
      .executable = "detect_opengl_tool",
      .num_options = 1,
      .options = application_455_options,
    },
    { .name = "BETA CAE Systems - ANSA",
      .executable = "ansa_linux_x86_64",
      .num_options = 1,
      .options = application_457_options,
    },
    { .name = "BETA CAE Systems - META",
      .executable = "meta_post_x86_64",
      .num_options = 2,
      .options = application_459_options,
    },
    { .name = "Black Geyser: Couriers of Darkness",
      .executable = "BlackGeyser.x86_64",
      .num_options = 1,
      .options = application_462_options,
    },
};

static const struct driconf_device device_419 = {
    .driver = "radeonsi",
    .num_engines = 0,
    .num_applications = 20,
    .applications = device_419_applications,
};


    
static const struct driconf_option application_465_options[] = {
    { .name = "mesa_glthread_app_profile", .value = "0" },
};

    
static const struct driconf_option application_467_options[] = {
    { .name = "glsl_correct_derivatives_after_discard", .value = "true" },
};

    
static const struct driconf_option application_469_options[] = {
    { .name = "mesa_extension_override", .value = "+GL_EXT_shader_image_load_store" },
};

    
static const struct driconf_option application_471_options[] = {
    { .name = "zink_emulate_point_smooth", .value = "true" },
};

    
static const struct driconf_option application_473_options[] = {
    { .name = "zink_emulate_point_smooth", .value = "true" },
};

    
static const struct driconf_option application_475_options[] = {
    { .name = "zink_emulate_point_smooth", .value = "true" },
};

    
static const struct driconf_option application_477_options[] = {
    { .name = "zink_shader_object_enable", .value = "true" },
};


static const struct driconf_application device_464_applications[] = {
    { .name = "Hyperdimension Neptunia Re;Birth1",
      .executable = "NeptuniaReBirth1.exe",
      .num_options = 1,
      .options = application_465_options,
    },
    { .name = "Borderlands 2 (Native, OpenGL, 32bit)",
      .executable = "Borderlands2",
      .num_options = 1,
      .options = application_467_options,
    },
    { .name = "SPECviewperf13",
      .executable = "viewperf",
      .num_options = 1,
      .options = application_469_options,
    },
    { .name = "Quake II",
      .executable = "quake2-engine",
      .num_options = 1,
      .options = application_471_options,
    },
    { .name = "Quake II (yamagi)",
      .executable = "yamagi-quake2",
      .num_options = 1,
      .options = application_473_options,
    },
    { .name = "Quake II (wine)",
      .executable = "quake2.exe",
      .num_options = 1,
      .options = application_475_options,
    },
    { .name = "Tomb Raider 2013",
      .executable = "TombRaider",
      .num_options = 1,
      .options = application_477_options,
    },
};

static const struct driconf_device device_464 = {
    .driver = "zink",
    .num_engines = 0,
    .num_applications = 7,
    .applications = device_464_applications,
};


    
static const struct driconf_option application_480_options[] = {
    { .name = "vs_position_always_invariant", .value = "true" },
};

    
static const struct driconf_option application_482_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_484_options[] = {
    { .name = "force_gl_vendor", .value = "X.Org" },
};

    
static const struct driconf_option application_486_options[] = {
    { .name = "force_gl_vendor", .value = "X.Org" },
};

    
static const struct driconf_option application_488_options[] = {
    { .name = "intel_disable_threaded_context", .value = "true" },
};

    
static const struct driconf_option application_490_options[] = {
    { .name = "intel_disable_threaded_context", .value = "true" },
};

    
static const struct driconf_option application_492_options[] = {
    { .name = "mesa_extension_override", .value = "+GL_EXT_shader_image_load_store" },
};


static const struct driconf_application device_479_applications[] = {
    { .name = "Middle Earth: Shadow of Mordor",
      .executable = "ShadowOfMordor",
      .num_options = 1,
      .options = application_480_options,
    },
    { .name = "glmark2",
      .executable = "glmark2",
      .num_options = 1,
      .options = application_482_options,
    },
    { .name = "Counter-Strike: Global Offensive",
      .executable = "csgo_linux64",
      .num_options = 1,
      .options = application_484_options,
    },
    { .name = "Insurgency",
      .executable = "insurgency_linux",
      .num_options = 1,
      .options = application_486_options,
    },
    { .name = "Amnesia Bunker",
      .executable = "AmnesiaTheBunker.exe",
      .num_options = 1,
      .options = application_488_options,
    },
    { .name = "Amnesia Bunker",
      .executable = "AmnesiaTheBunker_NoSteam.exe",
      .num_options = 1,
      .options = application_490_options,
    },
    { .name = "SPECviewperf13",
      .executable = "viewperf",
      .num_options = 1,
      .options = application_492_options,
    },
};

static const struct driconf_device device_479 = {
    .driver = "iris",
    .num_engines = 0,
    .num_applications = 7,
    .applications = device_479_applications,
};


    
static const struct driconf_option application_495_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_497_options[] = {
    { .name = "force_gl_vendor", .value = "X.Org" },
};

    
static const struct driconf_option application_499_options[] = {
    { .name = "force_gl_vendor", .value = "X.Org" },
};


static const struct driconf_application device_494_applications[] = {
    { .name = "glmark2",
      .executable = "glmark2",
      .num_options = 1,
      .options = application_495_options,
    },
    { .name = "Counter-Strike: Global Offensive",
      .executable = "csgo_linux64",
      .num_options = 1,
      .options = application_497_options,
    },
    { .name = "Insurgency",
      .executable = "insurgency_linux",
      .num_options = 1,
      .options = application_499_options,
    },
};

static const struct driconf_device device_494 = {
    .driver = "crocus",
    .num_engines = 0,
    .num_applications = 3,
    .applications = device_494_applications,
};
    
static const struct driconf_option engine_615_options[] = {
    { .name = "anv_force_filter_addr_rounding", .value = "true" },
};

    
static const struct driconf_option engine_617_options[] = {
    { .name = "anv_enable_buffer_comp", .value = "true" },
};

    
static const struct driconf_option engine_619_options[] = {
    { .name = "anv_enable_buffer_comp", .value = "true" },
};

    
static const struct driconf_option engine_621_options[] = {
    { .name = "anv_disable_drm_ccs_modifiers", .value = "true" },
};

    
static const struct driconf_option engine_623_options[] = {
    { .name = "vk_wsi_disable_unordered_submits", .value = "true" },
};

    
static const struct driconf_option engine_625_options[] = {
    { .name = "no_16bit", .value = "true" },
};

    
static const struct driconf_option engine_627_options[] = {
    { .name = "anv_disable_fcv", .value = "true" },
    { .name = "anv_assume_full_subgroups", .value = "16" },
};

    
static const struct driconf_option engine_630_options[] = {
    { .name = "compression_control_enabled", .value = "true" },
};

    
static const struct driconf_option engine_632_options[] = {
    { .name = "custom_border_colors_without_format", .value = "true" },
};

    
static const struct driconf_option engine_634_options[] = {
    { .name = "anv_state_cache_perf_fix", .value = "true" },
};


static const struct driconf_engine device_501_engines[] = {
    { .engine_name_match = "vkd3d|DXVK",
      .num_options = 1,
      .options = engine_615_options,
    },
    { .engine_name_match = "Source2",
      .num_options = 1,
      .options = engine_617_options,
    },
    { .engine_name_match = "vkd3d",
      .num_options = 1,
      .options = engine_619_options,
    },
    { .engine_name_match = "GTK",
      .num_options = 1,
      .options = engine_621_options,
    },
    { .engine_name_match = "GTK",
      .engine_versions = "16777216:16859138",
      .num_options = 1,
      .options = engine_623_options,
    },
    { .engine_name_match = "mesa zink",
      .num_options = 1,
      .options = engine_625_options,
    },
    { .engine_name_match = "UnrealEngine5.1",
      .num_options = 2,
      .options = engine_627_options,
    },
    { .engine_name_match = "vkd3d",
      .num_options = 1,
      .options = engine_630_options,
    },
    { .engine_name_match = "ANGLE",
      .num_options = 1,
      .options = engine_632_options,
    },
    { .engine_name_match = "vkd3d",
      .num_options = 1,
      .options = engine_634_options,
    },
};

    
static const struct driconf_option application_502_options[] = {
    { .name = "anv_assume_full_subgroups", .value = "32" },
};

    
static const struct driconf_option application_504_options[] = {
    { .name = "intel_storage_cache_policy_wt", .value = "true" },
};

    
static const struct driconf_option application_506_options[] = {
    { .name = "anv_assume_full_subgroups_with_barrier", .value = "true" },
};

    
static const struct driconf_option application_508_options[] = {
    { .name = "hasvk_report_vk_1_3_version", .value = "true" },
};

    
static const struct driconf_option application_510_options[] = {
    { .name = "anv_assume_full_subgroups", .value = "32" },
};

    
static const struct driconf_option application_512_options[] = {
    { .name = "anv_assume_full_subgroups", .value = "32" },
    { .name = "fp64_workaround_enabled", .value = "true" },
};

    
static const struct driconf_option application_515_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_517_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_519_options[] = {
    { .name = "anv_large_workgroup_non_coherent_image_workaround", .value = "true" },
};

    
static const struct driconf_option application_521_options[] = {
    { .name = "anv_large_workgroup_non_coherent_image_workaround", .value = "true" },
};

    
static const struct driconf_option application_523_options[] = {
    { .name = "anv_assume_full_subgroups_with_shared_memory", .value = "true" },
};

    
static const struct driconf_option application_525_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_527_options[] = {
    { .name = "anv_sample_mask_out_opengl_behaviour", .value = "true" },
};

    
static const struct driconf_option application_529_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_531_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_533_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_535_options[] = {
    { .name = "vk_lower_terminate_to_discard", .value = "true" },
};

    
static const struct driconf_option application_537_options[] = {
    { .name = "anv_disable_link_time_optimization", .value = "true" },
};

    
static const struct driconf_option application_539_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_541_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_543_options[] = {
    { .name = "limit_trig_input_range", .value = "true" },
};

    
static const struct driconf_option application_545_options[] = {
    { .name = "shader_spilling_rate", .value = "15" },
};

    
static const struct driconf_option application_547_options[] = {
    { .name = "fake_sparse", .value = "true" },
};

    
static const struct driconf_option application_549_options[] = {
    { .name = "fake_sparse", .value = "true" },
};

    
static const struct driconf_option application_551_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
    { .name = "shader_spilling_rate", .value = "0" },
};

    
static const struct driconf_option application_554_options[] = {
    { .name = "anv_slm_robust_vectorization", .value = "true" },
};

    
static const struct driconf_option application_556_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_558_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
    { .name = "intel_storage_cache_policy_wt", .value = "true" },
};

    
static const struct driconf_option application_561_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_563_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_565_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_567_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_569_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_571_options[] = {
    { .name = "intel_storage_cache_policy_wt", .value = "true" },
};

    
static const struct driconf_option application_573_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_575_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
    { .name = "anv_write_lookup_maps_unconditionally", .value = "true" },
};

    
static const struct driconf_option application_578_options[] = {
    { .name = "anv_disable_fcv", .value = "true" },
};

    
static const struct driconf_option application_580_options[] = {
    { .name = "anv_brw_disable_subgroup_size_control", .value = "true" },
};

    
static const struct driconf_option application_582_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_584_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_586_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_588_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_590_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_592_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_594_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_596_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_598_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_600_options[] = {
    { .name = "fp64_workaround_enabled", .value = "true" },
};

    
static const struct driconf_option application_602_options[] = {
    { .name = "anv_upper_bound_descriptor_pool_sampler", .value = "true" },
};

    
static const struct driconf_option application_604_options[] = {
    { .name = "anv_fake_nonlocal_memory", .value = "true" },
    { .name = "anv_enable_opt_divergent_atomics", .value = "1" },
};

    
static const struct driconf_option application_607_options[] = {
    { .name = "anv_enable_opt_divergent_atomics", .value = "1" },
};

    
static const struct driconf_option application_609_options[] = {
    { .name = "anv_enable_opt_divergent_atomics", .value = "1" },
};

    
static const struct driconf_option application_611_options[] = {
    { .name = "anv_enable_opt_divergent_atomics", .value = "1" },
};

    
static const struct driconf_option application_613_options[] = {
    { .name = "anv_barrier_post_untyped_clear_shader", .value = "true" },
};


static const struct driconf_application device_501_applications[] = {
    { .name = "Aperture Desk Job",
      .executable = "deskjob",
      .num_options = 1,
      .options = application_502_options,
    },
    { .name = "A Plague Tale : Requiem",
      .executable = "APlagueTaleRequiem_x64.exe",
      .num_options = 1,
      .options = application_504_options,
    },
    { .name = "Breaking Limit",
      .executable = "GPUScoreVulkan",
      .num_options = 1,
      .options = application_506_options,
    },
    { .name = "Brawlhalla",
      .executable = "BrawlhallaGame.exe",
      .num_options = 1,
      .options = application_508_options,
    },
    { .name = "Detroit: Become Human",
      .executable = "DetroitBecomeHuman.exe",
      .num_options = 1,
      .options = application_510_options,
    },
    { .name = "DOOMEternal",
      .executable = "DOOMEternalx64vk.exe",
      .num_options = 2,
      .options = application_512_options,
    },
    { .name = "Drive Beyond Horizons",
      .executable = "DriveBeyondHorizons.exe",
      .num_options = 1,
      .options = application_515_options,
    },
    { .name = "Farming Simulator 2022",
      .executable = "FarmingSimulator2022Game.exe",
      .num_options = 1,
      .options = application_517_options,
    },
    { .name = "The Last Of Us Part I",
      .executable = "tlou-i.exe",
      .num_options = 1,
      .options = application_519_options,
    },
    { .name = "The Last Of Us Part II Remastered",
      .executable = "tlou-ii.exe",
      .num_options = 1,
      .options = application_521_options,
    },
    { .name = "RESIDENT EVIL 2",
      .executable = "re2.exe",
      .num_options = 1,
      .options = application_523_options,
    },
    { .name = "Wolfenstein: Youngblood(x64vk)",
      .executable = "Youngblood_x64vk.exe",
      .num_options = 1,
      .options = application_525_options,
    },
    { .name = "Batman™: Arkham Knight",
      .executable = "BatmanAK.exe",
      .num_options = 1,
      .options = application_527_options,
    },
    { .name = "Company of Heroes 3",
      .executable = "RelicCoH3.exe",
      .num_options = 1,
      .options = application_529_options,
    },
    { .name = "Rise of the Tomb Raider",
      .executable = "RiseOfTheTombRaider",
      .num_options = 1,
      .options = application_531_options,
    },
    { .name = "Rise of the Tomb Raider",
      .executable = "ROTTR.exe",
      .num_options = 1,
      .options = application_533_options,
    },
    { .name = "Sky: Children of the Light",
      .executable = "Sky.exe",
      .num_options = 1,
      .options = application_535_options,
    },
    { .name = "Monster Hunter Wilds",
      .executable = "MonsterHunterWilds.exe",
      .num_options = 1,
      .options = application_537_options,
    },
    { .name = "NieR Replicant ver.1.22474487139",
      .executable = "NieR Replicant ver.1.22474487139.exe",
      .num_options = 1,
      .options = application_539_options,
    },
    { .name = "NieR:Automata",
      .executable = "NieRAutomata.exe",
      .num_options = 1,
      .options = application_541_options,
    },
    { .name = "Valheim",
      .executable = "valheim.x86_64",
      .num_options = 1,
      .options = application_543_options,
    },
    { .name = "Cyberpunk 2077",
      .executable = "Cyberpunk2077.exe",
      .num_options = 1,
      .options = application_545_options,
    },
    { .name = "Elden Ring",
      .executable = "eldenring.exe",
      .num_options = 1,
      .options = application_547_options,
    },
    { .name = "Armored Core 6",
      .executable = "armoredcore6.exe",
      .num_options = 1,
      .options = application_549_options,
    },
    { .name = "Marvel's Spider-Man Remastered",
      .executable = "Spider-Man.exe",
      .num_options = 2,
      .options = application_551_options,
    },
    { .name = "Hitman 2",
      .executable = "hitman2.exe",
      .num_options = 1,
      .options = application_554_options,
    },
    { .name = "Hitman 3",
      .executable = "hitman3.exe",
      .num_options = 1,
      .options = application_556_options,
    },
    { .name = "Hogwarts Legacy",
      .executable = "HogwartsLegacy.exe",
      .num_options = 2,
      .options = application_558_options,
    },
    { .name = "DEATH STRANDING",
      .executable = "ds.exe",
      .num_options = 1,
      .options = application_561_options,
    },
    { .name = "Diablo IV",
      .executable = "Diablo IV.exe",
      .num_options = 1,
      .options = application_563_options,
    },
    { .name = "Faaast Penguin",
      .executable = "FaaastPenguinClient.exe",
      .num_options = 1,
      .options = application_565_options,
    },
    { .name = "Satisfactory Steam",
      .executable = "FactoryGameSteam-Win64-Shipping.exe",
      .num_options = 1,
      .options = application_567_options,
    },
    { .name = "Satisfactory EGS",
      .executable = "FactoryGameEGS-Win64-Shipping.exe",
      .num_options = 1,
      .options = application_569_options,
    },
    { .name = "Space Engineers 2",
      .executable = "SpaceEngineers2.exe",
      .num_options = 1,
      .options = application_571_options,
    },
    { .name = "Dying Light 2",
      .executable = "DyingLightGame_x64_rwdi.exe",
      .num_options = 1,
      .options = application_573_options,
    },
    { .name = "Witcher3",
      .executable = "witcher3.exe",
      .num_options = 2,
      .options = application_575_options,
    },
    { .name = "Baldur's Gate 3",
      .executable = "bg3.exe",
      .num_options = 1,
      .options = application_578_options,
    },
    { .name = "Baldur's Gate 3",
      .executable = "bg3",
      .num_options = 1,
      .options = application_580_options,
    },
    { .name = "The Finals",
      .executable = "Discovery.exe",
      .num_options = 1,
      .options = application_582_options,
    },
    { .name = "Palworld2",
      .executable = "Palworld-Win64-Shipping.exe",
      .num_options = 1,
      .options = application_584_options,
    },
    { .name = "Red Dead Redemption 2",
      .executable = "RDR2.exe",
      .num_options = 1,
      .options = application_586_options,
    },
    { .name = "Shadow of the Tomb Raider",
      .executable = "SOTTR.exe",
      .num_options = 1,
      .options = application_588_options,
    },
    { .name = "Silent Hill 2",
      .executable = "SHProto-Win64-Shipping.exe",
      .num_options = 1,
      .options = application_590_options,
    },
    { .name = "Marvel Rivals",
      .executable = "Marvel-Win64-Shipping.exe",
      .num_options = 1,
      .options = application_592_options,
    },
    { .name = "Bellwright",
      .executable = "BellwrightGame-Win64-Shipping.exe",
      .num_options = 1,
      .options = application_594_options,
    },
    { .name = "A Game About Digging A Hole",
      .executable = "DiggingGame.exe",
      .num_options = 1,
      .options = application_596_options,
    },
    { .name = "Jusant",
      .executable = "ASC-Win64-Shipping.exe",
      .num_options = 1,
      .options = application_598_options,
    },
    { .name = "DIRT 5",
      .executable = "DIRT5.exe",
      .num_options = 1,
      .options = application_600_options,
    },
    { .name = "X4 Foundations",
      .executable = "X4",
      .num_options = 1,
      .options = application_602_options,
    },
    { .name = "Total War: WARHAMMER III",
      .executable = "TotalWarhammer3",
      .num_options = 2,
      .options = application_604_options,
    },
    { .name = "Total War: WARHAMMER III",
      .executable = "Warhammer3.exe",
      .num_options = 1,
      .options = application_607_options,
    },
    { .name = "The Elder Scrolls IV: Oblivion Remastered",
      .executable = "OblivionRemastered-Win.exe",
      .num_options = 1,
      .options = application_609_options,
    },
    { .name = "Call of Duty: Black Ops III",
      .executable = "BlackOps3.exe",
      .num_options = 1,
      .options = application_611_options,
    },
    { .name = "Horizon Forbidden West",
      .executable = "HorizonForbiddenWest.exe",
      .num_options = 1,
      .options = application_613_options,
    },
};

static const struct driconf_device device_501 = {
    .driver = "anv",
    .num_engines = 10,
    .engines = device_501_engines,
    .num_applications = 54,
    .applications = device_501_applications,
};


    
static const struct driconf_option application_637_options[] = {
    { .name = "dzn_enable_8bit_loads_stores", .value = "true" },
    { .name = "dzn_claim_wide_lines", .value = "true" },
};

    
static const struct driconf_option application_640_options[] = {
    { .name = "dzn_claim_wide_lines", .value = "true" },
};

    
static const struct driconf_option application_642_options[] = {
    { .name = "dzn_disable", .value = "true" },
};

    
static const struct driconf_option application_644_options[] = {
    { .name = "dzn_disable", .value = "true" },
};


static const struct driconf_application device_636_applications[] = {
    { .name = "DOOMEternal",
      .executable = "DOOMEternalx64vk.exe",
      .num_options = 2,
      .options = application_637_options,
    },
    { .name = "No Man's Sky",
      .executable = "NMS.exe",
      .num_options = 1,
      .options = application_640_options,
    },
    { .name = "Red Dead Redemption 2",
      .executable = "RDR2.exe",
      .num_options = 1,
      .options = application_642_options,
    },
    { .name = "Baldur's Gate 3",
      .executable = "bg3.exe",
      .num_options = 1,
      .options = application_644_options,
    },
};

static const struct driconf_device device_636 = {
    .driver = "dzn",
    .num_engines = 0,
    .num_applications = 4,
    .applications = device_636_applications,
};


    
static const struct driconf_option application_647_options[] = {
    { .name = "mesa_extension_override", .value = "+GL_ARB_texture_view" },
};


static const struct driconf_application device_646_applications[] = {
    { .name = "Blender",
      .executable = "blender.exe",
      .num_options = 1,
      .options = application_647_options,
    },
};

static const struct driconf_device device_646 = {
    .driver = "d3d12",
    .num_engines = 0,
    .num_applications = 1,
    .applications = device_646_applications,
};


    
static const struct driconf_option application_650_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_652_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_654_options[] = {
    { .name = "nvk_app_layer", .value = "metroexodus" },
};

    
static const struct driconf_option application_656_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};

    
static const struct driconf_option application_658_options[] = {
    { .name = "force_vk_vendor", .value = "-1" },
};


static const struct driconf_application device_649_applications[] = {
    { .name = "Artifact Classic",
      .executable = "dcg",
      .num_options = 1,
      .options = application_650_options,
    },
    { .name = "Deep Rock Galactic",
      .executable = "FSD.exe",
      .num_options = 1,
      .options = application_652_options,
    },
    { .name = "Metro Exodus (Linux native)",
      .application_name_match = "metroexodus",
      .num_options = 1,
      .options = application_654_options,
    },
    { .name = "No Man's Sky",
      .executable = "NMS.exe",
      .num_options = 1,
      .options = application_656_options,
    },
    { .name = "X4 Foundations",
      .executable = "X4",
      .num_options = 1,
      .options = application_658_options,
    },
};

static const struct driconf_device device_649 = {
    .driver = "nvk",
    .num_engines = 0,
    .num_applications = 5,
    .applications = device_649_applications,
};


    
static const struct driconf_option application_661_options[] = {
    { .name = "r300_nohiz", .value = "true" },
    { .name = "r300_nozmask", .value = "true" },
};

    
static const struct driconf_option application_664_options[] = {
    { .name = "r300_nohiz", .value = "true" },
    { .name = "r300_nozmask", .value = "true" },
};

    
static const struct driconf_option application_667_options[] = {
    { .name = "r300_nohiz", .value = "true" },
    { .name = "r300_nozmask", .value = "true" },
};

    
static const struct driconf_option application_670_options[] = {
    { .name = "r300_nohiz", .value = "true" },
    { .name = "r300_nozmask", .value = "true" },
};

    
static const struct driconf_option application_673_options[] = {
    { .name = "r300_nohiz", .value = "true" },
    { .name = "r300_nozmask", .value = "true" },
};

    
static const struct driconf_option application_676_options[] = {
    { .name = "r300_nohiz", .value = "true" },
    { .name = "r300_nozmask", .value = "true" },
};

    
static const struct driconf_option application_679_options[] = {
    { .name = "r300_nohiz", .value = "true" },
    { .name = "r300_nozmask", .value = "true" },
};

    
static const struct driconf_option application_682_options[] = {
    { .name = "r300_nohiz", .value = "true" },
    { .name = "r300_nozmask", .value = "true" },
};

    
static const struct driconf_option application_685_options[] = {
    { .name = "r300_ffmath", .value = "true" },
};

    
static const struct driconf_option application_687_options[] = {
    { .name = "r300_ffmath", .value = "true" },
};


static const struct driconf_application device_660_applications[] = {
    { .name = "X server",
      .executable = "X",
      .num_options = 2,
      .options = application_661_options,
    },
    { .name = "X server",
      .executable = "Xorg",
      .num_options = 2,
      .options = application_664_options,
    },
    { .name = "Compiz",
      .executable = "check_gl_texture_size",
      .num_options = 2,
      .options = application_667_options,
    },
    { .name = "Compiz",
      .executable = "Compiz",
      .num_options = 2,
      .options = application_670_options,
    },
    { .name = "GNOME Shell",
      .executable = "gnome-session-check-accelerated-helper",
      .num_options = 2,
      .options = application_673_options,
    },
    { .name = "GNOME Shell",
      .executable = "gnome-shell",
      .num_options = 2,
      .options = application_676_options,
    },
    { .name = "KWin",
      .executable = "kwin_opengl_test",
      .num_options = 2,
      .options = application_679_options,
    },
    { .name = "KWin",
      .executable = "kwin",
      .num_options = 2,
      .options = application_682_options,
    },
    { .name = "Unigine Tropics",
      .executable = "Tropics",
      .num_options = 1,
      .options = application_685_options,
    },
    { .name = "Oilrush",
      .executable = "Oilrush_x86",
      .num_options = 1,
      .options = application_687_options,
    },
};

static const struct driconf_device device_660 = {
    .driver = "r300",
    .num_engines = 0,
    .num_applications = 10,
    .applications = device_660_applications,
};


    
static const struct driconf_option application_690_options[] = {
    { .name = "mesa_extension_override", .value = "-GL_ARB_shader_image_load_store" },
};


static const struct driconf_application device_689_applications[] = {
    { .name = "Tomb Raider 2013",
      .executable = "TombRaider",
      .num_options = 1,
      .options = application_690_options,
    },
};

static const struct driconf_device device_689 = {
    .driver = "r600",
    .num_engines = 0,
    .num_applications = 1,
    .applications = device_689_applications,
};


    
static const struct driconf_option application_693_options[] = {
    { .name = "format_l8_srgb_enable_readback", .value = "true" },
};


static const struct driconf_application device_692_applications[] = {
    { .name = "Counter-Strike Global Offensive",
      .executable = "csgo_linux64",
      .num_options = 1,
      .options = application_693_options,
    },
};

static const struct driconf_device device_692 = {
    .driver = "virtio_gpu",
    .num_engines = 0,
    .num_applications = 1,
    .applications = device_692_applications,
};


    
static const struct driconf_option application_696_options[] = {
    { .name = "force_gl_renderer", .value = "Adreno (TM) 618" },
    { .name = "force_gl_vendor", .value = "Qualcomm" },
};

    
static const struct driconf_option application_699_options[] = {
    { .name = "force_gl_renderer", .value = "Adreno (TM) 630" },
    { .name = "force_gl_vendor", .value = "Qualcomm" },
};

    
static const struct driconf_option application_702_options[] = {
    { .name = "force_gl_renderer", .value = "Adreno (TM) 618" },
    { .name = "force_gl_vendor", .value = "Qualcomm" },
};

    
static const struct driconf_option application_705_options[] = {
    { .name = "force_gl_renderer", .value = "Adreno (TM) 630" },
    { .name = "force_gl_vendor", .value = "Qualcomm" },
};


static const struct driconf_application device_695_applications[] = {
    { .name = "Call of Duty Mobile",
      .executable = "com.activision.callofduty.shooter",
      .num_options = 2,
      .options = application_696_options,
    },
    { .name = "Asphalt 8",
      .executable = "com.gameloft.android.ANMP.GloftA8HM",
      .num_options = 2,
      .options = application_699_options,
    },
    { .name = "Asphalt 9",
      .executable = "com.gameloft.android.ANMP.GloftA9HM",
      .num_options = 2,
      .options = application_702_options,
    },
    { .name = "PUBG Mobile",
      .executable = "com.tencent.ig",
      .num_options = 2,
      .options = application_705_options,
    },
};

static const struct driconf_device device_695 = {
    .driver = "msm",
    .device = "FD618",
    .num_engines = 0,
    .num_applications = 4,
    .applications = device_695_applications,
};


    
static const struct driconf_option application_709_options[] = {
    { .name = "force_gl_vendor", .value = "angleisbroken" },
};

    
static const struct driconf_option application_711_options[] = {
    { .name = "force_gl_vendor", .value = "angleisbroken" },
};

    
static const struct driconf_option application_713_options[] = {
    { .name = "force_gl_vendor", .value = "angleisbroken" },
};

    
static const struct driconf_option application_715_options[] = {
    { .name = "force_gl_vendor", .value = "angleisbroken" },
};

    
static const struct driconf_option application_717_options[] = {
    { .name = "force_gl_vendor", .value = "angleisbroken" },
};

    
static const struct driconf_option application_719_options[] = {
    { .name = "force_gl_vendor", .value = "angleisbroken" },
};

    
static const struct driconf_option application_721_options[] = {
    { .name = "force_gl_vendor", .value = "angleisbroken" },
};

    
static const struct driconf_option application_723_options[] = {
    { .name = "disable_explicit_sync_heuristic", .value = "true" },
};


static const struct driconf_application device_708_applications[] = {
    { .name = "Chromium",
      .executable = "chromium",
      .num_options = 1,
      .options = application_709_options,
    },
    { .name = "Chromium",
      .executable = "chromium-browser",
      .num_options = 1,
      .options = application_711_options,
    },
    { .name = "Chromium",
      .executable = "chrome",
      .num_options = 1,
      .options = application_713_options,
    },
    { .name = "VS Code",
      .executable = "code",
      .num_options = 1,
      .options = application_715_options,
    },
    { .name = "element-desktop",
      .executable = "element-desktop",
      .num_options = 1,
      .options = application_717_options,
    },
    { .name = "vivaldi-bin",
      .executable = "vivaldi-bin",
      .num_options = 1,
      .options = application_719_options,
    },
    { .name = "code",
      .executable = "vivaldi-bin",
      .num_options = 1,
      .options = application_721_options,
    },
    { .name = "Xwayland",
      .executable = "Xwayland",
      .num_options = 1,
      .options = application_723_options,
    },
};

static const struct driconf_device device_708 = {
    .driver = "msm",
    .num_engines = 0,
    .num_applications = 8,
    .applications = device_708_applications,
};
    
static const struct driconf_option engine_736_options[] = {
    { .name = "tu_allow_oob_indirect_ubo_loads", .value = "true" },
};

    
static const struct driconf_option engine_738_options[] = {
    { .name = "tu_disable_d24s8_border_color_workaround", .value = "true" },
    { .name = "tu_use_tex_coord_round_nearest_even_mode", .value = "true" },
    { .name = "tu_emulate_alpha_to_coverage", .value = "true" },
    { .name = "tu_autotune_algorithm", .value = "prefer_sysmem" },
};

    
static const struct driconf_option engine_743_options[] = {
    { .name = "tu_enable_softfloat32", .value = "true" },
};


static const struct driconf_engine device_725_engines[] = {
    { .engine_name_match = "DXVK",
      .engine_versions = "0:8400896",
      .num_options = 1,
      .options = engine_736_options,
    },
    { .engine_name_match = "DXVK|vkd3d",
      .num_options = 4,
      .options = engine_738_options,
    },
    { .engine_name_match = "vkd3d",
      .num_options = 1,
      .options = engine_743_options,
    },
};

    
static const struct driconf_option application_726_options[] = {
    { .name = "tu_ignore_frag_depth_direction", .value = "true" },
};

    
static const struct driconf_option application_728_options[] = {
    { .name = "tu_allow_oob_indirect_ubo_loads", .value = "true" },
};

    
static const struct driconf_option application_730_options[] = {
    { .name = "tu_ignore_frag_depth_direction", .value = "true" },
};

    
static const struct driconf_option application_732_options[] = {
    { .name = "tu_emulate_alpha_to_coverage", .value = "true" },
};

    
static const struct driconf_option application_734_options[] = {
    { .name = "tu_restrict_subgroup_size_64", .value = "true" },
};


static const struct driconf_application device_725_applications[] = {
    { .name = "Sons Of The Forest",
      .executable = "SonsOfTheForest.exe",
      .num_options = 1,
      .options = application_726_options,
    },
    { .name = "Yooka-Laylee",
      .application_name_match = "YookaLaylee.x86_64",
      .num_options = 1,
      .options = application_728_options,
    },
    { .name = "Creed: Rise to Glory",
      .executable = "Creed-Win64-Shipping.exe",
      .num_options = 1,
      .options = application_730_options,
    },
    { .name = "Half-Life: Alyx",
      .application_name_match = "hlvr",
      .num_options = 1,
      .options = application_732_options,
    },
    { .name = "No Man's Sky",
      .application_name_match = "No Man's Sky",
      .num_options = 1,
      .options = application_734_options,
    },
};

static const struct driconf_device device_725 = {
    .driver = "turnip",
    .num_engines = 3,
    .engines = device_725_engines,
    .num_applications = 5,
    .applications = device_725_applications,
};


    
static const struct driconf_option application_746_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_748_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_750_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_752_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_754_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_756_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_758_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_760_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_762_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_764_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_766_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};

    
static const struct driconf_option application_768_options[] = {
    { .name = "force_gl_renderer", .value = "AGX G13/G14" },
};


static const struct driconf_application device_745_applications[] = {
    { .name = "Firefox",
      .executable = "firefox",
      .num_options = 1,
      .options = application_746_options,
    },
    { .name = "Firefox ESR",
      .executable = "firefox-esr",
      .num_options = 1,
      .options = application_748_options,
    },
    { .name = "Chromium",
      .executable = "chromium",
      .num_options = 1,
      .options = application_750_options,
    },
    { .name = "Chromium",
      .executable = "chromium-browser",
      .num_options = 1,
      .options = application_752_options,
    },
    { .name = "Google Chrome",
      .executable = "chrome",
      .num_options = 1,
      .options = application_754_options,
    },
    { .name = "vivaldi-bin",
      .executable = "vivaldi-bin",
      .num_options = 1,
      .options = application_756_options,
    },
    { .name = "Iceweasel",
      .executable = "iceweasel",
      .num_options = 1,
      .options = application_758_options,
    },
    { .name = "Epiphany",
      .executable = "epiphany",
      .num_options = 1,
      .options = application_760_options,
    },
    { .name = "Konqueror",
      .executable = "konqueror",
      .num_options = 1,
      .options = application_762_options,
    },
    { .name = "Falkon",
      .executable = "falkon",
      .num_options = 1,
      .options = application_764_options,
    },
    { .name = "Seamonkey",
      .executable = "seamonkey",
      .num_options = 1,
      .options = application_766_options,
    },
    { .name = "Waterfox",
      .executable = "waterfox",
      .num_options = 1,
      .options = application_768_options,
    },
};

static const struct driconf_device device_745 = {
    .driver = "asahi",
    .num_engines = 0,
    .num_applications = 12,
    .applications = device_745_applications,
};
    
static const struct driconf_option engine_771_options[] = {
    { .name = "hk_disable_border_emulation", .value = "true" },
    { .name = "hk_enable_vertex_pipeline_stores_atomics", .value = "true" },
};

    
static const struct driconf_option engine_774_options[] = {
    { .name = "hk_fake_minmax", .value = "true" },
    { .name = "hk_image_view_min_lod", .value = "true" },
};


static const struct driconf_engine device_770_engines[] = {
    { .engine_name_match = "DXVK|vkd3d",
      .num_options = 2,
      .options = engine_771_options,
    },
    { .engine_name_match = "vkd3d",
      .num_options = 2,
      .options = engine_774_options,
    },
};



static const struct driconf_device device_770 = {
    .driver = "hk",
    .num_engines = 2,
    .engines = device_770_engines,
    .num_applications = 0,
};
    
static const struct driconf_option engine_778_options[] = {
    { .name = "pan_enable_vertex_pipeline_stores_atomics", .value = "true" },
};


static const struct driconf_engine device_777_engines[] = {
    { .engine_name_match = "ANGLE",
      .num_options = 1,
      .options = engine_778_options,
    },
};



static const struct driconf_device device_777 = {
    .driver = "panvk",
    .num_engines = 1,
    .engines = device_777_engines,
    .num_applications = 0,
};


    
static const struct driconf_option application_781_options[] = {
    { .name = "allow_rgb16_configs", .value = "false" },
};


static const struct driconf_application device_780_applications[] = {
    { .name = "all-default",
      .num_options = 1,
      .options = application_781_options,
    },
};

static const struct driconf_device device_780 = {
    .driver = "panfrost",
    .num_engines = 0,
    .num_applications = 1,
    .applications = device_780_applications,
};

static const struct driconf_device *driconf[] = {
    &device_1,
    &device_412,
    &device_419,
    &device_464,
    &device_479,
    &device_494,
    &device_501,
    &device_636,
    &device_646,
    &device_649,
    &device_660,
    &device_689,
    &device_692,
    &device_695,
    &device_708,
    &device_725,
    &device_745,
    &device_770,
    &device_777,
    &device_780,
};
