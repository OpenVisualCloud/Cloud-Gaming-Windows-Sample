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

#define DIRECTINPUT_VERSION  0x0800

#include <stdio.h>
#include <Windows.h>
#include <atomic>
#include <cstdint>

#include <wbemidl.h>
#include <oleauto.h>

#include "ga-common.h"
#include "ga-avcodec.h"
#include "rtspconf.h"
#include "asource.h"
#include "ga-hook-common.h"
#include "ga-hook-xinput.h"
#include "ga-hook-dinput8-vtbl.h"

#include <dinput.h>

#define	DI8_DO_HOOK(dll, name)	ga_hook_function(#name, GetProcAddress(GetModuleHandle(TEXT(dll)), #name), hook_##name)

const char instance_name[] = "Cloud Joystick instance";
const char product_name[] = "Cloud Joystick product";

template <size_t idx, class R>
R get_from_vtable(void* iface) {
	std::uint64_t* vtable = *reinterpret_cast<std::uint64_t**>(iface);
	return reinterpret_cast<R>(vtable[idx]);
}

struct DInput8ASCII {
	using DInput8Iface = IDirectInput8A;

	using EnumDevices_t = EnumDevicesA_t;
	static EnumDevices_t get_EnumDevices(DInput8Iface* iface) { return get_EnumDevicesA(iface);  }

	using GetDeviceStatus_t = GetDeviceStatusA_t;
	static GetDeviceStatus_t get_GetDeviceStatus(DInput8Iface* iface) { return get_GetDeviceStatusA(iface); }

	using CreateDevice_t = CreateDeviceA_t;
	static CreateDevice_t get_CreateDevice(DInput8Iface* iface) { return get_CreateDeviceA(iface);  }

	using LPDIRECTINPUTDEVICE8 = LPDIRECTINPUTDEVICE8A;
	using LPDIENUMDEVICESCALLBACK = LPDIENUMDEVICESCALLBACKA;
	using DIDEVICEINSTANCE = DIDEVICEINSTANCEA;
	using LPDIDEVICEOBJECTINSTANCE = LPDIDEVICEOBJECTINSTANCEA;
	using LPDIENUMDEVICEOBJECTSCALLBACK = LPDIENUMDEVICEOBJECTSCALLBACKA;
	using LPDIDEVICEINSTANCE = LPDIDEVICEINSTANCEA;
	using LPDIENUMEFFECTSCALLBACK = LPDIENUMEFFECTSCALLBACKA;
	using LPDIEFFECTINFO = LPDIEFFECTINFOA;
	using LPDIACTIONFORMAT = LPDIACTIONFORMATA;
	using LPDIDEVICEIMAGEINFOHEADER = LPDIDEVICEIMAGEINFOHEADERA;

	using IDirectInputDevice8 = IDirectInputDevice8A;

	static void fill_strings(LPDIDEVICEINSTANCE inst) {
		CopyMemory(inst->tszInstanceName, instance_name, sizeof(instance_name));
		CopyMemory(inst->tszProductName, product_name, sizeof(product_name));
	}

	constexpr static char EnumDevices_hook_name[] = "EnumDevicesA";
	constexpr static char GetDeviceStatus_hook_name[] = "GetDeviceStatusA";
	constexpr static char CreateDevice_hook_name[] = "CreateDeviceA";
};

const GUID GUID_INST = { 0x71be3d10, 0xd9bd, 0x11e9, {0x80, 0x1, 0x44, 0x45, 0x53, 0x54, 0x0, 0x0} };
const GUID GUID_PROD = { 0x02FF045E, 0xDA90, 0x48B3, {0xA0, 0xA6, 0x33, 0xED, 0x31, 0x1B,  0xAA, 0x4C}};

template <class Trait>
struct DInput8Hook {
	using IfaceType = typename Trait::DInput8Iface;

	 static __declspec(dllexport) HRESULT WINAPI hook_EnumDevices(typename Trait::DInput8Iface* This, DWORD dwDevType, typename Trait::LPDIENUMDEVICESCALLBACK lpCallback, LPVOID pvRef, DWORD dwFlags) {
		if (dwDevType == DI8DEVCLASS_GAMECTRL) {
			typename Trait::DIDEVICEINSTANCE inst;
			fill_out_DeviceInstance(&inst);
			lpCallback(&inst, pvRef);
			return DI_OK;
		}
		else {
			return old_EnumDevices(This, dwDevType, lpCallback, pvRef, dwFlags);
		}
	}

	static __declspec(dllexport) HRESULT WINAPI hook_GetDeviceStatus(typename Trait::DInput8Iface* This, REFGUID rg) {
		if (memcmp(&rg, &GUID_INST, sizeof(GUID)) == sizeof(GUID)) {
			return DI_OK;
		}
		else {
			return old_GetDeviceStatus(This, rg);
		}
	}

	using DeviceIface = typename Trait::IDirectInputDevice8;

	struct FakeDevice : public DeviceIface {
		virtual HRESULT __stdcall QueryInterface(REFIID riid, LPVOID * ppvObj) override
		{
			return DI_OK;
		}
		virtual ULONG __stdcall AddRef(void) override
		{
			return 0;
		}
		virtual ULONG __stdcall Release(void) override
		{
			return 0;
		}
		virtual HRESULT __stdcall GetCapabilities(LPDIDEVCAPS) override
		{
			ga_error("GetCapabilitiesA\n");
			return DI_OK;
		}
		virtual HRESULT __stdcall EnumObjects(typename Trait::LPDIENUMDEVICEOBJECTSCALLBACK, LPVOID, DWORD) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall GetProperty(REFGUID, LPDIPROPHEADER) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall SetProperty(REFGUID, LPCDIPROPHEADER) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall Acquire(void) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall Unacquire(void) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall GetDeviceState(DWORD, LPVOID) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall GetDeviceData(DWORD, LPDIDEVICEOBJECTDATA, LPDWORD, DWORD) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall SetDataFormat(LPCDIDATAFORMAT) override
		{
			// NOP
			return DI_OK;
		}
		virtual HRESULT __stdcall SetEventNotification(HANDLE) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall SetCooperativeLevel(HWND, DWORD) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall GetObjectInfo(typename Trait::LPDIDEVICEOBJECTINSTANCE inst, DWORD, DWORD) override
		{
			ga_error("GetObjectInfoA\n");
			return DI_OK;
		}
		virtual HRESULT __stdcall GetDeviceInfo(typename Trait::LPDIDEVICEINSTANCE inst) override
		{
			if (inst->dwSize != sizeof(*inst))
				ga_error("GetDeviceInfo() size mismatch (got %d, expected %d)\n", inst->dwSize, sizeof(typename Trait::LPDIDEVICEINSTANCE));
			fill_out_DeviceInstance(inst);
			return DI_OK;
		}
		virtual HRESULT __stdcall RunControlPanel(HWND, DWORD) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall Initialize(HINSTANCE, DWORD, REFGUID) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall CreateEffect(REFGUID, LPCDIEFFECT, LPDIRECTINPUTEFFECT *, LPUNKNOWN) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall EnumEffects(typename Trait::LPDIENUMEFFECTSCALLBACK, LPVOID, DWORD) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall GetEffectInfo(typename Trait::LPDIEFFECTINFO, REFGUID) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall GetForceFeedbackState(LPDWORD) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall SendForceFeedbackCommand(DWORD) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall EnumCreatedEffectObjects(LPDIENUMCREATEDEFFECTOBJECTSCALLBACK, LPVOID, DWORD) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall Escape(LPDIEFFESCAPE) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall Poll(void) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall SendDeviceData(DWORD, LPCDIDEVICEOBJECTDATA, LPDWORD, DWORD) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall EnumEffectsInFile(LPCSTR, LPDIENUMEFFECTSINFILECALLBACK, LPVOID, DWORD) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall WriteEffectToFile(LPCSTR, DWORD, LPDIFILEEFFECT, DWORD) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall BuildActionMap(typename Trait::LPDIACTIONFORMAT, LPCSTR, DWORD) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall SetActionMap(typename Trait::LPDIACTIONFORMAT, LPCSTR, DWORD) override
		{
			return DI_OK;
		}
		virtual HRESULT __stdcall GetImageInfo(typename Trait::LPDIDEVICEIMAGEINFOHEADER) override
		{
			return DI_OK;
		}
	};

	static __declspec(dllexport) HRESULT WINAPI hook_CreateDevice(typename Trait::DInput8Iface* This, REFGUID rguid, typename Trait::LPDIRECTINPUTDEVICE8 * lplpDirectInputDevice, LPUNKNOWN pUnkOuter) {
		if (memcmp(&rguid, &GUID_INST, sizeof(GUID)) == sizeof(GUID)) {
			old_CreateDevice(This, rguid, lplpDirectInputDevice, pUnkOuter);
			*lplpDirectInputDevice = new FakeDevice();
			return DI_OK;
		}
		else {
			return old_CreateDevice(This, rguid, lplpDirectInputDevice, pUnkOuter);
		}
	}

	void hook_iface(IfaceType* iface) {
		old_EnumDevices = Trait::get_EnumDevices(iface);
		ga_hook_function(Trait::EnumDevices_hook_name, old_EnumDevices, hook_EnumDevices);

		old_GetDeviceStatus = Trait::get_GetDeviceStatus(iface);
		ga_hook_function(Trait::GetDeviceStatus_hook_name, old_GetDeviceStatus, hook_GetDeviceStatus);

		old_CreateDevice = Trait::get_CreateDevice(iface);
		ga_hook_function(Trait::CreateDevice_hook_name, old_CreateDevice, hook_CreateDevice);
	}

	static typename Trait::EnumDevices_t old_EnumDevices;
	static typename Trait::CreateDevice_t old_CreateDevice;
	static typename Trait::GetDeviceStatus_t old_GetDeviceStatus;
private:
	static void fill_out_DeviceInstance(typename Trait::LPDIDEVICEINSTANCE inst) {
		CopyMemory(&inst->guidInstance, &GUID_INST, sizeof(GUID));
		CopyMemory(&inst->guidProduct, &GUID_PROD, sizeof(GUID));
		inst->dwDevType = DI8DEVTYPE_GAMEPAD | DIDEVTYPE_HID;
		Trait::fill_strings(inst);
	}
};

DInput8Hook<DInput8ASCII> ascii_hook;
DInput8ASCII::EnumDevices_t DInput8Hook<DInput8ASCII>::old_EnumDevices;
DInput8ASCII::CreateDevice_t DInput8Hook<DInput8ASCII>::old_CreateDevice;
DInput8ASCII::GetDeviceStatus_t DInput8Hook<DInput8ASCII>::old_GetDeviceStatus;

extern "C" __declspec(dllexport) HRESULT WINAPI hook_DirectInput8Create(HINSTANCE hinst, DWORD dwVersion, REFIID riidltf, LPVOID * ppvOut, LPUNKNOWN punkOuter) {
	HRESULT retcode = DirectInput8Create(hinst, dwVersion, riidltf, ppvOut, punkOuter);
	// TODO use QueryInterface here?
	if (riidltf == IID_IDirectInput8A) {
		ascii_hook.hook_iface(static_cast<IDirectInput8A*>(*ppvOut));
	} else if (riidltf == IID_IDirectInput8A) {
		ga_error("hook_DirectInput8Create(): hooking Unicode DirectInput NYI");
	} else {
		ga_error("hook_DirectInput8Create(): unrecognized DirectInput riidltf");
	}

	return retcode;
}

struct FakeWmiDevice : public IWbemClassObject {
	virtual HRESULT __stdcall QueryInterface(REFIID riid, void ** ppvObject) override
	{
		return S_FALSE;
	}
	virtual ULONG __stdcall AddRef(void) override
	{
		return 0;
	}
	virtual ULONG __stdcall Release(void) override
	{
		return 0;
	}
	virtual HRESULT __stdcall GetQualifierSet(IWbemQualifierSet ** ppQualSet) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall Get(LPCWSTR wszName, long lFlags, VARIANT * pVal, CIMTYPE * pType, long * plFlavor) override
	{
		if (lstrcmpW(L"DeviceID", wszName) == 0) {
			pVal->vt = VT_BSTR;
			pVal->bstrVal = SysAllocString(L"HID\\VID_045E&PID_02FF&IG_00\\7&16D0F57C&0&0000");
		}
		return S_OK;
	}
	virtual HRESULT __stdcall Put(LPCWSTR wszName, long lFlags, VARIANT * pVal, CIMTYPE Type) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall Delete(LPCWSTR wszName) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall GetNames(LPCWSTR wszQualifierName, long lFlags, VARIANT * pQualifierVal, SAFEARRAY ** pNames) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall BeginEnumeration(long lEnumFlags) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall Next(long lFlags, BSTR * strName, VARIANT * pVal, CIMTYPE * pType, long * plFlavor) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall EndEnumeration(void) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall GetPropertyQualifierSet(LPCWSTR wszProperty, IWbemQualifierSet ** ppQualSet) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall Clone(IWbemClassObject ** ppCopy) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall GetObjectText(long lFlags, BSTR * pstrObjectText) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall SpawnDerivedClass(long lFlags, IWbemClassObject ** ppNewClass) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall SpawnInstance(long lFlags, IWbemClassObject ** ppNewInstance) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall CompareTo(long lFlags, IWbemClassObject * pCompareTo) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall GetPropertyOrigin(LPCWSTR wszName, BSTR * pstrClassName) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall InheritsFrom(LPCWSTR strAncestor) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall GetMethod(LPCWSTR wszName, long lFlags, IWbemClassObject ** ppInSignature, IWbemClassObject ** ppOutSignature) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall PutMethod(LPCWSTR wszName, long lFlags, IWbemClassObject * pInSignature, IWbemClassObject * pOutSignature) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall DeleteMethod(LPCWSTR wszName) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall BeginMethodEnumeration(long lEnumFlags) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall NextMethod(long lFlags, BSTR * pstrName, IWbemClassObject ** ppInSignature, IWbemClassObject ** ppOutSignature) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall EndMethodEnumeration(void) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall GetMethodQualifierSet(LPCWSTR wszMethod, IWbemQualifierSet ** ppQualSet) override
	{
		return S_FALSE;
	}
	virtual HRESULT __stdcall GetMethodOrigin(LPCWSTR wszMethodName, BSTR * pstrClassName) override
	{
		return S_FALSE;
	}
};

struct FakeIEnumWbemClassObject : public IEnumWbemClassObject {
	FakeIEnumWbemClassObject() : returned(false) {}
	// Inherited via IEnumWbemClassObject
	virtual HRESULT __stdcall QueryInterface(REFIID riid, void ** ppvObject) override
	{
		*ppvObject = this;
		return NOERROR;
	}
	virtual ULONG __stdcall AddRef(void) override
	{
		return 0;
	}
	virtual ULONG __stdcall Release(void) override
	{
		return 0;
	}
	virtual HRESULT __stdcall Reset(void) override
	{
		returned = false;
		return S_FALSE;
	}
	virtual HRESULT __stdcall Next(long lTimeout, ULONG uCount, IWbemClassObject ** apObjects, ULONG * puReturned) override
	{
		if (returned) {
			*puReturned = 0;
			return WBEM_S_NO_ERROR;
		}
		else {
			apObjects[0] = new FakeWmiDevice;
			*puReturned = 1;
			returned = true;
			return WBEM_S_NO_ERROR;
		}
	}
	virtual HRESULT __stdcall NextAsync(ULONG uCount, IWbemObjectSink * pSink) override
	{
		ga_error("FakeIEnumWbemClassObject::NextAsync() - NYI\n");
		return S_FALSE;
	}
	virtual HRESULT __stdcall Clone(IEnumWbemClassObject ** ppEnum) override
	{
		ga_error("FakeIEnumWbemClassObject::Clone() - NYI\n");
		return S_FALSE;
	}
	virtual HRESULT __stdcall Skip(long lTimeout, ULONG nCount) override
	{
		ga_error("FakeIEnumWbemClassObject::Skip() - NYI\n");
		return S_FALSE;
	}

	bool returned;
};
typedef HRESULT(WINAPI *CreateInstanceEnum_t)(IWbemServices* This, const BSTR strFilter, long lFlags, IWbemContext * pCtx, IEnumWbemClassObject ** ppEnum);
CreateInstanceEnum_t old_CreateInstanceEnum;

HRESULT WINAPI hook_CreateInstanceEnum(IWbemServices* This, const BSTR strFilter, long lFlags, IWbemContext * pCtx, IEnumWbemClassObject ** ppEnum) {
	HRESULT retcode = old_CreateInstanceEnum(This, strFilter, lFlags, pCtx, ppEnum);
	if (retcode == S_OK && lstrcmpW(L"Win32_PNPEntity", strFilter) == 0) {
		IEnumWbemClassObject* iface = *ppEnum;
		// TODO replace with hooked Next function
		*ppEnum = new FakeIEnumWbemClassObject();
	}
	return retcode;
}

typedef HRESULT(WINAPI *ConnectServer_t)(IWbemLocator* This, const BSTR strNetworkResource, const BSTR strUser, const BSTR strPassword, const BSTR strLocale, long lSecurityFlags, const BSTR strAuthority, IWbemContext *pCtx, IWbemServices **ppNamespace);
ConnectServer_t old_ConnectServer;

extern "C" __declspec(dllexport) HRESULT WINAPI hook_ConnectServer(IWbemLocator* This, const BSTR strNetworkResource, const BSTR strUser, const BSTR strPassword, const BSTR strLocale, long lSecurityFlags, const BSTR strAuthority, IWbemContext *pCtx, IWbemServices **ppNamespace) {
	HRESULT retcode = old_ConnectServer(This, strNetworkResource, strUser, strPassword, strLocale, lSecurityFlags, strAuthority, pCtx, ppNamespace);
	if (retcode == S_OK && lstrcmpW(L"\\\\.\\root\\cimv2", strNetworkResource) == 0) {
		IWbemServices* iface = static_cast<IWbemServices*>(*ppNamespace);
		old_CreateInstanceEnum = get_IWbemServices_CreateInstanceEnum(iface);
		ga_hook_function("CreateInstanceEnum", old_CreateInstanceEnum, hook_CreateInstanceEnum);
	}
	return retcode;
}

extern "C" __declspec(dllexport) HRESULT WINAPI hook_CoCreateInstance(REFCLSID  rclsid, LPUNKNOWN pUnkOuter, DWORD     dwClsContext, REFIID    riid, LPVOID    *ppv) {
	if (rclsid == __uuidof(WbemLocator) && riid == __uuidof(IWbemLocator)) {
		HRESULT retcode = CoCreateInstance(rclsid, pUnkOuter, dwClsContext, riid, ppv);
		if (retcode == S_OK) {
			IWbemLocator* pIWbemLocator = static_cast<IWbemLocator*>(*ppv);
			old_ConnectServer = get_IWbemLocator_ConnectServer(pIWbemLocator);
			ga_hook_function("ConnectServer", old_ConnectServer, hook_ConnectServer);
		}
		return retcode;
	}
	return CoCreateInstance(rclsid, pUnkOuter, dwClsContext, riid, ppv);
}

void hook_dinput8() {
	DI8_DO_HOOK("DInput8", DirectInput8Create);
	DI8_DO_HOOK("Ole32", CoCreateInstance);
}