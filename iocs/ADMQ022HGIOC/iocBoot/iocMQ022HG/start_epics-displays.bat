
set EPICS_DISPLAY_PATH=Z:\epics\synApps_6_1\support-v7\areaDetector-R3-7\ADXIMEA\XIMEAApp\op\adl;Z:\epics\synApps_6_1\support-v7\areaDetector-R3-7\ADCore-R3-7\ADApp\op\adl
echo %EPICS_DISPLAY_PATH%
start medm -x -macro "P=HPCAT:XIMEA:, R=cam1:" MQ022HG-features_1.adl
