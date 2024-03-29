#!../../bin/linux-x86_64/XIMEAApp

errlogInit(20000)

< envPaths
epicsEnvSet("IOC","iocXIMEA")
#epicsEnvSet("ADXIMEA",TOP)
epicsEnvSet("ENGINEER", "Engbretson")
epicsEnvSet("LOCATION", "HPCat")
epicsEnvSet("GROUP", "HPCat")

#epicsThreadSleep(20)
dbLoadDatabase("$(TOP)/dbd/MC023CGApp.dbd")
MC023CGApp_registerRecordDeviceDriver(pdbbase) 

epicsEnvSet("PREFIX", "HPCAT:MC023CG:")
epicsEnvSet("PORT",   "X1")
epicsEnvSet("QSIZE",  "20")
epicsEnvSet("XSIZE",  "1936")
epicsEnvSet("YSIZE",  "1216")
epicsEnvSet("NCHANS", "2048")
# The maximum number of frames buffered in the NDPluginCircularBuff plugin
epicsEnvSet("CBUFFS", "500")

# The search path for database files
epicsEnvSet("EPICS_DB_INCLUDE_PATH", "$(ADCORE)/db")  
 

#MC023CGConfig("$(PORT)", 0, 0, 0, 0, "18880854")
#epicsEnvSet("CAMERA_ID", "18880854")

#asynSetTraceIOMask($(PORT), 0, 2)
#asynSetTraceMask($(PORT),0,0xff)

dbLoadRecords("$(ADCORE)/db/ADBase.template", "P=$(PREFIX),R=cam1:,PORT=$(PORT),ADDR=0,TIMEOUT=1")
dbLoadRecords("$(ADXIMEA)/db/MC023CG.template","P=$(PREFIX),R=cam1:,PORT=$(PORT),ADDR=0,TIMEOUT=1")

MC023CGConfig("$(PORT)", 0, 0, 0, 0, "18880854")
epicsEnvSet("CAMERA_ID", "18880854")

# Create a standard arrays plugin, set it to get data from Driver.
NDStdArraysConfigure("Image1", 3, 0, "$(PORT)", 0)
dbLoadRecords("$(ADCORE)/db/NDPluginBase.template","P=$(PREFIX),R=image1:,PORT=Image1,ADDR=0,TIMEOUT=1,NDARRAY_PORT=$(PORT),NDARRAY_ADDR=0")
dbLoadRecords("$(ADCORE)/db/NDStdArrays.template", "P=$(PREFIX),R=image1:,PORT=Image1,ADDR=0,TIMEOUT=1,NDARRAY_PORT=$(PORT),TYPE=Float32,FTVL=FLOAT,NELEMENTS=4000")

# Load all other plugins using commonPlugins.cmd
#< $(ADCORE)/iocBoot/EXAMPLE_commonPlugins.cmd
< $(ADCORE)/iocBoot/commonPlugins.cmd

set_requestfile_path("$(ADXIMEA)/MC023CGApp/Db")

### Load alive record
dbLoadRecords("$(ALIVE)/aliveApp/Db/alive.db", "P=$(PREFIX),RHOST=164.54.100.11")


#asynSetTraceMask($(PORT),0,0x09)
iocInit()

# save things every thirty seconds
create_monitor_set("auto_settings.req", 30, "P=$(PREFIX)")

