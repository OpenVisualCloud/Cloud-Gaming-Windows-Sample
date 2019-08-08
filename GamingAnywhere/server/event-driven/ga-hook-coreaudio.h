/*
 * Copyright (c) 2012-2015 Chun-Ying Huang
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

#ifndef __GA_HOOK_COREAUDIO_H__
#define __GA_HOOK_COREAUDIO_H__

#include <mmdeviceapi.h>
#include <audioclient.h>

#define DllImport   __declspec( dllimport )
#define DllExport   __declspec( dllexport )

#ifdef __cplusplus
extern "C" {
#endif
typedef HRESULT (STDMETHODCALLTYPE *t_GetBuffer)(
	IAudioRenderClient *thiz,
	UINT32 NumFramesRequested,
	BYTE **ppData);
typedef HRESULT (STDMETHODCALLTYPE *t_ReleaseBuffer)(
	IAudioRenderClient *thiz,
	UINT32 NumFramesWritten,
	DWORD dwFlags);
typedef HRESULT (STDMETHODCALLTYPE *t_GetMixFormat)(
	IAudioClient *thiz,
	WAVEFORMATEX **ppDeviceFormat);
typedef HRESULT (STDMETHODCALLTYPE *t_Initialize)(
	IAudioClient * thiz,
	AUDCLNT_SHAREMODE ShareMode,
	DWORD StreamFlags,
	REFERENCE_TIME hnsBufferDuration,
	REFERENCE_TIME hnsPeriodicity,
	const WAVEFORMATEX * pFormat,
	LPCGUID AudioSessionGuid);
#ifdef __cplusplus
}
#endif

// prototypes
DllExport HRESULT __stdcall hook_GetBuffer(
	IAudioRenderClient *thiz,
	UINT32 NumFramesRequested,
	BYTE **ppData);
DllExport HRESULT __stdcall hook_ReleaseBuffer(
	IAudioRenderClient *thiz,
	UINT32 NumFramesWritten,
	DWORD dwFlags);
DllExport HRESULT __stdcall hook_GetMixFormat(
	IAudioClient *thiz,
	WAVEFORMATEX **ppDeviceFormat);

DllExport HRESULT __stdcall hook_Initialize(
	IAudioClient * thiz,
	AUDCLNT_SHAREMODE ShareMode,
	DWORD StreamFlags,
	REFERENCE_TIME hnsBufferDuration,
	REFERENCE_TIME hnsPeriodicity,
	const WAVEFORMATEX * pFormat,
	LPCGUID AudioSessionGuid);

DllExport HRESULT __stdcall hook_Initialize(
		IAudioClient * thiz,
		AUDCLNT_SHAREMODE ShareMode,
		DWORD StreamFlags,
		REFERENCE_TIME hnsBufferDuration,
		REFERENCE_TIME hnsPeriodicity,
		const WAVEFORMATEX * pFormat,
		LPCGUID AudioSessionGuid);

int hook_coreaudio();

#endif

