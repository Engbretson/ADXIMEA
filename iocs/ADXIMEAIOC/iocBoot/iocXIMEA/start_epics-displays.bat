set SUPPORT=Z:\epics\synApps_6_0\support
set AREA_DETECTOR=%SUPPORT%\areaDetector-R3-4
set EPICS_DISPLAY_PATH=%AREA_DETECTOR%\ADXIMEA\XIMEAApp\op\adl;%AREA_DETECTOR%\ADCore-R3-4\ADApp\op\adl;
echo %EPICS_DISPLAY_PATH%
start medm -x -macro "P=HPCAT:XIMEA:, R=cam1:" XIMEA-features_2.adl XIMEA-features_1.adl
