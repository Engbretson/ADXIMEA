/**
 * 
 *
 */

 #ifndef XIMEA__H
#define XIMEA__H

#include <iocsh.h>

#include <epicsString.h>
#include <epicsEvent.h>
#include <epicsThread.h>

#include "ADDriver.h"

#ifdef WIN32
#include <windows.h>
#include "xiApi.h"       // Windows
#else
#include <m3api/xiApi.h> // Linux, OSX
#endif
#include <memory.h>

#include "XIMEA_2.inc"

 const char * XI_ERRORS[] =
{	
	"XI_OK                             ", // = 0, // Function call succeeded
	"XI_INVALID_HANDLE                 ", // = 1, // Invalid handle
	"XI_READREG                        ", // = 2, // Register read error
	"XI_WRITEREG                       ", // = 3, // Register write error
	"XI_FREE_RESOURCES                 ", // = 4, // Freeing resources error
	"XI_FREE_CHANNEL                   ", // = 5, // Freeing channel error
	"XI_FREE_BANDWIDTH                 ", // = 6, // Freeing bandwith error
	"XI_READBLK                        ", // = 7, // Read block error
	"XI_WRITEBLK                       ", // = 8, // Write block error
	"XI_NO_IMAGE                       ", // = 9, // No image
	"XI_TIMEOUT                        ", // =10, // Timeout
	"XI_INVALID_ARG                    ", // =11, // Invalid arguments supplied
	"XI_NOT_SUPPORTED                  ", // =12, // Not supported
	"XI_ISOCH_ATTACH_BUFFERS           ", // =13, // Attach buffers error
	"XI_GET_OVERLAPPED_RESULT          ", // =14, // Overlapped result
	"XI_MEMORY_ALLOCATION              ", // =15, // Memory allocation error
	"XI_DLLCONTEXTISNULL               ", // =16, // DLL context is NULL
	"XI_DLLCONTEXTISNONZERO            ", // =17, // DLL context is non zero
	"XI_DLLCONTEXTEXIST                ", // =18, // DLL context exists
	"XI_TOOMANYDEVICES                 ", // =19, // Too many devices connected
	"XI_ERRORCAMCONTEXT                ", // =20, // Camera context error
	"XI_UNKNOWN_HARDWARE               ", // =21, // Unknown hardware
	"XI_INVALID_TM_FILE                ", // =22, // Invalid TM file
	"XI_INVALID_TM_TAG                 ", // =23, // Invalid TM tag
	"XI_INCOMPLETE_TM                  ", // =24, // Incomplete TM
	"XI_BUS_RESET_FAILED               ", // =25, // Bus reset error
	"XI_NOT_IMPLEMENTED                ", // =26, // Not implemented
	"XI_SHADING_TOOBRIGHT              ", // =27, // Shading is too bright
	"XI_SHADING_TOODARK                ", // =28, // Shading is too dark
	"XI_TOO_LOW_GAIN                   ", // =29, // Gain is too low
	"XI_INVALID_BPL                    ", // =30, // Invalid sensor defect correction list
	"XI_BPL_REALLOC                    ", // =31, // Error while sensor defect correction list reallocation
	"XI_INVALID_PIXEL_LIST             ", // =32, // Invalid pixel list
	"XI_INVALID_FFS                    ", // =33, // Invalid Flash File System
	"XI_INVALID_PROFILE                ", // =34, // Invalid profile
	"XI_INVALID_CALIBRATION            ", // =35, // Invalid calibration
	"XI_INVALID_BUFFER                 ", // =36, // Invalid buffer
	"XI_?????????????                  ", // =37, // gap is error messages	
	"XI_INVALID_DATA                   ", // =38, // Invalid data
	"XI_TGBUSY                         ", // =39, // Timing generator is busy
	"XI_IO_WRONG                       ", // =40, // Wrong operation open/write/read/close
	"XI_ACQUISITION_ALREADY_UP         ", // =41, // Acquisition already started
	"XI_OLD_DRIVER_VERSION             ", // =42, // Old version of device driver installed to the system.
	"XI_GET_LAST_ERROR                 ", // =43, // To get error code please call GetLastError function.
	"XI_CANT_PROCESS                   ", // =44, // Data cannot be processed
	"XI_ACQUISITION_STOPED             ", // =45, // Acquisition is stopped. It needs to be started to perform operation.
	"XI_ACQUISITION_STOPED_WERR        ", // =46, // Acquisition has been stopped with an error.
	"XI_INVALID_INPUT_ICC_PROFILE      ", // =47, // Input ICC profile missing or corrupted
	"XI_INVALID_OUTPUT_ICC_PROFILE     ", // =48, // Output ICC profile missing or corrupted
	"XI_DEVICE_NOT_READY               ", // =49, // Device not ready to operate
	"XI_SHADING_TOOCONTRAST            ", // =50, // Shading is too contrast
	"XI_ALREADY_INITIALIZED            ", // =51, // Module already initialized
	"XI_NOT_ENOUGH_PRIVILEGES          ", // =52, // Application does not have enough privileges (one or more app)
	"XI_NOT_COMPATIBLE_DRIVER          ", // =53, // Installed driver is not compatible with current software
	"XI_TM_INVALID_RESOURCE            ", // =54, // TM file was not loaded successfully from resources
	"XI_DEVICE_HAS_BEEN_RESETED        ", // =55, // Device has been reset, abnormal initial state
	"XI_NO_DEVICES_FOUND               ", // =56, // No Devices Found
	"XI_RESOURCE_OR_FUNCTION_LOCKED    ", // =57, // Resource (device) or function locked by mutex
	"XI_BUFFER_SIZE_TOO_SMALL          ", // =58, // Buffer provided by user is too small
	"XI_COULDNT_INIT_PROCESSOR         ", // =59, // Couldnt initialize processor.
	"XI_NOT_INITIALIZED                ", // =60, // The object/module/procedure/process being referred to has not been started.
	"XI_RESOURCE_NOT_FOUND             ", // =61, // Resource not found(could be processor, file, item...).
	"XI_?????????????                  ", // =62, // gap is error messages
	"XI_?????????????                  ", // =63, // gap is error messages
	"XI_?????????????                  ", // =64, // gap is error messages
	"XI_?????????????                  ", // =65, // gap is error messages
	"XI_?????????????                  ", // =66, // gap is error messages
	"XI_?????????????                  ", // =67, // gap is error messages
	"XI_?????????????                  ", // =68, // gap is error messages
	"XI_?????????????                  ", // =69, // gap is error messages
	"XI_?????????????                  ", // =70, // gap is error messages
	"XI_?????????????                  ", // =71, // gap is error messages
	"XI_?????????????                  ", // =72, // gap is error messages
	"XI_?????????????                  ", // =73, // gap is error messages
	"XI_?????????????                  ", // =74, // gap is error messages
	"XI_?????????????                  ", // =75, // gap is error messages
	"XI_?????????????                  ", // =76, // gap is error messages
	"XI_?????????????                  ", // =77, // gap is error messages
	"XI_?????????????                  ", // =78, // gap is error messages
	"XI_?????????????                  ", // =79, // gap is error messages
	"XI_?????????????                  ", // =80, // gap is error messages
	"XI_?????????????                  ", // =81, // gap is error messages
	"XI_?????????????                  ", // =82, // gap is error messages
	"XI_?????????????                  ", // =83, // gap is error messages
	"XI_?????????????                  ", // =84, // gap is error messages
	"XI_?????????????                  ", // =85, // gap is error messages
	"XI_?????????????                  ", // =86, // gap is error messages
	"XI_?????????????                  ", // =87, // gap is error messages
	"XI_?????????????                  ", // =88, // gap is error messages
	"XI_?????????????                  ", // =89, // gap is error messages
	"XI_?????????????                  ", // =90, // gap is error messages
	"XI_?????????????                  ", // =91, // gap is error messages
	"XI_?????????????                  ", // =92, // gap is error messages
	"XI_?????????????                  ", // =93, // gap is error messages
	"XI_?????????????                  ", // =94, // gap is error messages
	"XI_?????????????                  ", // =95, // gap is error messages
	"XI_?????????????                  ", // =96, // gap is error messages
	"XI_?????????????                  ", // =97, // gap is error messages
	"XI_?????????????                  ", // =98, // gap is error messages
	"XI_?????????????                  ", // =99, // gap is error messages
	"XI_UNKNOWN_PARAM                  ", // =100, // Unknown parameter
	"XI_WRONG_PARAM_VALUE              ", // =101, // Wrong parameter value
	"XI_?????????????                  ", // =102, // gap is error messages
	"XI_WRONG_PARAM_TYPE               ", // =103, // Wrong parameter type
	"XI_WRONG_PARAM_SIZE               ", // =104, // Wrong parameter size
	"XI_BUFFER_TOO_SMALL               ", // =105, // Input buffer is too small
	"XI_NOT_SUPPORTED_PARAM            ", // =106, // Parameter is not supported
	"XI_NOT_SUPPORTED_PARAM_INFO       ", // =107, // Parameter info not supported
	"XI_NOT_SUPPORTED_DATA_FORMAT      ", // =108, // Data format is not supported
	"XI_READ_ONLY_PARAM                ", // =109, // Read only parameter
	"XI_?????????????                  ", // =110, // gap is error messages
	"XI_BANDWIDTH_NOT_SUPPORTED        ", // =111, // This camera does not support currently available bandwidth
	"XI_INVALID_FFS_FILE_NAME          ", // =112, // FFS file selector is invalid or NULL
	"XI_FFS_FILE_NOT_FOUND             ", // =113, // FFS file not found
	"XI_PARAM_NOT_SETTABLE             ", // =114, // Parameter value cannot be set (might be out of range or invalid).
	"XI_SAFE_POLICY_NOT_SUPPORTED      ", // =115, // Safe buffer policy is not supported. E.g. when transport target is set to GPU (GPUDirect).
	"XI_GPUDIRECT_NOT_AVAILABLE        ", // =116, // GPUDirect is not available. E.g. platform isn't supported or CUDA toolkit isn't installed.
	"XI_?????????????                  ", // =117, // gap is error messages
	"XI_?????????????                  ", // =118, // gap is error messages
	"XI_?????????????                  ", // =119, // gap is error messages
	"XI_?????????????                  ", // =120, // gap is error messages
	"XI_?????????????                  ", // =121, // gap is error messages
	"XI_?????????????                  ", // =122, // gap is error messages
	"XI_?????????????                  ", // =123, // gap is error messages
	"XI_?????????????                  ", // =124, // gap is error messages
	"XI_?????????????                  ", // =125, // gap is error messages
	"XI_?????????????                  ", // =126, // gap is error messages
	"XI_?????????????                  ", // =127, // gap is error messages
	"XI_?????????????                  ", // =128, // gap is error messages
	"XI_?????????????                  ", // =129, // gap is error messages
	"XI_?????????????                  ", // =130, // gap is error messages
	"XI_?????????????                  ", // =131, // gap is error messages
	"XI_?????????????                  ", // =132, // gap is error messages
	"XI_?????????????                  ", // =133, // gap is error messages
	"XI_?????????????                  ", // =134, // gap is error messages
	"XI_?????????????                  ", // =135, // gap is error messages
	"XI_?????????????                  ", // =136, // gap is error messages
	"XI_?????????????                  ", // =137, // gap is error messages
	"XI_?????????????                  ", // =138, // gap is error messages
	"XI_?????????????                  ", // =139, // gap is error messages
	"XI_?????????????                  ", // =140, // gap is error messages
	"XI_?????????????                  ", // =141, // gap is error messages
	"XI_?????????????                  ", // =142, // gap is error messages
	"XI_?????????????                  ", // =143, // gap is error messages
	"XI_?????????????                  ", // =144, // gap is error messages
	"XI_?????????????                  ", // =145, // gap is error messages
	"XI_?????????????                  ", // =146, // gap is error messages
	"XI_?????????????                  ", // =147, // gap is error messages
	"XI_?????????????                  ", // =148, // gap is error messages
	"XI_?????????????                  ", // =149, // gap is error messages
	"XI_?????????????                  ", // =150, // gap is error messages
	"XI_?????????????                  ", // =151, // gap is error messages
	"XI_?????????????                  ", // =152, // gap is error messages
	"XI_?????????????                  ", // =153, // gap is error messages
	"XI_?????????????                  ", // =154, // gap is error messages
	"XI_?????????????                  ", // =155, // gap is error messages
	"XI_?????????????                  ", // =156, // gap is error messages
	"XI_?????????????                  ", // =157, // gap is error messages
	"XI_?????????????                  ", // =158, // gap is error messages
	"XI_?????????????                  ", // =159, // gap is error messages
	"XI_?????????????                  ", // =160, // gap is error messages
	"XI_?????????????                  ", // =161, // gap is error messages
	"XI_?????????????                  ", // =162, // gap is error messages
	"XI_?????????????                  ", // =163, // gap is error messages
	"XI_?????????????                  ", // =164, // gap is error messages
	"XI_?????????????                  ", // =165, // gap is error messages
	"XI_?????????????                  ", // =166, // gap is error messages
	"XI_?????????????                  ", // =167, // gap is error messages
	"XI_?????????????                  ", // =168, // gap is error messages
	"XI_?????????????                  ", // =169, // gap is error messages
	"XI_?????????????                  ", // =170, // gap is error messages
	"XI_?????????????                  ", // =171, // gap is error messages
	"XI_?????????????                  ", // =172, // gap is error messages
	"XI_?????????????                  ", // =173, // gap is error messages
	"XI_?????????????                  ", // =174, // gap is error messages
	"XI_?????????????                  ", // =175, // gap is error messages
	"XI_?????????????                  ", // =176, // gap is error messages
	"XI_?????????????                  ", // =177, // gap is error messages
	"XI_?????????????                  ", // =178, // gap is error messages
	"XI_?????????????                  ", // =179, // gap is error messages
	"XI_?????????????                  ", // =180, // gap is error messages
	"XI_?????????????                  ", // =181, // gap is error messages
	"XI_?????????????                  ", // =182, // gap is error messages
	"XI_?????????????                  ", // =183, // gap is error messages
	"XI_?????????????                  ", // =184, // gap is error messages
	"XI_?????????????                  ", // =185, // gap is error messages
	"XI_?????????????                  ", // =186, // gap is error messages
	"XI_?????????????                  ", // =187, // gap is error messages
	"XI_?????????????                  ", // =188, // gap is error messages
	"XI_?????????????                  ", // =189, // gap is error messages
	"XI_?????????????                  ", // =190, // gap is error messages
	"XI_?????????????                  ", // =191, // gap is error messages
	"XI_?????????????                  ", // =192, // gap is error messages
	"XI_?????????????                  ", // =193, // gap is error messages
	"XI_?????????????                  ", // =194, // gap is error messages
	"XI_?????????????                  ", // =195, // gap is error messages
	"XI_?????????????                  ", // =196, // gap is error messages
	"XI_?????????????                  ", // =197, // gap is error messages
	"XI_?????????????                  ", // =198, // gap is error messages
	"XI_?????????????                  ", // =199, // gap is error messages
	"XI_?????????????                  ", // =200, // gap is error messages
	"XI_PROC_OTHER_ERROR               ", // =201, // Processing error - other
	"XI_PROC_PROCESSING_ERROR          ", // =202, // Error while image processing.
	"XI_PROC_INPUT_FORMAT_UNSUPPORTED  ", // =203, // Input format is not supported for processing.
	"XI_PROC_OUTPUT_FORMAT_UNSUPPORTED ", // =204, // Output format is not supported for processing.
	"XI_OUT_OF_RANGE                   " // =205, // Parameter value is out of range	
};

#define HandleResult(res,place) if (res!=XI_OK) {printf("Error after %s (%d)\n",place,res);}

class epicsShareClass XIMEA : public ADDriver {
public:
    static const char *notAvailable;
    static const char *driverName;
    
    XIMEA(const char *portName, int maxBuffers, size_t maxMemory, int priority, int stackSize, const char *id);
    ~XIMEA();
    
    /* These are the methods that we override from asynPortDriver */
    virtual asynStatus writeInt32(asynUser *pasynUser, epicsInt32 value);
    virtual asynStatus readInt32(asynUser *pasynUser, epicsInt32 *value);
    virtual asynStatus writeFloat64(asynUser *pasynUser, epicsFloat64 value);
    virtual asynStatus readFloat64(asynUser *pasynUser, epicsFloat64 *value);
    virtual asynStatus readFloat64Array(asynUser *pasynUser, epicsFloat64 *value, size_t nElements, size_t *nIn);
    
    void report(FILE *fp, int details);
    void XIMEAHandleNewImageTask(void);
    
private:
    epicsMutex dataLock;
    NDArray *pImage;
    NDDataType_t  imageDataType;
    size_t imageDims[2];
    char *deviceId;
    long device;
    HANDLE xiH = NULL;
    double *wavelength;
    long spectrometer;
    long *lamps;
    bool mAcquiringData;
    void *buffer = 0;
    epicsThreadId imageThreadId;
    epicsEventId  HandleNewImageEvent;
    bool imageThreadKeepAlive;// = true;
    int presetImages;
    
    asynStatus initializeDetector();
    asynStatus acquireStart();
    asynStatus acquireStop();
	
	#include "XIMEA_1.inc"
	
#define FIRST_XIMEA_PARAM GC_I_exposure
#define LAST_XIMEA_PARAM GC_I_transpor_pixel_format

};

#define NUM_XIMEA_PARAMS LAST_XIMEA_PARAM - FIRST_XIMEA_PARAM +1

#endif
