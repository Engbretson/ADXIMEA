ADXIMEA
===========
An 
[EPICS](http://www.aps.anl.gov/epics)
[areaDetector](https://cars.uchicago.edu/software/epics/areaDetector.html)
driver for cameras from 
[FLIR](http://www.flir.com) using their Spinnaker SDK.
These include GigE, 10GigE, and USB 3.0 cameras.

Beginning with R2-0 this driver derives from the [ADGenICam](https://github.com/areaDetector/ADGenICam) base class.

Additional information:
* [Documentation](https://areadetector.github.io/master/ADSpinnaker/ADSpinnaker.html).
* [Release notes](RELEASE.md).

This branch was an attempt to use genicam as the starting point for these 2 XIMA cameras. HOWEVER, the STEEMER libs
only work if the usb cameras are set for usbvision (which only one can be set to), so I would still have to do an AD using the 
vendor SDK. So keeping the work, in the event that last SDK's recognise this hardware.
