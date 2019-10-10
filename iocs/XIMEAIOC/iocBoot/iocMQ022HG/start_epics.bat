set EPICA_CA_DISPLAY_PATH=Z:\epics\synApps_6_1\support-v7\areaDetector-R3-7\ADGenIcam-R1-0\GenICamApp\op\adl;Z:\epics\synApps_6_1\support-v7\areaDetector-R3-7\ADCore-R3-7\ADApp\op\adl
start medm -x -macro "P=16XIMEA1:, R=cam1:, C=MQ022HG-IM-SM5X5-NIR" ADGeniCam.adl
rem ..\..\bin\windows-x64-static\spinnakerApp st.cmd.bflys_usb3
..\..\bin\windows-x64-static\XIMEAApp st.cmd.MQ022HG

