// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.1
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xmemory_scanner.h"

extern XMemory_scanner_Config XMemory_scanner_ConfigTable[];

XMemory_scanner_Config *XMemory_scanner_LookupConfig(u16 DeviceId) {
	XMemory_scanner_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XMEMORY_SCANNER_NUM_INSTANCES; Index++) {
		if (XMemory_scanner_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XMemory_scanner_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XMemory_scanner_Initialize(XMemory_scanner *InstancePtr, u16 DeviceId) {
	XMemory_scanner_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XMemory_scanner_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XMemory_scanner_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

