/******************************************************************************
Copyright (C) 2019 Intel Corporation

SPDX-License-Identifier: MIT

******************************************************************************/

#include "dispatch-table/dispatch-table.h"
#include "logger/logger.h"

#include "gpa-hook.h"
#include "ga-hook-common.h"
#include "ga-common.h"

#include <windows.h>
#include <stdio.h>
#include <conio.h>
#include <tchar.h>

#pragma comment(lib, "user32.lib")

namespace gpa_hook {

	// we will return a pointer to this in our layer initialization function below
	GPADispatchTable gDispatchTable = { "GPA hook" };
	GPADispatchTable& sDispatchTable = gDispatchTable;

	HANDLE hMapFile;
	HANDLE mappedHandle;
	SharedParams* sharedParameters;

	void GetSharedMemory() {
		const char szName[] = { "GA_SHARE" };

		hMapFile = OpenFileMappingA(FILE_MAP_ALL_ACCESS, FALSE, szName);

		if (hMapFile == NULL)
		{
			_tprintf(TEXT("Could not open file mapping object (%d).\n"), GetLastError());
			return;
		}

		sharedParameters = static_cast<SharedParams *>(MapViewOfFile(hMapFile, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(SharedParams)));

		if (sharedParameters == NULL)
		{
			_tprintf(TEXT("Could not map view of file (%d).\n"), GetLastError());
			CloseHandle(hMapFile);
			return;
		}

		g_SharedParams = (SharedParams *)sharedParameters;
	}

#if defined(HAVE_DIRECTX)

	void InitializeDirectX();

	////////////////////////////////////
	////////		DX9 		////////
	////////////////////////////////////
	//Prepared for future implementation
	//HRESULT WINAPI D3D9CreateDevice(IDirect3D9* self, UINT Adapter, D3DDEVTYPE DeviceType, HWND hFocusWindow, DWORD BehaviorFlags, D3DPRESENT_PARAMETERS * pPresentationParameters, IDirect3DDevice9 ** ppReturnedDeviceInterface);
	HRESULT WINAPI D3D9Present(IDirect3DDevice9* self, const RECT * pSourceRect, const RECT * pDestRect, HWND hDestWindowOverride, const RGNDATA * pDirtyRegion);

	////////////////////////////////////
	////////		DX10		////////
	////////////////////////////////////

	////////////////////////////////////
	////////		DX11		////////
	////////////////////////////////////
	HRESULT WINAPI D3D11CreateDevice(IDXGIAdapter * pAdapter, D3D_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, ID3D11Device ** ppDevice, D3D_FEATURE_LEVEL * pFeatureLevel, ID3D11DeviceContext ** ppImmediateContext);
	HRESULT WINAPI DXGIPresent(IDXGISwapChain* self, UINT SyncInterval, UINT Flags);

	////////////////////////////////////
	////////		DX12		////////
	////////////////////////////////////

#endif  // HAVE_DIRECTX

#if defined(HAVE_METAL)
#endif  // HAVE_METAL

#if defined(HAVE_VULKAN)
#endif  // HAVE_VULKAN

	void GpaHookUnloaded()
	{
		GPA_LOG_INFO("%s", "GPA hook unloaded");
		UnmapViewOfFile(sharedParameters);
		CloseHandle(hMapFile);
	}

}  // namespace gpa_hook

// The GPA layer system will invoke this function when the layer library image
// is loaded; this is your layer "main" function
GPA_LAYER_EXPORT GPADispatchTable* LAYER_ENTRYPOINT()
{
	// inform the user that we loaded
	GPA_LOG_INFO("%s", "GPA hook loaded");

	gpa_hook::GetSharedMemory();

	// route the API calls through our implementations
#if defined(HAVE_DIRECTX)
	gpa_hook::InitializeDirectX();

	////////////////////////////////////
	////////		DX9 		////////
	////////////////////////////////////
	//Prepared for future implementation
	//gpa_hook::sDispatchTable.DirectX.IDirect3D9Table.CreateDevice = gpa_hook::D3D9CreateDevice;

	gpa_hook::sDispatchTable.DirectX.IDirect3DDevice9Table.Present = gpa_hook::D3D9Present;

	////////////////////////////////////
	////////		DX10		////////
	////////////////////////////////////

	////////////////////////////////////
	////////		DX11		////////
	////////////////////////////////////
	gpa_hook::sDispatchTable.DirectX.D3D11CreateDevice = gpa_hook::D3D11CreateDevice;

	gpa_hook::sDispatchTable.DirectX.IDXGISwapChainTable.Present = gpa_hook::DXGIPresent;
	gpa_hook::sDispatchTable.DirectX.IDXGISwapChain1Table.Present = gpa_hook::DXGIPresent;
	gpa_hook::sDispatchTable.DirectX.IDXGISwapChain2Table.Present = gpa_hook::DXGIPresent;
	gpa_hook::sDispatchTable.DirectX.IDXGISwapChain3Table.Present = gpa_hook::DXGIPresent;
	gpa_hook::sDispatchTable.DirectX.IDXGISwapChain4Table.Present = gpa_hook::DXGIPresent;

	////////////////////////////////////
	////////		DX12		////////
	////////////////////////////////////

#endif  // HAVE_DIRECTX

#if defined(HAVE_METAL)
#endif  // HAVE_METAL

#if defined(HAVE_VULKAN)
#endif  // HAVE_VULKAN

	// hook up our layer "destructor" function
	gpa_hook::sDispatchTable.shutdownMethod = gpa_hook::GpaHookUnloaded;

	// return a pointer to our custom dispatch table
	return &gpa_hook::sDispatchTable;
}