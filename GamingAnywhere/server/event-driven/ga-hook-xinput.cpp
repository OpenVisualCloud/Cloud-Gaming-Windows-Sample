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

#include <stdio.h>
#include <Windows.h>
#include <atomic>
#include <xinput.h>
#include <cstdint>

#include <wbemidl.h>
#include <oleauto.h>

#include "ga-common.h"
#include "ga-avcodec.h"
#include "rtspconf.h"
#include "asource.h"
#include "ga-hook-common.h"
#include "ga-hook-xinput.h"
#include "ga-hook-dinput8.h"

#include <dinput.h>

#define	XI_DO_HOOK(dll, name)	ga_hook_function(#dll #name, GetProcAddress(GetModuleHandle(TEXT(dll)), #name), hook_##name)

std::atomic<bool> xinput_lock;
XINPUT_STATE xinput_state;

HMODULE xinput1_4, xinput1_3, xinput9_1_0;

template <class L>
void xinput_state_manipulate(const L& l) {
	while (xinput_lock.exchange(1) != 0) ;
	l(xinput_state);
	xinput_lock = 0;
}

extern "C" __declspec(dllexport) DWORD WINAPI hook_XInputGetState(DWORD dwUserIndex, XINPUT_STATE *pState) {
	if (dwUserIndex == 0) {
		xinput_state_manipulate([pState](const XINPUT_STATE& s) {CopyMemory(pState, &s, sizeof(XINPUT_STATE)); });
		return ERROR_SUCCESS;
	} else {
		return ERROR_DEVICE_NOT_CONNECTED;
	}
}

extern "C" __declspec(dllexport) DWORD WINAPI hook_XInputGetCapabilities(DWORD dwUserIndex, DWORD dwFlags, XINPUT_CAPABILITIES *pCapabilities) {
	ga_error("hook_XInputGetCapabilities()\n");
	if (dwUserIndex == 0) {
		// TODO
		pCapabilities->Type = XINPUT_DEVTYPE_GAMEPAD;
		pCapabilities->SubType = XINPUT_DEVSUBTYPE_GAMEPAD;
		// TODO determine what real Xbox controller says
		pCapabilities->Flags = XINPUT_CAPS_VOICE_SUPPORTED | XINPUT_CAPS_FFB_SUPPORTED;
		pCapabilities->Gamepad.wButtons = 0xFFFF;
		pCapabilities->Gamepad.bLeftTrigger = 0xFF;
		pCapabilities->Gamepad.bRightTrigger = 0xFF;
		pCapabilities->Gamepad.sThumbLX = 32767;
		pCapabilities->Gamepad.sThumbLY = 32767;
		pCapabilities->Gamepad.sThumbRX = 32767;
		pCapabilities->Gamepad.sThumbRY = 32767;
		pCapabilities->Vibration.wLeftMotorSpeed = 65535;
		pCapabilities->Vibration.wRightMotorSpeed = 65535;
		return ERROR_SUCCESS;
	}
	else {
		return ERROR_DEVICE_NOT_CONNECTED;
	}
}

extern "C" __declspec(dllexport) DWORD WINAPI hook_XInputSetState(DWORD dwUserIndex, XINPUT_VIBRATION *pVibration) {
	if (dwUserIndex == 0) {
		// TODO
		// NOP
		return ERROR_SUCCESS;
	}
	else {
		return ERROR_DEVICE_NOT_CONNECTED;
	}
}

extern "C" __declspec(dllexport) DWORD hook_XInputGetBatteryInformation(DWORD dwUserIndex, BYTE devType, XINPUT_BATTERY_INFORMATION *pBatteryInformation) {
	if (dwUserIndex == 0) {
		pBatteryInformation->BatteryLevel = BATTERY_LEVEL_FULL;
		pBatteryInformation->BatteryType = BATTERY_TYPE_NIMH;
		return ERROR_SUCCESS;
	}
	else {
		return ERROR_DEVICE_NOT_CONNECTED;
	}
}

void hook_xinput() {
	// We load libraries "by force" because, for example, SDL does
	// load XInput dynamically. We try to hook all 3 versions
	// to cover most games.

	// try hooking the XInput1_4 - "most recent" version (Windows 8+)
	if ((xinput1_4 = LoadLibrary(L"XInput1_4.dll")) != INVALID_HANDLE_VALUE) {
		XI_DO_HOOK("XInput1_4", XInputGetState);
		XI_DO_HOOK("XInput1_4", XInputSetState);
		XI_DO_HOOK("XInput1_4", XInputGetCapabilities);
		XI_DO_HOOK("XInput1_4", XInputGetBatteryInformation);
	} else {
		ga_error("XInput 1.4 not hooked. Controller (gamepad) forwarding might not work.\n");
	}

	// DX SDK version
	if ((xinput1_3 = LoadLibrary(L"XInput1_3.dll")) != INVALID_HANDLE_VALUE) {
		XI_DO_HOOK("XInput1_3", XInputGetState);
		XI_DO_HOOK("XInput1_3", XInputSetState);
		XI_DO_HOOK("XInput1_3", XInputGetCapabilities);
		XI_DO_HOOK("XInput1_3", XInputGetBatteryInformation);
	} else {
		ga_error("XInput 1.3 not hooked. Controller (gamepad) forwarding might not work.\n");
	}

	// legacy version
	if ((xinput9_1_0 = LoadLibrary(L"XInput9_1_0.dll")) != INVALID_HANDLE_VALUE) {
		XI_DO_HOOK("XInput9_1_0", XInputGetState);
		XI_DO_HOOK("XInput9_1_0", XInputSetState);
		XI_DO_HOOK("XInput9_1_0", XInputGetCapabilities);
		// this version doesn't export XInputGetBatteryInformation
	} else {
		ga_error("XInput 9.1.0 not hooked. Controller (gamepad) forwarding might not work.\n");
	}

	hook_dinput8();
}

void post_new_xinput_state(const XINPUT_STATE& new_one) {
	xinput_state_manipulate([&new_one](XINPUT_STATE& s) {
		auto old_counter = s.dwPacketNumber;
		CopyMemory(&s, &new_one, sizeof(XINPUT_STATE));
		s.dwPacketNumber = old_counter + 1;
	});
}