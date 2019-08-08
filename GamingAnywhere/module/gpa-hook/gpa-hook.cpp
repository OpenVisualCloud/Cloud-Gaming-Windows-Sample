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

// We declare all of our custom implementations, including the dispatch table
// and any override bodies, in a namespace to prevent potential name clashes with
// other layers. By convention, we put these in a namespace named after the layer name
namespace gpa_hook {

	// we will return a pointer to this in our layer initialization function below
	GPADispatchTable gDispatchTable = { "GPA hook" };
	GPADispatchTable& sDispatchTable = gDispatchTable;

	HANDLE hMapFile;
	HANDLE mappedHandle;
	SharedParams* sharedParameters;

	// Conditionally declare API call override function bodies based on which APIs we
	// have parsed and available. Each of these function signatures will be identical
	// to the API declaration, with the addition of one more parameter after the API
	// call parameter list (a reference to a const pointer to the dispatch table declared
	// in the "next" layer)

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
	////////		DX10		////////
	////////////////////////////////////
	HRESULT WINAPI D3D10CreateDevice(IDXGIAdapter * pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, UINT SDKVersion, ID3D10Device ** ppDevice,
		struct ::GPADispatchTable const*& tlsRef);

	////////////////////////////////////
	////////		DX11		////////
	////////////////////////////////////
	HRESULT WINAPI D3D11CreateDevice(IDXGIAdapter* pAdapter, D3D_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags,
		const D3D_FEATURE_LEVEL* pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, ID3D11Device** ppDevice,
		D3D_FEATURE_LEVEL* pFeatureLevel, ID3D11DeviceContext** ppImmediateContext, struct GPADispatchTable const*& tlsRef);
	HRESULT WINAPI D3D11CreateDeviceAndSwapChain(IDXGIAdapter * pAdapter, D3D_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels,
		UINT FeatureLevels, UINT SDKVersion, const DXGI_SWAP_CHAIN_DESC * pSwapChainDesc, IDXGISwapChain ** ppSwapChain, ID3D11Device ** ppDevice,
		D3D_FEATURE_LEVEL * pFeatureLevel, ID3D11DeviceContext ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
	HRESULT WINAPI DXGIPresent(IDXGISwapChain* self, UINT SyncInterval, UINT Flags, struct GPADispatchTable const*& tlsRef);
	HRESULT WINAPI DXGIPresent1(IDXGISwapChain1* self, UINT SyncInterval, UINT PresentFlags,
		const DXGI_PRESENT_PARAMETERS* pPresentParameters, struct GPADispatchTable const*& tlsRef);

	////////////////////////////////////
	////////		DX12		////////
	////////////////////////////////////
	HRESULT WINAPI D3D12CreateDevice(IUnknown * pAdapter, D3D_FEATURE_LEVEL MinimumFeatureLevel, const IID & riid, void ** ppDevice,
		struct ::GPADispatchTable const*& tlsRef);
#endif  // HAVE_DIRECTX

#if defined(HAVE_METAL)
	void MetalPresent(id<MTLDrawable> self, SEL _cmd, struct GPADispatchTable const*& tlsRef);
	void MetalPresentDrawable_(id<MTLCommandBuffer> self, SEL _cmd, id<MTLDrawable> drawable,
		struct GPADispatchTable const*& tlsRef);
#endif  // HAVE_METAL

#if defined(HAVE_VULKAN)
	void InitializeVulkan();
	VkResult VKAPI_CALL vkQueuePresentKHR(VkQueue queue, const VkPresentInfoKHR* pPresentInfo,
		struct GPADispatchTable const*& tlsRef);
#endif  // HAVE_VULKAN

	// define a function to be called when the layer is unloaded (the layer "destructor" function,
	// in other words). Perform any layer-specific cleanup here.
	void GpaHookUnloaded()
	{
		GPA_LOG_INFO("%s", "GPA hook unloaded");
		UnmapViewOfFile(sharedParameters);
		CloseHandle(hMapFile);
	}

}  // namespace hello_simple_layer

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
	////////		DX10		////////
	////////////////////////////////////
	gpa_hook::sDispatchTable.DirectX.D3D10CreateDevice = gpa_hook::D3D10CreateDevice;

	////////////////////////////////////
	////////		DX11		////////
	////////////////////////////////////
	gpa_hook::sDispatchTable.DirectX.D3D11CreateDevice = gpa_hook::D3D11CreateDevice;
	gpa_hook::sDispatchTable.DirectX.D3D11CreateDeviceAndSwapChain = gpa_hook::D3D11CreateDeviceAndSwapChain;

	gpa_hook::sDispatchTable.DirectX.IDXGISwapChainTable.Present = gpa_hook::DXGIPresent;
	gpa_hook::sDispatchTable.DirectX.IDXGISwapChain1Table.Present = gpa_hook::DXGIPresent;
	gpa_hook::sDispatchTable.DirectX.IDXGISwapChain2Table.Present = gpa_hook::DXGIPresent;
	gpa_hook::sDispatchTable.DirectX.IDXGISwapChain3Table.Present = gpa_hook::DXGIPresent;
	gpa_hook::sDispatchTable.DirectX.IDXGISwapChain4Table.Present = gpa_hook::DXGIPresent;

	gpa_hook::sDispatchTable.DirectX.IDXGISwapChain1Table.Present1 = gpa_hook::DXGIPresent1;
	gpa_hook::sDispatchTable.DirectX.IDXGISwapChain2Table.Present1 = gpa_hook::DXGIPresent1;
	gpa_hook::sDispatchTable.DirectX.IDXGISwapChain3Table.Present1 = gpa_hook::DXGIPresent1;
	gpa_hook::sDispatchTable.DirectX.IDXGISwapChain4Table.Present1 = gpa_hook::DXGIPresent1;

	////////////////////////////////////
	////////		DX12		////////
	////////////////////////////////////
	gpa_hook::sDispatchTable.DirectX.D3D12CreateDevice = gpa_hook::D3D12CreateDevice;

#endif  // HAVE_DIRECTX

#if defined(HAVE_METAL)
	hello_simple_layer::sDispatchTable.Metal.CAMetalDrawableProtocolTable.present =
		hello_simple_layer::MetalPresent;
	hello_simple_layer::sDispatchTable.Metal.MTLDrawableProtocolTable.present = hello_simple_layer::MetalPresent;
	hello_simple_layer::sDispatchTable.Metal.MTLCommandBufferProtocolTable.presentDrawable_ =
		hello_simple_layer::MetalPresentDrawable_;
#endif  // HAVE_METAL

#if defined(HAVE_VULKAN)
	gpa_hook::InitializeVulkan();
	gpa_hook::sDispatchTable.Vulkan.vkQueuePresentKHR = gpa_hook::vkQueuePresentKHR;
#endif  // HAVE_VULKAN

	// hook up our layer "destructor" function
	gpa_hook::sDispatchTable.shutdownMethod = gpa_hook::GpaHookUnloaded;

	// return a pointer to our custom dispatch table
	return &gpa_hook::sDispatchTable;
}