/* MC023CG */ 

XI_status = xiGetParamInt(xiH,"exposure",&systemInteger); 
printf("%s %d \n", "exposure",systemInteger); 
status = setIntegerParam(GC_I_exposure, systemInteger); 

XI_status = xiGetParamInt(xiH,"gain_selector",&systemInteger); 
printf("%s %d \n", "gain_selector",systemInteger); 
status = setIntegerParam(GC_E_gain_selector, systemInteger); 

XI_status = xiGetParamFloat(xiH,"gain",&systemFloat); 
printf("%s %f \n", "gain",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_gain, systemDouble); 

XI_status = xiGetParamInt(xiH,"downsampling",&systemInteger); 
printf("%s %d \n", "downsampling",systemInteger); 
status = setIntegerParam(GC_E_downsampling, systemInteger); 

XI_status = xiGetParamInt(xiH,"downsampling_type",&systemInteger); 
printf("%s %d \n", "downsampling_type",systemInteger); 
status = setIntegerParam(GC_E_downsampling_type, systemInteger); 

XI_status = xiGetParamInt(xiH,"imgdataformat",&systemInteger); 
printf("%s %d \n", "imgdataformat",systemInteger); 
status = setIntegerParam(GC_E_imgdataformat, systemInteger); 

XI_status = xiGetParamInt(xiH,"shutter_type",&systemInteger); 
printf("%s %d \n", "shutter_type",systemInteger); 
status = setIntegerParam(GC_E_shutter_type, systemInteger); 

XI_status = xiGetParamInt(xiH,"sensor_taps",&systemInteger); 
printf("%s %d \n", "sensor_taps",systemInteger); 
status = setIntegerParam(GC_E_sensor_taps, systemInteger); 

XI_status = xiGetParamInt(xiH,"aeag",&systemInteger); 
printf("%s %d \n", "aeag",systemInteger); 
status = setIntegerParam(GC_B_aeag, systemInteger); 

XI_status = xiGetParamInt(xiH,"aeag_roi_offset_x",&systemInteger); 
printf("%s %d \n", "aeag_roi_offset_x",systemInteger); 
status = setIntegerParam(GC_I_aeag_roi_offset_x, systemInteger); 

XI_status = xiGetParamInt(xiH,"aeag_roi_offset_y",&systemInteger); 
printf("%s %d \n", "aeag_roi_offset_y",systemInteger); 
status = setIntegerParam(GC_I_aeag_roi_offset_y, systemInteger); 

XI_status = xiGetParamInt(xiH,"aeag_roi_width",&systemInteger); 
printf("%s %d \n", "aeag_roi_width",systemInteger); 
status = setIntegerParam(GC_I_aeag_roi_width, systemInteger); 

XI_status = xiGetParamInt(xiH,"aeag_roi_height",&systemInteger); 
printf("%s %d \n", "aeag_roi_height",systemInteger); 
status = setIntegerParam(GC_I_aeag_roi_height, systemInteger); 

XI_status = xiGetParamInt(xiH,"bpc_list_selector",&systemInteger); 
printf("%s %d \n", "bpc_list_selector",systemInteger); 
status = setIntegerParam(GC_E_bpc_list_selector, systemInteger); 

XI_status = xiGetParamInt(xiH,"bpc",&systemInteger); 
printf("%s %d \n", "bpc",systemInteger); 
status = setIntegerParam(GC_B_bpc, systemInteger); 

XI_status = xiGetParamInt(xiH,"column_fpn_correction",&systemInteger); 
printf("%s %d \n", "column_fpn_correction",systemInteger); 
status = setIntegerParam(GC_B_column_fpn_correction, systemInteger); 

XI_status = xiGetParamInt(xiH,"row_fpn_correction",&systemInteger); 
printf("%s %d \n", "row_fpn_correction",systemInteger); 
status = setIntegerParam(GC_B_row_fpn_correction, systemInteger); 

XI_status = xiGetParamInt(xiH,"auto_wb",&systemInteger); 
printf("%s %d \n", "auto_wb",systemInteger); 
status = setIntegerParam(GC_B_auto_wb, systemInteger); 

XI_status = xiGetParamInt(xiH,"manual_wb",&systemInteger); 
printf("%s %d \n", "manual_wb",systemInteger); 
status = setIntegerParam(GC_C_manual_wb, systemInteger); 

XI_status = xiGetParamFloat(xiH,"wb_kr",&systemFloat); 
printf("%s %f \n", "wb_kr",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_wb_kr, systemDouble); 

XI_status = xiGetParamFloat(xiH,"wb_kg",&systemFloat); 
printf("%s %f \n", "wb_kg",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_wb_kg, systemDouble); 

XI_status = xiGetParamFloat(xiH,"wb_kb",&systemFloat); 
printf("%s %f \n", "wb_kb",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_wb_kb, systemDouble); 

XI_status = xiGetParamInt(xiH,"image_black_level",&systemInteger); 
printf("%s %d \n", "image_black_level",systemInteger); 
status = setIntegerParam(GC_I_image_black_level, systemInteger); 

XI_status = xiGetParamInt(xiH,"offsetX",&systemInteger); 
printf("%s %d \n", "offsetX",systemInteger); 
status = setIntegerParam(GC_I_offsetX, systemInteger); 

XI_status = xiGetParamInt(xiH,"offsetY",&systemInteger); 
printf("%s %d \n", "offsetY",systemInteger); 
status = setIntegerParam(GC_I_offsetY, systemInteger); 

XI_status = xiGetParamInt(xiH,"width",&systemInteger); 
printf("%s %d \n", "width",systemInteger); 
status = setIntegerParam(GC_I_width, systemInteger); 

XI_status = xiGetParamInt(xiH,"height",&systemInteger); 
printf("%s %d \n", "height",systemInteger); 
status = setIntegerParam(GC_I_height, systemInteger); 

XI_status = xiGetParamInt(xiH,"region_selector",&systemInteger); 
printf("%s %d \n", "region_selector",systemInteger); 
status = setIntegerParam(GC_I_region_selector, systemInteger); 

XI_status = xiGetParamInt(xiH,"region_mode",&systemInteger); 
printf("%s %d \n", "region_mode",systemInteger); 
status = setIntegerParam(GC_B_region_mode, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr",&systemInteger); 
printf("%s %d \n", "hdr",systemInteger); 
status = setIntegerParam(GC_B_hdr, systemInteger); 

XI_status = xiGetParamInt(xiH,"ffc",&systemInteger); 
printf("%s %d \n", "ffc",systemInteger); 
status = setIntegerParam(GC_B_ffc, systemInteger); 

XI_status = xiGetParamString(xiH,"ffc_flat_field_file_name",systemString, sizeof(systemString)); 
printf("%s %s \n", "ffc_flat_field_file_name",systemString); 
status = setStringParam(GC_S_ffc_flat_field_file_name, systemString); 

XI_status = xiGetParamString(xiH,"ffc_dark_field_file_name",systemString, sizeof(systemString)); 
printf("%s %s \n", "ffc_dark_field_file_name",systemString); 
status = setStringParam(GC_S_ffc_dark_field_file_name, systemString); 

XI_status = xiGetParamInt(xiH,"horizontal_flip",&systemInteger); 
printf("%s %d \n", "horizontal_flip",systemInteger); 
status = setIntegerParam(GC_B_horizontal_flip, systemInteger); 

XI_status = xiGetParamInt(xiH,"vertical_flip",&systemInteger); 
printf("%s %d \n", "vertical_flip",systemInteger); 
status = setIntegerParam(GC_B_vertical_flip, systemInteger); 

XI_status = xiGetParamFloat(xiH,"exp_priority",&systemFloat); 
printf("%s %f \n", "exp_priority",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_exp_priority, systemDouble); 

XI_status = xiGetParamInt(xiH,"ae_max_limit",&systemInteger); 
printf("%s %d \n", "ae_max_limit",systemInteger); 
status = setIntegerParam(GC_I_ae_max_limit, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ag_max_limit",&systemFloat); 
printf("%s %f \n", "ag_max_limit",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ag_max_limit, systemDouble); 

XI_status = xiGetParamFloat(xiH,"aeag_level",&systemFloat); 
printf("%s %f \n", "aeag_level",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_aeag_level, systemDouble); 

XI_status = xiGetParamInt(xiH,"binning_selector",&systemInteger); 
printf("%s %d \n", "binning_selector",systemInteger); 
status = setIntegerParam(GC_E_binning_selector, systemInteger); 

XI_status = xiGetParamInt(xiH,"binning_vertical",&systemInteger); 
printf("%s %d \n", "binning_vertical",systemInteger); 
status = setIntegerParam(GC_I_binning_vertical, systemInteger); 

XI_status = xiGetParamInt(xiH,"binning_horizontal",&systemInteger); 
printf("%s %d \n", "binning_horizontal",systemInteger); 
status = setIntegerParam(GC_I_binning_horizontal, systemInteger); 

XI_status = xiGetParamInt(xiH,"binning_vertical_mode",&systemInteger); 
printf("%s %d \n", "binning_vertical_mode",systemInteger); 
status = setIntegerParam(GC_E_binning_vertical_mode, systemInteger); 

XI_status = xiGetParamInt(xiH,"binning_horizontal_mode",&systemInteger); 
printf("%s %d \n", "binning_horizontal_mode",systemInteger); 
status = setIntegerParam(GC_E_binning_horizontal_mode, systemInteger); 

XI_status = xiGetParamInt(xiH,"binning_vertical_pattern",&systemInteger); 
printf("%s %d \n", "binning_vertical_pattern",systemInteger); 
status = setIntegerParam(GC_E_binning_vertical_pattern, systemInteger); 

XI_status = xiGetParamInt(xiH,"binning_horizontal_pattern",&systemInteger); 
printf("%s %d \n", "binning_horizontal_pattern",systemInteger); 
status = setIntegerParam(GC_E_binning_horizontal_pattern, systemInteger); 

XI_status = xiGetParamInt(xiH,"decimation_selector",&systemInteger); 
printf("%s %d \n", "decimation_selector",systemInteger); 
status = setIntegerParam(GC_E_decimation_selector, systemInteger); 

XI_status = xiGetParamInt(xiH,"decimation_vertical",&systemInteger); 
printf("%s %d \n", "decimation_vertical",systemInteger); 
status = setIntegerParam(GC_I_decimation_vertical, systemInteger); 

XI_status = xiGetParamInt(xiH,"decimation_horizontal",&systemInteger); 
printf("%s %d \n", "decimation_horizontal",systemInteger); 
status = setIntegerParam(GC_I_decimation_horizontal, systemInteger); 

XI_status = xiGetParamInt(xiH,"decimation_vertical_pattern",&systemInteger); 
printf("%s %d \n", "decimation_vertical_pattern",systemInteger); 
status = setIntegerParam(GC_E_decimation_vertical_pattern, systemInteger); 

XI_status = xiGetParamInt(xiH,"decimation_horizontal_pattern",&systemInteger); 
printf("%s %d \n", "decimation_horizontal_pattern",systemInteger); 
status = setIntegerParam(GC_E_decimation_horizontal_pattern, systemInteger); 

XI_status = xiGetParamInt(xiH,"test_pattern_generator_selector",&systemInteger); 
printf("%s %d \n", "test_pattern_generator_selector",systemInteger); 
status = setIntegerParam(GC_E_test_pattern_generator_selector, systemInteger); 

XI_status = xiGetParamInt(xiH,"test_pattern",&systemInteger); 
printf("%s %d \n", "test_pattern",systemInteger); 
status = setIntegerParam(GC_E_test_pattern, systemInteger); 

XI_status = xiGetParamInt(xiH,"limit_bandwidth_mode",&systemInteger); 
printf("%s %d \n", "limit_bandwidth_mode",systemInteger); 
status = setIntegerParam(GC_B_limit_bandwidth_mode, systemInteger); 

XI_status = xiGetParamInt(xiH,"limit_bandwidth",&systemInteger); 
printf("%s %d \n", "limit_bandwidth",systemInteger); 
status = setIntegerParam(GC_I_limit_bandwidth, systemInteger); 

XI_status = xiGetParamInt(xiH,"sensor_bit_depth",&systemInteger); 
printf("%s %d \n", "sensor_bit_depth",systemInteger); 
status = setIntegerParam(GC_E_sensor_bit_depth, systemInteger); 

XI_status = xiGetParamInt(xiH,"output_bit_depth",&systemInteger); 
printf("%s %d \n", "output_bit_depth",systemInteger); 
status = setIntegerParam(GC_E_output_bit_depth, systemInteger); 

XI_status = xiGetParamInt(xiH,"output_bit_packing",&systemInteger); 
printf("%s %d \n", "output_bit_packing",systemInteger); 
status = setIntegerParam(GC_B_output_bit_packing, systemInteger); 

XI_status = xiGetParamInt(xiH,"output_bit_packing_type",&systemInteger); 
printf("%s %d \n", "output_bit_packing_type",systemInteger); 
status = setIntegerParam(GC_E_output_bit_packing_type, systemInteger); 

XI_status = xiGetParamInt(xiH,"image_data_bit_depth",&systemInteger); 
printf("%s %d \n", "image_data_bit_depth",systemInteger); 
status = setIntegerParam(GC_E_image_data_bit_depth, systemInteger); 

XI_status = xiGetParamInt(xiH,"acq_timing_mode",&systemInteger); 
printf("%s %d \n", "acq_timing_mode",systemInteger); 
status = setIntegerParam(GC_E_acq_timing_mode, systemInteger); 

XI_status = xiGetParamFloat(xiH,"framerate",&systemFloat); 
printf("%s %f \n", "framerate",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_framerate, systemDouble); 

XI_status = xiGetParamInt(xiH,"LUTEnable",&systemInteger); 
printf("%s %d \n", "LUTEnable",systemInteger); 
status = setIntegerParam(GC_B_LUTEnable, systemInteger); 

XI_status = xiGetParamInt(xiH,"LUTIndex",&systemInteger); 
printf("%s %d \n", "LUTIndex",systemInteger); 
status = setIntegerParam(GC_I_LUTIndex, systemInteger); 

XI_status = xiGetParamInt(xiH,"LUTValue",&systemInteger); 
printf("%s %d \n", "LUTValue",systemInteger); 
status = setIntegerParam(GC_I_LUTValue, systemInteger); 

XI_status = xiGetParamInt(xiH,"sensor_feature_selector",&systemInteger); 
printf("%s %d \n", "sensor_feature_selector",systemInteger); 
status = setIntegerParam(GC_E_sensor_feature_selector, systemInteger); 

XI_status = xiGetParamInt(xiH,"sensor_feature_value",&systemInteger); 
printf("%s %d \n", "sensor_feature_value",systemInteger); 
status = setIntegerParam(GC_I_sensor_feature_value, systemInteger); 

XI_status = xiGetParamInt(xiH,"iscooled",&systemInteger); 
printf("%s %d \n", "iscooled",systemInteger); 
status = setIntegerParam(GC_B_iscooled, systemInteger); 

XI_status = xiGetParamInt(xiH,"cooling",&systemInteger); 
printf("%s %d \n", "cooling",systemInteger); 
status = setIntegerParam(GC_B_cooling, systemInteger); 

XI_status = xiGetParamFloat(xiH,"target_temp",&systemFloat); 
printf("%s %f \n", "target_temp",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_target_temp, systemDouble); 

XI_status = xiGetParamFloat(xiH,"chip_temp",&systemFloat); 
printf("%s %f \n", "chip_temp",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_chip_temp, systemDouble); 

XI_status = xiGetParamFloat(xiH,"hous_temp",&systemFloat); 
printf("%s %f \n", "hous_temp",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_hous_temp, systemDouble); 

XI_status = xiGetParamFloat(xiH,"hous_back_side_temp",&systemFloat); 
printf("%s %f \n", "hous_back_side_temp",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_hous_back_side_temp, systemDouble); 

XI_status = xiGetParamFloat(xiH,"sensor_board_temp",&systemFloat); 
printf("%s %f \n", "sensor_board_temp",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_sensor_board_temp, systemDouble); 

XI_status = xiGetParamInt(xiH,"cms",&systemInteger); 
printf("%s %d \n", "cms",systemInteger); 
status = setIntegerParam(GC_E_cms, systemInteger); 

XI_status = xiGetParamInt(xiH,"apply_cms",&systemInteger); 
printf("%s %d \n", "apply_cms",systemInteger); 
status = setIntegerParam(GC_B_apply_cms, systemInteger); 

XI_status = xiGetParamString(xiH,"input_cms_profile",systemString, sizeof(systemString)); 
printf("%s %s \n", "input_cms_profile",systemString); 
status = setStringParam(GC_S_input_cms_profile, systemString); 

XI_status = xiGetParamString(xiH,"output_cms_profile",systemString, sizeof(systemString)); 
printf("%s %s \n", "output_cms_profile",systemString); 
status = setStringParam(GC_S_output_cms_profile, systemString); 

XI_status = xiGetParamInt(xiH,"cms_intent",&systemInteger); 
printf("%s %d \n", "cms_intent",systemInteger); 
status = setIntegerParam(GC_E_cms_intent, systemInteger); 

XI_status = xiGetParamFloat(xiH,"gammaY",&systemFloat); 
printf("%s %f \n", "gammaY",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_gammaY, systemDouble); 

XI_status = xiGetParamFloat(xiH,"gammaC",&systemFloat); 
printf("%s %f \n", "gammaC",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_gammaC, systemDouble); 

XI_status = xiGetParamFloat(xiH,"sharpness",&systemFloat); 
printf("%s %f \n", "sharpness",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_sharpness, systemDouble); 

XI_status = xiGetParamFloat(xiH,"ccMTX00",&systemFloat); 
printf("%s %f \n", "ccMTX00",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX00, systemDouble); 

XI_status = xiGetParamFloat(xiH,"ccMTX01",&systemFloat); 
printf("%s %f \n", "ccMTX01",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX01, systemDouble); 

XI_status = xiGetParamFloat(xiH,"ccMTX02",&systemFloat); 
printf("%s %f \n", "ccMTX02",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX02, systemDouble); 

XI_status = xiGetParamFloat(xiH,"ccMTX03",&systemFloat); 
printf("%s %f \n", "ccMTX03",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX03, systemDouble); 

XI_status = xiGetParamFloat(xiH,"ccMTX10",&systemFloat); 
printf("%s %f \n", "ccMTX10",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX10, systemDouble); 

XI_status = xiGetParamFloat(xiH,"ccMTX11",&systemFloat); 
printf("%s %f \n", "ccMTX11",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX11, systemDouble); 

XI_status = xiGetParamFloat(xiH,"ccMTX12",&systemFloat); 
printf("%s %f \n", "ccMTX12",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX12, systemDouble); 

XI_status = xiGetParamFloat(xiH,"ccMTX13",&systemFloat); 
printf("%s %f \n", "ccMTX13",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX13, systemDouble); 

XI_status = xiGetParamFloat(xiH,"ccMTX20",&systemFloat); 
printf("%s %f \n", "ccMTX20",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX20, systemDouble); 

XI_status = xiGetParamFloat(xiH,"ccMTX21",&systemFloat); 
printf("%s %f \n", "ccMTX21",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX21, systemDouble); 

XI_status = xiGetParamFloat(xiH,"ccMTX22",&systemFloat); 
printf("%s %f \n", "ccMTX22",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX22, systemDouble); 

XI_status = xiGetParamFloat(xiH,"ccMTX23",&systemFloat); 
printf("%s %f \n", "ccMTX23",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX23, systemDouble); 

XI_status = xiGetParamFloat(xiH,"ccMTX30",&systemFloat); 
printf("%s %f \n", "ccMTX30",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX30, systemDouble); 

XI_status = xiGetParamFloat(xiH,"ccMTX31",&systemFloat); 
printf("%s %f \n", "ccMTX31",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX31, systemDouble); 

XI_status = xiGetParamFloat(xiH,"ccMTX32",&systemFloat); 
printf("%s %f \n", "ccMTX32",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX32, systemDouble); 

XI_status = xiGetParamFloat(xiH,"ccMTX33",&systemFloat); 
printf("%s %f \n", "ccMTX33",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX33, systemDouble); 

XI_status = xiGetParamInt(xiH,"defccMTX",&systemInteger); 
printf("%s %d \n", "defccMTX",systemInteger); 
status = setIntegerParam(GC_C_defccMTX, systemInteger); 

XI_status = xiGetParamInt(xiH,"trigger_source",&systemInteger); 
printf("%s %d \n", "trigger_source",systemInteger); 
status = setIntegerParam(GC_E_trigger_source, systemInteger); 

XI_status = xiGetParamInt(xiH,"trigger_software",&systemInteger); 
printf("%s %d \n", "trigger_software",systemInteger); 
status = setIntegerParam(GC_C_trigger_software, systemInteger); 

XI_status = xiGetParamInt(xiH,"trigger_selector",&systemInteger); 
printf("%s %d \n", "trigger_selector",systemInteger); 
status = setIntegerParam(GC_E_trigger_selector, systemInteger); 

XI_status = xiGetParamInt(xiH,"acq_frame_burst_count",&systemInteger); 
printf("%s %d \n", "acq_frame_burst_count",systemInteger); 
status = setIntegerParam(GC_I_acq_frame_burst_count, systemInteger); 

XI_status = xiGetParamInt(xiH,"trigger_delay",&systemInteger); 
printf("%s %d \n", "trigger_delay",systemInteger); 
status = setIntegerParam(GC_I_trigger_delay, systemInteger); 

XI_status = xiGetParamInt(xiH,"gpi_selector",&systemInteger); 
printf("%s %d \n", "gpi_selector",systemInteger); 
status = setIntegerParam(GC_E_gpi_selector, systemInteger); 

XI_status = xiGetParamInt(xiH,"gpi_mode",&systemInteger); 
printf("%s %d \n", "gpi_mode",systemInteger); 
status = setIntegerParam(GC_E_gpi_mode, systemInteger); 

XI_status = xiGetParamInt(xiH,"gpi_level",&systemInteger); 
printf("%s %d \n", "gpi_level",systemInteger); 
status = setIntegerParam(GC_I_gpi_level, systemInteger); 

XI_status = xiGetParamInt(xiH,"gpo_selector",&systemInteger); 
printf("%s %d \n", "gpo_selector",systemInteger); 
status = setIntegerParam(GC_E_gpo_selector, systemInteger); 

XI_status = xiGetParamInt(xiH,"gpo_mode",&systemInteger); 
printf("%s %d \n", "gpo_mode",systemInteger); 
status = setIntegerParam(GC_E_gpo_mode, systemInteger); 

XI_status = xiGetParamInt(xiH,"led_selector",&systemInteger); 
printf("%s %d \n", "led_selector",systemInteger); 
status = setIntegerParam(GC_E_led_selector, systemInteger); 

XI_status = xiGetParamInt(xiH,"led_mode",&systemInteger); 
printf("%s %d \n", "led_mode",systemInteger); 
status = setIntegerParam(GC_E_led_mode, systemInteger); 

XI_status = xiGetParamInt(xiH,"dbnc_en",&systemInteger); 
printf("%s %d \n", "dbnc_en",systemInteger); 
status = setIntegerParam(GC_B_dbnc_en, systemInteger); 

XI_status = xiGetParamInt(xiH,"dbnc_t0",&systemInteger); 
printf("%s %d \n", "dbnc_t0",systemInteger); 
status = setIntegerParam(GC_I_dbnc_t0, systemInteger); 

XI_status = xiGetParamInt(xiH,"dbnc_t1",&systemInteger); 
printf("%s %d \n", "dbnc_t1",systemInteger); 
status = setIntegerParam(GC_I_dbnc_t1, systemInteger); 

XI_status = xiGetParamInt(xiH,"dbnc_pol",&systemInteger); 
printf("%s %d \n", "dbnc_pol",systemInteger); 
status = setIntegerParam(GC_B_dbnc_pol, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr_kneepoint_count",&systemInteger); 
printf("%s %d \n", "hdr_kneepoint_count",systemInteger); 
status = setIntegerParam(GC_I_hdr_kneepoint_count, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr_t1",&systemInteger); 
printf("%s %d \n", "hdr_t1",systemInteger); 
status = setIntegerParam(GC_I_hdr_t1, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr_t2",&systemInteger); 
printf("%s %d \n", "hdr_t2",systemInteger); 
status = setIntegerParam(GC_I_hdr_t2, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr_kneepoint1",&systemInteger); 
printf("%s %d \n", "hdr_kneepoint1",systemInteger); 
status = setIntegerParam(GC_I_hdr_kneepoint1, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr_kneepoint2",&systemInteger); 
printf("%s %d \n", "hdr_kneepoint2",systemInteger); 
status = setIntegerParam(GC_I_hdr_kneepoint2, systemInteger); 

XI_status = xiGetParamInt(xiH,"lens_mode",&systemInteger); 
printf("%s %d \n", "lens_mode",systemInteger); 
status = setIntegerParam(GC_B_lens_mode, systemInteger); 

XI_status = xiGetParamFloat(xiH,"lens_aperture_value",&systemFloat); 
printf("%s %f \n", "lens_aperture_value",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_lens_aperture_value, systemDouble); 

XI_status = xiGetParamInt(xiH,"lens_focus_movement_value",&systemInteger); 
printf("%s %d \n", "lens_focus_movement_value",systemInteger); 
status = setIntegerParam(GC_I_lens_focus_movement_value, systemInteger); 

XI_status = xiGetParamInt(xiH,"lens_focus_move",&systemInteger); 
printf("%s %d \n", "lens_focus_move",systemInteger); 
status = setIntegerParam(GC_C_lens_focus_move, systemInteger); 

XI_status = xiGetParamFloat(xiH,"lens_focus_distance",&systemFloat); 
printf("%s %f \n", "lens_focus_distance",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_lens_focus_distance, systemDouble); 

XI_status = xiGetParamFloat(xiH,"lens_focal_length",&systemFloat); 
printf("%s %f \n", "lens_focal_length",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_lens_focal_length, systemDouble); 

XI_status = xiGetParamInt(xiH,"lens_feature_selector",&systemInteger); 
printf("%s %d \n", "lens_feature_selector",systemInteger); 
status = setIntegerParam(GC_E_lens_feature_selector, systemInteger); 

XI_status = xiGetParamFloat(xiH,"lens_feature",&systemFloat); 
printf("%s %f \n", "lens_feature",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_lens_feature, systemDouble); 

XI_status = xiGetParamInt(xiH,"imgpayloadsize",&systemInteger); 
printf("%s %d \n", "imgpayloadsize",systemInteger); 
status = setIntegerParam(GC_I_imgpayloadsize, systemInteger); 

XI_status = xiGetParamString(xiH,"xiapi_context_list",systemString, sizeof(systemString)); 
printf("%s %s \n", "xiapi_context_list",systemString); 
status = setStringParam(GC_S_xiapi_context_list, systemString); 

XI_status = xiGetParamInt(xiH,"transport_pixel_format",&systemInteger); 
printf("%s %d \n", "transport_pixel_format",systemInteger); 
status = setIntegerParam(GC_I_transport_pixel_format, systemInteger); 

