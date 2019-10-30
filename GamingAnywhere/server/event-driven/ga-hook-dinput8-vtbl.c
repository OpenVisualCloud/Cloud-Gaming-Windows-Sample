/*
 * Copyright (c) 2019 Intel Corporation
 *
 * This file is part of GamingAnywhere (GA).
 *
 * GA is free software; you can redistribute it and/or modify it
 * under the terms of the 3-clause BSD License as published by the
 * Free Software Foundation: http://directory.fsf.org/wiki/License:BSD_3Clause
 *
 * GA is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the 3-clause BSD License along with GA;
 * if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#define CINTERFACE
#define _WIN32_DCOM
#define DIRECTINPUT_VERSION  0x0800
#include "ga-hook-dinput8-vtbl.h"

IWbemLocator_ConnectServer_t get_IWbemLocator_ConnectServer(IWbemLocator* from) {
	return from->lpVtbl->ConnectServer;
}

IWbemServices_CreateInstanceEnum_t get_IWbemServices_CreateInstanceEnum(IWbemServices* from) {
	return from->lpVtbl->CreateInstanceEnum;
}

EnumDevicesA_t get_EnumDevicesA(IDirectInput8A* from) {
	return from->lpVtbl->EnumDevices;
}

GetDeviceStatusA_t get_GetDeviceStatusA(IDirectInput8A* from) {
	return from->lpVtbl->GetDeviceStatus;
}

CreateDeviceA_t get_CreateDeviceA(IDirectInput8A* from) {
	return from->lpVtbl->CreateDevice;
}