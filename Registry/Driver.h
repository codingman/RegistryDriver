#pragma once
#include <ntddk.h>
#include <wdf.h>
#include <usb.h>
#include <usbdlib.h>
#include <wdfusb.h>
#include <initguid.h>

#include "device.h"
#include "Trace.h"

EXTERN_C_START

DRIVER_INITIALIZE DriverEntry;
EVT_WDF_DRIVER_DEVICE_ADD RegistryEvtDeviceAdd;
EVT_WDF_OBJECT_CONTEXT_CLEANUP RegistryEvtDriverContextCleanup;

EXTERN_C_END
