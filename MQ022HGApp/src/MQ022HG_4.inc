/* MQ022HG */ 

XI_status = xiGetParamInt(xiH,"exposure",&systemInteger); 
printf("%s %d %d\n", "exposure",systemInteger, XI_status); 
status = setIntegerParam(GC_I_Exposure, systemInteger); 

XI_status = xiGetParamInt(xiH,"exposure",&systemInteger); 
printf("%s %d %d\n", "exposure",systemInteger, XI_status); 
status = setIntegerParam(GC_I_Exposure, systemInteger); 

XI_status = xiGetParamInt(xiH,"gain_selector",&systemInteger); 
printf("%s %d %d\n", "gain_selector",systemInteger, XI_status); 
status = setIntegerParam(GC_E_GainSelector, systemInteger); 

XI_status = xiGetParamFloat(xiH,"gain",&systemFloat); 
printf("%s %f %d\n", "gain",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_Gain, systemDouble); 

XI_status = xiGetParamInt(xiH,"gain",&systemInteger); 
printf("%s %d %d\n", "gain",systemInteger, XI_status); 
status = setIntegerParam(GC_D_Gain, systemInteger); 

XI_status = xiGetParamInt(xiH,"downsampling",&systemInteger); 
printf("%s %d %d\n", "downsampling",systemInteger, XI_status); 
status = setIntegerParam(GC_E_Downsampling, systemInteger); 

XI_status = xiGetParamInt(xiH,"downsampling_type",&systemInteger); 
printf("%s %d %d\n", "downsampling_type",systemInteger, XI_status); 
status = setIntegerParam(GC_E_DownsamplingType, systemInteger); 

XI_status = xiGetParamInt(xiH,"imgdataformat",&systemInteger); 
printf("%s %d %d\n", "imgdataformat",systemInteger, XI_status); 
status = setIntegerParam(GC_E_Imgdataformat, systemInteger); 

XI_status = xiGetParamInt(xiH,"shutter_type",&systemInteger); 
printf("%s %d %d\n", "shutter_type",systemInteger, XI_status); 
status = setIntegerParam(GC_E_ShutterType, systemInteger); 

XI_status = xiGetParamInt(xiH,"sensor_taps",&systemInteger); 
printf("%s %d %d\n", "sensor_taps",systemInteger, XI_status); 
status = setIntegerParam(GC_E_SensorTaps, systemInteger); 

XI_status = xiGetParamInt(xiH,"aeag",&systemInteger); 
printf("%s %d %d\n", "aeag",systemInteger, XI_status); 
status = setIntegerParam(GC_B_Aeag, systemInteger); 

XI_status = xiGetParamInt(xiH,"aeag",&systemInteger); 
printf("%s %d %d\n", "aeag",systemInteger, XI_status); 
status = setIntegerParam(GC_B_Aeag, systemInteger); 

XI_status = xiGetParamInt(xiH,"aeag_roi_offset_x",&systemInteger); 
printf("%s %d %d\n", "aeag_roi_offset_x",systemInteger, XI_status); 
status = setIntegerParam(GC_I_AeagRoiOffsetX, systemInteger); 

XI_status = xiGetParamInt(xiH,"aeag_roi_offset_x",&systemInteger); 
printf("%s %d %d\n", "aeag_roi_offset_x",systemInteger, XI_status); 
status = setIntegerParam(GC_I_AeagRoiOffsetX, systemInteger); 

XI_status = xiGetParamInt(xiH,"aeag_roi_offset_y",&systemInteger); 
printf("%s %d %d\n", "aeag_roi_offset_y",systemInteger, XI_status); 
status = setIntegerParam(GC_I_AeagRoiOffsetY, systemInteger); 

XI_status = xiGetParamInt(xiH,"aeag_roi_offset_y",&systemInteger); 
printf("%s %d %d\n", "aeag_roi_offset_y",systemInteger, XI_status); 
status = setIntegerParam(GC_I_AeagRoiOffsetY, systemInteger); 

XI_status = xiGetParamInt(xiH,"aeag_roi_width",&systemInteger); 
printf("%s %d %d\n", "aeag_roi_width",systemInteger, XI_status); 
status = setIntegerParam(GC_I_AeagRoiWidth, systemInteger); 

XI_status = xiGetParamInt(xiH,"aeag_roi_width",&systemInteger); 
printf("%s %d %d\n", "aeag_roi_width",systemInteger, XI_status); 
status = setIntegerParam(GC_I_AeagRoiWidth, systemInteger); 

XI_status = xiGetParamInt(xiH,"aeag_roi_height",&systemInteger); 
printf("%s %d %d\n", "aeag_roi_height",systemInteger, XI_status); 
status = setIntegerParam(GC_I_AeagRoiHeight, systemInteger); 

XI_status = xiGetParamInt(xiH,"aeag_roi_height",&systemInteger); 
printf("%s %d %d\n", "aeag_roi_height",systemInteger, XI_status); 
status = setIntegerParam(GC_I_AeagRoiHeight, systemInteger); 

XI_status = xiGetParamInt(xiH,"bpc_list_selector",&systemInteger); 
printf("%s %d %d\n", "bpc_list_selector",systemInteger, XI_status); 
status = setIntegerParam(GC_E_BpcListSelector, systemInteger); 

XI_status = xiGetParamInt(xiH,"bpc",&systemInteger); 
printf("%s %d %d\n", "bpc",systemInteger, XI_status); 
status = setIntegerParam(GC_B_Bpc, systemInteger); 

XI_status = xiGetParamInt(xiH,"bpc",&systemInteger); 
printf("%s %d %d\n", "bpc",systemInteger, XI_status); 
status = setIntegerParam(GC_B_Bpc, systemInteger); 

XI_status = xiGetParamInt(xiH,"column_fpn_correction",&systemInteger); 
printf("%s %d %d\n", "column_fpn_correction",systemInteger, XI_status); 
status = setIntegerParam(GC_B_ColumnFpnCorrection, systemInteger); 

XI_status = xiGetParamInt(xiH,"column_fpn_correction",&systemInteger); 
printf("%s %d %d\n", "column_fpn_correction",systemInteger, XI_status); 
status = setIntegerParam(GC_B_ColumnFpnCorrection, systemInteger); 

XI_status = xiGetParamInt(xiH,"row_fpn_correction",&systemInteger); 
printf("%s %d %d\n", "row_fpn_correction",systemInteger, XI_status); 
status = setIntegerParam(GC_B_RowFpnCorrection, systemInteger); 

XI_status = xiGetParamInt(xiH,"row_fpn_correction",&systemInteger); 
printf("%s %d %d\n", "row_fpn_correction",systemInteger, XI_status); 
status = setIntegerParam(GC_B_RowFpnCorrection, systemInteger); 

XI_status = xiGetParamInt(xiH,"auto_wb",&systemInteger); 
printf("%s %d %d\n", "auto_wb",systemInteger, XI_status); 
status = setIntegerParam(GC_B_AutoWb, systemInteger); 

XI_status = xiGetParamInt(xiH,"auto_wb",&systemInteger); 
printf("%s %d %d\n", "auto_wb",systemInteger, XI_status); 
status = setIntegerParam(GC_B_AutoWb, systemInteger); 

XI_status = xiGetParamInt(xiH,"manual_wb",&systemInteger); 
printf("%s %d %d\n", "manual_wb",systemInteger, XI_status); 
status = setIntegerParam(GC_C_ManualWb, systemInteger); 

XI_status = xiGetParamInt(xiH,"manual_wb",&systemInteger); 
printf("%s %d %d\n", "manual_wb",systemInteger, XI_status); 
status = setIntegerParam(GC_C_ManualWb, systemInteger); 

XI_status = xiGetParamFloat(xiH,"wb_kr",&systemFloat); 
printf("%s %f %d\n", "wb_kr",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_WbKr, systemDouble); 

XI_status = xiGetParamInt(xiH,"wb_kr",&systemInteger); 
printf("%s %d %d\n", "wb_kr",systemInteger, XI_status); 
status = setIntegerParam(GC_D_WbKr, systemInteger); 

XI_status = xiGetParamFloat(xiH,"wb_kg",&systemFloat); 
printf("%s %f %d\n", "wb_kg",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_WbKg, systemDouble); 

XI_status = xiGetParamInt(xiH,"wb_kg",&systemInteger); 
printf("%s %d %d\n", "wb_kg",systemInteger, XI_status); 
status = setIntegerParam(GC_D_WbKg, systemInteger); 

XI_status = xiGetParamFloat(xiH,"wb_kb",&systemFloat); 
printf("%s %f %d\n", "wb_kb",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_WbKb, systemDouble); 

XI_status = xiGetParamInt(xiH,"wb_kb",&systemInteger); 
printf("%s %d %d\n", "wb_kb",systemInteger, XI_status); 
status = setIntegerParam(GC_D_WbKb, systemInteger); 

XI_status = xiGetParamInt(xiH,"image_black_level",&systemInteger); 
printf("%s %d %d\n", "image_black_level",systemInteger, XI_status); 
status = setIntegerParam(GC_I_ImageBlackLevel, systemInteger); 

XI_status = xiGetParamInt(xiH,"image_black_level",&systemInteger); 
printf("%s %d %d\n", "image_black_level",systemInteger, XI_status); 
status = setIntegerParam(GC_I_ImageBlackLevel, systemInteger); 

XI_status = xiGetParamInt(xiH,"offsetX",&systemInteger); 
printf("%s %d %d\n", "offsetX",systemInteger, XI_status); 
status = setIntegerParam(GC_I_OffsetX, systemInteger); 

XI_status = xiGetParamInt(xiH,"offsetX",&systemInteger); 
printf("%s %d %d\n", "offsetX",systemInteger, XI_status); 
status = setIntegerParam(GC_I_OffsetX, systemInteger); 

XI_status = xiGetParamInt(xiH,"offsetY",&systemInteger); 
printf("%s %d %d\n", "offsetY",systemInteger, XI_status); 
status = setIntegerParam(GC_I_OffsetY, systemInteger); 

XI_status = xiGetParamInt(xiH,"offsetY",&systemInteger); 
printf("%s %d %d\n", "offsetY",systemInteger, XI_status); 
status = setIntegerParam(GC_I_OffsetY, systemInteger); 

XI_status = xiGetParamInt(xiH,"width",&systemInteger); 
printf("%s %d %d\n", "width",systemInteger, XI_status); 
status = setIntegerParam(GC_I_Width, systemInteger); 

XI_status = xiGetParamInt(xiH,"width",&systemInteger); 
printf("%s %d %d\n", "width",systemInteger, XI_status); 
status = setIntegerParam(GC_I_Width, systemInteger); 

XI_status = xiGetParamInt(xiH,"height",&systemInteger); 
printf("%s %d %d\n", "height",systemInteger, XI_status); 
status = setIntegerParam(GC_I_Height, systemInteger); 

XI_status = xiGetParamInt(xiH,"height",&systemInteger); 
printf("%s %d %d\n", "height",systemInteger, XI_status); 
status = setIntegerParam(GC_I_Height, systemInteger); 

XI_status = xiGetParamInt(xiH,"region_selector",&systemInteger); 
printf("%s %d %d\n", "region_selector",systemInteger, XI_status); 
status = setIntegerParam(GC_I_RegionSelector, systemInteger); 

XI_status = xiGetParamInt(xiH,"region_selector",&systemInteger); 
printf("%s %d %d\n", "region_selector",systemInteger, XI_status); 
status = setIntegerParam(GC_I_RegionSelector, systemInteger); 

XI_status = xiGetParamInt(xiH,"region_mode",&systemInteger); 
printf("%s %d %d\n", "region_mode",systemInteger, XI_status); 
status = setIntegerParam(GC_B_RegionMode, systemInteger); 

XI_status = xiGetParamInt(xiH,"region_mode",&systemInteger); 
printf("%s %d %d\n", "region_mode",systemInteger, XI_status); 
status = setIntegerParam(GC_B_RegionMode, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr",&systemInteger); 
printf("%s %d %d\n", "hdr",systemInteger, XI_status); 
status = setIntegerParam(GC_B_Hdr, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr",&systemInteger); 
printf("%s %d %d\n", "hdr",systemInteger, XI_status); 
status = setIntegerParam(GC_B_Hdr, systemInteger); 

XI_status = xiGetParamInt(xiH,"ffc",&systemInteger); 
printf("%s %d %d\n", "ffc",systemInteger, XI_status); 
status = setIntegerParam(GC_B_Ffc, systemInteger); 

XI_status = xiGetParamInt(xiH,"ffc",&systemInteger); 
printf("%s %d %d\n", "ffc",systemInteger, XI_status); 
status = setIntegerParam(GC_B_Ffc, systemInteger); 

XI_status = xiGetParamString(xiH,"ffc_flat_field_file_name",systemString, sizeof(systemString)); 
printf("%s %s %d\n", "ffc_flat_field_file_name",systemString,XI_status); 
status = setStringParam(GC_S_FfcFlatFieldFileName, systemString); 

XI_status = xiGetParamInt(xiH,"ffc_flat_field_file_name",&systemInteger); 
printf("%s %d %d\n", "ffc_flat_field_file_name",systemInteger, XI_status); 
status = setIntegerParam(GC_S_FfcFlatFieldFileName, systemInteger); 

XI_status = xiGetParamString(xiH,"ffc_dark_field_file_name",systemString, sizeof(systemString)); 
printf("%s %s %d\n", "ffc_dark_field_file_name",systemString,XI_status); 
status = setStringParam(GC_S_FfcDarkFieldFileName, systemString); 

XI_status = xiGetParamInt(xiH,"ffc_dark_field_file_name",&systemInteger); 
printf("%s %d %d\n", "ffc_dark_field_file_name",systemInteger, XI_status); 
status = setIntegerParam(GC_S_FfcDarkFieldFileName, systemInteger); 

XI_status = xiGetParamInt(xiH,"horizontal_flip",&systemInteger); 
printf("%s %d %d\n", "horizontal_flip",systemInteger, XI_status); 
status = setIntegerParam(GC_B_HorizontalFlip, systemInteger); 

XI_status = xiGetParamInt(xiH,"horizontal_flip",&systemInteger); 
printf("%s %d %d\n", "horizontal_flip",systemInteger, XI_status); 
status = setIntegerParam(GC_B_HorizontalFlip, systemInteger); 

XI_status = xiGetParamInt(xiH,"vertical_flip",&systemInteger); 
printf("%s %d %d\n", "vertical_flip",systemInteger, XI_status); 
status = setIntegerParam(GC_B_VerticalFlip, systemInteger); 

XI_status = xiGetParamInt(xiH,"vertical_flip",&systemInteger); 
printf("%s %d %d\n", "vertical_flip",systemInteger, XI_status); 
status = setIntegerParam(GC_B_VerticalFlip, systemInteger); 

XI_status = xiGetParamFloat(xiH,"exp_priority",&systemFloat); 
printf("%s %f %d\n", "exp_priority",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ExpPriority, systemDouble); 

XI_status = xiGetParamInt(xiH,"exp_priority",&systemInteger); 
printf("%s %d %d\n", "exp_priority",systemInteger, XI_status); 
status = setIntegerParam(GC_D_ExpPriority, systemInteger); 

XI_status = xiGetParamInt(xiH,"ae_max_limit",&systemInteger); 
printf("%s %d %d\n", "ae_max_limit",systemInteger, XI_status); 
status = setIntegerParam(GC_I_AeMaxLimit, systemInteger); 

XI_status = xiGetParamInt(xiH,"ae_max_limit",&systemInteger); 
printf("%s %d %d\n", "ae_max_limit",systemInteger, XI_status); 
status = setIntegerParam(GC_I_AeMaxLimit, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ag_max_limit",&systemFloat); 
printf("%s %f %d\n", "ag_max_limit",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_AgMaxLimit, systemDouble); 

XI_status = xiGetParamInt(xiH,"ag_max_limit",&systemInteger); 
printf("%s %d %d\n", "ag_max_limit",systemInteger, XI_status); 
status = setIntegerParam(GC_D_AgMaxLimit, systemInteger); 

XI_status = xiGetParamFloat(xiH,"aeag_level",&systemFloat); 
printf("%s %f %d\n", "aeag_level",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_AeagLevel, systemDouble); 

XI_status = xiGetParamInt(xiH,"aeag_level",&systemInteger); 
printf("%s %d %d\n", "aeag_level",systemInteger, XI_status); 
status = setIntegerParam(GC_D_AeagLevel, systemInteger); 

XI_status = xiGetParamInt(xiH,"binning_selector",&systemInteger); 
printf("%s %d %d\n", "binning_selector",systemInteger, XI_status); 
status = setIntegerParam(GC_E_BinningSelector, systemInteger); 

XI_status = xiGetParamInt(xiH,"binning_vertical",&systemInteger); 
printf("%s %d %d\n", "binning_vertical",systemInteger, XI_status); 
status = setIntegerParam(GC_I_BinningVertical, systemInteger); 

XI_status = xiGetParamInt(xiH,"binning_vertical",&systemInteger); 
printf("%s %d %d\n", "binning_vertical",systemInteger, XI_status); 
status = setIntegerParam(GC_I_BinningVertical, systemInteger); 

XI_status = xiGetParamInt(xiH,"binning_horizontal",&systemInteger); 
printf("%s %d %d\n", "binning_horizontal",systemInteger, XI_status); 
status = setIntegerParam(GC_I_BinningHorizontal, systemInteger); 

XI_status = xiGetParamInt(xiH,"binning_horizontal",&systemInteger); 
printf("%s %d %d\n", "binning_horizontal",systemInteger, XI_status); 
status = setIntegerParam(GC_I_BinningHorizontal, systemInteger); 

XI_status = xiGetParamInt(xiH,"binning_vertical_mode",&systemInteger); 
printf("%s %d %d\n", "binning_vertical_mode",systemInteger, XI_status); 
status = setIntegerParam(GC_E_BinningVerticalMode, systemInteger); 

XI_status = xiGetParamInt(xiH,"binning_horizontal_mode",&systemInteger); 
printf("%s %d %d\n", "binning_horizontal_mode",systemInteger, XI_status); 
status = setIntegerParam(GC_E_BinningHorizontalMode, systemInteger); 

XI_status = xiGetParamInt(xiH,"binning_vertical_pattern",&systemInteger); 
printf("%s %d %d\n", "binning_vertical_pattern",systemInteger, XI_status); 
status = setIntegerParam(GC_E_BinningVerticalPattern, systemInteger); 

XI_status = xiGetParamInt(xiH,"binning_horizontal_pattern",&systemInteger); 
printf("%s %d %d\n", "binning_horizontal_pattern",systemInteger, XI_status); 
status = setIntegerParam(GC_E_BinningHorizontalPattern, systemInteger); 

XI_status = xiGetParamInt(xiH,"decimation_selector",&systemInteger); 
printf("%s %d %d\n", "decimation_selector",systemInteger, XI_status); 
status = setIntegerParam(GC_E_DecimationSelector, systemInteger); 

XI_status = xiGetParamInt(xiH,"decimation_vertical",&systemInteger); 
printf("%s %d %d\n", "decimation_vertical",systemInteger, XI_status); 
status = setIntegerParam(GC_I_DecimationVertical, systemInteger); 

XI_status = xiGetParamInt(xiH,"decimation_vertical",&systemInteger); 
printf("%s %d %d\n", "decimation_vertical",systemInteger, XI_status); 
status = setIntegerParam(GC_I_DecimationVertical, systemInteger); 

XI_status = xiGetParamInt(xiH,"decimation_horizontal",&systemInteger); 
printf("%s %d %d\n", "decimation_horizontal",systemInteger, XI_status); 
status = setIntegerParam(GC_I_DecimationHorizontal, systemInteger); 

XI_status = xiGetParamInt(xiH,"decimation_horizontal",&systemInteger); 
printf("%s %d %d\n", "decimation_horizontal",systemInteger, XI_status); 
status = setIntegerParam(GC_I_DecimationHorizontal, systemInteger); 

XI_status = xiGetParamInt(xiH,"decimation_vertical_pattern",&systemInteger); 
printf("%s %d %d\n", "decimation_vertical_pattern",systemInteger, XI_status); 
status = setIntegerParam(GC_E_DecimationVerticalPattern, systemInteger); 

XI_status = xiGetParamInt(xiH,"decimation_horizontal_pattern",&systemInteger); 
printf("%s %d %d\n", "decimation_horizontal_pattern",systemInteger, XI_status); 
status = setIntegerParam(GC_E_DecimationHorizontalPattern, systemInteger); 

XI_status = xiGetParamInt(xiH,"test_pattern_generator_selector",&systemInteger); 
printf("%s %d %d\n", "test_pattern_generator_selector",systemInteger, XI_status); 
status = setIntegerParam(GC_E_TestPatternGeneratorSelector, systemInteger); 

XI_status = xiGetParamInt(xiH,"test_pattern",&systemInteger); 
printf("%s %d %d\n", "test_pattern",systemInteger, XI_status); 
status = setIntegerParam(GC_E_TestPattern, systemInteger); 

XI_status = xiGetParamInt(xiH,"limit_bandwidth_mode",&systemInteger); 
printf("%s %d %d\n", "limit_bandwidth_mode",systemInteger, XI_status); 
status = setIntegerParam(GC_B_LimitBandwidthMode, systemInteger); 

XI_status = xiGetParamInt(xiH,"limit_bandwidth_mode",&systemInteger); 
printf("%s %d %d\n", "limit_bandwidth_mode",systemInteger, XI_status); 
status = setIntegerParam(GC_B_LimitBandwidthMode, systemInteger); 

XI_status = xiGetParamInt(xiH,"limit_bandwidth",&systemInteger); 
printf("%s %d %d\n", "limit_bandwidth",systemInteger, XI_status); 
status = setIntegerParam(GC_I_LimitBandwidth, systemInteger); 

XI_status = xiGetParamInt(xiH,"limit_bandwidth",&systemInteger); 
printf("%s %d %d\n", "limit_bandwidth",systemInteger, XI_status); 
status = setIntegerParam(GC_I_LimitBandwidth, systemInteger); 

XI_status = xiGetParamInt(xiH,"sensor_bit_depth",&systemInteger); 
printf("%s %d %d\n", "sensor_bit_depth",systemInteger, XI_status); 
status = setIntegerParam(GC_E_SensorBitDepth, systemInteger); 

XI_status = xiGetParamInt(xiH,"output_bit_depth",&systemInteger); 
printf("%s %d %d\n", "output_bit_depth",systemInteger, XI_status); 
status = setIntegerParam(GC_E_OutputBitDepth, systemInteger); 

XI_status = xiGetParamInt(xiH,"output_bit_packing",&systemInteger); 
printf("%s %d %d\n", "output_bit_packing",systemInteger, XI_status); 
status = setIntegerParam(GC_B_OutputBitPacking, systemInteger); 

XI_status = xiGetParamInt(xiH,"output_bit_packing",&systemInteger); 
printf("%s %d %d\n", "output_bit_packing",systemInteger, XI_status); 
status = setIntegerParam(GC_B_OutputBitPacking, systemInteger); 

XI_status = xiGetParamInt(xiH,"output_bit_packing_type",&systemInteger); 
printf("%s %d %d\n", "output_bit_packing_type",systemInteger, XI_status); 
status = setIntegerParam(GC_E_OutputBitPackingType, systemInteger); 

XI_status = xiGetParamInt(xiH,"image_data_bit_depth",&systemInteger); 
printf("%s %d %d\n", "image_data_bit_depth",systemInteger, XI_status); 
status = setIntegerParam(GC_E_ImageDataBitDepth, systemInteger); 

XI_status = xiGetParamInt(xiH,"acq_timing_mode",&systemInteger); 
printf("%s %d %d\n", "acq_timing_mode",systemInteger, XI_status); 
status = setIntegerParam(GC_E_AcqTimingMode, systemInteger); 

XI_status = xiGetParamFloat(xiH,"framerate",&systemFloat); 
printf("%s %f %d\n", "framerate",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_Framerate, systemDouble); 

XI_status = xiGetParamInt(xiH,"framerate",&systemInteger); 
printf("%s %d %d\n", "framerate",systemInteger, XI_status); 
status = setIntegerParam(GC_D_Framerate, systemInteger); 

XI_status = xiGetParamInt(xiH,"LUTEnable",&systemInteger); 
printf("%s %d %d\n", "LUTEnable",systemInteger, XI_status); 
status = setIntegerParam(GC_B_LUTEnable, systemInteger); 

XI_status = xiGetParamInt(xiH,"LUTEnable",&systemInteger); 
printf("%s %d %d\n", "LUTEnable",systemInteger, XI_status); 
status = setIntegerParam(GC_B_LUTEnable, systemInteger); 

XI_status = xiGetParamInt(xiH,"LUTIndex",&systemInteger); 
printf("%s %d %d\n", "LUTIndex",systemInteger, XI_status); 
status = setIntegerParam(GC_I_LUTIndex, systemInteger); 

XI_status = xiGetParamInt(xiH,"LUTIndex",&systemInteger); 
printf("%s %d %d\n", "LUTIndex",systemInteger, XI_status); 
status = setIntegerParam(GC_I_LUTIndex, systemInteger); 

XI_status = xiGetParamInt(xiH,"LUTValue",&systemInteger); 
printf("%s %d %d\n", "LUTValue",systemInteger, XI_status); 
status = setIntegerParam(GC_I_LUTValue, systemInteger); 

XI_status = xiGetParamInt(xiH,"LUTValue",&systemInteger); 
printf("%s %d %d\n", "LUTValue",systemInteger, XI_status); 
status = setIntegerParam(GC_I_LUTValue, systemInteger); 

XI_status = xiGetParamInt(xiH,"sensor_feature_selector",&systemInteger); 
printf("%s %d %d\n", "sensor_feature_selector",systemInteger, XI_status); 
status = setIntegerParam(GC_E_SensorFeatureSelector, systemInteger); 

XI_status = xiGetParamInt(xiH,"sensor_feature_value",&systemInteger); 
printf("%s %d %d\n", "sensor_feature_value",systemInteger, XI_status); 
status = setIntegerParam(GC_I_SensorFeatureValue, systemInteger); 

XI_status = xiGetParamInt(xiH,"sensor_feature_value",&systemInteger); 
printf("%s %d %d\n", "sensor_feature_value",systemInteger, XI_status); 
status = setIntegerParam(GC_I_SensorFeatureValue, systemInteger); 

XI_status = xiGetParamInt(xiH,"iscooled",&systemInteger); 
printf("%s %d %d\n", "iscooled",systemInteger, XI_status); 
status = setIntegerParam(GC_B_Iscooled, systemInteger); 

XI_status = xiGetParamInt(xiH,"iscooled",&systemInteger); 
printf("%s %d %d\n", "iscooled",systemInteger, XI_status); 
status = setIntegerParam(GC_B_Iscooled, systemInteger); 

XI_status = xiGetParamInt(xiH,"cooling",&systemInteger); 
printf("%s %d %d\n", "cooling",systemInteger, XI_status); 
status = setIntegerParam(GC_B_Cooling, systemInteger); 

XI_status = xiGetParamInt(xiH,"cooling",&systemInteger); 
printf("%s %d %d\n", "cooling",systemInteger, XI_status); 
status = setIntegerParam(GC_B_Cooling, systemInteger); 

XI_status = xiGetParamFloat(xiH,"target_temp",&systemFloat); 
printf("%s %f %d\n", "target_temp",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_TargetTemp, systemDouble); 

XI_status = xiGetParamInt(xiH,"target_temp",&systemInteger); 
printf("%s %d %d\n", "target_temp",systemInteger, XI_status); 
status = setIntegerParam(GC_D_TargetTemp, systemInteger); 

XI_status = xiGetParamFloat(xiH,"chip_temp",&systemFloat); 
printf("%s %f %d\n", "chip_temp",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_ChipTemp, systemDouble); 

XI_status = xiGetParamInt(xiH,"chip_temp",&systemInteger); 
printf("%s %d %d\n", "chip_temp",systemInteger, XI_status); 
status = setIntegerParam(GC_D_ChipTemp, systemInteger); 

XI_status = xiGetParamFloat(xiH,"hous_temp",&systemFloat); 
printf("%s %f %d\n", "hous_temp",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_HousTemp, systemDouble); 

XI_status = xiGetParamInt(xiH,"hous_temp",&systemInteger); 
printf("%s %d %d\n", "hous_temp",systemInteger, XI_status); 
status = setIntegerParam(GC_D_HousTemp, systemInteger); 

XI_status = xiGetParamFloat(xiH,"hous_back_side_temp",&systemFloat); 
printf("%s %f %d\n", "hous_back_side_temp",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_HousBackSideTemp, systemDouble); 

XI_status = xiGetParamInt(xiH,"hous_back_side_temp",&systemInteger); 
printf("%s %d %d\n", "hous_back_side_temp",systemInteger, XI_status); 
status = setIntegerParam(GC_D_HousBackSideTemp, systemInteger); 

XI_status = xiGetParamFloat(xiH,"sensor_board_temp",&systemFloat); 
printf("%s %f %d\n", "sensor_board_temp",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_SensorBoardTemp, systemDouble); 

XI_status = xiGetParamInt(xiH,"sensor_board_temp",&systemInteger); 
printf("%s %d %d\n", "sensor_board_temp",systemInteger, XI_status); 
status = setIntegerParam(GC_D_SensorBoardTemp, systemInteger); 

XI_status = xiGetParamInt(xiH,"cms",&systemInteger); 
printf("%s %d %d\n", "cms",systemInteger, XI_status); 
status = setIntegerParam(GC_E_Cms, systemInteger); 

XI_status = xiGetParamInt(xiH,"apply_cms",&systemInteger); 
printf("%s %d %d\n", "apply_cms",systemInteger, XI_status); 
status = setIntegerParam(GC_B_ApplyCms, systemInteger); 

XI_status = xiGetParamInt(xiH,"apply_cms",&systemInteger); 
printf("%s %d %d\n", "apply_cms",systemInteger, XI_status); 
status = setIntegerParam(GC_B_ApplyCms, systemInteger); 

XI_status = xiGetParamString(xiH,"input_cms_profile",systemString, sizeof(systemString)); 
printf("%s %s %d\n", "input_cms_profile",systemString,XI_status); 
status = setStringParam(GC_S_InputCmsProfile, systemString); 

XI_status = xiGetParamInt(xiH,"input_cms_profile",&systemInteger); 
printf("%s %d %d\n", "input_cms_profile",systemInteger, XI_status); 
status = setIntegerParam(GC_S_InputCmsProfile, systemInteger); 

XI_status = xiGetParamString(xiH,"output_cms_profile",systemString, sizeof(systemString)); 
printf("%s %s %d\n", "output_cms_profile",systemString,XI_status); 
status = setStringParam(GC_S_OutputCmsProfile, systemString); 

XI_status = xiGetParamInt(xiH,"output_cms_profile",&systemInteger); 
printf("%s %d %d\n", "output_cms_profile",systemInteger, XI_status); 
status = setIntegerParam(GC_S_OutputCmsProfile, systemInteger); 

XI_status = xiGetParamInt(xiH,"cms_intent",&systemInteger); 
printf("%s %d %d\n", "cms_intent",systemInteger, XI_status); 
status = setIntegerParam(GC_E_CmsIntent, systemInteger); 

XI_status = xiGetParamFloat(xiH,"gammaY",&systemFloat); 
printf("%s %f %d\n", "gammaY",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_GammaY, systemDouble); 

XI_status = xiGetParamInt(xiH,"gammaY",&systemInteger); 
printf("%s %d %d\n", "gammaY",systemInteger, XI_status); 
status = setIntegerParam(GC_D_GammaY, systemInteger); 

XI_status = xiGetParamFloat(xiH,"gammaC",&systemFloat); 
printf("%s %f %d\n", "gammaC",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_GammaC, systemDouble); 

XI_status = xiGetParamInt(xiH,"gammaC",&systemInteger); 
printf("%s %d %d\n", "gammaC",systemInteger, XI_status); 
status = setIntegerParam(GC_D_GammaC, systemInteger); 

XI_status = xiGetParamFloat(xiH,"sharpness",&systemFloat); 
printf("%s %f %d\n", "sharpness",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_Sharpness, systemDouble); 

XI_status = xiGetParamInt(xiH,"sharpness",&systemInteger); 
printf("%s %d %d\n", "sharpness",systemInteger, XI_status); 
status = setIntegerParam(GC_D_Sharpness, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ccMTX00",&systemFloat); 
printf("%s %f %d\n", "ccMTX00",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_CcMTX00, systemDouble); 

XI_status = xiGetParamInt(xiH,"ccMTX00",&systemInteger); 
printf("%s %d %d\n", "ccMTX00",systemInteger, XI_status); 
status = setIntegerParam(GC_D_CcMTX00, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ccMTX01",&systemFloat); 
printf("%s %f %d\n", "ccMTX01",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_CcMTX01, systemDouble); 

XI_status = xiGetParamInt(xiH,"ccMTX01",&systemInteger); 
printf("%s %d %d\n", "ccMTX01",systemInteger, XI_status); 
status = setIntegerParam(GC_D_CcMTX01, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ccMTX02",&systemFloat); 
printf("%s %f %d\n", "ccMTX02",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_CcMTX02, systemDouble); 

XI_status = xiGetParamInt(xiH,"ccMTX02",&systemInteger); 
printf("%s %d %d\n", "ccMTX02",systemInteger, XI_status); 
status = setIntegerParam(GC_D_CcMTX02, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ccMTX03",&systemFloat); 
printf("%s %f %d\n", "ccMTX03",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_CcMTX03, systemDouble); 

XI_status = xiGetParamInt(xiH,"ccMTX03",&systemInteger); 
printf("%s %d %d\n", "ccMTX03",systemInteger, XI_status); 
status = setIntegerParam(GC_D_CcMTX03, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ccMTX10",&systemFloat); 
printf("%s %f %d\n", "ccMTX10",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_CcMTX10, systemDouble); 

XI_status = xiGetParamInt(xiH,"ccMTX10",&systemInteger); 
printf("%s %d %d\n", "ccMTX10",systemInteger, XI_status); 
status = setIntegerParam(GC_D_CcMTX10, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ccMTX11",&systemFloat); 
printf("%s %f %d\n", "ccMTX11",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_CcMTX11, systemDouble); 

XI_status = xiGetParamInt(xiH,"ccMTX11",&systemInteger); 
printf("%s %d %d\n", "ccMTX11",systemInteger, XI_status); 
status = setIntegerParam(GC_D_CcMTX11, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ccMTX12",&systemFloat); 
printf("%s %f %d\n", "ccMTX12",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_CcMTX12, systemDouble); 

XI_status = xiGetParamInt(xiH,"ccMTX12",&systemInteger); 
printf("%s %d %d\n", "ccMTX12",systemInteger, XI_status); 
status = setIntegerParam(GC_D_CcMTX12, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ccMTX13",&systemFloat); 
printf("%s %f %d\n", "ccMTX13",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_CcMTX13, systemDouble); 

XI_status = xiGetParamInt(xiH,"ccMTX13",&systemInteger); 
printf("%s %d %d\n", "ccMTX13",systemInteger, XI_status); 
status = setIntegerParam(GC_D_CcMTX13, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ccMTX20",&systemFloat); 
printf("%s %f %d\n", "ccMTX20",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_CcMTX20, systemDouble); 

XI_status = xiGetParamInt(xiH,"ccMTX20",&systemInteger); 
printf("%s %d %d\n", "ccMTX20",systemInteger, XI_status); 
status = setIntegerParam(GC_D_CcMTX20, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ccMTX21",&systemFloat); 
printf("%s %f %d\n", "ccMTX21",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_CcMTX21, systemDouble); 

XI_status = xiGetParamInt(xiH,"ccMTX21",&systemInteger); 
printf("%s %d %d\n", "ccMTX21",systemInteger, XI_status); 
status = setIntegerParam(GC_D_CcMTX21, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ccMTX22",&systemFloat); 
printf("%s %f %d\n", "ccMTX22",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_CcMTX22, systemDouble); 

XI_status = xiGetParamInt(xiH,"ccMTX22",&systemInteger); 
printf("%s %d %d\n", "ccMTX22",systemInteger, XI_status); 
status = setIntegerParam(GC_D_CcMTX22, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ccMTX23",&systemFloat); 
printf("%s %f %d\n", "ccMTX23",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_CcMTX23, systemDouble); 

XI_status = xiGetParamInt(xiH,"ccMTX23",&systemInteger); 
printf("%s %d %d\n", "ccMTX23",systemInteger, XI_status); 
status = setIntegerParam(GC_D_CcMTX23, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ccMTX30",&systemFloat); 
printf("%s %f %d\n", "ccMTX30",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_CcMTX30, systemDouble); 

XI_status = xiGetParamInt(xiH,"ccMTX30",&systemInteger); 
printf("%s %d %d\n", "ccMTX30",systemInteger, XI_status); 
status = setIntegerParam(GC_D_CcMTX30, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ccMTX31",&systemFloat); 
printf("%s %f %d\n", "ccMTX31",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_CcMTX31, systemDouble); 

XI_status = xiGetParamInt(xiH,"ccMTX31",&systemInteger); 
printf("%s %d %d\n", "ccMTX31",systemInteger, XI_status); 
status = setIntegerParam(GC_D_CcMTX31, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ccMTX32",&systemFloat); 
printf("%s %f %d\n", "ccMTX32",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_CcMTX32, systemDouble); 

XI_status = xiGetParamInt(xiH,"ccMTX32",&systemInteger); 
printf("%s %d %d\n", "ccMTX32",systemInteger, XI_status); 
status = setIntegerParam(GC_D_CcMTX32, systemInteger); 

XI_status = xiGetParamFloat(xiH,"ccMTX33",&systemFloat); 
printf("%s %f %d\n", "ccMTX33",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_CcMTX33, systemDouble); 

XI_status = xiGetParamInt(xiH,"ccMTX33",&systemInteger); 
printf("%s %d %d\n", "ccMTX33",systemInteger, XI_status); 
status = setIntegerParam(GC_D_CcMTX33, systemInteger); 

XI_status = xiGetParamInt(xiH,"defccMTX",&systemInteger); 
printf("%s %d %d\n", "defccMTX",systemInteger, XI_status); 
status = setIntegerParam(GC_C_DefccMTX, systemInteger); 

XI_status = xiGetParamInt(xiH,"defccMTX",&systemInteger); 
printf("%s %d %d\n", "defccMTX",systemInteger, XI_status); 
status = setIntegerParam(GC_C_DefccMTX, systemInteger); 

XI_status = xiGetParamInt(xiH,"trigger_source",&systemInteger); 
printf("%s %d %d\n", "trigger_source",systemInteger, XI_status); 
status = setIntegerParam(GC_E_TriggerSource, systemInteger); 

XI_status = xiGetParamInt(xiH,"trigger_software",&systemInteger); 
printf("%s %d %d\n", "trigger_software",systemInteger, XI_status); 
status = setIntegerParam(GC_C_TriggerSoftware, systemInteger); 

XI_status = xiGetParamInt(xiH,"trigger_software",&systemInteger); 
printf("%s %d %d\n", "trigger_software",systemInteger, XI_status); 
status = setIntegerParam(GC_C_TriggerSoftware, systemInteger); 

XI_status = xiGetParamInt(xiH,"trigger_selector",&systemInteger); 
printf("%s %d %d\n", "trigger_selector",systemInteger, XI_status); 
status = setIntegerParam(GC_E_TriggerSelector, systemInteger); 

XI_status = xiGetParamInt(xiH,"acq_frame_burst_count",&systemInteger); 
printf("%s %d %d\n", "acq_frame_burst_count",systemInteger, XI_status); 
status = setIntegerParam(GC_I_AcqFrameBurstCount, systemInteger); 

XI_status = xiGetParamInt(xiH,"acq_frame_burst_count",&systemInteger); 
printf("%s %d %d\n", "acq_frame_burst_count",systemInteger, XI_status); 
status = setIntegerParam(GC_I_AcqFrameBurstCount, systemInteger); 

XI_status = xiGetParamInt(xiH,"trigger_delay",&systemInteger); 
printf("%s %d %d\n", "trigger_delay",systemInteger, XI_status); 
status = setIntegerParam(GC_I_TriggerDelay, systemInteger); 

XI_status = xiGetParamInt(xiH,"trigger_delay",&systemInteger); 
printf("%s %d %d\n", "trigger_delay",systemInteger, XI_status); 
status = setIntegerParam(GC_I_TriggerDelay, systemInteger); 

XI_status = xiGetParamInt(xiH,"gpi_selector",&systemInteger); 
printf("%s %d %d\n", "gpi_selector",systemInteger, XI_status); 
status = setIntegerParam(GC_E_GpiSelector, systemInteger); 

XI_status = xiGetParamInt(xiH,"gpi_mode",&systemInteger); 
printf("%s %d %d\n", "gpi_mode",systemInteger, XI_status); 
status = setIntegerParam(GC_E_GpiMode, systemInteger); 

XI_status = xiGetParamInt(xiH,"gpi_level",&systemInteger); 
printf("%s %d %d\n", "gpi_level",systemInteger, XI_status); 
status = setIntegerParam(GC_I_GpiLevel, systemInteger); 

XI_status = xiGetParamInt(xiH,"gpi_level",&systemInteger); 
printf("%s %d %d\n", "gpi_level",systemInteger, XI_status); 
status = setIntegerParam(GC_I_GpiLevel, systemInteger); 

XI_status = xiGetParamInt(xiH,"gpo_selector",&systemInteger); 
printf("%s %d %d\n", "gpo_selector",systemInteger, XI_status); 
status = setIntegerParam(GC_E_GpoSelector, systemInteger); 

XI_status = xiGetParamInt(xiH,"gpo_mode",&systemInteger); 
printf("%s %d %d\n", "gpo_mode",systemInteger, XI_status); 
status = setIntegerParam(GC_E_GpoMode, systemInteger); 

XI_status = xiGetParamInt(xiH,"led_selector",&systemInteger); 
printf("%s %d %d\n", "led_selector",systemInteger, XI_status); 
status = setIntegerParam(GC_E_LedSelector, systemInteger); 

XI_status = xiGetParamInt(xiH,"led_mode",&systemInteger); 
printf("%s %d %d\n", "led_mode",systemInteger, XI_status); 
status = setIntegerParam(GC_E_LedMode, systemInteger); 

XI_status = xiGetParamInt(xiH,"dbnc_en",&systemInteger); 
printf("%s %d %d\n", "dbnc_en",systemInteger, XI_status); 
status = setIntegerParam(GC_B_DbncEn, systemInteger); 

XI_status = xiGetParamInt(xiH,"dbnc_en",&systemInteger); 
printf("%s %d %d\n", "dbnc_en",systemInteger, XI_status); 
status = setIntegerParam(GC_B_DbncEn, systemInteger); 

XI_status = xiGetParamInt(xiH,"dbnc_t0",&systemInteger); 
printf("%s %d %d\n", "dbnc_t0",systemInteger, XI_status); 
status = setIntegerParam(GC_I_DbncT0, systemInteger); 

XI_status = xiGetParamInt(xiH,"dbnc_t0",&systemInteger); 
printf("%s %d %d\n", "dbnc_t0",systemInteger, XI_status); 
status = setIntegerParam(GC_I_DbncT0, systemInteger); 

XI_status = xiGetParamInt(xiH,"dbnc_t1",&systemInteger); 
printf("%s %d %d\n", "dbnc_t1",systemInteger, XI_status); 
status = setIntegerParam(GC_I_DbncT1, systemInteger); 

XI_status = xiGetParamInt(xiH,"dbnc_t1",&systemInteger); 
printf("%s %d %d\n", "dbnc_t1",systemInteger, XI_status); 
status = setIntegerParam(GC_I_DbncT1, systemInteger); 

XI_status = xiGetParamInt(xiH,"dbnc_pol",&systemInteger); 
printf("%s %d %d\n", "dbnc_pol",systemInteger, XI_status); 
status = setIntegerParam(GC_B_DbncPol, systemInteger); 

XI_status = xiGetParamInt(xiH,"dbnc_pol",&systemInteger); 
printf("%s %d %d\n", "dbnc_pol",systemInteger, XI_status); 
status = setIntegerParam(GC_B_DbncPol, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr_kneepoint_count",&systemInteger); 
printf("%s %d %d\n", "hdr_kneepoint_count",systemInteger, XI_status); 
status = setIntegerParam(GC_I_HdrKneepointCount, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr_kneepoint_count",&systemInteger); 
printf("%s %d %d\n", "hdr_kneepoint_count",systemInteger, XI_status); 
status = setIntegerParam(GC_I_HdrKneepointCount, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr_t1",&systemInteger); 
printf("%s %d %d\n", "hdr_t1",systemInteger, XI_status); 
status = setIntegerParam(GC_I_HdrT1, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr_t1",&systemInteger); 
printf("%s %d %d\n", "hdr_t1",systemInteger, XI_status); 
status = setIntegerParam(GC_I_HdrT1, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr_t2",&systemInteger); 
printf("%s %d %d\n", "hdr_t2",systemInteger, XI_status); 
status = setIntegerParam(GC_I_HdrT2, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr_t2",&systemInteger); 
printf("%s %d %d\n", "hdr_t2",systemInteger, XI_status); 
status = setIntegerParam(GC_I_HdrT2, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr_kneepoint1",&systemInteger); 
printf("%s %d %d\n", "hdr_kneepoint1",systemInteger, XI_status); 
status = setIntegerParam(GC_I_HdrKneepoint1, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr_kneepoint1",&systemInteger); 
printf("%s %d %d\n", "hdr_kneepoint1",systemInteger, XI_status); 
status = setIntegerParam(GC_I_HdrKneepoint1, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr_kneepoint2",&systemInteger); 
printf("%s %d %d\n", "hdr_kneepoint2",systemInteger, XI_status); 
status = setIntegerParam(GC_I_HdrKneepoint2, systemInteger); 

XI_status = xiGetParamInt(xiH,"hdr_kneepoint2",&systemInteger); 
printf("%s %d %d\n", "hdr_kneepoint2",systemInteger, XI_status); 
status = setIntegerParam(GC_I_HdrKneepoint2, systemInteger); 

XI_status = xiGetParamInt(xiH,"lens_mode",&systemInteger); 
printf("%s %d %d\n", "lens_mode",systemInteger, XI_status); 
status = setIntegerParam(GC_B_LensMode, systemInteger); 

XI_status = xiGetParamInt(xiH,"lens_mode",&systemInteger); 
printf("%s %d %d\n", "lens_mode",systemInteger, XI_status); 
status = setIntegerParam(GC_B_LensMode, systemInteger); 

XI_status = xiGetParamFloat(xiH,"lens_aperture_value",&systemFloat); 
printf("%s %f %d\n", "lens_aperture_value",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_LensApertureValue, systemDouble); 

XI_status = xiGetParamInt(xiH,"lens_aperture_value",&systemInteger); 
printf("%s %d %d\n", "lens_aperture_value",systemInteger, XI_status); 
status = setIntegerParam(GC_D_LensApertureValue, systemInteger); 

XI_status = xiGetParamInt(xiH,"lens_focus_movement_value",&systemInteger); 
printf("%s %d %d\n", "lens_focus_movement_value",systemInteger, XI_status); 
status = setIntegerParam(GC_I_LensFocusMovementValue, systemInteger); 

XI_status = xiGetParamInt(xiH,"lens_focus_movement_value",&systemInteger); 
printf("%s %d %d\n", "lens_focus_movement_value",systemInteger, XI_status); 
status = setIntegerParam(GC_I_LensFocusMovementValue, systemInteger); 

XI_status = xiGetParamInt(xiH,"lens_focus_move",&systemInteger); 
printf("%s %d %d\n", "lens_focus_move",systemInteger, XI_status); 
status = setIntegerParam(GC_C_LensFocusMove, systemInteger); 

XI_status = xiGetParamInt(xiH,"lens_focus_move",&systemInteger); 
printf("%s %d %d\n", "lens_focus_move",systemInteger, XI_status); 
status = setIntegerParam(GC_C_LensFocusMove, systemInteger); 

XI_status = xiGetParamFloat(xiH,"lens_focus_distance",&systemFloat); 
printf("%s %f %d\n", "lens_focus_distance",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_LensFocusDistance, systemDouble); 

XI_status = xiGetParamInt(xiH,"lens_focus_distance",&systemInteger); 
printf("%s %d %d\n", "lens_focus_distance",systemInteger, XI_status); 
status = setIntegerParam(GC_D_LensFocusDistance, systemInteger); 

XI_status = xiGetParamFloat(xiH,"lens_focal_length",&systemFloat); 
printf("%s %f %d\n", "lens_focal_length",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_LensFocalLength, systemDouble); 

XI_status = xiGetParamInt(xiH,"lens_focal_length",&systemInteger); 
printf("%s %d %d\n", "lens_focal_length",systemInteger, XI_status); 
status = setIntegerParam(GC_D_LensFocalLength, systemInteger); 

XI_status = xiGetParamInt(xiH,"lens_feature_selector",&systemInteger); 
printf("%s %d %d\n", "lens_feature_selector",systemInteger, XI_status); 
status = setIntegerParam(GC_E_LensFeatureSelector, systemInteger); 

XI_status = xiGetParamFloat(xiH,"lens_feature",&systemFloat); 
printf("%s %f %d\n", "lens_feature",systemFloat, XI_status); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_LensFeature, systemDouble); 

XI_status = xiGetParamInt(xiH,"lens_feature",&systemInteger); 
printf("%s %d %d\n", "lens_feature",systemInteger, XI_status); 
status = setIntegerParam(GC_D_LensFeature, systemInteger); 

XI_status = xiGetParamInt(xiH,"imgpayloadsize",&systemInteger); 
printf("%s %d %d\n", "imgpayloadsize",systemInteger, XI_status); 
status = setIntegerParam(GC_I_Imgpayloadsize, systemInteger); 

XI_status = xiGetParamInt(xiH,"imgpayloadsize",&systemInteger); 
printf("%s %d %d\n", "imgpayloadsize",systemInteger, XI_status); 
status = setIntegerParam(GC_I_Imgpayloadsize, systemInteger); 

XI_status = xiGetParamString(xiH,"xiapi_context_list",systemString, sizeof(systemString)); 
printf("%s %s %d\n", "xiapi_context_list",systemString,XI_status); 
status = setStringParam(GC_S_XiapiContextList, systemString); 

XI_status = xiGetParamInt(xiH,"xiapi_context_list",&systemInteger); 
printf("%s %d %d\n", "xiapi_context_list",systemInteger, XI_status); 
status = setIntegerParam(GC_S_XiapiContextList, systemInteger); 

XI_status = xiGetParamInt(xiH,"transport_pixel_format",&systemInteger); 
printf("%s %d %d\n", "transport_pixel_format",systemInteger, XI_status); 
status = setIntegerParam(GC_I_TransportPixelFormat, systemInteger); 

XI_status = xiGetParamInt(xiH,"transport_pixel_format",&systemInteger); 
printf("%s %d %d\n", "transport_pixel_format",systemInteger, XI_status); 
status = setIntegerParam(GC_I_TransportPixelFormat, systemInteger); 

