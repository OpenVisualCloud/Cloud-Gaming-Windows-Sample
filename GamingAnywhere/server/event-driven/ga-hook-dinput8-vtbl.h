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

#pragma once

#include <Windows.h>

#include <wbemidl.h>
#include <oleauto.h>

#include <dinput.h>

#ifdef __cplusplus
extern "C" {
#endif
	typedef HRESULT(STDMETHODCALLTYPE *IWbemLocator_ConnectServer_t)(IWbemLocator*, const BSTR, const BSTR, const BSTR, const BSTR, long, const BSTR, IWbemContext*, IWbemServices**);
	IWbemLocator_ConnectServer_t get_IWbemLocator_ConnectServer(IWbemLocator* from);

	typedef HRESULT(STDMETHODCALLTYPE *IWbemServices_CreateInstanceEnum_t)(IWbemServices*, const BSTR strFilter, long lFlags, IWbemContext *pCtx, IEnumWbemClassObject **ppEnum);
	IWbemServices_CreateInstanceEnum_t get_IWbemServices_CreateInstanceEnum(IWbemServices* from);

	typedef HRESULT(STDMETHODCALLTYPE *EnumDevicesA_t)(IDirectInput8A*, DWORD, LPDIENUMDEVICESCALLBACKA, LPVOID, DWORD);
	EnumDevicesA_t get_EnumDevicesA(IDirectInput8A* from);

	typedef HRESULT(STDMETHODCALLTYPE *GetDeviceStatusA_t)(IDirectInput8A*, REFGUID);
	GetDeviceStatusA_t get_GetDeviceStatusA(IDirectInput8A* from);

	typedef HRESULT(STDMETHODCALLTYPE *CreateDeviceA_t)(IDirectInput8A*, REFGUID, LPDIRECTINPUTDEVICE8A *, LPUNKNOWN);
	CreateDeviceA_t get_CreateDeviceA(IDirectInput8A* from);

#ifdef __cplusplus
}
#endif