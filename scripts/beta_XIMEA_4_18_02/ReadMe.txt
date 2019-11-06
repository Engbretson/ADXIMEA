Explanation -

If the genicam version of the xml files are obtain, the commands passed to the hardware are *not* the one valid with the default XiAPI. If the xiCamTool.exe utility is used, the xml file produced is a reasonable
file, but is missing the <Category> and <pFeature> tags that Mark Rivers genicam xml parsing scripts use to create the template files for each camera as well as the adl files.

A modification of these scripts are also used to generates 3 include files of the low level boiler plate support that Area Detector requires to expose each command the camera supports -

int GC_I_Exposure; 
#define GC_I_ExposureString "exposure" 
createParam(GC_I_ExposureString, asynParamInt32, &GC_I_Exposure);

As well as an initialization routine that reads all the expsoed parameters from the camera and stores them into the correct Area detector PV's. 

XI_status = xiGetParamInt(xiH,"exposure",&systemInteger); 
printf("%s %d %d\n", "exposure",systemInteger, XI_status); 
status = setIntegerParam(GC_I_Exposure, systemInteger); 

This script is also used for Genicam camaptible cameras that are not GigE and require some sort of frame grabber to grab the images replacing the relevent read/write command with whatever the hardware support. This allows for very easy camera protyping, and updating the AD when the camera firmware is updated and the supports commands change.

It is also very useful for the Xia spectrometers camers since it appears that the 3 devices that I have seen all support different commands, so easier to allow the script to generate most of the support for such things.

