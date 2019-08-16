/* XIMEA */ 

try { 
XI_status = xiGetParamInt(xiH,"exposure",&systemInteger); 
printf("exposure %d \n",systemInteger);
status = setIntegerParam(GC_I_exposure, systemInteger); 

} catch (const std::exception &e) { }  


try { 
XI_status = xiGetParamInt(xiH,"gain_selector",&systemInteger); 
status = setIntegerParam(GC_E_gain_selector, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"gain",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_gain, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"downsampling",&systemInteger); 
status = setIntegerParam(GC_E_downsampling, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"downsampling_type",&systemInteger); 
status = setIntegerParam(GC_E_downsampling_type, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"imgdataformat",&systemInteger); 
status = setIntegerParam(GC_E_imgdataformat, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"shutter_type",&systemInteger); 
status = setIntegerParam(GC_E_shutter_type, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"sensor_taps",&systemInteger); 
status = setIntegerParam(GC_E_sensor_taps, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"aeag",&systemInteger); 
status = setIntegerParam(GC_B_aeag, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"aeag_roi_offset_x",&systemInteger); 
status = setIntegerParam(GC_I_aeag_roi_offset_x, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"aeag_roi_offset_y",&systemInteger); 
status = setIntegerParam(GC_I_aeag_roi_offset_y, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"aeag_roi_width",&systemInteger); 
status = setIntegerParam(GC_I_aeag_roi_width, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"aeag_roi_height",&systemInteger); 
status = setIntegerParam(GC_I_aeag_roi_height, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"bpc_list_selector",&systemInteger); 
status = setIntegerParam(GC_E_bpc_list_selector, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"bpc",&systemInteger); 
status = setIntegerParam(GC_B_bpc, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"column_fpn_correction",&systemInteger); 
status = setIntegerParam(GC_B_column_fpn_correction, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"row_fpn_correction",&systemInteger); 
status = setIntegerParam(GC_B_row_fpn_correction, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"auto_wb",&systemInteger); 
status = setIntegerParam(GC_B_auto_wb, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"manual_wb",&systemInteger); 
status = setIntegerParam(GC_C_manual_wb, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"wb_kr",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_wb_kr, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"wb_kg",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_wb_kg, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"wb_kb",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_wb_kb, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"image_black_level",&systemInteger); 
status = setIntegerParam(GC_I_image_black_level, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"offsetX",&systemInteger); 
status = setIntegerParam(GC_I_offsetX, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"offsetY",&systemInteger); 
status = setIntegerParam(GC_I_offsetY, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"width",&systemInteger); 
status = setIntegerParam(GC_I_width, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"height",&systemInteger); 
status = setIntegerParam(GC_I_height, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"region_selector",&systemInteger); 
status = setIntegerParam(GC_I_region_selector, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"region_mode",&systemInteger); 
status = setIntegerParam(GC_B_region_mode, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"hdr",&systemInteger); 
status = setIntegerParam(GC_B_hdr, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"ffc",&systemInteger); 
status = setIntegerParam(GC_B_ffc, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamString(xiH,"ffc_flat_field_file_name",systemString, sizeof(systemString)); 
status = setStringParam(GC_S_ffc_flat_field_file_name, systemString); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamString(xiH,"ffc_dark_field_file_name",systemString, sizeof(systemString)); 
status = setStringParam(GC_S_ffc_dark_field_file_name, systemString); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"horizontal_flip",&systemInteger); 
status = setIntegerParam(GC_B_horizontal_flip, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"vertical_flip",&systemInteger); 
status = setIntegerParam(GC_B_vertical_flip, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"exp_priority",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_exp_priority, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"ae_max_limit",&systemInteger); 
status = setIntegerParam(GC_I_ae_max_limit, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"ag_max_limit",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ag_max_limit, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"aeag_level",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_aeag_level, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"binning_selector",&systemInteger); 
status = setIntegerParam(GC_E_binning_selector, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"binning_vertical",&systemInteger); 
status = setIntegerParam(GC_I_binning_vertical, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"binning_horizontal",&systemInteger); 
status = setIntegerParam(GC_I_binning_horizontal, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"binning_vertical_mode",&systemInteger); 
status = setIntegerParam(GC_E_binning_vertical_mode, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"binning_horizontal_mode",&systemInteger); 
status = setIntegerParam(GC_E_binning_horizontal_mode, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"binning_vertical_pattern",&systemInteger); 
status = setIntegerParam(GC_E_binning_vertical_pattern, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"binning_horizontal_pattern",&systemInteger); 
status = setIntegerParam(GC_E_binning_horizontal_pattern, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"decimation_selector",&systemInteger); 
status = setIntegerParam(GC_E_decimation_selector, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"decimation_vertical",&systemInteger); 
status = setIntegerParam(GC_I_decimation_vertical, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"decimation_horizontal",&systemInteger); 
status = setIntegerParam(GC_I_decimation_horizontal, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"decimation_vertical_pattern",&systemInteger); 
status = setIntegerParam(GC_E_decimation_vertical_pattern, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"decimation_horizontal_pattern",&systemInteger); 
status = setIntegerParam(GC_E_decimation_horizontal_pattern, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"test_pattern_generator_selector",&systemInteger); 
status = setIntegerParam(GC_E_test_pattern_generator_selector, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"test_pattern",&systemInteger); 
status = setIntegerParam(GC_E_test_pattern, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"limit_bandwidth_mode",&systemInteger); 
status = setIntegerParam(GC_B_limit_bandwidth_mode, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"sensor_output_channel_count",&systemInteger); 
status = setIntegerParam(GC_I_sensor_output_channel_count, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"limit_bandwidth",&systemInteger); 
status = setIntegerParam(GC_I_limit_bandwidth, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"sensor_bit_depth",&systemInteger); 
status = setIntegerParam(GC_E_sensor_bit_depth, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"output_bit_depth",&systemInteger); 
status = setIntegerParam(GC_E_output_bit_depth, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"output_bit_packing",&systemInteger); 
status = setIntegerParam(GC_B_output_bit_packing, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"output_bit_packing_type",&systemInteger); 
status = setIntegerParam(GC_E_output_bit_packing_type, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"image_data_bit_depth",&systemInteger); 
status = setIntegerParam(GC_E_image_data_bit_depth, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"acq_timing_mode",&systemInteger); 
status = setIntegerParam(GC_E_acq_timing_mode, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"framerate",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_framerate, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"LUTEnable",&systemInteger); 
status = setIntegerParam(GC_B_LUTEnable, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"LUTIndex",&systemInteger); 
status = setIntegerParam(GC_I_LUTIndex, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"LUTValue",&systemInteger); 
status = setIntegerParam(GC_I_LUTValue, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"iscooled",&systemInteger); 
status = setIntegerParam(GC_B_iscooled, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"cooling",&systemInteger); 
status = setIntegerParam(GC_B_cooling, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"target_temp",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_target_temp, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"chip_temp",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_chip_temp, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"hous_temp",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_hous_temp, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"hous_back_side_temp",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_hous_back_side_temp, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"sensor_board_temp",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_sensor_board_temp, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"cms",&systemInteger); 
status = setIntegerParam(GC_E_cms, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"apply_cms",&systemInteger); 
status = setIntegerParam(GC_B_apply_cms, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamString(xiH,"input_cms_profile",systemString, sizeof(systemString)); 
status = setStringParam(GC_S_input_cms_profile, systemString); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamString(xiH,"output_cms_profile",systemString, sizeof(systemString)); 
status = setStringParam(GC_S_output_cms_profile, systemString); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"gammaY",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_gammaY, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"gammaC",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_gammaC, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"sharpness",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_sharpness, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"ccMTX00",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX00, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"ccMTX01",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX01, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"ccMTX02",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX02, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"ccMTX03",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX03, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"ccMTX10",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX10, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"ccMTX11",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX11, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"ccMTX12",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX12, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"ccMTX13",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX13, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"ccMTX20",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX20, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"ccMTX21",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX21, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"ccMTX22",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX22, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"ccMTX23",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX23, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"ccMTX30",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX30, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"ccMTX31",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX31, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"ccMTX32",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX32, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"ccMTX33",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ccMTX33, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"defccMTX",&systemInteger); 
status = setIntegerParam(GC_C_defccMTX, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"trigger_software",&systemInteger); 
status = setIntegerParam(GC_C_trigger_software, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"trigger_selector",&systemInteger); 
status = setIntegerParam(GC_E_trigger_selector, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"acq_frame_burst_count",&systemInteger); 
status = setIntegerParam(GC_I_acq_frame_burst_count, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"trigger_delay",&systemInteger); 
status = setIntegerParam(GC_I_trigger_delay, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"gpi_mode",&systemInteger); 
status = setIntegerParam(GC_E_gpi_mode, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"gpi_level",&systemInteger); 
status = setIntegerParam(GC_I_gpi_level, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"gpo_selector",&systemInteger); 
status = setIntegerParam(GC_E_gpo_selector, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"gpo_mode",&systemInteger); 
status = setIntegerParam(GC_E_gpo_mode, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"led_selector",&systemInteger); 
status = setIntegerParam(GC_E_led_selector, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"led_mode",&systemInteger); 
status = setIntegerParam(GC_E_led_mode, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"dbnc_en",&systemInteger); 
status = setIntegerParam(GC_B_dbnc_en, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"dbnc_t0",&systemInteger); 
status = setIntegerParam(GC_I_dbnc_t0, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"dbnc_t1",&systemInteger); 
status = setIntegerParam(GC_I_dbnc_t1, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"dbnc_pol",&systemInteger); 
status = setIntegerParam(GC_B_dbnc_pol, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"hdr_kneepoint_count",&systemInteger); 
status = setIntegerParam(GC_I_hdr_kneepoint_count, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"hdr_t1",&systemInteger); 
status = setIntegerParam(GC_I_hdr_t1, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"hdr_t2",&systemInteger); 
status = setIntegerParam(GC_I_hdr_t2, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"hdr_kneepoint1",&systemInteger); 
status = setIntegerParam(GC_I_hdr_kneepoint1, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"hdr_kneepoint2",&systemInteger); 
status = setIntegerParam(GC_I_hdr_kneepoint2, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"lens_mode",&systemInteger); 
status = setIntegerParam(GC_B_lens_mode, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"lens_aperture_value",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_lens_aperture_value, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"lens_focus_movement_value",&systemInteger); 
status = setIntegerParam(GC_I_lens_focus_movement_value, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"lens_focus_move",&systemInteger); 
status = setIntegerParam(GC_C_lens_focus_move, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"lens_focus_distance",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_lens_focus_distance, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"lens_focal_length",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_lens_focal_length, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"lens_feature_selector",&systemInteger); 
status = setIntegerParam(GC_E_lens_feature_selector, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamFloat(xiH,"lens_feature",&systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_lens_feature, systemDouble); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"imgpayloadsize",&systemInteger); 
status = setIntegerParam(GC_I_imgpayloadsize, systemInteger); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamString(xiH,"xiapi_context_list",systemString, sizeof(systemString)); 
status = setStringParam(GC_S_xiapi_context_list, systemString); 

} catch (const std::exception &e) { }  
try { 
XI_status = xiGetParamInt(xiH,"transport_pixel_format",&systemInteger); 
status = setIntegerParam(GC_I_transport_pixel_format, systemInteger); 

} catch (const std::exception &e) { }  

