/******************************************************************************
        Copyright 2019 Intel Corporation.
 
This software and the related documents are Intel copyrighted materials,
and your use of them is governed by the express license under which they
were provided to you ("License"). Unless the License provides otherwise,
you may not use, modify, copy, publish, distribute, disclose or transmit
this software or the related documents without Intel's prior written
permission.


 This software and the related documents are provided as is, with no express
or implied warranties, other than those that are expressly stated in the
License.

******************************************************************************/


typedef HRESULT (WINAPI *PFN_D3D10CreateDevice1)(IDXGIAdapter * pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, D3D10_FEATURE_LEVEL1 HardwareLevel, UINT SDKVersion, ID3D10Device1 ** ppDevice);

typedef HRESULT (WINAPI *PFN_D3D10CreateDeviceAndSwapChain1)(IDXGIAdapter * pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, D3D10_FEATURE_LEVEL1 HardwareLevel, UINT SDKVersion, DXGI_SWAP_CHAIN_DESC * pSwapChainDesc, IDXGISwapChain ** ppSwapChain, ID3D10Device1 ** ppDevice);

typedef HRESULT (WINAPI *PFN_D3D10CreateDevice)(IDXGIAdapter * pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, UINT SDKVersion, ID3D10Device ** ppDevice);

typedef HRESULT (WINAPI *PFN_D3D10CreateDeviceAndSwapChain)(IDXGIAdapter * pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, UINT SDKVersion, DXGI_SWAP_CHAIN_DESC * pSwapChainDesc, IDXGISwapChain ** ppSwapChain, ID3D10Device ** ppDevice);

typedef HRESULT (WINAPI *PFN_D3D10CreateBlob)(SIZE_T NumBytes, LPD3D10BLOB * ppBuffer);

typedef HRESULT (WINAPI *PFN_D3D11CreateDevice)(IDXGIAdapter * pAdapter, D3D_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, ID3D11Device ** ppDevice, D3D_FEATURE_LEVEL * pFeatureLevel, ID3D11DeviceContext ** ppImmediateContext);

typedef HRESULT (WINAPI *PFN_D3D11CreateDeviceAndSwapChain)(IDXGIAdapter * pAdapter, D3D_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const DXGI_SWAP_CHAIN_DESC * pSwapChainDesc, IDXGISwapChain ** ppSwapChain, ID3D11Device ** ppDevice, D3D_FEATURE_LEVEL * pFeatureLevel, ID3D11DeviceContext ** ppImmediateContext);

typedef HRESULT (WINAPI *PFN_D3D12CreateRootSignatureDeserializer)(LPCVOID pSrcData, SIZE_T SrcDataSizeInBytes, const IID & pRootSignatureDeserializerInterface, void ** ppRootSignatureDeserializer);

typedef HRESULT (WINAPI *PFN_D3D12CreateVersionedRootSignatureDeserializer)(LPCVOID pSrcData, SIZE_T SrcDataSizeInBytes, const IID & pRootSignatureDeserializerInterface, void ** ppRootSignatureDeserializer);

typedef HRESULT (WINAPI *PFN_D3D12CreateDevice)(IUnknown * pAdapter, D3D_FEATURE_LEVEL MinimumFeatureLevel, const IID & riid, void ** ppDevice);

typedef HRESULT (WINAPI *PFN_D3D12GetDebugInterface)(const IID & riid, void ** ppvDebug);

typedef HRESULT (WINAPI *PFN_D3D12EnableExperimentalFeatures)(UINT NumFeatures, const IID * pIIDs, void * pConfigurationStructs, UINT * pConfigurationStructSizes);

typedef HRESULT (WINAPI *PFN_CreateDXGIFactory)(const IID & riid, void ** ppFactory);

typedef HRESULT (WINAPI *PFN_CreateDXGIFactory1)(const IID & riid, void ** ppFactory);

typedef HRESULT (WINAPI *PFN_CreateDXGIFactory2)(UINT Flags, const IID & riid, void ** ppFactory);

typedef HRESULT (WINAPI *PFN_DXGIGetDebugInterface1)(UINT Flags, const IID & riid, void ** pDebug);

typedef HRESULT (WINAPI *PFN_DXGIDeclareAdapterRemovalSupport)();

