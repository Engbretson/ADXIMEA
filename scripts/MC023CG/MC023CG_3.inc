/* MC023CG */ 

createParam(GC_I_ExposureString, asynParamInt32, &GC_I_Exposure);

createParam(GC_E_GainSelectorString, asynParamInt32, &GC_E_GainSelector);

createParam(GC_D_GainString, asynParamFloat64, &GC_D_Gain);

createParam(GC_E_DownsamplingString, asynParamInt32, &GC_E_Downsampling);

createParam(GC_E_DownsamplingTypeString, asynParamInt32, &GC_E_DownsamplingType);

createParam(GC_E_ImgdataformatString, asynParamInt32, &GC_E_Imgdataformat);

createParam(GC_E_ShutterTypeString, asynParamInt32, &GC_E_ShutterType);

createParam(GC_E_SensorTapsString, asynParamInt32, &GC_E_SensorTaps);

createParam(GC_B_AeagString, asynParamInt32, &GC_B_Aeag);

createParam(GC_I_AeagRoiOffsetXString, asynParamInt32, &GC_I_AeagRoiOffsetX);

createParam(GC_I_AeagRoiOffsetYString, asynParamInt32, &GC_I_AeagRoiOffsetY);

createParam(GC_I_AeagRoiWidthString, asynParamInt32, &GC_I_AeagRoiWidth);

createParam(GC_I_AeagRoiHeightString, asynParamInt32, &GC_I_AeagRoiHeight);

createParam(GC_E_BpcListSelectorString, asynParamInt32, &GC_E_BpcListSelector);

createParam(GC_B_BpcString, asynParamInt32, &GC_B_Bpc);

createParam(GC_B_ColumnFpnCorrectionString, asynParamInt32, &GC_B_ColumnFpnCorrection);

createParam(GC_B_RowFpnCorrectionString, asynParamInt32, &GC_B_RowFpnCorrection);

createParam(GC_B_AutoWbString, asynParamInt32, &GC_B_AutoWb);

createParam(GC_C_ManualWbString, asynParamInt32, &GC_C_ManualWb);

createParam(GC_D_WbKrString, asynParamFloat64, &GC_D_WbKr);

createParam(GC_D_WbKgString, asynParamFloat64, &GC_D_WbKg);

createParam(GC_D_WbKbString, asynParamFloat64, &GC_D_WbKb);

createParam(GC_I_ImageBlackLevelString, asynParamInt32, &GC_I_ImageBlackLevel);

createParam(GC_I_OffsetXString, asynParamInt32, &GC_I_OffsetX);

createParam(GC_I_OffsetYString, asynParamInt32, &GC_I_OffsetY);

createParam(GC_I_WidthString, asynParamInt32, &GC_I_Width);

createParam(GC_I_HeightString, asynParamInt32, &GC_I_Height);

createParam(GC_I_RegionSelectorString, asynParamInt32, &GC_I_RegionSelector);

createParam(GC_B_RegionModeString, asynParamInt32, &GC_B_RegionMode);

createParam(GC_B_HdrString, asynParamInt32, &GC_B_Hdr);

createParam(GC_B_FfcString, asynParamInt32, &GC_B_Ffc);

createParam(GC_S_FfcFlatFieldFileNameString, asynParamOctet, &GC_S_FfcFlatFieldFileName);

createParam(GC_S_FfcDarkFieldFileNameString, asynParamOctet, &GC_S_FfcDarkFieldFileName);

createParam(GC_B_HorizontalFlipString, asynParamInt32, &GC_B_HorizontalFlip);

createParam(GC_B_VerticalFlipString, asynParamInt32, &GC_B_VerticalFlip);

createParam(GC_D_ExpPriorityString, asynParamFloat64, &GC_D_ExpPriority);

createParam(GC_I_AeMaxLimitString, asynParamInt32, &GC_I_AeMaxLimit);

createParam(GC_D_AgMaxLimitString, asynParamFloat64, &GC_D_AgMaxLimit);

createParam(GC_D_AeagLevelString, asynParamFloat64, &GC_D_AeagLevel);

createParam(GC_E_BinningSelectorString, asynParamInt32, &GC_E_BinningSelector);

createParam(GC_I_BinningVerticalString, asynParamInt32, &GC_I_BinningVertical);

createParam(GC_I_BinningHorizontalString, asynParamInt32, &GC_I_BinningHorizontal);

createParam(GC_E_BinningVerticalModeString, asynParamInt32, &GC_E_BinningVerticalMode);

createParam(GC_E_BinningHorizontalModeString, asynParamInt32, &GC_E_BinningHorizontalMode);

createParam(GC_E_BinningVerticalPatternString, asynParamInt32, &GC_E_BinningVerticalPattern);

createParam(GC_E_BinningHorizontalPatternString, asynParamInt32, &GC_E_BinningHorizontalPattern);

createParam(GC_E_DecimationSelectorString, asynParamInt32, &GC_E_DecimationSelector);

createParam(GC_I_DecimationVerticalString, asynParamInt32, &GC_I_DecimationVertical);

createParam(GC_I_DecimationHorizontalString, asynParamInt32, &GC_I_DecimationHorizontal);

createParam(GC_E_DecimationVerticalPatternString, asynParamInt32, &GC_E_DecimationVerticalPattern);

createParam(GC_E_DecimationHorizontalPatternString, asynParamInt32, &GC_E_DecimationHorizontalPattern);

createParam(GC_E_TestPatternGeneratorSelectorString, asynParamInt32, &GC_E_TestPatternGeneratorSelector);

createParam(GC_E_TestPatternString, asynParamInt32, &GC_E_TestPattern);

createParam(GC_B_LimitBandwidthModeString, asynParamInt32, &GC_B_LimitBandwidthMode);

createParam(GC_I_LimitBandwidthString, asynParamInt32, &GC_I_LimitBandwidth);

createParam(GC_E_SensorBitDepthString, asynParamInt32, &GC_E_SensorBitDepth);

createParam(GC_E_OutputBitDepthString, asynParamInt32, &GC_E_OutputBitDepth);

createParam(GC_B_OutputBitPackingString, asynParamInt32, &GC_B_OutputBitPacking);

createParam(GC_E_OutputBitPackingTypeString, asynParamInt32, &GC_E_OutputBitPackingType);

createParam(GC_E_ImageDataBitDepthString, asynParamInt32, &GC_E_ImageDataBitDepth);

createParam(GC_E_AcqTimingModeString, asynParamInt32, &GC_E_AcqTimingMode);

createParam(GC_D_FramerateString, asynParamFloat64, &GC_D_Framerate);

createParam(GC_B_LUTEnableString, asynParamInt32, &GC_B_LUTEnable);

createParam(GC_I_LUTIndexString, asynParamInt32, &GC_I_LUTIndex);

createParam(GC_I_LUTValueString, asynParamInt32, &GC_I_LUTValue);

createParam(GC_E_SensorFeatureSelectorString, asynParamInt32, &GC_E_SensorFeatureSelector);

createParam(GC_I_SensorFeatureValueString, asynParamInt32, &GC_I_SensorFeatureValue);

createParam(GC_B_IscooledString, asynParamInt32, &GC_B_Iscooled);

createParam(GC_B_CoolingString, asynParamInt32, &GC_B_Cooling);

createParam(GC_D_TargetTempString, asynParamFloat64, &GC_D_TargetTemp);

createParam(GC_D_ChipTempString, asynParamFloat64, &GC_D_ChipTemp);

createParam(GC_D_HousTempString, asynParamFloat64, &GC_D_HousTemp);

createParam(GC_D_HousBackSideTempString, asynParamFloat64, &GC_D_HousBackSideTemp);

createParam(GC_D_SensorBoardTempString, asynParamFloat64, &GC_D_SensorBoardTemp);

createParam(GC_E_CmsString, asynParamInt32, &GC_E_Cms);

createParam(GC_B_ApplyCmsString, asynParamInt32, &GC_B_ApplyCms);

createParam(GC_S_InputCmsProfileString, asynParamOctet, &GC_S_InputCmsProfile);

createParam(GC_S_OutputCmsProfileString, asynParamOctet, &GC_S_OutputCmsProfile);

createParam(GC_E_CmsIntentString, asynParamInt32, &GC_E_CmsIntent);

createParam(GC_D_GammaYString, asynParamFloat64, &GC_D_GammaY);

createParam(GC_D_GammaCString, asynParamFloat64, &GC_D_GammaC);

createParam(GC_D_SharpnessString, asynParamFloat64, &GC_D_Sharpness);

createParam(GC_D_CcMTX00String, asynParamFloat64, &GC_D_CcMTX00);

createParam(GC_D_CcMTX01String, asynParamFloat64, &GC_D_CcMTX01);

createParam(GC_D_CcMTX02String, asynParamFloat64, &GC_D_CcMTX02);

createParam(GC_D_CcMTX03String, asynParamFloat64, &GC_D_CcMTX03);

createParam(GC_D_CcMTX10String, asynParamFloat64, &GC_D_CcMTX10);

createParam(GC_D_CcMTX11String, asynParamFloat64, &GC_D_CcMTX11);

createParam(GC_D_CcMTX12String, asynParamFloat64, &GC_D_CcMTX12);

createParam(GC_D_CcMTX13String, asynParamFloat64, &GC_D_CcMTX13);

createParam(GC_D_CcMTX20String, asynParamFloat64, &GC_D_CcMTX20);

createParam(GC_D_CcMTX21String, asynParamFloat64, &GC_D_CcMTX21);

createParam(GC_D_CcMTX22String, asynParamFloat64, &GC_D_CcMTX22);

createParam(GC_D_CcMTX23String, asynParamFloat64, &GC_D_CcMTX23);

createParam(GC_D_CcMTX30String, asynParamFloat64, &GC_D_CcMTX30);

createParam(GC_D_CcMTX31String, asynParamFloat64, &GC_D_CcMTX31);

createParam(GC_D_CcMTX32String, asynParamFloat64, &GC_D_CcMTX32);

createParam(GC_D_CcMTX33String, asynParamFloat64, &GC_D_CcMTX33);

createParam(GC_C_DefccMTXString, asynParamInt32, &GC_C_DefccMTX);

createParam(GC_E_TriggerSourceString, asynParamInt32, &GC_E_TriggerSource);

createParam(GC_C_TriggerSoftwareString, asynParamInt32, &GC_C_TriggerSoftware);

createParam(GC_E_TriggerSelectorString, asynParamInt32, &GC_E_TriggerSelector);

createParam(GC_I_AcqFrameBurstCountString, asynParamInt32, &GC_I_AcqFrameBurstCount);

createParam(GC_I_TriggerDelayString, asynParamInt32, &GC_I_TriggerDelay);

createParam(GC_E_GpiSelectorString, asynParamInt32, &GC_E_GpiSelector);

createParam(GC_E_GpiModeString, asynParamInt32, &GC_E_GpiMode);

createParam(GC_I_GpiLevelString, asynParamInt32, &GC_I_GpiLevel);

createParam(GC_E_GpoSelectorString, asynParamInt32, &GC_E_GpoSelector);

createParam(GC_E_GpoModeString, asynParamInt32, &GC_E_GpoMode);

createParam(GC_E_LedSelectorString, asynParamInt32, &GC_E_LedSelector);

createParam(GC_E_LedModeString, asynParamInt32, &GC_E_LedMode);

createParam(GC_B_DbncEnString, asynParamInt32, &GC_B_DbncEn);

createParam(GC_I_DbncT0String, asynParamInt32, &GC_I_DbncT0);

createParam(GC_I_DbncT1String, asynParamInt32, &GC_I_DbncT1);

createParam(GC_B_DbncPolString, asynParamInt32, &GC_B_DbncPol);

createParam(GC_I_HdrKneepointCountString, asynParamInt32, &GC_I_HdrKneepointCount);

createParam(GC_I_HdrT1String, asynParamInt32, &GC_I_HdrT1);

createParam(GC_I_HdrT2String, asynParamInt32, &GC_I_HdrT2);

createParam(GC_I_HdrKneepoint1String, asynParamInt32, &GC_I_HdrKneepoint1);

createParam(GC_I_HdrKneepoint2String, asynParamInt32, &GC_I_HdrKneepoint2);

createParam(GC_B_LensModeString, asynParamInt32, &GC_B_LensMode);

createParam(GC_D_LensApertureValueString, asynParamFloat64, &GC_D_LensApertureValue);

createParam(GC_I_LensFocusMovementValueString, asynParamInt32, &GC_I_LensFocusMovementValue);

createParam(GC_C_LensFocusMoveString, asynParamInt32, &GC_C_LensFocusMove);

createParam(GC_D_LensFocusDistanceString, asynParamFloat64, &GC_D_LensFocusDistance);

createParam(GC_D_LensFocalLengthString, asynParamFloat64, &GC_D_LensFocalLength);

createParam(GC_E_LensFeatureSelectorString, asynParamInt32, &GC_E_LensFeatureSelector);

createParam(GC_D_LensFeatureString, asynParamFloat64, &GC_D_LensFeature);

createParam(GC_I_ImgpayloadsizeString, asynParamInt32, &GC_I_Imgpayloadsize);

createParam(GC_S_XiapiContextListString, asynParamOctet, &GC_S_XiapiContextList);

createParam(GC_I_TransportPixelFormatString, asynParamInt32, &GC_I_TransportPixelFormat);

