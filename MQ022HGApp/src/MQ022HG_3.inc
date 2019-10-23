/* MQ022HG */ 

createParam(GC_I_exposureString, asynParamInt32, &GC_I_exposure);

createParam(GC_E_gain_selectorString, asynParamInt32, &GC_E_gain_selector);

createParam(GC_D_gainString, asynParamFloat64, &GC_D_gain);

createParam(GC_E_downsamplingString, asynParamInt32, &GC_E_downsampling);

createParam(GC_E_downsampling_typeString, asynParamInt32, &GC_E_downsampling_type);

createParam(GC_E_imgdataformatString, asynParamInt32, &GC_E_imgdataformat);

createParam(GC_E_shutter_typeString, asynParamInt32, &GC_E_shutter_type);

createParam(GC_E_sensor_tapsString, asynParamInt32, &GC_E_sensor_taps);

createParam(GC_B_aeagString, asynParamInt32, &GC_B_aeag);

createParam(GC_I_aeag_roi_offset_xString, asynParamInt32, &GC_I_aeag_roi_offset_x);

createParam(GC_I_aeag_roi_offset_yString, asynParamInt32, &GC_I_aeag_roi_offset_y);

createParam(GC_I_aeag_roi_widthString, asynParamInt32, &GC_I_aeag_roi_width);

createParam(GC_I_aeag_roi_heightString, asynParamInt32, &GC_I_aeag_roi_height);

createParam(GC_E_bpc_list_selectorString, asynParamInt32, &GC_E_bpc_list_selector);

createParam(GC_B_bpcString, asynParamInt32, &GC_B_bpc);

createParam(GC_B_column_fpn_correctionString, asynParamInt32, &GC_B_column_fpn_correction);

createParam(GC_B_row_fpn_correctionString, asynParamInt32, &GC_B_row_fpn_correction);

createParam(GC_B_auto_wbString, asynParamInt32, &GC_B_auto_wb);

createParam(GC_C_manual_wbString, asynParamInt32, &GC_C_manual_wb);

createParam(GC_D_wb_krString, asynParamFloat64, &GC_D_wb_kr);

createParam(GC_D_wb_kgString, asynParamFloat64, &GC_D_wb_kg);

createParam(GC_D_wb_kbString, asynParamFloat64, &GC_D_wb_kb);

createParam(GC_I_image_black_levelString, asynParamInt32, &GC_I_image_black_level);

createParam(GC_I_offsetXString, asynParamInt32, &GC_I_offsetX);

createParam(GC_I_offsetYString, asynParamInt32, &GC_I_offsetY);

createParam(GC_I_widthString, asynParamInt32, &GC_I_width);

createParam(GC_I_heightString, asynParamInt32, &GC_I_height);

createParam(GC_I_region_selectorString, asynParamInt32, &GC_I_region_selector);

createParam(GC_B_region_modeString, asynParamInt32, &GC_B_region_mode);

createParam(GC_B_hdrString, asynParamInt32, &GC_B_hdr);

createParam(GC_B_ffcString, asynParamInt32, &GC_B_ffc);

createParam(GC_S_ffc_flat_field_file_nameString, asynParamOctet, &GC_S_ffc_flat_field_file_name);

createParam(GC_S_ffc_dark_field_file_nameString, asynParamOctet, &GC_S_ffc_dark_field_file_name);

createParam(GC_B_horizontal_flipString, asynParamInt32, &GC_B_horizontal_flip);

createParam(GC_B_vertical_flipString, asynParamInt32, &GC_B_vertical_flip);

createParam(GC_D_exp_priorityString, asynParamFloat64, &GC_D_exp_priority);

createParam(GC_I_ae_max_limitString, asynParamInt32, &GC_I_ae_max_limit);

createParam(GC_D_ag_max_limitString, asynParamFloat64, &GC_D_ag_max_limit);

createParam(GC_D_aeag_levelString, asynParamFloat64, &GC_D_aeag_level);

createParam(GC_E_binning_selectorString, asynParamInt32, &GC_E_binning_selector);

createParam(GC_I_binning_verticalString, asynParamInt32, &GC_I_binning_vertical);

createParam(GC_I_binning_horizontalString, asynParamInt32, &GC_I_binning_horizontal);

createParam(GC_E_binning_vertical_modeString, asynParamInt32, &GC_E_binning_vertical_mode);

createParam(GC_E_binning_horizontal_modeString, asynParamInt32, &GC_E_binning_horizontal_mode);

createParam(GC_E_binning_vertical_patternString, asynParamInt32, &GC_E_binning_vertical_pattern);

createParam(GC_E_binning_horizontal_patternString, asynParamInt32, &GC_E_binning_horizontal_pattern);

createParam(GC_E_decimation_selectorString, asynParamInt32, &GC_E_decimation_selector);

createParam(GC_I_decimation_verticalString, asynParamInt32, &GC_I_decimation_vertical);

createParam(GC_I_decimation_horizontalString, asynParamInt32, &GC_I_decimation_horizontal);

createParam(GC_E_decimation_vertical_patternString, asynParamInt32, &GC_E_decimation_vertical_pattern);

createParam(GC_E_decimation_horizontal_patternString, asynParamInt32, &GC_E_decimation_horizontal_pattern);

createParam(GC_E_test_pattern_generator_selectorString, asynParamInt32, &GC_E_test_pattern_generator_selector);

createParam(GC_E_test_patternString, asynParamInt32, &GC_E_test_pattern);

createParam(GC_B_limit_bandwidth_modeString, asynParamInt32, &GC_B_limit_bandwidth_mode);

createParam(GC_I_limit_bandwidthString, asynParamInt32, &GC_I_limit_bandwidth);

createParam(GC_E_sensor_bit_depthString, asynParamInt32, &GC_E_sensor_bit_depth);

createParam(GC_E_output_bit_depthString, asynParamInt32, &GC_E_output_bit_depth);

createParam(GC_B_output_bit_packingString, asynParamInt32, &GC_B_output_bit_packing);

createParam(GC_E_output_bit_packing_typeString, asynParamInt32, &GC_E_output_bit_packing_type);

createParam(GC_E_image_data_bit_depthString, asynParamInt32, &GC_E_image_data_bit_depth);

createParam(GC_E_acq_timing_modeString, asynParamInt32, &GC_E_acq_timing_mode);

createParam(GC_D_framerateString, asynParamFloat64, &GC_D_framerate);

createParam(GC_B_LUTEnableString, asynParamInt32, &GC_B_LUTEnable);

createParam(GC_I_LUTIndexString, asynParamInt32, &GC_I_LUTIndex);

createParam(GC_I_LUTValueString, asynParamInt32, &GC_I_LUTValue);

createParam(GC_E_sensor_feature_selectorString, asynParamInt32, &GC_E_sensor_feature_selector);

createParam(GC_I_sensor_feature_valueString, asynParamInt32, &GC_I_sensor_feature_value);

createParam(GC_B_iscooledString, asynParamInt32, &GC_B_iscooled);

createParam(GC_B_coolingString, asynParamInt32, &GC_B_cooling);

createParam(GC_D_target_tempString, asynParamFloat64, &GC_D_target_temp);

createParam(GC_D_chip_tempString, asynParamFloat64, &GC_D_chip_temp);

createParam(GC_D_hous_tempString, asynParamFloat64, &GC_D_hous_temp);

createParam(GC_D_hous_back_side_tempString, asynParamFloat64, &GC_D_hous_back_side_temp);

createParam(GC_D_sensor_board_tempString, asynParamFloat64, &GC_D_sensor_board_temp);

createParam(GC_E_cmsString, asynParamInt32, &GC_E_cms);

createParam(GC_B_apply_cmsString, asynParamInt32, &GC_B_apply_cms);

createParam(GC_S_input_cms_profileString, asynParamOctet, &GC_S_input_cms_profile);

createParam(GC_S_output_cms_profileString, asynParamOctet, &GC_S_output_cms_profile);

createParam(GC_E_cms_intentString, asynParamInt32, &GC_E_cms_intent);

createParam(GC_D_gammaYString, asynParamFloat64, &GC_D_gammaY);

createParam(GC_D_gammaCString, asynParamFloat64, &GC_D_gammaC);

createParam(GC_D_sharpnessString, asynParamFloat64, &GC_D_sharpness);

createParam(GC_D_ccMTX00String, asynParamFloat64, &GC_D_ccMTX00);

createParam(GC_D_ccMTX01String, asynParamFloat64, &GC_D_ccMTX01);

createParam(GC_D_ccMTX02String, asynParamFloat64, &GC_D_ccMTX02);

createParam(GC_D_ccMTX03String, asynParamFloat64, &GC_D_ccMTX03);

createParam(GC_D_ccMTX10String, asynParamFloat64, &GC_D_ccMTX10);

createParam(GC_D_ccMTX11String, asynParamFloat64, &GC_D_ccMTX11);

createParam(GC_D_ccMTX12String, asynParamFloat64, &GC_D_ccMTX12);

createParam(GC_D_ccMTX13String, asynParamFloat64, &GC_D_ccMTX13);

createParam(GC_D_ccMTX20String, asynParamFloat64, &GC_D_ccMTX20);

createParam(GC_D_ccMTX21String, asynParamFloat64, &GC_D_ccMTX21);

createParam(GC_D_ccMTX22String, asynParamFloat64, &GC_D_ccMTX22);

createParam(GC_D_ccMTX23String, asynParamFloat64, &GC_D_ccMTX23);

createParam(GC_D_ccMTX30String, asynParamFloat64, &GC_D_ccMTX30);

createParam(GC_D_ccMTX31String, asynParamFloat64, &GC_D_ccMTX31);

createParam(GC_D_ccMTX32String, asynParamFloat64, &GC_D_ccMTX32);

createParam(GC_D_ccMTX33String, asynParamFloat64, &GC_D_ccMTX33);

createParam(GC_C_defccMTXString, asynParamInt32, &GC_C_defccMTX);

createParam(GC_E_trigger_sourceString, asynParamInt32, &GC_E_trigger_source);

createParam(GC_C_trigger_softwareString, asynParamInt32, &GC_C_trigger_software);

createParam(GC_E_trigger_selectorString, asynParamInt32, &GC_E_trigger_selector);

createParam(GC_I_acq_frame_burst_countString, asynParamInt32, &GC_I_acq_frame_burst_count);

createParam(GC_I_trigger_delayString, asynParamInt32, &GC_I_trigger_delay);

createParam(GC_E_gpi_selectorString, asynParamInt32, &GC_E_gpi_selector);

createParam(GC_E_gpi_modeString, asynParamInt32, &GC_E_gpi_mode);

createParam(GC_I_gpi_levelString, asynParamInt32, &GC_I_gpi_level);

createParam(GC_E_gpo_selectorString, asynParamInt32, &GC_E_gpo_selector);

createParam(GC_E_gpo_modeString, asynParamInt32, &GC_E_gpo_mode);

createParam(GC_E_led_selectorString, asynParamInt32, &GC_E_led_selector);

createParam(GC_E_led_modeString, asynParamInt32, &GC_E_led_mode);

createParam(GC_B_dbnc_enString, asynParamInt32, &GC_B_dbnc_en);

createParam(GC_I_dbnc_t0String, asynParamInt32, &GC_I_dbnc_t0);

createParam(GC_I_dbnc_t1String, asynParamInt32, &GC_I_dbnc_t1);

createParam(GC_B_dbnc_polString, asynParamInt32, &GC_B_dbnc_pol);

createParam(GC_I_hdr_kneepoint_countString, asynParamInt32, &GC_I_hdr_kneepoint_count);

createParam(GC_I_hdr_t1String, asynParamInt32, &GC_I_hdr_t1);

createParam(GC_I_hdr_t2String, asynParamInt32, &GC_I_hdr_t2);

createParam(GC_I_hdr_kneepoint1String, asynParamInt32, &GC_I_hdr_kneepoint1);

createParam(GC_I_hdr_kneepoint2String, asynParamInt32, &GC_I_hdr_kneepoint2);

createParam(GC_B_lens_modeString, asynParamInt32, &GC_B_lens_mode);

createParam(GC_D_lens_aperture_valueString, asynParamFloat64, &GC_D_lens_aperture_value);

createParam(GC_I_lens_focus_movement_valueString, asynParamInt32, &GC_I_lens_focus_movement_value);

createParam(GC_C_lens_focus_moveString, asynParamInt32, &GC_C_lens_focus_move);

createParam(GC_D_lens_focus_distanceString, asynParamFloat64, &GC_D_lens_focus_distance);

createParam(GC_D_lens_focal_lengthString, asynParamFloat64, &GC_D_lens_focal_length);

createParam(GC_E_lens_feature_selectorString, asynParamInt32, &GC_E_lens_feature_selector);

createParam(GC_D_lens_featureString, asynParamFloat64, &GC_D_lens_feature);

createParam(GC_I_imgpayloadsizeString, asynParamInt32, &GC_I_imgpayloadsize);

createParam(GC_S_xiapi_context_listString, asynParamOctet, &GC_S_xiapi_context_list);

createParam(GC_I_transport_pixel_formatString, asynParamInt32, &GC_I_transport_pixel_format);

