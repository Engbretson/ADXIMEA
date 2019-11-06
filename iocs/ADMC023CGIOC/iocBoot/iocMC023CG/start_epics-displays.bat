
set EPICS_DISPLAY_PATH=X:\epics\synApps_6_1\support-v7\areaDetector-R3-8\ADXIMEA\MC023CGApp\op\adl;X:\epics\synApps_6_1\support-v7\areaDetector-R3-7\ADCore-R3-7\ADApp\op\adl
echo %EPICS_DISPLAY_PATH%
start medm -x -macro "P=HPCAT:MC023CG:, R=cam1:" MC023CG-features_1.adl MC023CG-features_2.adl MC023CG_Performance.adl
