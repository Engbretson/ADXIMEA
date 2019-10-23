/* XIMEA */ 

createParam(GC_S_DeviceVendorNameString, asynParamOctet, &GC_S_DeviceVendorName);

createParam(GC_S_DeviceModelNameString, asynParamOctet, &GC_S_DeviceModelName);

createParam(GC_S_DeviceManufacturerInfoString, asynParamOctet, &GC_S_DeviceManufacturerInfo);

createParam(GC_S_DeviceFirmwareVersionString, asynParamOctet, &GC_S_DeviceFirmwareVersion);

createParam(GC_S_DeviceIDString, asynParamOctet, &GC_S_DeviceID);

createParam(GC_S_DeviceUserIDString, asynParamOctet, &GC_S_DeviceUserID);

createParam(GC_E_DeviceTemperatureSelectorString, asynParamInt32, &GC_E_DeviceTemperatureSelector);

createParam(GC_D_DeviceTemperatureString, asynParamFloat64, &GC_D_DeviceTemperature);

createParam(GC_I_TLParamsLockedString, asynParamInt32, &GC_I_TLParamsLocked);

createParam(GC_E_DeviceLinkThroughputLimitModeString, asynParamInt32, &GC_E_DeviceLinkThroughputLimitMode);

createParam(GC_I_DeviceLinkThroughputLimitString, asynParamInt32, &GC_I_DeviceLinkThroughputLimit);

createParam(GC_S_DeviceVersionString, asynParamOctet, &GC_S_DeviceVersion);

createParam(GC_I_SensorWidthString, asynParamInt32, &GC_I_SensorWidth);

createParam(GC_I_SensorHeightString, asynParamInt32, &GC_I_SensorHeight);

createParam(GC_I_WidthString, asynParamInt32, &GC_I_Width);

createParam(GC_I_HeightString, asynParamInt32, &GC_I_Height);

createParam(GC_E_PixelFormatString, asynParamInt32, &GC_E_PixelFormat);

createParam(GC_I_BinningHorizontalString, asynParamInt32, &GC_I_BinningHorizontal);

createParam(GC_I_BinningVerticalString, asynParamInt32, &GC_I_BinningVertical);

createParam(GC_I_DecimationHorizontalString, asynParamInt32, &GC_I_DecimationHorizontal);

createParam(GC_I_DecimationVerticalString, asynParamInt32, &GC_I_DecimationVertical);

createParam(GC_I_OffsetXString, asynParamInt32, &GC_I_OffsetX);

createParam(GC_I_OffsetYString, asynParamInt32, &GC_I_OffsetY);

createParam(GC_E_BinningSelectorString, asynParamInt32, &GC_E_BinningSelector);

createParam(GC_E_DecimationSelectorString, asynParamInt32, &GC_E_DecimationSelector);

createParam(GC_E_SensorShutterModeString, asynParamInt32, &GC_E_SensorShutterMode);

createParam(GC_B_ReverseXString, asynParamInt32, &GC_B_ReverseX);

createParam(GC_B_ReverseYString, asynParamInt32, &GC_B_ReverseY);

createParam(GC_I_WidthMaxString, asynParamInt32, &GC_I_WidthMax);

createParam(GC_E_BinningHorizontalPatternString, asynParamInt32, &GC_E_BinningHorizontalPattern);

createParam(GC_E_BinningVerticalPatternString, asynParamInt32, &GC_E_BinningVerticalPattern);

createParam(GC_E_DecimationHorizontalPatternString, asynParamInt32, &GC_E_DecimationHorizontalPattern);

createParam(GC_E_DecimationVerticalPatternString, asynParamInt32, &GC_E_DecimationVerticalPattern);

createParam(GC_I_HeightMaxString, asynParamInt32, &GC_I_HeightMax);

createParam(GC_E_BinningHorizontalModeString, asynParamInt32, &GC_E_BinningHorizontalMode);

createParam(GC_E_BinningVerticalModeString, asynParamInt32, &GC_E_BinningVerticalMode);

createParam(GC_E_AcquisitionModeString, asynParamInt32, &GC_E_AcquisitionMode);

createParam(GC_C_AcquisitionStartString, asynParamInt32, &GC_C_AcquisitionStart);

createParam(GC_C_AcquisitionStopString, asynParamInt32, &GC_C_AcquisitionStop);

createParam(GC_E_ExposureModeString, asynParamInt32, &GC_E_ExposureMode);

createParam(GC_I_ExposureTimeString, asynParamInt32, &GC_I_ExposureTime);

createParam(GC_E_TriggerSelectorString, asynParamInt32, &GC_E_TriggerSelector);

createParam(GC_E_TriggerModeString, asynParamInt32, &GC_E_TriggerMode);

createParam(GC_C_TriggerSoftwareString, asynParamInt32, &GC_C_TriggerSoftware);

createParam(GC_E_TriggerSourceString, asynParamInt32, &GC_E_TriggerSource);

createParam(GC_E_TriggerActivationString, asynParamInt32, &GC_E_TriggerActivation);

createParam(GC_D_AcquisitionFrameRateString, asynParamFloat64, &GC_D_AcquisitionFrameRate);

createParam(GC_I_AcquisitionTimeoutString, asynParamInt32, &GC_I_AcquisitionTimeout);

createParam(GC_B_AEAGEnableString, asynParamInt32, &GC_B_AEAGEnable);

createParam(GC_D_AEAGExpPrioString, asynParamFloat64, &GC_D_AEAGExpPrio);

createParam(GC_I_AEAGExpLimString, asynParamInt32, &GC_I_AEAGExpLim);

createParam(GC_D_AEAGGainLimString, asynParamFloat64, &GC_D_AEAGGainLim);

createParam(GC_I_AEAGLevelString, asynParamInt32, &GC_I_AEAGLevel);

createParam(GC_B_BadpixelCorrectionString, asynParamInt32, &GC_B_BadpixelCorrection);

createParam(GC_I_AcquisitionBuffersQueueSizeString, asynParamInt32, &GC_I_AcquisitionBuffersQueueSize);

createParam(GC_I_AcquisitionBurstFrameCountString, asynParamInt32, &GC_I_AcquisitionBurstFrameCount);

createParam(GC_E_AcquisitionTimingModeString, asynParamInt32, &GC_E_AcquisitionTimingMode);

createParam(GC_C_AcquisitionAbortString, asynParamInt32, &GC_C_AcquisitionAbort);

createParam(GC_B_AcquisitionStatusString, asynParamInt32, &GC_B_AcquisitionStatus);

createParam(GC_E_AcquisitionStatusSelectorString, asynParamInt32, &GC_E_AcquisitionStatusSelector);

createParam(GC_D_TriggerDelayString, asynParamFloat64, &GC_D_TriggerDelay);

createParam(GC_E_LineSelectorString, asynParamInt32, &GC_E_LineSelector);

createParam(GC_E_LineModeString, asynParamInt32, &GC_E_LineMode);

createParam(GC_B_LineInverterString, asynParamInt32, &GC_B_LineInverter);

createParam(GC_B_LineStatusString, asynParamInt32, &GC_B_LineStatus);

createParam(GC_E_LineSourceString, asynParamInt32, &GC_E_LineSource);

createParam(GC_E_LineFormatString, asynParamInt32, &GC_E_LineFormat);

createParam(GC_E_UserOutputSelectorString, asynParamInt32, &GC_E_UserOutputSelector);

createParam(GC_B_UserOutputValueString, asynParamInt32, &GC_B_UserOutputValue);

createParam(GC_E_BalanceWhiteAutoString, asynParamInt32, &GC_E_BalanceWhiteAuto);

createParam(GC_E_GainSelectorString, asynParamInt32, &GC_E_GainSelector);

createParam(GC_D_GainString, asynParamFloat64, &GC_D_Gain);

createParam(GC_D_WhiteBalanceRedString, asynParamFloat64, &GC_D_WhiteBalanceRed);

createParam(GC_D_WhiteBalanceGreenString, asynParamFloat64, &GC_D_WhiteBalanceGreen);

createParam(GC_D_WhiteBalanceBlueString, asynParamFloat64, &GC_D_WhiteBalanceBlue);

createParam(GC_D_GammaYString, asynParamFloat64, &GC_D_GammaY);

createParam(GC_D_GammaCString, asynParamFloat64, &GC_D_GammaC);

createParam(GC_D_SharpnessString, asynParamFloat64, &GC_D_Sharpness);

createParam(GC_B_LUTEnableString, asynParamInt32, &GC_B_LUTEnable);

createParam(GC_I_LUTIndexString, asynParamInt32, &GC_I_LUTIndex);

createParam(GC_I_LUTValueString, asynParamInt32, &GC_I_LUTValue);

createParam(GC_I_PayloadSizeString, asynParamInt32, &GC_I_PayloadSize);

