/* XIMEA */ 

XI_status = xiGetParamString(xiH,"DeviceVendorName",systemString, sizeof(systemString)); 
printf("%s %s \n", "DeviceVendorName",systemString); 
status = setStringParam(GC_S_DeviceVendorName, systemString); 

XI_status = xiGetParamString(xiH,"DeviceModelName",systemString, sizeof(systemString)); 
printf("%s %s \n", "DeviceModelName",systemString); 
status = setStringParam(GC_S_DeviceModelName, systemString); 

XI_status = xiGetParamString(xiH,"DeviceManufacturerInfo",systemString, sizeof(systemString)); 
printf("%s %s \n", "DeviceManufacturerInfo",systemString); 
status = setStringParam(GC_S_DeviceManufacturerInfo, systemString); 

XI_status = xiGetParamString(xiH,"DeviceFirmwareVersion",systemString, sizeof(systemString)); 
printf("%s %s \n", "DeviceFirmwareVersion",systemString); 
status = setStringParam(GC_S_DeviceFirmwareVersion, systemString); 

XI_status = xiGetParamString(xiH,"DeviceID",systemString, sizeof(systemString)); 
printf("%s %s \n", "DeviceID",systemString); 
status = setStringParam(GC_S_DeviceID, systemString); 

XI_status = xiGetParamString(xiH,"DeviceUserID",systemString, sizeof(systemString)); 
printf("%s %s \n", "DeviceUserID",systemString); 
status = setStringParam(GC_S_DeviceUserID, systemString); 

XI_status = xiGetParamInt(xiH,"DeviceTemperatureSelector",&systemInteger); 
printf("%s %d \n", "DeviceTemperatureSelector",systemInteger); 
status = setIntegerParam(GC_E_DeviceTemperatureSelector, systemInteger); 

XI_status = xiGetParamFloat(xiH,"DeviceTemperature",&systemFloat); 
printf("%s %f \n", "DeviceTemperature",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_DeviceTemperature, systemDouble); 

XI_status = xiGetParamInt(xiH,"TLParamsLocked",&systemInteger); 
printf("%s %d \n", "TLParamsLocked",systemInteger); 
status = setIntegerParam(GC_I_TLParamsLocked, systemInteger); 

XI_status = xiGetParamInt(xiH,"DeviceLinkThroughputLimitMode",&systemInteger); 
printf("%s %d \n", "DeviceLinkThroughputLimitMode",systemInteger); 
status = setIntegerParam(GC_E_DeviceLinkThroughputLimitMode, systemInteger); 

XI_status = xiGetParamInt(xiH,"DeviceLinkThroughputLimit",&systemInteger); 
printf("%s %d \n", "DeviceLinkThroughputLimit",systemInteger); 
status = setIntegerParam(GC_I_DeviceLinkThroughputLimit, systemInteger); 

XI_status = xiGetParamString(xiH,"DeviceVersion",systemString, sizeof(systemString)); 
printf("%s %s \n", "DeviceVersion",systemString); 
status = setStringParam(GC_S_DeviceVersion, systemString); 

XI_status = xiGetParamInt(xiH,"SensorWidth",&systemInteger); 
printf("%s %d \n", "SensorWidth",systemInteger); 
status = setIntegerParam(GC_I_SensorWidth, systemInteger); 

XI_status = xiGetParamInt(xiH,"SensorHeight",&systemInteger); 
printf("%s %d \n", "SensorHeight",systemInteger); 
status = setIntegerParam(GC_I_SensorHeight, systemInteger); 

XI_status = xiGetParamInt(xiH,"Width",&systemInteger); 
printf("%s %d \n", "Width",systemInteger); 
status = setIntegerParam(GC_I_Width, systemInteger); 

XI_status = xiGetParamInt(xiH,"Height",&systemInteger); 
printf("%s %d \n", "Height",systemInteger); 
status = setIntegerParam(GC_I_Height, systemInteger); 

XI_status = xiGetParamInt(xiH,"PixelFormat",&systemInteger); 
printf("%s %d \n", "PixelFormat",systemInteger); 
status = setIntegerParam(GC_E_PixelFormat, systemInteger); 

XI_status = xiGetParamInt(xiH,"BinningHorizontal",&systemInteger); 
printf("%s %d \n", "BinningHorizontal",systemInteger); 
status = setIntegerParam(GC_I_BinningHorizontal, systemInteger); 

XI_status = xiGetParamInt(xiH,"BinningVertical",&systemInteger); 
printf("%s %d \n", "BinningVertical",systemInteger); 
status = setIntegerParam(GC_I_BinningVertical, systemInteger); 

XI_status = xiGetParamInt(xiH,"DecimationHorizontal",&systemInteger); 
printf("%s %d \n", "DecimationHorizontal",systemInteger); 
status = setIntegerParam(GC_I_DecimationHorizontal, systemInteger); 

XI_status = xiGetParamInt(xiH,"DecimationVertical",&systemInteger); 
printf("%s %d \n", "DecimationVertical",systemInteger); 
status = setIntegerParam(GC_I_DecimationVertical, systemInteger); 

XI_status = xiGetParamInt(xiH,"OffsetX",&systemInteger); 
printf("%s %d \n", "OffsetX",systemInteger); 
status = setIntegerParam(GC_I_OffsetX, systemInteger); 

XI_status = xiGetParamInt(xiH,"OffsetY",&systemInteger); 
printf("%s %d \n", "OffsetY",systemInteger); 
status = setIntegerParam(GC_I_OffsetY, systemInteger); 

XI_status = xiGetParamInt(xiH,"BinningSelector",&systemInteger); 
printf("%s %d \n", "BinningSelector",systemInteger); 
status = setIntegerParam(GC_E_BinningSelector, systemInteger); 

XI_status = xiGetParamInt(xiH,"DecimationSelector",&systemInteger); 
printf("%s %d \n", "DecimationSelector",systemInteger); 
status = setIntegerParam(GC_E_DecimationSelector, systemInteger); 

XI_status = xiGetParamInt(xiH,"SensorShutterMode",&systemInteger); 
printf("%s %d \n", "SensorShutterMode",systemInteger); 
status = setIntegerParam(GC_E_SensorShutterMode, systemInteger); 

XI_status = xiGetParamInt(xiH,"ReverseX",&systemInteger); 
printf("%s %d \n", "ReverseX",systemInteger); 
status = setIntegerParam(GC_B_ReverseX, systemInteger); 

XI_status = xiGetParamInt(xiH,"ReverseY",&systemInteger); 
printf("%s %d \n", "ReverseY",systemInteger); 
status = setIntegerParam(GC_B_ReverseY, systemInteger); 

XI_status = xiGetParamInt(xiH,"WidthMax",&systemInteger); 
printf("%s %d \n", "WidthMax",systemInteger); 
status = setIntegerParam(GC_I_WidthMax, systemInteger); 

XI_status = xiGetParamInt(xiH,"BinningHorizontalPattern",&systemInteger); 
printf("%s %d \n", "BinningHorizontalPattern",systemInteger); 
status = setIntegerParam(GC_E_BinningHorizontalPattern, systemInteger); 

XI_status = xiGetParamInt(xiH,"BinningVerticalPattern",&systemInteger); 
printf("%s %d \n", "BinningVerticalPattern",systemInteger); 
status = setIntegerParam(GC_E_BinningVerticalPattern, systemInteger); 

XI_status = xiGetParamInt(xiH,"DecimationHorizontalPattern",&systemInteger); 
printf("%s %d \n", "DecimationHorizontalPattern",systemInteger); 
status = setIntegerParam(GC_E_DecimationHorizontalPattern, systemInteger); 

XI_status = xiGetParamInt(xiH,"DecimationVerticalPattern",&systemInteger); 
printf("%s %d \n", "DecimationVerticalPattern",systemInteger); 
status = setIntegerParam(GC_E_DecimationVerticalPattern, systemInteger); 

XI_status = xiGetParamInt(xiH,"HeightMax",&systemInteger); 
printf("%s %d \n", "HeightMax",systemInteger); 
status = setIntegerParam(GC_I_HeightMax, systemInteger); 

XI_status = xiGetParamInt(xiH,"BinningHorizontalMode",&systemInteger); 
printf("%s %d \n", "BinningHorizontalMode",systemInteger); 
status = setIntegerParam(GC_E_BinningHorizontalMode, systemInteger); 

XI_status = xiGetParamInt(xiH,"BinningVerticalMode",&systemInteger); 
printf("%s %d \n", "BinningVerticalMode",systemInteger); 
status = setIntegerParam(GC_E_BinningVerticalMode, systemInteger); 

XI_status = xiGetParamInt(xiH,"AcquisitionMode",&systemInteger); 
printf("%s %d \n", "AcquisitionMode",systemInteger); 
status = setIntegerParam(GC_E_AcquisitionMode, systemInteger); 


// start of an execute (write Only) command 
/* 
XI_status = xiGetParamInt(xiH,"AcquisitionStart",&systemInteger); 
printf("%s %d \n", "AcquisitionStart",systemInteger); 
status = setIntegerParam(GC_C_AcquisitionStart, systemInteger); 

*/ 


// start of an execute (write Only) command 
/* 
XI_status = xiGetParamInt(xiH,"AcquisitionStop",&systemInteger); 
printf("%s %d \n", "AcquisitionStop",systemInteger); 
status = setIntegerParam(GC_C_AcquisitionStop, systemInteger); 

*/ 

XI_status = xiGetParamInt(xiH,"ExposureMode",&systemInteger); 
printf("%s %d \n", "ExposureMode",systemInteger); 
status = setIntegerParam(GC_E_ExposureMode, systemInteger); 

XI_status = xiGetParamInt(xiH,"ExposureTime",&systemInteger); 
printf("%s %d \n", "ExposureTime",systemInteger); 
status = setIntegerParam(GC_I_ExposureTime, systemInteger); 

XI_status = xiGetParamInt(xiH,"TriggerSelector",&systemInteger); 
printf("%s %d \n", "TriggerSelector",systemInteger); 
status = setIntegerParam(GC_E_TriggerSelector, systemInteger); 

XI_status = xiGetParamInt(xiH,"TriggerMode",&systemInteger); 
printf("%s %d \n", "TriggerMode",systemInteger); 
status = setIntegerParam(GC_E_TriggerMode, systemInteger); 


// start of an execute (write Only) command 
/* 
XI_status = xiGetParamInt(xiH,"TriggerSoftware",&systemInteger); 
printf("%s %d \n", "TriggerSoftware",systemInteger); 
status = setIntegerParam(GC_C_TriggerSoftware, systemInteger); 

*/ 

XI_status = xiGetParamInt(xiH,"TriggerSource",&systemInteger); 
printf("%s %d \n", "TriggerSource",systemInteger); 
status = setIntegerParam(GC_E_TriggerSource, systemInteger); 

XI_status = xiGetParamInt(xiH,"TriggerActivation",&systemInteger); 
printf("%s %d \n", "TriggerActivation",systemInteger); 
status = setIntegerParam(GC_E_TriggerActivation, systemInteger); 

XI_status = xiGetParamFloat(xiH,"AcquisitionFrameRate",&systemFloat); 
printf("%s %f \n", "AcquisitionFrameRate",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_AcquisitionFrameRate, systemDouble); 

XI_status = xiGetParamInt(xiH,"AcquisitionTimeout",&systemInteger); 
printf("%s %d \n", "AcquisitionTimeout",systemInteger); 
status = setIntegerParam(GC_I_AcquisitionTimeout, systemInteger); 

XI_status = xiGetParamInt(xiH,"AEAGEnable",&systemInteger); 
printf("%s %d \n", "AEAGEnable",systemInteger); 
status = setIntegerParam(GC_B_AEAGEnable, systemInteger); 

XI_status = xiGetParamFloat(xiH,"AEAGExpPrio",&systemFloat); 
printf("%s %f \n", "AEAGExpPrio",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_AEAGExpPrio, systemDouble); 

XI_status = xiGetParamInt(xiH,"AEAGExpLim",&systemInteger); 
printf("%s %d \n", "AEAGExpLim",systemInteger); 
status = setIntegerParam(GC_I_AEAGExpLim, systemInteger); 

XI_status = xiGetParamFloat(xiH,"AEAGGainLim",&systemFloat); 
printf("%s %f \n", "AEAGGainLim",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_AEAGGainLim, systemDouble); 

XI_status = xiGetParamInt(xiH,"AEAGLevel",&systemInteger); 
printf("%s %d \n", "AEAGLevel",systemInteger); 
status = setIntegerParam(GC_I_AEAGLevel, systemInteger); 

XI_status = xiGetParamInt(xiH,"BadpixelCorrection",&systemInteger); 
printf("%s %d \n", "BadpixelCorrection",systemInteger); 
status = setIntegerParam(GC_B_BadpixelCorrection, systemInteger); 

XI_status = xiGetParamInt(xiH,"AcquisitionBuffersQueueSize",&systemInteger); 
printf("%s %d \n", "AcquisitionBuffersQueueSize",systemInteger); 
status = setIntegerParam(GC_I_AcquisitionBuffersQueueSize, systemInteger); 

XI_status = xiGetParamInt(xiH,"AcquisitionBurstFrameCount",&systemInteger); 
printf("%s %d \n", "AcquisitionBurstFrameCount",systemInteger); 
status = setIntegerParam(GC_I_AcquisitionBurstFrameCount, systemInteger); 

XI_status = xiGetParamInt(xiH,"AcquisitionTimingMode",&systemInteger); 
printf("%s %d \n", "AcquisitionTimingMode",systemInteger); 
status = setIntegerParam(GC_E_AcquisitionTimingMode, systemInteger); 


// start of an execute (write Only) command 
/* 
XI_status = xiGetParamInt(xiH,"AcquisitionAbort",&systemInteger); 
printf("%s %d \n", "AcquisitionAbort",systemInteger); 
status = setIntegerParam(GC_C_AcquisitionAbort, systemInteger); 

*/ 

XI_status = xiGetParamInt(xiH,"AcquisitionStatus",&systemInteger); 
printf("%s %d \n", "AcquisitionStatus",systemInteger); 
status = setIntegerParam(GC_B_AcquisitionStatus, systemInteger); 

XI_status = xiGetParamInt(xiH,"AcquisitionStatusSelector",&systemInteger); 
printf("%s %d \n", "AcquisitionStatusSelector",systemInteger); 
status = setIntegerParam(GC_E_AcquisitionStatusSelector, systemInteger); 

XI_status = xiGetParamFloat(xiH,"TriggerDelay",&systemFloat); 
printf("%s %f \n", "TriggerDelay",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_TriggerDelay, systemDouble); 

XI_status = xiGetParamInt(xiH,"LineSelector",&systemInteger); 
printf("%s %d \n", "LineSelector",systemInteger); 
status = setIntegerParam(GC_E_LineSelector, systemInteger); 

XI_status = xiGetParamInt(xiH,"LineMode",&systemInteger); 
printf("%s %d \n", "LineMode",systemInteger); 
status = setIntegerParam(GC_E_LineMode, systemInteger); 

XI_status = xiGetParamInt(xiH,"LineInverter",&systemInteger); 
printf("%s %d \n", "LineInverter",systemInteger); 
status = setIntegerParam(GC_B_LineInverter, systemInteger); 

XI_status = xiGetParamInt(xiH,"LineStatus",&systemInteger); 
printf("%s %d \n", "LineStatus",systemInteger); 
status = setIntegerParam(GC_B_LineStatus, systemInteger); 

XI_status = xiGetParamInt(xiH,"LineSource",&systemInteger); 
printf("%s %d \n", "LineSource",systemInteger); 
status = setIntegerParam(GC_E_LineSource, systemInteger); 

XI_status = xiGetParamInt(xiH,"LineFormat",&systemInteger); 
printf("%s %d \n", "LineFormat",systemInteger); 
status = setIntegerParam(GC_E_LineFormat, systemInteger); 

XI_status = xiGetParamInt(xiH,"UserOutputSelector",&systemInteger); 
printf("%s %d \n", "UserOutputSelector",systemInteger); 
status = setIntegerParam(GC_E_UserOutputSelector, systemInteger); 

XI_status = xiGetParamInt(xiH,"UserOutputValue",&systemInteger); 
printf("%s %d \n", "UserOutputValue",systemInteger); 
status = setIntegerParam(GC_B_UserOutputValue, systemInteger); 

XI_status = xiGetParamInt(xiH,"BalanceWhiteAuto",&systemInteger); 
printf("%s %d \n", "BalanceWhiteAuto",systemInteger); 
status = setIntegerParam(GC_E_BalanceWhiteAuto, systemInteger); 

XI_status = xiGetParamInt(xiH,"GainSelector",&systemInteger); 
printf("%s %d \n", "GainSelector",systemInteger); 
status = setIntegerParam(GC_E_GainSelector, systemInteger); 

XI_status = xiGetParamFloat(xiH,"Gain",&systemFloat); 
printf("%s %f \n", "Gain",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_Gain, systemDouble); 

XI_status = xiGetParamFloat(xiH,"WhiteBalanceRed",&systemFloat); 
printf("%s %f \n", "WhiteBalanceRed",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_WhiteBalanceRed, systemDouble); 

XI_status = xiGetParamFloat(xiH,"WhiteBalanceGreen",&systemFloat); 
printf("%s %f \n", "WhiteBalanceGreen",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_WhiteBalanceGreen, systemDouble); 

XI_status = xiGetParamFloat(xiH,"WhiteBalanceBlue",&systemFloat); 
printf("%s %f \n", "WhiteBalanceBlue",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_WhiteBalanceBlue, systemDouble); 

XI_status = xiGetParamFloat(xiH,"GammaY",&systemFloat); 
printf("%s %f \n", "GammaY",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_GammaY, systemDouble); 

XI_status = xiGetParamFloat(xiH,"GammaC",&systemFloat); 
printf("%s %f \n", "GammaC",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_GammaC, systemDouble); 

XI_status = xiGetParamFloat(xiH,"Sharpness",&systemFloat); 
printf("%s %f \n", "Sharpness",systemFloat); 
systemDouble = systemFloat; 
status = setDoubleParam(GC_D_Sharpness, systemDouble); 

XI_status = xiGetParamInt(xiH,"LUTEnable",&systemInteger); 
printf("%s %d \n", "LUTEnable",systemInteger); 
status = setIntegerParam(GC_B_LUTEnable, systemInteger); 

XI_status = xiGetParamInt(xiH,"LUTIndex",&systemInteger); 
printf("%s %d \n", "LUTIndex",systemInteger); 
status = setIntegerParam(GC_I_LUTIndex, systemInteger); 

XI_status = xiGetParamInt(xiH,"LUTValue",&systemInteger); 
printf("%s %d \n", "LUTValue",systemInteger); 
status = setIntegerParam(GC_I_LUTValue, systemInteger); 

XI_status = xiGetParamInt(xiH,"PayloadSize",&systemInteger); 
printf("%s %d \n", "PayloadSize",systemInteger); 
status = setIntegerParam(GC_I_PayloadSize, systemInteger); 

