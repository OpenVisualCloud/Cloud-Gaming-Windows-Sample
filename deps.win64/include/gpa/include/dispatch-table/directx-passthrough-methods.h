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






#include "dispatch-table/dispatch-table.h"

namespace gpa {
namespace directx {


HRESULT WINAPI Passthrough_D3D10CreateDevice1(IDXGIAdapter * pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, D3D10_FEATURE_LEVEL1 HardwareLevel, UINT SDKVersion, ID3D10Device1 ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_D3D10CreateDeviceAndSwapChain1(IDXGIAdapter * pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, D3D10_FEATURE_LEVEL1 HardwareLevel, UINT SDKVersion, DXGI_SWAP_CHAIN_DESC * pSwapChainDesc, IDXGISwapChain ** ppSwapChain, ID3D10Device1 ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_D3D10CreateDevice(IDXGIAdapter * pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, UINT SDKVersion, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_D3D10CreateDeviceAndSwapChain(IDXGIAdapter * pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, UINT SDKVersion, DXGI_SWAP_CHAIN_DESC * pSwapChainDesc, IDXGISwapChain ** ppSwapChain, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_D3D10CreateBlob(SIZE_T NumBytes, LPD3D10BLOB * ppBuffer, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_D3D11CreateDevice(IDXGIAdapter * pAdapter, D3D_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, ID3D11Device ** ppDevice, D3D_FEATURE_LEVEL * pFeatureLevel, ID3D11DeviceContext ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_D3D11CreateDeviceAndSwapChain(IDXGIAdapter * pAdapter, D3D_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const DXGI_SWAP_CHAIN_DESC * pSwapChainDesc, IDXGISwapChain ** ppSwapChain, ID3D11Device ** ppDevice, D3D_FEATURE_LEVEL * pFeatureLevel, ID3D11DeviceContext ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_D3D12CreateRootSignatureDeserializer(LPCVOID pSrcData, SIZE_T SrcDataSizeInBytes, const IID & pRootSignatureDeserializerInterface, void ** ppRootSignatureDeserializer, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_D3D12CreateVersionedRootSignatureDeserializer(LPCVOID pSrcData, SIZE_T SrcDataSizeInBytes, const IID & pRootSignatureDeserializerInterface, void ** ppRootSignatureDeserializer, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_D3D12CreateDevice(IUnknown * pAdapter, D3D_FEATURE_LEVEL MinimumFeatureLevel, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_D3D12GetDebugInterface(const IID & riid, void ** ppvDebug, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_D3D12EnableExperimentalFeatures(UINT NumFeatures, const IID * pIIDs, void * pConfigurationStructs, UINT * pConfigurationStructSizes, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDXGIFactory(const IID & riid, void ** ppFactory, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDXGIFactory1(const IID & riid, void ** ppFactory, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDXGIFactory2(UINT Flags, const IID & riid, void ** ppFactory, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DXGIGetDebugInterface1(UINT Flags, const IID & riid, void ** pDebug, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DXGIDeclareAdapterRemovalSupport(struct ::GPADispatchTable const*& tlsRef);


namespace iunknown {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace iunknown
namespace id3d10blob {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

LPVOID WINAPI Passthrough_GetBufferPointer(ID3D10Blob* self, struct ::GPADispatchTable const*& tlsRef);

SIZE_T WINAPI Passthrough_GetBufferSize(ID3D10Blob* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10blob
namespace id3d10devicechild {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10devicechild
namespace id3d10depthstencilstate {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D10DepthStencilState* self, D3D10_DEPTH_STENCIL_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10depthstencilstate
namespace id3d10blendstate {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D10BlendState* self, D3D10_BLEND_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10blendstate
namespace id3d10rasterizerstate {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D10RasterizerState* self, D3D10_RASTERIZER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10rasterizerstate
namespace id3d10resource {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetType(ID3D10Resource* self, D3D10_RESOURCE_DIMENSION * rType, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetEvictionPriority(ID3D10Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetEvictionPriority(ID3D10Resource* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10resource
namespace id3d10buffer {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetType(ID3D10Resource* self, D3D10_RESOURCE_DIMENSION * rType, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetEvictionPriority(ID3D10Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetEvictionPriority(ID3D10Resource* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Map(ID3D10Buffer* self, D3D10_MAP MapType, UINT MapFlags, void ** ppData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Unmap(ID3D10Buffer* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D10Buffer* self, D3D10_BUFFER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10buffer
namespace id3d10texture1d {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetType(ID3D10Resource* self, D3D10_RESOURCE_DIMENSION * rType, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetEvictionPriority(ID3D10Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetEvictionPriority(ID3D10Resource* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Map(ID3D10Texture1D* self, UINT Subresource, D3D10_MAP MapType, UINT MapFlags, void ** ppData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Unmap(ID3D10Texture1D* self, UINT Subresource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D10Texture1D* self, D3D10_TEXTURE1D_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10texture1d
namespace id3d10texture2d {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetType(ID3D10Resource* self, D3D10_RESOURCE_DIMENSION * rType, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetEvictionPriority(ID3D10Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetEvictionPriority(ID3D10Resource* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Map(ID3D10Texture2D* self, UINT Subresource, D3D10_MAP MapType, UINT MapFlags, D3D10_MAPPED_TEXTURE2D * pMappedTex2D, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Unmap(ID3D10Texture2D* self, UINT Subresource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D10Texture2D* self, D3D10_TEXTURE2D_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10texture2d
namespace id3d10texture3d {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetType(ID3D10Resource* self, D3D10_RESOURCE_DIMENSION * rType, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetEvictionPriority(ID3D10Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetEvictionPriority(ID3D10Resource* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Map(ID3D10Texture3D* self, UINT Subresource, D3D10_MAP MapType, UINT MapFlags, D3D10_MAPPED_TEXTURE3D * pMappedTex3D, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Unmap(ID3D10Texture3D* self, UINT Subresource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D10Texture3D* self, D3D10_TEXTURE3D_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10texture3d
namespace id3d10view {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResource(ID3D10View* self, ID3D10Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10view
namespace id3d10shaderresourceview {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResource(ID3D10View* self, ID3D10Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D10ShaderResourceView* self, D3D10_SHADER_RESOURCE_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10shaderresourceview
namespace id3d10rendertargetview {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResource(ID3D10View* self, ID3D10Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D10RenderTargetView* self, D3D10_RENDER_TARGET_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10rendertargetview
namespace id3d10depthstencilview {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResource(ID3D10View* self, ID3D10Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D10DepthStencilView* self, D3D10_DEPTH_STENCIL_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10depthstencilview
namespace id3d10vertexshader {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10vertexshader
namespace id3d10geometryshader {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10geometryshader
namespace id3d10pixelshader {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10pixelshader
namespace id3d10inputlayout {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10inputlayout
namespace id3d10samplerstate {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D10SamplerState* self, D3D10_SAMPLER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10samplerstate
namespace id3d10asynchronous {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Begin(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_End(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetData(ID3D10Asynchronous* self, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetDataSize(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10asynchronous
namespace id3d10query {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Begin(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_End(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetData(ID3D10Asynchronous* self, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetDataSize(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D10Query* self, D3D10_QUERY_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10query
namespace id3d10predicate {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Begin(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_End(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetData(ID3D10Asynchronous* self, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetDataSize(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D10Query* self, D3D10_QUERY_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10predicate
namespace id3d10counter {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Begin(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_End(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetData(ID3D10Asynchronous* self, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetDataSize(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D10Counter* self, D3D10_COUNTER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10counter
namespace id3d10device {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetConstantBuffers(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetShaderResources(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetShader(ID3D10Device* self, ID3D10PixelShader * pPixelShader, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetSamplers(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetShader(ID3D10Device* self, ID3D10VertexShader * pVertexShader, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexed(ID3D10Device* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Draw(ID3D10Device* self, UINT VertexCount, UINT StartVertexLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetConstantBuffers(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetInputLayout(ID3D10Device* self, ID3D10InputLayout * pInputLayout, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetVertexBuffers(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetIndexBuffer(ID3D10Device* self, ID3D10Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexedInstanced(ID3D10Device* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawInstanced(ID3D10Device* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetConstantBuffers(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetShader(ID3D10Device* self, ID3D10GeometryShader * pShader, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetPrimitiveTopology(ID3D10Device* self, D3D10_PRIMITIVE_TOPOLOGY Topology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetShaderResources(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetSamplers(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPredication(ID3D10Device* self, ID3D10Predicate * pPredicate, BOOL PredicateValue, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetShaderResources(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetSamplers(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetRenderTargets(ID3D10Device* self, UINT NumViews, ID3D10RenderTargetView *const * ppRenderTargetViews, ID3D10DepthStencilView * pDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetBlendState(ID3D10Device* self, ID3D10BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetDepthStencilState(ID3D10Device* self, ID3D10DepthStencilState * pDepthStencilState, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOSetTargets(ID3D10Device* self, UINT NumBuffers, ID3D10Buffer *const * ppSOTargets, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawAuto(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetState(ID3D10Device* self, ID3D10RasterizerState * pRasterizerState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetViewports(ID3D10Device* self, UINT NumViewports, const D3D10_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetScissorRects(ID3D10Device* self, UINT NumRects, const D3D10_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopySubresourceRegion(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D10Resource * pSrcResource, UINT SrcSubresource, const D3D10_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyResource(ID3D10Device* self, ID3D10Resource * pDstResource, ID3D10Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UpdateSubresource(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, const D3D10_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearRenderTargetView(ID3D10Device* self, ID3D10RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearDepthStencilView(ID3D10Device* self, ID3D10DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GenerateMips(ID3D10Device* self, ID3D10ShaderResourceView * pShaderResourceView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveSubresource(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, ID3D10Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetConstantBuffers(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetShaderResources(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetShader(ID3D10Device* self, ID3D10PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetSamplers(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetShader(ID3D10Device* self, ID3D10VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetConstantBuffers(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetInputLayout(ID3D10Device* self, ID3D10InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetVertexBuffers(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetIndexBuffer(ID3D10Device* self, ID3D10Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetConstantBuffers(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetShader(ID3D10Device* self, ID3D10GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetPrimitiveTopology(ID3D10Device* self, D3D10_PRIMITIVE_TOPOLOGY * pTopology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetShaderResources(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetSamplers(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetPredication(ID3D10Device* self, ID3D10Predicate ** ppPredicate, BOOL * pPredicateValue, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetShaderResources(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetSamplers(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetRenderTargets(ID3D10Device* self, UINT NumViews, ID3D10RenderTargetView ** ppRenderTargetViews, ID3D10DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetBlendState(ID3D10Device* self, ID3D10BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetDepthStencilState(ID3D10Device* self, ID3D10DepthStencilState ** ppDepthStencilState, UINT * pStencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOGetTargets(ID3D10Device* self, UINT NumBuffers, ID3D10Buffer ** ppSOTargets, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetState(ID3D10Device* self, ID3D10RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetViewports(ID3D10Device* self, UINT * NumViewports, D3D10_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetScissorRects(ID3D10Device* self, UINT * NumRects, D3D10_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDeviceRemovedReason(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetExceptionMode(ID3D10Device* self, UINT RaiseFlags, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetExceptionMode(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10Device* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10Device* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10Device* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearState(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Flush(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBuffer(ID3D10Device* self, const D3D10_BUFFER_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Buffer ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture1D(ID3D10Device* self, const D3D10_TEXTURE1D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture1D ** ppTexture1D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture2D(ID3D10Device* self, const D3D10_TEXTURE2D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture2D ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture3D(ID3D10Device* self, const D3D10_TEXTURE3D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture3D ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateShaderResourceView(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D10ShaderResourceView ** ppSRView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRenderTargetView(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_RENDER_TARGET_VIEW_DESC * pDesc, ID3D10RenderTargetView ** ppRTView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDepthStencilView(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D10DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateInputLayout(ID3D10Device* self, const D3D10_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D10InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVertexShader(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGeometryShader(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGeometryShaderWithStreamOutput(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D10_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, UINT OutputStreamStride, ID3D10GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePixelShader(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBlendState(ID3D10Device* self, const D3D10_BLEND_DESC * pBlendStateDesc, ID3D10BlendState ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDepthStencilState(ID3D10Device* self, const D3D10_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D10DepthStencilState ** ppDepthStencilState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRasterizerState(ID3D10Device* self, const D3D10_RASTERIZER_DESC * pRasterizerDesc, ID3D10RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSamplerState(ID3D10Device* self, const D3D10_SAMPLER_DESC * pSamplerDesc, ID3D10SamplerState ** ppSamplerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateQuery(ID3D10Device* self, const D3D10_QUERY_DESC * pQueryDesc, ID3D10Query ** ppQuery, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePredicate(ID3D10Device* self, const D3D10_QUERY_DESC * pPredicateDesc, ID3D10Predicate ** ppPredicate, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCounter(ID3D10Device* self, const D3D10_COUNTER_DESC * pCounterDesc, ID3D10Counter ** ppCounter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFormatSupport(ID3D10Device* self, DXGI_FORMAT Format, UINT * pFormatSupport, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckMultisampleQualityLevels(ID3D10Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CheckCounterInfo(ID3D10Device* self, D3D10_COUNTER_INFO * pCounterInfo, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckCounter(ID3D10Device* self, const D3D10_COUNTER_DESC * pDesc, D3D10_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetCreationFlags(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResource(ID3D10Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetTextFilterSize(ID3D10Device* self, UINT Width, UINT Height, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetTextFilterSize(ID3D10Device* self, UINT * pWidth, UINT * pHeight, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10device
namespace id3d10multithread {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Enter(ID3D10Multithread* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Leave(ID3D10Multithread* self, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_SetMultithreadProtected(ID3D10Multithread* self, BOOL bMTProtect, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_GetMultithreadProtected(ID3D10Multithread* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10multithread
namespace id3d10blendstate1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D10BlendState* self, D3D10_BLEND_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc1(ID3D10BlendState1* self, D3D10_BLEND_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10blendstate1
namespace id3d10shaderresourceview1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResource(ID3D10View* self, ID3D10Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D10ShaderResourceView* self, D3D10_SHADER_RESOURCE_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc1(ID3D10ShaderResourceView1* self, D3D10_SHADER_RESOURCE_VIEW_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10shaderresourceview1
namespace id3d10device1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetConstantBuffers(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetShaderResources(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetShader(ID3D10Device* self, ID3D10PixelShader * pPixelShader, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetSamplers(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetShader(ID3D10Device* self, ID3D10VertexShader * pVertexShader, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexed(ID3D10Device* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Draw(ID3D10Device* self, UINT VertexCount, UINT StartVertexLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetConstantBuffers(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetInputLayout(ID3D10Device* self, ID3D10InputLayout * pInputLayout, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetVertexBuffers(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetIndexBuffer(ID3D10Device* self, ID3D10Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexedInstanced(ID3D10Device* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawInstanced(ID3D10Device* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetConstantBuffers(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetShader(ID3D10Device* self, ID3D10GeometryShader * pShader, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetPrimitiveTopology(ID3D10Device* self, D3D10_PRIMITIVE_TOPOLOGY Topology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetShaderResources(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetSamplers(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPredication(ID3D10Device* self, ID3D10Predicate * pPredicate, BOOL PredicateValue, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetShaderResources(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetSamplers(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetRenderTargets(ID3D10Device* self, UINT NumViews, ID3D10RenderTargetView *const * ppRenderTargetViews, ID3D10DepthStencilView * pDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetBlendState(ID3D10Device* self, ID3D10BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetDepthStencilState(ID3D10Device* self, ID3D10DepthStencilState * pDepthStencilState, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOSetTargets(ID3D10Device* self, UINT NumBuffers, ID3D10Buffer *const * ppSOTargets, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawAuto(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetState(ID3D10Device* self, ID3D10RasterizerState * pRasterizerState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetViewports(ID3D10Device* self, UINT NumViewports, const D3D10_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetScissorRects(ID3D10Device* self, UINT NumRects, const D3D10_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopySubresourceRegion(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D10Resource * pSrcResource, UINT SrcSubresource, const D3D10_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyResource(ID3D10Device* self, ID3D10Resource * pDstResource, ID3D10Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UpdateSubresource(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, const D3D10_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearRenderTargetView(ID3D10Device* self, ID3D10RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearDepthStencilView(ID3D10Device* self, ID3D10DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GenerateMips(ID3D10Device* self, ID3D10ShaderResourceView * pShaderResourceView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveSubresource(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, ID3D10Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetConstantBuffers(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetShaderResources(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetShader(ID3D10Device* self, ID3D10PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetSamplers(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetShader(ID3D10Device* self, ID3D10VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetConstantBuffers(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetInputLayout(ID3D10Device* self, ID3D10InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetVertexBuffers(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetIndexBuffer(ID3D10Device* self, ID3D10Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetConstantBuffers(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetShader(ID3D10Device* self, ID3D10GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetPrimitiveTopology(ID3D10Device* self, D3D10_PRIMITIVE_TOPOLOGY * pTopology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetShaderResources(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetSamplers(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetPredication(ID3D10Device* self, ID3D10Predicate ** ppPredicate, BOOL * pPredicateValue, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetShaderResources(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetSamplers(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetRenderTargets(ID3D10Device* self, UINT NumViews, ID3D10RenderTargetView ** ppRenderTargetViews, ID3D10DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetBlendState(ID3D10Device* self, ID3D10BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetDepthStencilState(ID3D10Device* self, ID3D10DepthStencilState ** ppDepthStencilState, UINT * pStencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOGetTargets(ID3D10Device* self, UINT NumBuffers, ID3D10Buffer ** ppSOTargets, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetState(ID3D10Device* self, ID3D10RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetViewports(ID3D10Device* self, UINT * NumViewports, D3D10_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetScissorRects(ID3D10Device* self, UINT * NumRects, D3D10_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDeviceRemovedReason(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetExceptionMode(ID3D10Device* self, UINT RaiseFlags, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetExceptionMode(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D10Device* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D10Device* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D10Device* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearState(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Flush(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBuffer(ID3D10Device* self, const D3D10_BUFFER_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Buffer ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture1D(ID3D10Device* self, const D3D10_TEXTURE1D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture1D ** ppTexture1D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture2D(ID3D10Device* self, const D3D10_TEXTURE2D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture2D ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture3D(ID3D10Device* self, const D3D10_TEXTURE3D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture3D ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateShaderResourceView(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D10ShaderResourceView ** ppSRView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRenderTargetView(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_RENDER_TARGET_VIEW_DESC * pDesc, ID3D10RenderTargetView ** ppRTView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDepthStencilView(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D10DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateInputLayout(ID3D10Device* self, const D3D10_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D10InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVertexShader(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGeometryShader(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGeometryShaderWithStreamOutput(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D10_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, UINT OutputStreamStride, ID3D10GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePixelShader(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBlendState(ID3D10Device* self, const D3D10_BLEND_DESC * pBlendStateDesc, ID3D10BlendState ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDepthStencilState(ID3D10Device* self, const D3D10_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D10DepthStencilState ** ppDepthStencilState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRasterizerState(ID3D10Device* self, const D3D10_RASTERIZER_DESC * pRasterizerDesc, ID3D10RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSamplerState(ID3D10Device* self, const D3D10_SAMPLER_DESC * pSamplerDesc, ID3D10SamplerState ** ppSamplerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateQuery(ID3D10Device* self, const D3D10_QUERY_DESC * pQueryDesc, ID3D10Query ** ppQuery, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePredicate(ID3D10Device* self, const D3D10_QUERY_DESC * pPredicateDesc, ID3D10Predicate ** ppPredicate, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCounter(ID3D10Device* self, const D3D10_COUNTER_DESC * pCounterDesc, ID3D10Counter ** ppCounter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFormatSupport(ID3D10Device* self, DXGI_FORMAT Format, UINT * pFormatSupport, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckMultisampleQualityLevels(ID3D10Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CheckCounterInfo(ID3D10Device* self, D3D10_COUNTER_INFO * pCounterInfo, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckCounter(ID3D10Device* self, const D3D10_COUNTER_DESC * pDesc, D3D10_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetCreationFlags(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResource(ID3D10Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetTextFilterSize(ID3D10Device* self, UINT Width, UINT Height, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetTextFilterSize(ID3D10Device* self, UINT * pWidth, UINT * pHeight, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateShaderResourceView1(ID3D10Device1* self, ID3D10Resource * pResource, const D3D10_SHADER_RESOURCE_VIEW_DESC1 * pDesc, ID3D10ShaderResourceView1 ** ppSRView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBlendState1(ID3D10Device1* self, const D3D10_BLEND_DESC1 * pBlendStateDesc, ID3D10BlendState1 ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);

D3D10_FEATURE_LEVEL1 WINAPI Passthrough_GetFeatureLevel(ID3D10Device1* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d10device1
namespace id3d11devicechild {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11devicechild
namespace id3d11depthstencilstate {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11DepthStencilState* self, D3D11_DEPTH_STENCIL_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11depthstencilstate
namespace id3d11blendstate {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11BlendState* self, D3D11_BLEND_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11blendstate
namespace id3d11rasterizerstate {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11RasterizerState* self, D3D11_RASTERIZER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11rasterizerstate
namespace id3d11resource {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetType(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetEvictionPriority(ID3D11Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetEvictionPriority(ID3D11Resource* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11resource
namespace id3d11buffer {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetType(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetEvictionPriority(ID3D11Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetEvictionPriority(ID3D11Resource* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11Buffer* self, D3D11_BUFFER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11buffer
namespace id3d11texture1d {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetType(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetEvictionPriority(ID3D11Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetEvictionPriority(ID3D11Resource* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11Texture1D* self, D3D11_TEXTURE1D_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11texture1d
namespace id3d11texture2d {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetType(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetEvictionPriority(ID3D11Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetEvictionPriority(ID3D11Resource* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11Texture2D* self, D3D11_TEXTURE2D_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11texture2d
namespace id3d11texture3d {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetType(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetEvictionPriority(ID3D11Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetEvictionPriority(ID3D11Resource* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11Texture3D* self, D3D11_TEXTURE3D_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11texture3d
namespace id3d11view {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResource(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11view
namespace id3d11shaderresourceview {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResource(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11ShaderResourceView* self, D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11shaderresourceview
namespace id3d11rendertargetview {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResource(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11RenderTargetView* self, D3D11_RENDER_TARGET_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11rendertargetview
namespace id3d11depthstencilview {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResource(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11DepthStencilView* self, D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11depthstencilview
namespace id3d11unorderedaccessview {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResource(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11UnorderedAccessView* self, D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11unorderedaccessview
namespace id3d11vertexshader {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11vertexshader
namespace id3d11hullshader {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11hullshader
namespace id3d11domainshader {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11domainshader
namespace id3d11geometryshader {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11geometryshader
namespace id3d11pixelshader {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11pixelshader
namespace id3d11computeshader {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11computeshader
namespace id3d11inputlayout {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11inputlayout
namespace id3d11samplerstate {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11SamplerState* self, D3D11_SAMPLER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11samplerstate
namespace id3d11asynchronous {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetDataSize(ID3D11Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11asynchronous
namespace id3d11query {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetDataSize(ID3D11Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11Query* self, D3D11_QUERY_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11query
namespace id3d11predicate {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetDataSize(ID3D11Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11Query* self, D3D11_QUERY_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11predicate
namespace id3d11counter {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetDataSize(ID3D11Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11Counter* self, D3D11_COUNTER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11counter
namespace id3d11classinstance {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetClassLinkage(ID3D11ClassInstance* self, ID3D11ClassLinkage ** ppLinkage, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11ClassInstance* self, D3D11_CLASS_INSTANCE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetInstanceName(ID3D11ClassInstance* self, LPSTR pInstanceName, SIZE_T * pBufferLength, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetTypeName(ID3D11ClassInstance* self, LPSTR pTypeName, SIZE_T * pBufferLength, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11classinstance
namespace id3d11classlinkage {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetClassInstance(ID3D11ClassLinkage* self, LPCSTR pClassInstanceName, UINT InstanceIndex, ID3D11ClassInstance ** ppInstance, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateClassInstance(ID3D11ClassLinkage* self, LPCSTR pClassTypeName, UINT ConstantBufferOffset, UINT ConstantVectorOffset, UINT TextureOffset, UINT SamplerOffset, ID3D11ClassInstance ** ppInstance, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11classlinkage
namespace id3d11commandlist {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetContextFlags(ID3D11CommandList* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11commandlist
namespace id3d11devicecontext {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetShader(ID3D11DeviceContext* self, ID3D11PixelShader * pPixelShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetShader(ID3D11DeviceContext* self, ID3D11VertexShader * pVertexShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexed(ID3D11DeviceContext* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Draw(ID3D11DeviceContext* self, UINT VertexCount, UINT StartVertexLocation, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Map(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE * pMappedResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Unmap(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetInputLayout(ID3D11DeviceContext* self, ID3D11InputLayout * pInputLayout, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetVertexBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetIndexBuffer(ID3D11DeviceContext* self, ID3D11Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexedInstanced(ID3D11DeviceContext* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawInstanced(ID3D11DeviceContext* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetShader(ID3D11DeviceContext* self, ID3D11GeometryShader * pShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetPrimitiveTopology(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY Topology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Begin(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_End(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetData(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPredication(ID3D11DeviceContext* self, ID3D11Predicate * pPredicate, BOOL PredicateValue, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetRenderTargets(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetRenderTargetsAndUnorderedAccessViews(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetBlendState(ID3D11DeviceContext* self, ID3D11BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetDepthStencilState(ID3D11DeviceContext* self, ID3D11DepthStencilState * pDepthStencilState, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOSetTargets(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer *const * ppSOTargets, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawAuto(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexedInstancedIndirect(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawInstancedIndirect(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Dispatch(ID3D11DeviceContext* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DispatchIndirect(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetState(ID3D11DeviceContext* self, ID3D11RasterizerState * pRasterizerState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetViewports(ID3D11DeviceContext* self, UINT NumViewports, const D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetScissorRects(ID3D11DeviceContext* self, UINT NumRects, const D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopySubresourceRegion(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyResource(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, ID3D11Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UpdateSubresource(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyStructureCount(ID3D11DeviceContext* self, ID3D11Buffer * pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView * pSrcView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearRenderTargetView(ID3D11DeviceContext* self, ID3D11RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewUint(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const UINT  Values[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewFloat(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const FLOAT  Values[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearDepthStencilView(ID3D11DeviceContext* self, ID3D11DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GenerateMips(ID3D11DeviceContext* self, ID3D11ShaderResourceView * pShaderResourceView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetResourceMinLOD(ID3D11DeviceContext* self, ID3D11Resource * pResource, FLOAT MinLOD, struct ::GPADispatchTable const*& tlsRef);

FLOAT WINAPI Passthrough_GetResourceMinLOD(ID3D11DeviceContext* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveSubresource(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, ID3D11Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ExecuteCommandList(ID3D11DeviceContext* self, ID3D11CommandList * pCommandList, BOOL RestoreContextState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetShader(ID3D11DeviceContext* self, ID3D11HullShader * pHullShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetShader(ID3D11DeviceContext* self, ID3D11DomainShader * pDomainShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetUnorderedAccessViews(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetShader(ID3D11DeviceContext* self, ID3D11ComputeShader * pComputeShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetShader(ID3D11DeviceContext* self, ID3D11PixelShader ** ppPixelShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetShader(ID3D11DeviceContext* self, ID3D11VertexShader ** ppVertexShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetInputLayout(ID3D11DeviceContext* self, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetVertexBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetIndexBuffer(ID3D11DeviceContext* self, ID3D11Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetShader(ID3D11DeviceContext* self, ID3D11GeometryShader ** ppGeometryShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetPrimitiveTopology(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY * pTopology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetPredication(ID3D11DeviceContext* self, ID3D11Predicate ** ppPredicate, BOOL * pPredicateValue, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetRenderTargets(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetRenderTargetsAndUnorderedAccessViews(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetBlendState(ID3D11DeviceContext* self, ID3D11BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetDepthStencilState(ID3D11DeviceContext* self, ID3D11DepthStencilState ** ppDepthStencilState, UINT * pStencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOGetTargets(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer ** ppSOTargets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetState(ID3D11DeviceContext* self, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetViewports(ID3D11DeviceContext* self, UINT * pNumViewports, D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetScissorRects(ID3D11DeviceContext* self, UINT * pNumRects, D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetShader(ID3D11DeviceContext* self, ID3D11HullShader ** ppHullShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetShader(ID3D11DeviceContext* self, ID3D11DomainShader ** ppDomainShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetUnorderedAccessViews(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetShader(ID3D11DeviceContext* self, ID3D11ComputeShader ** ppComputeShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearState(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Flush(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

D3D11_DEVICE_CONTEXT_TYPE WINAPI Passthrough_GetType(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetContextFlags(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FinishCommandList(ID3D11DeviceContext* self, BOOL RestoreDeferredContextState, ID3D11CommandList ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11devicecontext
namespace id3d11videodecoder {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetCreationParameters(ID3D11VideoDecoder* self, D3D11_VIDEO_DECODER_DESC * pVideoDesc, D3D11_VIDEO_DECODER_CONFIG * pConfig, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDriverHandle(ID3D11VideoDecoder* self, HANDLE * pDriverHandle, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11videodecoder
namespace id3d11videoprocessorenumerator {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoProcessorContentDesc(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pContentDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckVideoProcessorFormat(ID3D11VideoProcessorEnumerator* self, DXGI_FORMAT Format, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoProcessorCaps(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_CAPS * pCaps, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoProcessorRateConversionCaps(ID3D11VideoProcessorEnumerator* self, UINT TypeIndex, D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS * pCaps, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoProcessorCustomRate(ID3D11VideoProcessorEnumerator* self, UINT TypeIndex, UINT CustomRateIndex, D3D11_VIDEO_PROCESSOR_CUSTOM_RATE * pRate, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoProcessorFilterRange(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_FILTER Filter, D3D11_VIDEO_PROCESSOR_FILTER_RANGE * pRange, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11videoprocessorenumerator
namespace id3d11videoprocessor {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetContentDesc(ID3D11VideoProcessor* self, D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetRateConversionCaps(ID3D11VideoProcessor* self, D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS * pCaps, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11videoprocessor
namespace id3d11authenticatedchannel {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetCertificateSize(ID3D11AuthenticatedChannel* self, UINT * pCertificateSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetCertificate(ID3D11AuthenticatedChannel* self, UINT CertificateSize, BYTE * pCertificate, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetChannelHandle(ID3D11AuthenticatedChannel* self, HANDLE * pChannelHandle, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11authenticatedchannel
namespace id3d11cryptosession {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetCryptoType(ID3D11CryptoSession* self, GUID * pCryptoType, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDecoderProfile(ID3D11CryptoSession* self, GUID * pDecoderProfile, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetCertificateSize(ID3D11CryptoSession* self, UINT * pCertificateSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetCertificate(ID3D11CryptoSession* self, UINT CertificateSize, BYTE * pCertificate, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetCryptoSessionHandle(ID3D11CryptoSession* self, HANDLE * pCryptoSessionHandle, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11cryptosession
namespace id3d11videodecoderoutputview {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResource(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11VideoDecoderOutputView* self, D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11videodecoderoutputview
namespace id3d11videoprocessorinputview {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResource(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11VideoProcessorInputView* self, D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11videoprocessorinputview
namespace id3d11videoprocessoroutputview {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResource(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11VideoProcessorOutputView* self, D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11videoprocessoroutputview
namespace id3d11videocontext {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDecoderBuffer(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, UINT * pBufferSize, void ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ReleaseDecoderBuffer(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DecoderBeginFrame(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, ID3D11VideoDecoderOutputView * pView, UINT ContentKeySize, const void * pContentKey, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DecoderEndFrame(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SubmitDecoderBuffers(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC * pBufferDesc, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_DecoderExtension(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_DECODER_EXTENSION * pExtensionData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputTargetRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputBackgroundColor(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL YCbCr, const D3D11_VIDEO_COLOR * pColor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputColorSpace(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputAlphaFillMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode, UINT StreamIndex, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputConstriction(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, SIZE Size, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputStereoMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_VideoProcessorSetOutputExtension(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputTargetRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * Enabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputBackgroundColor(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pYCbCr, D3D11_VIDEO_COLOR * pColor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputColorSpace(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputAlphaFillMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE * pAlphaFillMode, UINT * pStreamIndex, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputConstriction(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, SIZE * pSize, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputStereoMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_VideoProcessorGetOutputExtension(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamFrameFormat(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT FrameFormat, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamColorSpace(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamOutputRate(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate, BOOL RepeatFrame, const DXGI_RATIONAL * pCustomRate, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamSourceRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamDestRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamAlpha(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Alpha, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamPalette(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, const UINT * pEntries, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamPixelAspectRatio(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const DXGI_RATIONAL * pSourceAspectRatio, const DXGI_RATIONAL * pDestinationAspectRatio, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamLumaKey(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Lower, FLOAT Upper, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamStereoFormat(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format, BOOL LeftViewFrame0, BOOL BaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode, int MonoOffset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamAutoProcessingMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamFilter(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL Enable, int Level, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_VideoProcessorSetStreamExtension(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamFrameFormat(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT * pFrameFormat, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamColorSpace(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamOutputRate(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE * pOutputRate, BOOL * pRepeatFrame, DXGI_RATIONAL * pCustomRate, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamSourceRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamDestRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamAlpha(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pAlpha, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamPalette(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, UINT * pEntries, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamPixelAspectRatio(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, DXGI_RATIONAL * pSourceAspectRatio, DXGI_RATIONAL * pDestinationAspectRatio, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamLumaKey(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pLower, FLOAT * pUpper, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamStereoFormat(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT * pFormat, BOOL * pLeftViewFrame0, BOOL * pBaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE * pFlipMode, int * MonoOffset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamAutoProcessingMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamFilter(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL * pEnabled, int * pLevel, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_VideoProcessorGetStreamExtension(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_VideoProcessorBlt(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, ID3D11VideoProcessorOutputView * pView, UINT OutputFrame, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM * pStreams, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_NegotiateCryptoSessionKeyExchange(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EncryptionBlt(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, UINT IVSize, void * pIV, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DecryptionBlt(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, D3D11_ENCRYPTED_BLOCK_INFO * pEncryptedBlockInfo, UINT ContentKeySize, const void * pContentKey, UINT IVSize, void * pIV, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_StartSessionKeyRefresh(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT RandomNumberSize, void * pRandomNumber, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_FinishSessionKeyRefresh(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetEncryptionBltKey(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT KeySize, void * pReadbackKey, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_NegotiateAuthenticatedChannelKeyExchange(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_QueryAuthenticatedChannel(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, UINT OutputSize, void * pOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ConfigureAuthenticatedChannel(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, D3D11_AUTHENTICATED_CONFIGURE_OUTPUT * pOutput, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamRotation(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_ROTATION Rotation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamRotation(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_ROTATION * pRotation, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11videocontext
namespace id3d11videodevice {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoDecoder(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pVideoDesc, const D3D11_VIDEO_DECODER_CONFIG * pConfig, ID3D11VideoDecoder ** ppDecoder, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoProcessor(ID3D11VideoDevice* self, ID3D11VideoProcessorEnumerator * pEnum, UINT RateConversionIndex, ID3D11VideoProcessor ** ppVideoProcessor, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateAuthenticatedChannel(ID3D11VideoDevice* self, D3D11_AUTHENTICATED_CHANNEL_TYPE ChannelType, ID3D11AuthenticatedChannel ** ppAuthenticatedChannel, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCryptoSession(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, const GUID * pKeyExchangeType, ID3D11CryptoSession ** ppCryptoSession, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoDecoderOutputView(ID3D11VideoDevice* self, ID3D11Resource * pResource, const D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoDecoderOutputView ** ppVDOVView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoProcessorInputView(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorInputView ** ppVPIView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoProcessorOutputView(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorOutputView ** ppVPOView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoProcessorEnumerator(ID3D11VideoDevice* self, const D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pDesc, ID3D11VideoProcessorEnumerator ** ppEnum, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetVideoDecoderProfileCount(ID3D11VideoDevice* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoDecoderProfile(ID3D11VideoDevice* self, UINT Index, GUID * pDecoderProfile, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckVideoDecoderFormat(ID3D11VideoDevice* self, const GUID * pDecoderProfile, DXGI_FORMAT Format, BOOL * pSupported, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoDecoderConfigCount(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT * pCount, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoDecoderConfig(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT Index, D3D11_VIDEO_DECODER_CONFIG * pConfig, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetContentProtectionCaps(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, D3D11_VIDEO_CONTENT_PROTECTION_CAPS * pCaps, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckCryptoKeyExchange(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, UINT Index, GUID * pKeyExchangeType, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11VideoDevice* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11VideoDevice* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11videodevice
namespace id3d11device {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBuffer(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture1D(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture2D(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture3D(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateShaderResourceView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateUnorderedAccessView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRenderTargetView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDepthStencilView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateInputLayout(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVertexShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGeometryShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGeometryShaderWithStreamOutput(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePixelShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateHullShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDomainShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateComputeShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateClassLinkage(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBlendState(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDepthStencilState(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRasterizerState(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSamplerState(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateQuery(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePredicate(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCounter(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResource(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFormatSupport(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckMultisampleQualityLevels(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CheckCounterInfo(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckCounter(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFeatureSupport(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11Device* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

D3D_FEATURE_LEVEL WINAPI Passthrough_GetFeatureLevel(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetCreationFlags(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDeviceRemovedReason(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetExceptionMode(ID3D11Device* self, UINT RaiseFlags, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetExceptionMode(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11device
namespace id3d11blendstate1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11BlendState* self, D3D11_BLEND_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc1(ID3D11BlendState1* self, D3D11_BLEND_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11blendstate1
namespace id3d11rasterizerstate1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11RasterizerState* self, D3D11_RASTERIZER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc1(ID3D11RasterizerState1* self, D3D11_RASTERIZER_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11rasterizerstate1
namespace id3ddevicecontextstate {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3ddevicecontextstate
namespace id3d11devicecontext1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetShader(ID3D11DeviceContext* self, ID3D11PixelShader * pPixelShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetShader(ID3D11DeviceContext* self, ID3D11VertexShader * pVertexShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexed(ID3D11DeviceContext* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Draw(ID3D11DeviceContext* self, UINT VertexCount, UINT StartVertexLocation, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Map(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE * pMappedResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Unmap(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetInputLayout(ID3D11DeviceContext* self, ID3D11InputLayout * pInputLayout, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetVertexBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetIndexBuffer(ID3D11DeviceContext* self, ID3D11Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexedInstanced(ID3D11DeviceContext* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawInstanced(ID3D11DeviceContext* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetShader(ID3D11DeviceContext* self, ID3D11GeometryShader * pShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetPrimitiveTopology(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY Topology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Begin(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_End(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetData(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPredication(ID3D11DeviceContext* self, ID3D11Predicate * pPredicate, BOOL PredicateValue, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetRenderTargets(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetRenderTargetsAndUnorderedAccessViews(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetBlendState(ID3D11DeviceContext* self, ID3D11BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetDepthStencilState(ID3D11DeviceContext* self, ID3D11DepthStencilState * pDepthStencilState, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOSetTargets(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer *const * ppSOTargets, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawAuto(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexedInstancedIndirect(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawInstancedIndirect(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Dispatch(ID3D11DeviceContext* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DispatchIndirect(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetState(ID3D11DeviceContext* self, ID3D11RasterizerState * pRasterizerState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetViewports(ID3D11DeviceContext* self, UINT NumViewports, const D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetScissorRects(ID3D11DeviceContext* self, UINT NumRects, const D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopySubresourceRegion(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyResource(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, ID3D11Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UpdateSubresource(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyStructureCount(ID3D11DeviceContext* self, ID3D11Buffer * pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView * pSrcView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearRenderTargetView(ID3D11DeviceContext* self, ID3D11RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewUint(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const UINT  Values[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewFloat(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const FLOAT  Values[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearDepthStencilView(ID3D11DeviceContext* self, ID3D11DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GenerateMips(ID3D11DeviceContext* self, ID3D11ShaderResourceView * pShaderResourceView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetResourceMinLOD(ID3D11DeviceContext* self, ID3D11Resource * pResource, FLOAT MinLOD, struct ::GPADispatchTable const*& tlsRef);

FLOAT WINAPI Passthrough_GetResourceMinLOD(ID3D11DeviceContext* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveSubresource(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, ID3D11Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ExecuteCommandList(ID3D11DeviceContext* self, ID3D11CommandList * pCommandList, BOOL RestoreContextState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetShader(ID3D11DeviceContext* self, ID3D11HullShader * pHullShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetShader(ID3D11DeviceContext* self, ID3D11DomainShader * pDomainShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetUnorderedAccessViews(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetShader(ID3D11DeviceContext* self, ID3D11ComputeShader * pComputeShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetShader(ID3D11DeviceContext* self, ID3D11PixelShader ** ppPixelShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetShader(ID3D11DeviceContext* self, ID3D11VertexShader ** ppVertexShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetInputLayout(ID3D11DeviceContext* self, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetVertexBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetIndexBuffer(ID3D11DeviceContext* self, ID3D11Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetShader(ID3D11DeviceContext* self, ID3D11GeometryShader ** ppGeometryShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetPrimitiveTopology(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY * pTopology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetPredication(ID3D11DeviceContext* self, ID3D11Predicate ** ppPredicate, BOOL * pPredicateValue, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetRenderTargets(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetRenderTargetsAndUnorderedAccessViews(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetBlendState(ID3D11DeviceContext* self, ID3D11BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetDepthStencilState(ID3D11DeviceContext* self, ID3D11DepthStencilState ** ppDepthStencilState, UINT * pStencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOGetTargets(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer ** ppSOTargets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetState(ID3D11DeviceContext* self, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetViewports(ID3D11DeviceContext* self, UINT * pNumViewports, D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetScissorRects(ID3D11DeviceContext* self, UINT * pNumRects, D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetShader(ID3D11DeviceContext* self, ID3D11HullShader ** ppHullShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetShader(ID3D11DeviceContext* self, ID3D11DomainShader ** ppDomainShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetUnorderedAccessViews(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetShader(ID3D11DeviceContext* self, ID3D11ComputeShader ** ppComputeShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearState(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Flush(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

D3D11_DEVICE_CONTEXT_TYPE WINAPI Passthrough_GetType(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetContextFlags(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FinishCommandList(ID3D11DeviceContext* self, BOOL RestoreDeferredContextState, ID3D11CommandList ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopySubresourceRegion1(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, UINT CopyFlags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UpdateSubresource1(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, UINT CopyFlags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DiscardResource(ID3D11DeviceContext1* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DiscardView(ID3D11DeviceContext1* self, ID3D11View * pResourceView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SwapDeviceContextState(ID3D11DeviceContext1* self, ID3DDeviceContextState * pState, ID3DDeviceContextState ** ppPreviousState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearView(ID3D11DeviceContext1* self, ID3D11View * pView, const FLOAT  Color[4], const D3D11_RECT * pRect, UINT NumRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DiscardView1(ID3D11DeviceContext1* self, ID3D11View * pResourceView, const D3D11_RECT * pRects, UINT NumRects, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11devicecontext1
namespace id3d11videocontext1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDecoderBuffer(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, UINT * pBufferSize, void ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ReleaseDecoderBuffer(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DecoderBeginFrame(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, ID3D11VideoDecoderOutputView * pView, UINT ContentKeySize, const void * pContentKey, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DecoderEndFrame(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SubmitDecoderBuffers(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC * pBufferDesc, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_DecoderExtension(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_DECODER_EXTENSION * pExtensionData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputTargetRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputBackgroundColor(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL YCbCr, const D3D11_VIDEO_COLOR * pColor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputColorSpace(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputAlphaFillMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode, UINT StreamIndex, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputConstriction(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, SIZE Size, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputStereoMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_VideoProcessorSetOutputExtension(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputTargetRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * Enabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputBackgroundColor(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pYCbCr, D3D11_VIDEO_COLOR * pColor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputColorSpace(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputAlphaFillMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE * pAlphaFillMode, UINT * pStreamIndex, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputConstriction(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, SIZE * pSize, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputStereoMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_VideoProcessorGetOutputExtension(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamFrameFormat(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT FrameFormat, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamColorSpace(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamOutputRate(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate, BOOL RepeatFrame, const DXGI_RATIONAL * pCustomRate, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamSourceRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamDestRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamAlpha(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Alpha, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamPalette(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, const UINT * pEntries, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamPixelAspectRatio(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const DXGI_RATIONAL * pSourceAspectRatio, const DXGI_RATIONAL * pDestinationAspectRatio, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamLumaKey(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Lower, FLOAT Upper, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamStereoFormat(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format, BOOL LeftViewFrame0, BOOL BaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode, int MonoOffset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamAutoProcessingMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamFilter(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL Enable, int Level, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_VideoProcessorSetStreamExtension(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamFrameFormat(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT * pFrameFormat, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamColorSpace(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamOutputRate(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE * pOutputRate, BOOL * pRepeatFrame, DXGI_RATIONAL * pCustomRate, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamSourceRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamDestRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamAlpha(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pAlpha, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamPalette(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, UINT * pEntries, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamPixelAspectRatio(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, DXGI_RATIONAL * pSourceAspectRatio, DXGI_RATIONAL * pDestinationAspectRatio, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamLumaKey(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pLower, FLOAT * pUpper, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamStereoFormat(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT * pFormat, BOOL * pLeftViewFrame0, BOOL * pBaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE * pFlipMode, int * MonoOffset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamAutoProcessingMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamFilter(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL * pEnabled, int * pLevel, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_VideoProcessorGetStreamExtension(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_VideoProcessorBlt(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, ID3D11VideoProcessorOutputView * pView, UINT OutputFrame, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM * pStreams, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_NegotiateCryptoSessionKeyExchange(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EncryptionBlt(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, UINT IVSize, void * pIV, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DecryptionBlt(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, D3D11_ENCRYPTED_BLOCK_INFO * pEncryptedBlockInfo, UINT ContentKeySize, const void * pContentKey, UINT IVSize, void * pIV, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_StartSessionKeyRefresh(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT RandomNumberSize, void * pRandomNumber, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_FinishSessionKeyRefresh(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetEncryptionBltKey(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT KeySize, void * pReadbackKey, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_NegotiateAuthenticatedChannelKeyExchange(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_QueryAuthenticatedChannel(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, UINT OutputSize, void * pOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ConfigureAuthenticatedChannel(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, D3D11_AUTHENTICATED_CONFIGURE_OUTPUT * pOutput, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamRotation(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_ROTATION Rotation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamRotation(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_ROTATION * pRotation, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SubmitDecoderBuffers1(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC1 * pBufferDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDataForNewHardwareKey(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, UINT PrivateInputSize, const void * pPrivatInputData, UINT64 * pPrivateOutputData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckCryptoSessionStatus(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, D3D11_CRYPTO_SESSION_STATUS * pStatus, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DecoderEnableDownsampling(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, UINT ReferenceFrameCount, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DecoderUpdateDownsampling(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputColorSpace1(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE ColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputShaderUsage(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL ShaderUsage, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputColorSpace1(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputShaderUsage(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pShaderUsage, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamColorSpace1(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE ColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamMirror(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, BOOL FlipHorizontal, BOOL FlipVertical, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamColorSpace1(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamMirror(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, BOOL * pFlipHorizontal, BOOL * pFlipVertical, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_VideoProcessorGetBehaviorHints(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT OutputWidth, UINT OutputHeight, DXGI_FORMAT OutputFormat, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT * pStreams, UINT * pBehaviorHints, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11videocontext1
namespace id3d11videodevice1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoDecoder(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pVideoDesc, const D3D11_VIDEO_DECODER_CONFIG * pConfig, ID3D11VideoDecoder ** ppDecoder, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoProcessor(ID3D11VideoDevice* self, ID3D11VideoProcessorEnumerator * pEnum, UINT RateConversionIndex, ID3D11VideoProcessor ** ppVideoProcessor, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateAuthenticatedChannel(ID3D11VideoDevice* self, D3D11_AUTHENTICATED_CHANNEL_TYPE ChannelType, ID3D11AuthenticatedChannel ** ppAuthenticatedChannel, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCryptoSession(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, const GUID * pKeyExchangeType, ID3D11CryptoSession ** ppCryptoSession, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoDecoderOutputView(ID3D11VideoDevice* self, ID3D11Resource * pResource, const D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoDecoderOutputView ** ppVDOVView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoProcessorInputView(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorInputView ** ppVPIView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoProcessorOutputView(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorOutputView ** ppVPOView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoProcessorEnumerator(ID3D11VideoDevice* self, const D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pDesc, ID3D11VideoProcessorEnumerator ** ppEnum, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetVideoDecoderProfileCount(ID3D11VideoDevice* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoDecoderProfile(ID3D11VideoDevice* self, UINT Index, GUID * pDecoderProfile, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckVideoDecoderFormat(ID3D11VideoDevice* self, const GUID * pDecoderProfile, DXGI_FORMAT Format, BOOL * pSupported, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoDecoderConfigCount(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT * pCount, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoDecoderConfig(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT Index, D3D11_VIDEO_DECODER_CONFIG * pConfig, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetContentProtectionCaps(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, D3D11_VIDEO_CONTENT_PROTECTION_CAPS * pCaps, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckCryptoKeyExchange(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, UINT Index, GUID * pKeyExchangeType, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11VideoDevice* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11VideoDevice* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetCryptoSessionPrivateDataSize(ID3D11VideoDevice1* self, const GUID * pCryptoType, const GUID * pDecoderProfile, const GUID * pKeyExchangeType, UINT * pPrivateInputSize, UINT * pPrivateOutputSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoDecoderCaps(ID3D11VideoDevice1* self, const GUID * pDecoderProfile, UINT SampleWidth, UINT SampleHeight, const DXGI_RATIONAL * pFrameRate, UINT BitRate, const GUID * pCryptoType, UINT * pDecoderCaps, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckVideoDecoderDownsampling(ID3D11VideoDevice1* self, const D3D11_VIDEO_DECODER_DESC * pInputDesc, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_DECODER_CONFIG * pInputConfig, const DXGI_RATIONAL * pFrameRate, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, BOOL * pSupported, BOOL * pRealTimeHint, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RecommendVideoDecoderDownsampleParameters(ID3D11VideoDevice1* self, const D3D11_VIDEO_DECODER_DESC * pInputDesc, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_DECODER_CONFIG * pInputConfig, const DXGI_RATIONAL * pFrameRate, D3D11_VIDEO_SAMPLE_DESC * pRecommendedOutputDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11videodevice1
namespace id3d11videoprocessorenumerator1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoProcessorContentDesc(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pContentDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckVideoProcessorFormat(ID3D11VideoProcessorEnumerator* self, DXGI_FORMAT Format, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoProcessorCaps(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_CAPS * pCaps, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoProcessorRateConversionCaps(ID3D11VideoProcessorEnumerator* self, UINT TypeIndex, D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS * pCaps, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoProcessorCustomRate(ID3D11VideoProcessorEnumerator* self, UINT TypeIndex, UINT CustomRateIndex, D3D11_VIDEO_PROCESSOR_CUSTOM_RATE * pRate, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoProcessorFilterRange(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_FILTER Filter, D3D11_VIDEO_PROCESSOR_FILTER_RANGE * pRange, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckVideoProcessorFormatConversion(ID3D11VideoProcessorEnumerator1* self, DXGI_FORMAT InputFormat, DXGI_COLOR_SPACE_TYPE InputColorSpace, DXGI_FORMAT OutputFormat, DXGI_COLOR_SPACE_TYPE OutputColorSpace, BOOL * pSupported, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11videoprocessorenumerator1
namespace id3d11device1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBuffer(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture1D(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture2D(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture3D(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateShaderResourceView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateUnorderedAccessView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRenderTargetView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDepthStencilView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateInputLayout(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVertexShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGeometryShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGeometryShaderWithStreamOutput(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePixelShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateHullShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDomainShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateComputeShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateClassLinkage(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBlendState(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDepthStencilState(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRasterizerState(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSamplerState(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateQuery(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePredicate(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCounter(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResource(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFormatSupport(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckMultisampleQualityLevels(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CheckCounterInfo(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckCounter(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFeatureSupport(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11Device* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

D3D_FEATURE_LEVEL WINAPI Passthrough_GetFeatureLevel(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetCreationFlags(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDeviceRemovedReason(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetExceptionMode(ID3D11Device* self, UINT RaiseFlags, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetExceptionMode(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext1(ID3D11Device1* self, ID3D11DeviceContext1 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext1(ID3D11Device1* self, UINT ContextFlags, ID3D11DeviceContext1 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBlendState1(ID3D11Device1* self, const D3D11_BLEND_DESC1 * pBlendStateDesc, ID3D11BlendState1 ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRasterizerState1(ID3D11Device1* self, const D3D11_RASTERIZER_DESC1 * pRasterizerDesc, ID3D11RasterizerState1 ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeviceContextState(ID3D11Device1* self, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const IID & EmulatedInterface, D3D_FEATURE_LEVEL * pChosenFeatureLevel, ID3DDeviceContextState ** ppContextState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResource1(ID3D11Device1* self, HANDLE hResource, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResourceByName(ID3D11Device1* self, LPCWSTR lpName, DWORD dwDesiredAccess, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11device1
namespace id3duserdefinedannotation {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

INT WINAPI Passthrough_BeginEvent(ID3DUserDefinedAnnotation* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

INT WINAPI Passthrough_EndEvent(ID3DUserDefinedAnnotation* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetMarker(ID3DUserDefinedAnnotation* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_GetStatus(ID3DUserDefinedAnnotation* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3duserdefinedannotation
namespace id3d11devicecontext2 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetShader(ID3D11DeviceContext* self, ID3D11PixelShader * pPixelShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetShader(ID3D11DeviceContext* self, ID3D11VertexShader * pVertexShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexed(ID3D11DeviceContext* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Draw(ID3D11DeviceContext* self, UINT VertexCount, UINT StartVertexLocation, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Map(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE * pMappedResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Unmap(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetInputLayout(ID3D11DeviceContext* self, ID3D11InputLayout * pInputLayout, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetVertexBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetIndexBuffer(ID3D11DeviceContext* self, ID3D11Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexedInstanced(ID3D11DeviceContext* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawInstanced(ID3D11DeviceContext* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetShader(ID3D11DeviceContext* self, ID3D11GeometryShader * pShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetPrimitiveTopology(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY Topology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Begin(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_End(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetData(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPredication(ID3D11DeviceContext* self, ID3D11Predicate * pPredicate, BOOL PredicateValue, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetRenderTargets(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetRenderTargetsAndUnorderedAccessViews(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetBlendState(ID3D11DeviceContext* self, ID3D11BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetDepthStencilState(ID3D11DeviceContext* self, ID3D11DepthStencilState * pDepthStencilState, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOSetTargets(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer *const * ppSOTargets, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawAuto(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexedInstancedIndirect(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawInstancedIndirect(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Dispatch(ID3D11DeviceContext* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DispatchIndirect(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetState(ID3D11DeviceContext* self, ID3D11RasterizerState * pRasterizerState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetViewports(ID3D11DeviceContext* self, UINT NumViewports, const D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetScissorRects(ID3D11DeviceContext* self, UINT NumRects, const D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopySubresourceRegion(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyResource(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, ID3D11Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UpdateSubresource(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyStructureCount(ID3D11DeviceContext* self, ID3D11Buffer * pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView * pSrcView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearRenderTargetView(ID3D11DeviceContext* self, ID3D11RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewUint(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const UINT  Values[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewFloat(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const FLOAT  Values[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearDepthStencilView(ID3D11DeviceContext* self, ID3D11DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GenerateMips(ID3D11DeviceContext* self, ID3D11ShaderResourceView * pShaderResourceView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetResourceMinLOD(ID3D11DeviceContext* self, ID3D11Resource * pResource, FLOAT MinLOD, struct ::GPADispatchTable const*& tlsRef);

FLOAT WINAPI Passthrough_GetResourceMinLOD(ID3D11DeviceContext* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveSubresource(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, ID3D11Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ExecuteCommandList(ID3D11DeviceContext* self, ID3D11CommandList * pCommandList, BOOL RestoreContextState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetShader(ID3D11DeviceContext* self, ID3D11HullShader * pHullShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetShader(ID3D11DeviceContext* self, ID3D11DomainShader * pDomainShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetUnorderedAccessViews(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetShader(ID3D11DeviceContext* self, ID3D11ComputeShader * pComputeShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetShader(ID3D11DeviceContext* self, ID3D11PixelShader ** ppPixelShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetShader(ID3D11DeviceContext* self, ID3D11VertexShader ** ppVertexShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetInputLayout(ID3D11DeviceContext* self, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetVertexBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetIndexBuffer(ID3D11DeviceContext* self, ID3D11Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetShader(ID3D11DeviceContext* self, ID3D11GeometryShader ** ppGeometryShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetPrimitiveTopology(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY * pTopology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetPredication(ID3D11DeviceContext* self, ID3D11Predicate ** ppPredicate, BOOL * pPredicateValue, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetRenderTargets(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetRenderTargetsAndUnorderedAccessViews(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetBlendState(ID3D11DeviceContext* self, ID3D11BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetDepthStencilState(ID3D11DeviceContext* self, ID3D11DepthStencilState ** ppDepthStencilState, UINT * pStencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOGetTargets(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer ** ppSOTargets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetState(ID3D11DeviceContext* self, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetViewports(ID3D11DeviceContext* self, UINT * pNumViewports, D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetScissorRects(ID3D11DeviceContext* self, UINT * pNumRects, D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetShader(ID3D11DeviceContext* self, ID3D11HullShader ** ppHullShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetShader(ID3D11DeviceContext* self, ID3D11DomainShader ** ppDomainShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetUnorderedAccessViews(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetShader(ID3D11DeviceContext* self, ID3D11ComputeShader ** ppComputeShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearState(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Flush(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

D3D11_DEVICE_CONTEXT_TYPE WINAPI Passthrough_GetType(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetContextFlags(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FinishCommandList(ID3D11DeviceContext* self, BOOL RestoreDeferredContextState, ID3D11CommandList ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopySubresourceRegion1(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, UINT CopyFlags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UpdateSubresource1(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, UINT CopyFlags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DiscardResource(ID3D11DeviceContext1* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DiscardView(ID3D11DeviceContext1* self, ID3D11View * pResourceView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SwapDeviceContextState(ID3D11DeviceContext1* self, ID3DDeviceContextState * pState, ID3DDeviceContextState ** ppPreviousState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearView(ID3D11DeviceContext1* self, ID3D11View * pView, const FLOAT  Color[4], const D3D11_RECT * pRect, UINT NumRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DiscardView1(ID3D11DeviceContext1* self, ID3D11View * pResourceView, const D3D11_RECT * pRects, UINT NumRects, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_UpdateTileMappings(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, UINT NumTiledResourceRegions, const D3D11_TILED_RESOURCE_COORDINATE * pTiledResourceRegionStartCoordinates, const D3D11_TILE_REGION_SIZE * pTiledResourceRegionSizes, ID3D11Buffer * pTilePool, UINT NumRanges, const UINT * pRangeFlags, const UINT * pTilePoolStartOffsets, const UINT * pRangeTileCounts, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CopyTileMappings(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestRegionStartCoordinate, ID3D11Resource * pSourceTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pSourceRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyTiles(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, ID3D11Buffer * pBuffer, UINT64 BufferStartOffsetInBytes, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UpdateTiles(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pDestTileRegionSize, const void * pSourceTileData, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ResizeTilePool(ID3D11DeviceContext2* self, ID3D11Buffer * pTilePool, UINT64 NewSizeInBytes, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_TiledResourceBarrier(ID3D11DeviceContext2* self, ID3D11DeviceChild * pTiledResourceOrViewAccessBeforeBarrier, ID3D11DeviceChild * pTiledResourceOrViewAccessAfterBarrier, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsAnnotationEnabled(ID3D11DeviceContext2* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetMarkerInt(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_BeginEventInt(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EndEvent(ID3D11DeviceContext2* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11devicecontext2
namespace id3d11device2 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBuffer(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture1D(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture2D(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture3D(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateShaderResourceView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateUnorderedAccessView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRenderTargetView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDepthStencilView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateInputLayout(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVertexShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGeometryShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGeometryShaderWithStreamOutput(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePixelShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateHullShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDomainShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateComputeShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateClassLinkage(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBlendState(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDepthStencilState(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRasterizerState(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSamplerState(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateQuery(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePredicate(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCounter(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResource(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFormatSupport(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckMultisampleQualityLevels(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CheckCounterInfo(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckCounter(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFeatureSupport(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11Device* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

D3D_FEATURE_LEVEL WINAPI Passthrough_GetFeatureLevel(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetCreationFlags(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDeviceRemovedReason(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetExceptionMode(ID3D11Device* self, UINT RaiseFlags, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetExceptionMode(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext1(ID3D11Device1* self, ID3D11DeviceContext1 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext1(ID3D11Device1* self, UINT ContextFlags, ID3D11DeviceContext1 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBlendState1(ID3D11Device1* self, const D3D11_BLEND_DESC1 * pBlendStateDesc, ID3D11BlendState1 ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRasterizerState1(ID3D11Device1* self, const D3D11_RASTERIZER_DESC1 * pRasterizerDesc, ID3D11RasterizerState1 ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeviceContextState(ID3D11Device1* self, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const IID & EmulatedInterface, D3D_FEATURE_LEVEL * pChosenFeatureLevel, ID3DDeviceContextState ** ppContextState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResource1(ID3D11Device1* self, HANDLE hResource, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResourceByName(ID3D11Device1* self, LPCWSTR lpName, DWORD dwDesiredAccess, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext2(ID3D11Device2* self, ID3D11DeviceContext2 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext2(ID3D11Device2* self, UINT ContextFlags, ID3D11DeviceContext2 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResourceTiling(ID3D11Device2* self, ID3D11Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D11_PACKED_MIP_DESC * pPackedMipDesc, D3D11_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D11_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckMultisampleQualityLevels1(ID3D11Device2* self, DXGI_FORMAT Format, UINT SampleCount, UINT Flags, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11device2
namespace id3d11texture2d1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetType(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetEvictionPriority(ID3D11Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetEvictionPriority(ID3D11Resource* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11Texture2D* self, D3D11_TEXTURE2D_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc1(ID3D11Texture2D1* self, D3D11_TEXTURE2D_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11texture2d1
namespace id3d11texture3d1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetType(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetEvictionPriority(ID3D11Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetEvictionPriority(ID3D11Resource* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11Texture3D* self, D3D11_TEXTURE3D_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc1(ID3D11Texture3D1* self, D3D11_TEXTURE3D_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11texture3d1
namespace id3d11rasterizerstate2 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11RasterizerState* self, D3D11_RASTERIZER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc1(ID3D11RasterizerState1* self, D3D11_RASTERIZER_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc2(ID3D11RasterizerState2* self, D3D11_RASTERIZER_DESC2 * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11rasterizerstate2
namespace id3d11shaderresourceview1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResource(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11ShaderResourceView* self, D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc1(ID3D11ShaderResourceView1* self, D3D11_SHADER_RESOURCE_VIEW_DESC1 * pDesc1, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11shaderresourceview1
namespace id3d11rendertargetview1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResource(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11RenderTargetView* self, D3D11_RENDER_TARGET_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc1(ID3D11RenderTargetView1* self, D3D11_RENDER_TARGET_VIEW_DESC1 * pDesc1, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11rendertargetview1
namespace id3d11unorderedaccessview1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResource(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11UnorderedAccessView* self, D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc1(ID3D11UnorderedAccessView1* self, D3D11_UNORDERED_ACCESS_VIEW_DESC1 * pDesc1, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11unorderedaccessview1
namespace id3d11query1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetDataSize(ID3D11Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(ID3D11Query* self, D3D11_QUERY_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc1(ID3D11Query1* self, D3D11_QUERY_DESC1 * pDesc1, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11query1
namespace id3d11devicecontext3 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetShader(ID3D11DeviceContext* self, ID3D11PixelShader * pPixelShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetShader(ID3D11DeviceContext* self, ID3D11VertexShader * pVertexShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexed(ID3D11DeviceContext* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Draw(ID3D11DeviceContext* self, UINT VertexCount, UINT StartVertexLocation, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Map(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE * pMappedResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Unmap(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetInputLayout(ID3D11DeviceContext* self, ID3D11InputLayout * pInputLayout, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetVertexBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetIndexBuffer(ID3D11DeviceContext* self, ID3D11Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexedInstanced(ID3D11DeviceContext* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawInstanced(ID3D11DeviceContext* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetShader(ID3D11DeviceContext* self, ID3D11GeometryShader * pShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetPrimitiveTopology(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY Topology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Begin(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_End(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetData(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPredication(ID3D11DeviceContext* self, ID3D11Predicate * pPredicate, BOOL PredicateValue, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetRenderTargets(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetRenderTargetsAndUnorderedAccessViews(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetBlendState(ID3D11DeviceContext* self, ID3D11BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetDepthStencilState(ID3D11DeviceContext* self, ID3D11DepthStencilState * pDepthStencilState, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOSetTargets(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer *const * ppSOTargets, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawAuto(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexedInstancedIndirect(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawInstancedIndirect(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Dispatch(ID3D11DeviceContext* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DispatchIndirect(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetState(ID3D11DeviceContext* self, ID3D11RasterizerState * pRasterizerState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetViewports(ID3D11DeviceContext* self, UINT NumViewports, const D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetScissorRects(ID3D11DeviceContext* self, UINT NumRects, const D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopySubresourceRegion(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyResource(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, ID3D11Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UpdateSubresource(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyStructureCount(ID3D11DeviceContext* self, ID3D11Buffer * pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView * pSrcView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearRenderTargetView(ID3D11DeviceContext* self, ID3D11RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewUint(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const UINT  Values[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewFloat(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const FLOAT  Values[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearDepthStencilView(ID3D11DeviceContext* self, ID3D11DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GenerateMips(ID3D11DeviceContext* self, ID3D11ShaderResourceView * pShaderResourceView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetResourceMinLOD(ID3D11DeviceContext* self, ID3D11Resource * pResource, FLOAT MinLOD, struct ::GPADispatchTable const*& tlsRef);

FLOAT WINAPI Passthrough_GetResourceMinLOD(ID3D11DeviceContext* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveSubresource(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, ID3D11Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ExecuteCommandList(ID3D11DeviceContext* self, ID3D11CommandList * pCommandList, BOOL RestoreContextState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetShader(ID3D11DeviceContext* self, ID3D11HullShader * pHullShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetShader(ID3D11DeviceContext* self, ID3D11DomainShader * pDomainShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetUnorderedAccessViews(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetShader(ID3D11DeviceContext* self, ID3D11ComputeShader * pComputeShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetShader(ID3D11DeviceContext* self, ID3D11PixelShader ** ppPixelShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetShader(ID3D11DeviceContext* self, ID3D11VertexShader ** ppVertexShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetInputLayout(ID3D11DeviceContext* self, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetVertexBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetIndexBuffer(ID3D11DeviceContext* self, ID3D11Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetShader(ID3D11DeviceContext* self, ID3D11GeometryShader ** ppGeometryShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetPrimitiveTopology(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY * pTopology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetPredication(ID3D11DeviceContext* self, ID3D11Predicate ** ppPredicate, BOOL * pPredicateValue, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetRenderTargets(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetRenderTargetsAndUnorderedAccessViews(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetBlendState(ID3D11DeviceContext* self, ID3D11BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetDepthStencilState(ID3D11DeviceContext* self, ID3D11DepthStencilState ** ppDepthStencilState, UINT * pStencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOGetTargets(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer ** ppSOTargets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetState(ID3D11DeviceContext* self, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetViewports(ID3D11DeviceContext* self, UINT * pNumViewports, D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetScissorRects(ID3D11DeviceContext* self, UINT * pNumRects, D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetShader(ID3D11DeviceContext* self, ID3D11HullShader ** ppHullShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetShader(ID3D11DeviceContext* self, ID3D11DomainShader ** ppDomainShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetUnorderedAccessViews(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetShader(ID3D11DeviceContext* self, ID3D11ComputeShader ** ppComputeShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearState(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Flush(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

D3D11_DEVICE_CONTEXT_TYPE WINAPI Passthrough_GetType(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetContextFlags(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FinishCommandList(ID3D11DeviceContext* self, BOOL RestoreDeferredContextState, ID3D11CommandList ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopySubresourceRegion1(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, UINT CopyFlags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UpdateSubresource1(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, UINT CopyFlags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DiscardResource(ID3D11DeviceContext1* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DiscardView(ID3D11DeviceContext1* self, ID3D11View * pResourceView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SwapDeviceContextState(ID3D11DeviceContext1* self, ID3DDeviceContextState * pState, ID3DDeviceContextState ** ppPreviousState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearView(ID3D11DeviceContext1* self, ID3D11View * pView, const FLOAT  Color[4], const D3D11_RECT * pRect, UINT NumRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DiscardView1(ID3D11DeviceContext1* self, ID3D11View * pResourceView, const D3D11_RECT * pRects, UINT NumRects, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_UpdateTileMappings(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, UINT NumTiledResourceRegions, const D3D11_TILED_RESOURCE_COORDINATE * pTiledResourceRegionStartCoordinates, const D3D11_TILE_REGION_SIZE * pTiledResourceRegionSizes, ID3D11Buffer * pTilePool, UINT NumRanges, const UINT * pRangeFlags, const UINT * pTilePoolStartOffsets, const UINT * pRangeTileCounts, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CopyTileMappings(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestRegionStartCoordinate, ID3D11Resource * pSourceTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pSourceRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyTiles(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, ID3D11Buffer * pBuffer, UINT64 BufferStartOffsetInBytes, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UpdateTiles(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pDestTileRegionSize, const void * pSourceTileData, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ResizeTilePool(ID3D11DeviceContext2* self, ID3D11Buffer * pTilePool, UINT64 NewSizeInBytes, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_TiledResourceBarrier(ID3D11DeviceContext2* self, ID3D11DeviceChild * pTiledResourceOrViewAccessBeforeBarrier, ID3D11DeviceChild * pTiledResourceOrViewAccessAfterBarrier, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsAnnotationEnabled(ID3D11DeviceContext2* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetMarkerInt(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_BeginEventInt(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EndEvent(ID3D11DeviceContext2* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Flush1(ID3D11DeviceContext3* self, D3D11_CONTEXT_TYPE ContextType, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetHardwareProtectionState(ID3D11DeviceContext3* self, BOOL HwProtectionEnable, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetHardwareProtectionState(ID3D11DeviceContext3* self, BOOL * pHwProtectionEnable, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11devicecontext3
namespace id3d11fence {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSharedHandle(ID3D11Fence* self, const SECURITY_ATTRIBUTES * pAttributes, DWORD dwAccess, LPCWSTR lpName, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);

UINT64 WINAPI Passthrough_GetCompletedValue(ID3D11Fence* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetEventOnCompletion(ID3D11Fence* self, UINT64 Value, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11fence
namespace id3d11devicecontext4 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetShader(ID3D11DeviceContext* self, ID3D11PixelShader * pPixelShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetShader(ID3D11DeviceContext* self, ID3D11VertexShader * pVertexShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexed(ID3D11DeviceContext* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Draw(ID3D11DeviceContext* self, UINT VertexCount, UINT StartVertexLocation, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Map(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE * pMappedResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Unmap(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetInputLayout(ID3D11DeviceContext* self, ID3D11InputLayout * pInputLayout, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetVertexBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetIndexBuffer(ID3D11DeviceContext* self, ID3D11Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexedInstanced(ID3D11DeviceContext* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawInstanced(ID3D11DeviceContext* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetShader(ID3D11DeviceContext* self, ID3D11GeometryShader * pShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetPrimitiveTopology(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY Topology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Begin(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_End(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetData(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPredication(ID3D11DeviceContext* self, ID3D11Predicate * pPredicate, BOOL PredicateValue, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetRenderTargets(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetRenderTargetsAndUnorderedAccessViews(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetBlendState(ID3D11DeviceContext* self, ID3D11BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetDepthStencilState(ID3D11DeviceContext* self, ID3D11DepthStencilState * pDepthStencilState, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOSetTargets(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer *const * ppSOTargets, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawAuto(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexedInstancedIndirect(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawInstancedIndirect(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Dispatch(ID3D11DeviceContext* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DispatchIndirect(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetState(ID3D11DeviceContext* self, ID3D11RasterizerState * pRasterizerState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetViewports(ID3D11DeviceContext* self, UINT NumViewports, const D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetScissorRects(ID3D11DeviceContext* self, UINT NumRects, const D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopySubresourceRegion(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyResource(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, ID3D11Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UpdateSubresource(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyStructureCount(ID3D11DeviceContext* self, ID3D11Buffer * pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView * pSrcView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearRenderTargetView(ID3D11DeviceContext* self, ID3D11RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewUint(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const UINT  Values[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewFloat(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const FLOAT  Values[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearDepthStencilView(ID3D11DeviceContext* self, ID3D11DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GenerateMips(ID3D11DeviceContext* self, ID3D11ShaderResourceView * pShaderResourceView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetResourceMinLOD(ID3D11DeviceContext* self, ID3D11Resource * pResource, FLOAT MinLOD, struct ::GPADispatchTable const*& tlsRef);

FLOAT WINAPI Passthrough_GetResourceMinLOD(ID3D11DeviceContext* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveSubresource(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, ID3D11Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ExecuteCommandList(ID3D11DeviceContext* self, ID3D11CommandList * pCommandList, BOOL RestoreContextState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetShader(ID3D11DeviceContext* self, ID3D11HullShader * pHullShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetShader(ID3D11DeviceContext* self, ID3D11DomainShader * pDomainShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetUnorderedAccessViews(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetShader(ID3D11DeviceContext* self, ID3D11ComputeShader * pComputeShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetShader(ID3D11DeviceContext* self, ID3D11PixelShader ** ppPixelShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetShader(ID3D11DeviceContext* self, ID3D11VertexShader ** ppVertexShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetInputLayout(ID3D11DeviceContext* self, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetVertexBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetIndexBuffer(ID3D11DeviceContext* self, ID3D11Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetShader(ID3D11DeviceContext* self, ID3D11GeometryShader ** ppGeometryShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IAGetPrimitiveTopology(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY * pTopology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetPredication(ID3D11DeviceContext* self, ID3D11Predicate ** ppPredicate, BOOL * pPredicateValue, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetRenderTargets(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetRenderTargetsAndUnorderedAccessViews(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetBlendState(ID3D11DeviceContext* self, ID3D11BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMGetDepthStencilState(ID3D11DeviceContext* self, ID3D11DepthStencilState ** ppDepthStencilState, UINT * pStencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOGetTargets(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer ** ppSOTargets, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetState(ID3D11DeviceContext* self, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetViewports(ID3D11DeviceContext* self, UINT * pNumViewports, D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSGetScissorRects(ID3D11DeviceContext* self, UINT * pNumRects, D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetShader(ID3D11DeviceContext* self, ID3D11HullShader ** ppHullShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetShader(ID3D11DeviceContext* self, ID3D11DomainShader ** ppDomainShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetShaderResources(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetUnorderedAccessViews(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetShader(ID3D11DeviceContext* self, ID3D11ComputeShader ** ppComputeShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetSamplers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetConstantBuffers(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearState(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Flush(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

D3D11_DEVICE_CONTEXT_TYPE WINAPI Passthrough_GetType(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetContextFlags(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FinishCommandList(ID3D11DeviceContext* self, BOOL RestoreDeferredContextState, ID3D11CommandList ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopySubresourceRegion1(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, UINT CopyFlags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UpdateSubresource1(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, UINT CopyFlags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DiscardResource(ID3D11DeviceContext1* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DiscardView(ID3D11DeviceContext1* self, ID3D11View * pResourceView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSSetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_HSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_PSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CSGetConstantBuffers1(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SwapDeviceContextState(ID3D11DeviceContext1* self, ID3DDeviceContextState * pState, ID3DDeviceContextState ** ppPreviousState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearView(ID3D11DeviceContext1* self, ID3D11View * pView, const FLOAT  Color[4], const D3D11_RECT * pRect, UINT NumRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DiscardView1(ID3D11DeviceContext1* self, ID3D11View * pResourceView, const D3D11_RECT * pRects, UINT NumRects, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_UpdateTileMappings(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, UINT NumTiledResourceRegions, const D3D11_TILED_RESOURCE_COORDINATE * pTiledResourceRegionStartCoordinates, const D3D11_TILE_REGION_SIZE * pTiledResourceRegionSizes, ID3D11Buffer * pTilePool, UINT NumRanges, const UINT * pRangeFlags, const UINT * pTilePoolStartOffsets, const UINT * pRangeTileCounts, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CopyTileMappings(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestRegionStartCoordinate, ID3D11Resource * pSourceTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pSourceRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyTiles(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, ID3D11Buffer * pBuffer, UINT64 BufferStartOffsetInBytes, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UpdateTiles(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pDestTileRegionSize, const void * pSourceTileData, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ResizeTilePool(ID3D11DeviceContext2* self, ID3D11Buffer * pTilePool, UINT64 NewSizeInBytes, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_TiledResourceBarrier(ID3D11DeviceContext2* self, ID3D11DeviceChild * pTiledResourceOrViewAccessBeforeBarrier, ID3D11DeviceChild * pTiledResourceOrViewAccessAfterBarrier, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsAnnotationEnabled(ID3D11DeviceContext2* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetMarkerInt(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_BeginEventInt(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EndEvent(ID3D11DeviceContext2* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Flush1(ID3D11DeviceContext3* self, D3D11_CONTEXT_TYPE ContextType, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetHardwareProtectionState(ID3D11DeviceContext3* self, BOOL HwProtectionEnable, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetHardwareProtectionState(ID3D11DeviceContext3* self, BOOL * pHwProtectionEnable, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Signal(ID3D11DeviceContext4* self, ID3D11Fence * pFence, UINT64 Value, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Wait(ID3D11DeviceContext4* self, ID3D11Fence * pFence, UINT64 Value, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11devicecontext4
namespace id3d11device3 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBuffer(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture1D(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture2D(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture3D(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateShaderResourceView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateUnorderedAccessView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRenderTargetView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDepthStencilView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateInputLayout(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVertexShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGeometryShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGeometryShaderWithStreamOutput(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePixelShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateHullShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDomainShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateComputeShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateClassLinkage(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBlendState(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDepthStencilState(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRasterizerState(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSamplerState(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateQuery(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePredicate(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCounter(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResource(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFormatSupport(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckMultisampleQualityLevels(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CheckCounterInfo(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckCounter(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFeatureSupport(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11Device* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

D3D_FEATURE_LEVEL WINAPI Passthrough_GetFeatureLevel(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetCreationFlags(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDeviceRemovedReason(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetExceptionMode(ID3D11Device* self, UINT RaiseFlags, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetExceptionMode(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext1(ID3D11Device1* self, ID3D11DeviceContext1 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext1(ID3D11Device1* self, UINT ContextFlags, ID3D11DeviceContext1 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBlendState1(ID3D11Device1* self, const D3D11_BLEND_DESC1 * pBlendStateDesc, ID3D11BlendState1 ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRasterizerState1(ID3D11Device1* self, const D3D11_RASTERIZER_DESC1 * pRasterizerDesc, ID3D11RasterizerState1 ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeviceContextState(ID3D11Device1* self, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const IID & EmulatedInterface, D3D_FEATURE_LEVEL * pChosenFeatureLevel, ID3DDeviceContextState ** ppContextState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResource1(ID3D11Device1* self, HANDLE hResource, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResourceByName(ID3D11Device1* self, LPCWSTR lpName, DWORD dwDesiredAccess, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext2(ID3D11Device2* self, ID3D11DeviceContext2 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext2(ID3D11Device2* self, UINT ContextFlags, ID3D11DeviceContext2 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResourceTiling(ID3D11Device2* self, ID3D11Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D11_PACKED_MIP_DESC * pPackedMipDesc, D3D11_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D11_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckMultisampleQualityLevels1(ID3D11Device2* self, DXGI_FORMAT Format, UINT SampleCount, UINT Flags, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture2D1(ID3D11Device3* self, const D3D11_TEXTURE2D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D1 ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture3D1(ID3D11Device3* self, const D3D11_TEXTURE3D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D1 ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRasterizerState2(ID3D11Device3* self, const D3D11_RASTERIZER_DESC2 * pRasterizerDesc, ID3D11RasterizerState2 ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateShaderResourceView1(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC1 * pDesc1, ID3D11ShaderResourceView1 ** ppSRView1, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateUnorderedAccessView1(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC1 * pDesc1, ID3D11UnorderedAccessView1 ** ppUAView1, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRenderTargetView1(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC1 * pDesc1, ID3D11RenderTargetView1 ** ppRTView1, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateQuery1(ID3D11Device3* self, const D3D11_QUERY_DESC1 * pQueryDesc1, ID3D11Query1 ** ppQuery1, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext3(ID3D11Device3* self, ID3D11DeviceContext3 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext3(ID3D11Device3* self, UINT ContextFlags, ID3D11DeviceContext3 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_WriteToSubresource(ID3D11Device3* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ReadFromSubresource(ID3D11Device3* self, void * pDstData, UINT DstRowPitch, UINT DstDepthPitch, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11device3
namespace id3d11device4 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBuffer(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture1D(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture2D(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture3D(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateShaderResourceView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateUnorderedAccessView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRenderTargetView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDepthStencilView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateInputLayout(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVertexShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGeometryShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGeometryShaderWithStreamOutput(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePixelShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateHullShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDomainShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateComputeShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateClassLinkage(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBlendState(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDepthStencilState(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRasterizerState(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSamplerState(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateQuery(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePredicate(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCounter(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResource(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFormatSupport(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckMultisampleQualityLevels(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CheckCounterInfo(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckCounter(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFeatureSupport(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11Device* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

D3D_FEATURE_LEVEL WINAPI Passthrough_GetFeatureLevel(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetCreationFlags(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDeviceRemovedReason(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetExceptionMode(ID3D11Device* self, UINT RaiseFlags, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetExceptionMode(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext1(ID3D11Device1* self, ID3D11DeviceContext1 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext1(ID3D11Device1* self, UINT ContextFlags, ID3D11DeviceContext1 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBlendState1(ID3D11Device1* self, const D3D11_BLEND_DESC1 * pBlendStateDesc, ID3D11BlendState1 ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRasterizerState1(ID3D11Device1* self, const D3D11_RASTERIZER_DESC1 * pRasterizerDesc, ID3D11RasterizerState1 ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeviceContextState(ID3D11Device1* self, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const IID & EmulatedInterface, D3D_FEATURE_LEVEL * pChosenFeatureLevel, ID3DDeviceContextState ** ppContextState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResource1(ID3D11Device1* self, HANDLE hResource, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResourceByName(ID3D11Device1* self, LPCWSTR lpName, DWORD dwDesiredAccess, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext2(ID3D11Device2* self, ID3D11DeviceContext2 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext2(ID3D11Device2* self, UINT ContextFlags, ID3D11DeviceContext2 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResourceTiling(ID3D11Device2* self, ID3D11Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D11_PACKED_MIP_DESC * pPackedMipDesc, D3D11_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D11_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckMultisampleQualityLevels1(ID3D11Device2* self, DXGI_FORMAT Format, UINT SampleCount, UINT Flags, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture2D1(ID3D11Device3* self, const D3D11_TEXTURE2D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D1 ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture3D1(ID3D11Device3* self, const D3D11_TEXTURE3D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D1 ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRasterizerState2(ID3D11Device3* self, const D3D11_RASTERIZER_DESC2 * pRasterizerDesc, ID3D11RasterizerState2 ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateShaderResourceView1(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC1 * pDesc1, ID3D11ShaderResourceView1 ** ppSRView1, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateUnorderedAccessView1(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC1 * pDesc1, ID3D11UnorderedAccessView1 ** ppUAView1, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRenderTargetView1(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC1 * pDesc1, ID3D11RenderTargetView1 ** ppRTView1, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateQuery1(ID3D11Device3* self, const D3D11_QUERY_DESC1 * pQueryDesc1, ID3D11Query1 ** ppQuery1, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext3(ID3D11Device3* self, ID3D11DeviceContext3 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext3(ID3D11Device3* self, UINT ContextFlags, ID3D11DeviceContext3 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_WriteToSubresource(ID3D11Device3* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ReadFromSubresource(ID3D11Device3* self, void * pDstData, UINT DstRowPitch, UINT DstDepthPitch, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterDeviceRemovedEvent(ID3D11Device4* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterDeviceRemoved(ID3D11Device4* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11device4
namespace id3d11device5 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBuffer(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture1D(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture2D(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture3D(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateShaderResourceView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateUnorderedAccessView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRenderTargetView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDepthStencilView(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateInputLayout(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVertexShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGeometryShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGeometryShaderWithStreamOutput(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePixelShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateHullShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDomainShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateComputeShader(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateClassLinkage(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBlendState(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDepthStencilState(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRasterizerState(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSamplerState(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateQuery(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePredicate(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCounter(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResource(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFormatSupport(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckMultisampleQualityLevels(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CheckCounterInfo(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckCounter(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFeatureSupport(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11Device* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

D3D_FEATURE_LEVEL WINAPI Passthrough_GetFeatureLevel(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetCreationFlags(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDeviceRemovedReason(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetExceptionMode(ID3D11Device* self, UINT RaiseFlags, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetExceptionMode(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext1(ID3D11Device1* self, ID3D11DeviceContext1 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext1(ID3D11Device1* self, UINT ContextFlags, ID3D11DeviceContext1 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateBlendState1(ID3D11Device1* self, const D3D11_BLEND_DESC1 * pBlendStateDesc, ID3D11BlendState1 ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRasterizerState1(ID3D11Device1* self, const D3D11_RASTERIZER_DESC1 * pRasterizerDesc, ID3D11RasterizerState1 ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeviceContextState(ID3D11Device1* self, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const IID & EmulatedInterface, D3D_FEATURE_LEVEL * pChosenFeatureLevel, ID3DDeviceContextState ** ppContextState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResource1(ID3D11Device1* self, HANDLE hResource, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedResourceByName(ID3D11Device1* self, LPCWSTR lpName, DWORD dwDesiredAccess, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext2(ID3D11Device2* self, ID3D11DeviceContext2 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext2(ID3D11Device2* self, UINT ContextFlags, ID3D11DeviceContext2 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResourceTiling(ID3D11Device2* self, ID3D11Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D11_PACKED_MIP_DESC * pPackedMipDesc, D3D11_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D11_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckMultisampleQualityLevels1(ID3D11Device2* self, DXGI_FORMAT Format, UINT SampleCount, UINT Flags, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture2D1(ID3D11Device3* self, const D3D11_TEXTURE2D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D1 ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateTexture3D1(ID3D11Device3* self, const D3D11_TEXTURE3D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D1 ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRasterizerState2(ID3D11Device3* self, const D3D11_RASTERIZER_DESC2 * pRasterizerDesc, ID3D11RasterizerState2 ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateShaderResourceView1(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC1 * pDesc1, ID3D11ShaderResourceView1 ** ppSRView1, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateUnorderedAccessView1(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC1 * pDesc1, ID3D11UnorderedAccessView1 ** ppUAView1, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRenderTargetView1(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC1 * pDesc1, ID3D11RenderTargetView1 ** ppRTView1, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateQuery1(ID3D11Device3* self, const D3D11_QUERY_DESC1 * pQueryDesc1, ID3D11Query1 ** ppQuery1, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetImmediateContext3(ID3D11Device3* self, ID3D11DeviceContext3 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDeferredContext3(ID3D11Device3* self, UINT ContextFlags, ID3D11DeviceContext3 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_WriteToSubresource(ID3D11Device3* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ReadFromSubresource(ID3D11Device3* self, void * pDstData, UINT DstRowPitch, UINT DstDepthPitch, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterDeviceRemovedEvent(ID3D11Device4* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterDeviceRemoved(ID3D11Device4* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedFence(ID3D11Device5* self, HANDLE hFence, const IID & ReturnedInterface, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateFence(ID3D11Device5* self, UINT64 InitialValue, D3D11_FENCE_FLAG Flags, const IID & ReturnedInterface, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11device5
namespace id3d11multithread {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Enter(ID3D11Multithread* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Leave(ID3D11Multithread* self, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_SetMultithreadProtected(ID3D11Multithread* self, BOOL bMTProtect, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_GetMultithreadProtected(ID3D11Multithread* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11multithread
namespace id3d11videocontext2 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDecoderBuffer(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, UINT * pBufferSize, void ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ReleaseDecoderBuffer(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DecoderBeginFrame(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, ID3D11VideoDecoderOutputView * pView, UINT ContentKeySize, const void * pContentKey, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DecoderEndFrame(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SubmitDecoderBuffers(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC * pBufferDesc, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_DecoderExtension(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_DECODER_EXTENSION * pExtensionData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputTargetRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputBackgroundColor(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL YCbCr, const D3D11_VIDEO_COLOR * pColor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputColorSpace(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputAlphaFillMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode, UINT StreamIndex, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputConstriction(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, SIZE Size, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputStereoMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_VideoProcessorSetOutputExtension(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputTargetRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * Enabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputBackgroundColor(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pYCbCr, D3D11_VIDEO_COLOR * pColor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputColorSpace(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputAlphaFillMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE * pAlphaFillMode, UINT * pStreamIndex, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputConstriction(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, SIZE * pSize, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputStereoMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_VideoProcessorGetOutputExtension(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamFrameFormat(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT FrameFormat, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamColorSpace(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamOutputRate(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate, BOOL RepeatFrame, const DXGI_RATIONAL * pCustomRate, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamSourceRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamDestRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamAlpha(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Alpha, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamPalette(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, const UINT * pEntries, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamPixelAspectRatio(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const DXGI_RATIONAL * pSourceAspectRatio, const DXGI_RATIONAL * pDestinationAspectRatio, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamLumaKey(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Lower, FLOAT Upper, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamStereoFormat(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format, BOOL LeftViewFrame0, BOOL BaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode, int MonoOffset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamAutoProcessingMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamFilter(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL Enable, int Level, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_VideoProcessorSetStreamExtension(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamFrameFormat(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT * pFrameFormat, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamColorSpace(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamOutputRate(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE * pOutputRate, BOOL * pRepeatFrame, DXGI_RATIONAL * pCustomRate, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamSourceRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamDestRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamAlpha(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pAlpha, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamPalette(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, UINT * pEntries, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamPixelAspectRatio(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, DXGI_RATIONAL * pSourceAspectRatio, DXGI_RATIONAL * pDestinationAspectRatio, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamLumaKey(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pLower, FLOAT * pUpper, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamStereoFormat(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT * pFormat, BOOL * pLeftViewFrame0, BOOL * pBaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE * pFlipMode, int * MonoOffset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamAutoProcessingMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamFilter(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL * pEnabled, int * pLevel, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_VideoProcessorGetStreamExtension(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_VideoProcessorBlt(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, ID3D11VideoProcessorOutputView * pView, UINT OutputFrame, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM * pStreams, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_NegotiateCryptoSessionKeyExchange(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EncryptionBlt(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, UINT IVSize, void * pIV, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DecryptionBlt(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, D3D11_ENCRYPTED_BLOCK_INFO * pEncryptedBlockInfo, UINT ContentKeySize, const void * pContentKey, UINT IVSize, void * pIV, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_StartSessionKeyRefresh(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT RandomNumberSize, void * pRandomNumber, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_FinishSessionKeyRefresh(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetEncryptionBltKey(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT KeySize, void * pReadbackKey, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_NegotiateAuthenticatedChannelKeyExchange(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_QueryAuthenticatedChannel(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, UINT OutputSize, void * pOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ConfigureAuthenticatedChannel(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, D3D11_AUTHENTICATED_CONFIGURE_OUTPUT * pOutput, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamRotation(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_ROTATION Rotation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamRotation(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_ROTATION * pRotation, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SubmitDecoderBuffers1(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC1 * pBufferDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDataForNewHardwareKey(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, UINT PrivateInputSize, const void * pPrivatInputData, UINT64 * pPrivateOutputData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckCryptoSessionStatus(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, D3D11_CRYPTO_SESSION_STATUS * pStatus, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DecoderEnableDownsampling(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, UINT ReferenceFrameCount, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DecoderUpdateDownsampling(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputColorSpace1(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE ColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputShaderUsage(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL ShaderUsage, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputColorSpace1(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputShaderUsage(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pShaderUsage, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamColorSpace1(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE ColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamMirror(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, BOOL FlipHorizontal, BOOL FlipVertical, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamColorSpace1(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamMirror(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, BOOL * pFlipHorizontal, BOOL * pFlipVertical, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_VideoProcessorGetBehaviorHints(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT OutputWidth, UINT OutputHeight, DXGI_FORMAT OutputFormat, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT * pStreams, UINT * pBehaviorHints, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputHDRMetaData(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_HDR_METADATA_TYPE Type, UINT Size, const void * pHDRMetaData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputHDRMetaData(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_HDR_METADATA_TYPE * pType, UINT Size, void * pMetaData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamHDRMetaData(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_HDR_METADATA_TYPE Type, UINT Size, const void * pHDRMetaData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamHDRMetaData(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_HDR_METADATA_TYPE * pType, UINT Size, void * pMetaData, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11videocontext2
namespace id3d11videodevice2 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoDecoder(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pVideoDesc, const D3D11_VIDEO_DECODER_CONFIG * pConfig, ID3D11VideoDecoder ** ppDecoder, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoProcessor(ID3D11VideoDevice* self, ID3D11VideoProcessorEnumerator * pEnum, UINT RateConversionIndex, ID3D11VideoProcessor ** ppVideoProcessor, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateAuthenticatedChannel(ID3D11VideoDevice* self, D3D11_AUTHENTICATED_CHANNEL_TYPE ChannelType, ID3D11AuthenticatedChannel ** ppAuthenticatedChannel, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCryptoSession(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, const GUID * pKeyExchangeType, ID3D11CryptoSession ** ppCryptoSession, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoDecoderOutputView(ID3D11VideoDevice* self, ID3D11Resource * pResource, const D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoDecoderOutputView ** ppVDOVView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoProcessorInputView(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorInputView ** ppVPIView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoProcessorOutputView(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorOutputView ** ppVPOView, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateVideoProcessorEnumerator(ID3D11VideoDevice* self, const D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pDesc, ID3D11VideoProcessorEnumerator ** ppEnum, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetVideoDecoderProfileCount(ID3D11VideoDevice* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoDecoderProfile(ID3D11VideoDevice* self, UINT Index, GUID * pDecoderProfile, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckVideoDecoderFormat(ID3D11VideoDevice* self, const GUID * pDecoderProfile, DXGI_FORMAT Format, BOOL * pSupported, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoDecoderConfigCount(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT * pCount, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoDecoderConfig(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT Index, D3D11_VIDEO_DECODER_CONFIG * pConfig, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetContentProtectionCaps(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, D3D11_VIDEO_CONTENT_PROTECTION_CAPS * pCaps, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckCryptoKeyExchange(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, UINT Index, GUID * pKeyExchangeType, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11VideoDevice* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11VideoDevice* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetCryptoSessionPrivateDataSize(ID3D11VideoDevice1* self, const GUID * pCryptoType, const GUID * pDecoderProfile, const GUID * pKeyExchangeType, UINT * pPrivateInputSize, UINT * pPrivateOutputSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetVideoDecoderCaps(ID3D11VideoDevice1* self, const GUID * pDecoderProfile, UINT SampleWidth, UINT SampleHeight, const DXGI_RATIONAL * pFrameRate, UINT BitRate, const GUID * pCryptoType, UINT * pDecoderCaps, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckVideoDecoderDownsampling(ID3D11VideoDevice1* self, const D3D11_VIDEO_DECODER_DESC * pInputDesc, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_DECODER_CONFIG * pInputConfig, const DXGI_RATIONAL * pFrameRate, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, BOOL * pSupported, BOOL * pRealTimeHint, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RecommendVideoDecoderDownsampleParameters(ID3D11VideoDevice1* self, const D3D11_VIDEO_DECODER_DESC * pInputDesc, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_DECODER_CONFIG * pInputConfig, const DXGI_RATIONAL * pFrameRate, D3D11_VIDEO_SAMPLE_DESC * pRecommendedOutputDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFeatureSupport(ID3D11VideoDevice2* self, D3D11_FEATURE_VIDEO Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_NegotiateCryptoSessionKeyExchangeMT(ID3D11VideoDevice2* self, ID3D11CryptoSession * pCryptoSession, D3D11_CRYPTO_SESSION_KEY_EXCHANGE_FLAGS flags, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11videodevice2
namespace id3d11videocontext3 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDevice(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDecoderBuffer(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, UINT * pBufferSize, void ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ReleaseDecoderBuffer(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DecoderBeginFrame(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, ID3D11VideoDecoderOutputView * pView, UINT ContentKeySize, const void * pContentKey, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DecoderEndFrame(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SubmitDecoderBuffers(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC * pBufferDesc, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_DecoderExtension(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_DECODER_EXTENSION * pExtensionData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputTargetRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputBackgroundColor(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL YCbCr, const D3D11_VIDEO_COLOR * pColor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputColorSpace(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputAlphaFillMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode, UINT StreamIndex, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputConstriction(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, SIZE Size, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputStereoMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_VideoProcessorSetOutputExtension(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputTargetRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * Enabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputBackgroundColor(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pYCbCr, D3D11_VIDEO_COLOR * pColor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputColorSpace(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputAlphaFillMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE * pAlphaFillMode, UINT * pStreamIndex, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputConstriction(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, SIZE * pSize, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputStereoMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_VideoProcessorGetOutputExtension(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamFrameFormat(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT FrameFormat, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamColorSpace(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamOutputRate(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate, BOOL RepeatFrame, const DXGI_RATIONAL * pCustomRate, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamSourceRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamDestRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamAlpha(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Alpha, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamPalette(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, const UINT * pEntries, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamPixelAspectRatio(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const DXGI_RATIONAL * pSourceAspectRatio, const DXGI_RATIONAL * pDestinationAspectRatio, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamLumaKey(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Lower, FLOAT Upper, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamStereoFormat(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format, BOOL LeftViewFrame0, BOOL BaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode, int MonoOffset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamAutoProcessingMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamFilter(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL Enable, int Level, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_VideoProcessorSetStreamExtension(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamFrameFormat(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT * pFrameFormat, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamColorSpace(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamOutputRate(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE * pOutputRate, BOOL * pRepeatFrame, DXGI_RATIONAL * pCustomRate, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamSourceRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamDestRect(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamAlpha(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pAlpha, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamPalette(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, UINT * pEntries, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamPixelAspectRatio(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, DXGI_RATIONAL * pSourceAspectRatio, DXGI_RATIONAL * pDestinationAspectRatio, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamLumaKey(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pLower, FLOAT * pUpper, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamStereoFormat(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT * pFormat, BOOL * pLeftViewFrame0, BOOL * pBaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE * pFlipMode, int * MonoOffset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamAutoProcessingMode(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamFilter(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL * pEnabled, int * pLevel, struct ::GPADispatchTable const*& tlsRef);

APP_DEPRECATED_HRESULT WINAPI Passthrough_VideoProcessorGetStreamExtension(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_VideoProcessorBlt(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, ID3D11VideoProcessorOutputView * pView, UINT OutputFrame, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM * pStreams, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_NegotiateCryptoSessionKeyExchange(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EncryptionBlt(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, UINT IVSize, void * pIV, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DecryptionBlt(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, D3D11_ENCRYPTED_BLOCK_INFO * pEncryptedBlockInfo, UINT ContentKeySize, const void * pContentKey, UINT IVSize, void * pIV, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_StartSessionKeyRefresh(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT RandomNumberSize, void * pRandomNumber, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_FinishSessionKeyRefresh(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetEncryptionBltKey(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT KeySize, void * pReadbackKey, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_NegotiateAuthenticatedChannelKeyExchange(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_QueryAuthenticatedChannel(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, UINT OutputSize, void * pOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ConfigureAuthenticatedChannel(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, D3D11_AUTHENTICATED_CONFIGURE_OUTPUT * pOutput, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamRotation(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_ROTATION Rotation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamRotation(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_ROTATION * pRotation, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SubmitDecoderBuffers1(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC1 * pBufferDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDataForNewHardwareKey(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, UINT PrivateInputSize, const void * pPrivatInputData, UINT64 * pPrivateOutputData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckCryptoSessionStatus(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, D3D11_CRYPTO_SESSION_STATUS * pStatus, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DecoderEnableDownsampling(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, UINT ReferenceFrameCount, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DecoderUpdateDownsampling(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputColorSpace1(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE ColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputShaderUsage(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL ShaderUsage, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputColorSpace1(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputShaderUsage(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pShaderUsage, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamColorSpace1(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE ColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamMirror(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, BOOL FlipHorizontal, BOOL FlipVertical, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamColorSpace1(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamMirror(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, BOOL * pFlipHorizontal, BOOL * pFlipVertical, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_VideoProcessorGetBehaviorHints(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT OutputWidth, UINT OutputHeight, DXGI_FORMAT OutputFormat, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT * pStreams, UINT * pBehaviorHints, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetOutputHDRMetaData(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_HDR_METADATA_TYPE Type, UINT Size, const void * pHDRMetaData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetOutputHDRMetaData(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_HDR_METADATA_TYPE * pType, UINT Size, void * pMetaData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorSetStreamHDRMetaData(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_HDR_METADATA_TYPE Type, UINT Size, const void * pHDRMetaData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_VideoProcessorGetStreamHDRMetaData(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_HDR_METADATA_TYPE * pType, UINT Size, void * pMetaData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DecoderBeginFrame1(ID3D11VideoContext3* self, ID3D11VideoDecoder * pDecoder, ID3D11VideoDecoderOutputView * pView, UINT ContentKeySize, const void * pContentKey, UINT NumComponentHistograms, const UINT * pHistogramOffsets, ID3D11Buffer *const * ppHistogramBuffers, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SubmitDecoderBuffers2(ID3D11VideoContext3* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC2 * pBufferDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d11videocontext3
namespace id3d12object {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12object
namespace id3d12devicechild {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12devicechild
namespace id3d12rootsignature {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12rootsignature
namespace id3d12rootsignaturedeserializer {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

const D3D12_ROOT_SIGNATURE_DESC * WINAPI Passthrough_GetRootSignatureDesc(ID3D12RootSignatureDeserializer* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12rootsignaturedeserializer
namespace id3d12versionedrootsignaturedeserializer {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetRootSignatureDescAtVersion(ID3D12VersionedRootSignatureDeserializer* self, D3D_ROOT_SIGNATURE_VERSION convertToVersion, const D3D12_VERSIONED_ROOT_SIGNATURE_DESC ** ppDesc, struct ::GPADispatchTable const*& tlsRef);

const D3D12_VERSIONED_ROOT_SIGNATURE_DESC * WINAPI Passthrough_GetUnconvertedRootSignatureDesc(ID3D12VersionedRootSignatureDeserializer* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12versionedrootsignaturedeserializer
namespace id3d12pageable {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12pageable
namespace id3d12heap {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

D3D12_HEAP_DESC* WINAPI Passthrough_GetDesc(ID3D12Heap* self, D3D12_HEAP_DESC* outReturnValue, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12heap
namespace id3d12resource {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Map(ID3D12Resource* self, UINT Subresource, const D3D12_RANGE * pReadRange, void ** ppData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Unmap(ID3D12Resource* self, UINT Subresource, const D3D12_RANGE * pWrittenRange, struct ::GPADispatchTable const*& tlsRef);

D3D12_RESOURCE_DESC* WINAPI Passthrough_GetDesc(ID3D12Resource* self, D3D12_RESOURCE_DESC* outReturnValue, struct ::GPADispatchTable const*& tlsRef);

D3D12_GPU_VIRTUAL_ADDRESS WINAPI Passthrough_GetGPUVirtualAddress(ID3D12Resource* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_WriteToSubresource(ID3D12Resource* self, UINT DstSubresource, const D3D12_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ReadFromSubresource(ID3D12Resource* self, void * pDstData, UINT DstRowPitch, UINT DstDepthPitch, UINT SrcSubresource, const D3D12_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetHeapProperties(ID3D12Resource* self, D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS * pHeapFlags, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12resource
namespace id3d12commandallocator {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Reset(ID3D12CommandAllocator* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12commandallocator
namespace id3d12fence {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

UINT64 WINAPI Passthrough_GetCompletedValue(ID3D12Fence* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetEventOnCompletion(ID3D12Fence* self, UINT64 Value, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Signal(ID3D12Fence* self, UINT64 Value, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12fence
namespace id3d12fence1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

UINT64 WINAPI Passthrough_GetCompletedValue(ID3D12Fence* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetEventOnCompletion(ID3D12Fence* self, UINT64 Value, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Signal(ID3D12Fence* self, UINT64 Value, struct ::GPADispatchTable const*& tlsRef);

D3D12_FENCE_FLAGS WINAPI Passthrough_GetCreationFlags(ID3D12Fence1* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12fence1
namespace id3d12pipelinestate {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetCachedBlob(ID3D12PipelineState* self, ID3DBlob ** ppBlob, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12pipelinestate
namespace id3d12descriptorheap {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

D3D12_DESCRIPTOR_HEAP_DESC* WINAPI Passthrough_GetDesc(ID3D12DescriptorHeap* self, D3D12_DESCRIPTOR_HEAP_DESC* outReturnValue, struct ::GPADispatchTable const*& tlsRef);

D3D12_CPU_DESCRIPTOR_HANDLE* WINAPI Passthrough_GetCPUDescriptorHandleForHeapStart(ID3D12DescriptorHeap* self, D3D12_CPU_DESCRIPTOR_HANDLE* outReturnValue, struct ::GPADispatchTable const*& tlsRef);

D3D12_GPU_DESCRIPTOR_HANDLE* WINAPI Passthrough_GetGPUDescriptorHandleForHeapStart(ID3D12DescriptorHeap* self, D3D12_GPU_DESCRIPTOR_HANDLE* outReturnValue, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12descriptorheap
namespace id3d12queryheap {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12queryheap
namespace id3d12commandsignature {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12commandsignature
namespace id3d12commandlist {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

D3D12_COMMAND_LIST_TYPE WINAPI Passthrough_GetType(ID3D12CommandList* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12commandlist
namespace id3d12graphicscommandlist {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

D3D12_COMMAND_LIST_TYPE WINAPI Passthrough_GetType(ID3D12CommandList* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Close(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Reset(ID3D12GraphicsCommandList* self, ID3D12CommandAllocator * pAllocator, ID3D12PipelineState * pInitialState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearState(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawInstanced(ID3D12GraphicsCommandList* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexedInstanced(ID3D12GraphicsCommandList* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Dispatch(ID3D12GraphicsCommandList* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyBufferRegion(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT64 NumBytes, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyTextureRegion(ID3D12GraphicsCommandList* self, const D3D12_TEXTURE_COPY_LOCATION * pDst, UINT DstX, UINT DstY, UINT DstZ, const D3D12_TEXTURE_COPY_LOCATION * pSrc, const D3D12_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyResource(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, ID3D12Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyTiles(ID3D12GraphicsCommandList* self, ID3D12Resource * pTiledResource, const D3D12_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pTileRegionSize, ID3D12Resource * pBuffer, UINT64 BufferStartOffsetInBytes, D3D12_TILE_COPY_FLAGS Flags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveSubresource(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, UINT DstSubresource, ID3D12Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetPrimitiveTopology(ID3D12GraphicsCommandList* self, D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetViewports(ID3D12GraphicsCommandList* self, UINT NumViewports, const D3D12_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetScissorRects(ID3D12GraphicsCommandList* self, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetBlendFactor(ID3D12GraphicsCommandList* self, const FLOAT  BlendFactor[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetStencilRef(ID3D12GraphicsCommandList* self, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPipelineState(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResourceBarrier(ID3D12GraphicsCommandList* self, UINT NumBarriers, const D3D12_RESOURCE_BARRIER * pBarriers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ExecuteBundle(ID3D12GraphicsCommandList* self, ID3D12GraphicsCommandList * pCommandList, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetDescriptorHeaps(ID3D12GraphicsCommandList* self, UINT NumDescriptorHeaps, ID3D12DescriptorHeap *const * ppDescriptorHeaps, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootSignature(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootSignature(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootDescriptorTable(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootDescriptorTable(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRoot32BitConstant(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRoot32BitConstant(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRoot32BitConstants(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRoot32BitConstants(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootConstantBufferView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootConstantBufferView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootShaderResourceView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootShaderResourceView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootUnorderedAccessView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootUnorderedAccessView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetIndexBuffer(ID3D12GraphicsCommandList* self, const D3D12_INDEX_BUFFER_VIEW * pView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetVertexBuffers(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_VERTEX_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOSetTargets(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_STREAM_OUTPUT_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetRenderTargets(ID3D12GraphicsCommandList* self, UINT NumRenderTargetDescriptors, const D3D12_CPU_DESCRIPTOR_HANDLE * pRenderTargetDescriptors, BOOL RTsSingleHandleToDescriptorRange, const D3D12_CPU_DESCRIPTOR_HANDLE * pDepthStencilDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearDepthStencilView(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView, D3D12_CLEAR_FLAGS ClearFlags, FLOAT Depth, UINT8 Stencil, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearRenderTargetView(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView, const FLOAT  ColorRGBA[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewUint(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const UINT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewFloat(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const FLOAT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DiscardResource(ID3D12GraphicsCommandList* self, ID3D12Resource * pResource, const D3D12_DISCARD_REGION * pRegion, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_BeginQuery(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EndQuery(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveQueryData(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT StartIndex, UINT NumQueries, ID3D12Resource * pDestinationBuffer, UINT64 AlignedDestinationBufferOffset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPredication(ID3D12GraphicsCommandList* self, ID3D12Resource * pBuffer, UINT64 AlignedBufferOffset, D3D12_PREDICATION_OP Operation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetMarker(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_BeginEvent(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EndEvent(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ExecuteIndirect(ID3D12GraphicsCommandList* self, ID3D12CommandSignature * pCommandSignature, UINT MaxCommandCount, ID3D12Resource * pArgumentBuffer, UINT64 ArgumentBufferOffset, ID3D12Resource * pCountBuffer, UINT64 CountBufferOffset, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12graphicscommandlist
namespace id3d12graphicscommandlist1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

D3D12_COMMAND_LIST_TYPE WINAPI Passthrough_GetType(ID3D12CommandList* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Close(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Reset(ID3D12GraphicsCommandList* self, ID3D12CommandAllocator * pAllocator, ID3D12PipelineState * pInitialState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearState(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawInstanced(ID3D12GraphicsCommandList* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexedInstanced(ID3D12GraphicsCommandList* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Dispatch(ID3D12GraphicsCommandList* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyBufferRegion(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT64 NumBytes, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyTextureRegion(ID3D12GraphicsCommandList* self, const D3D12_TEXTURE_COPY_LOCATION * pDst, UINT DstX, UINT DstY, UINT DstZ, const D3D12_TEXTURE_COPY_LOCATION * pSrc, const D3D12_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyResource(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, ID3D12Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyTiles(ID3D12GraphicsCommandList* self, ID3D12Resource * pTiledResource, const D3D12_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pTileRegionSize, ID3D12Resource * pBuffer, UINT64 BufferStartOffsetInBytes, D3D12_TILE_COPY_FLAGS Flags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveSubresource(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, UINT DstSubresource, ID3D12Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetPrimitiveTopology(ID3D12GraphicsCommandList* self, D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetViewports(ID3D12GraphicsCommandList* self, UINT NumViewports, const D3D12_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetScissorRects(ID3D12GraphicsCommandList* self, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetBlendFactor(ID3D12GraphicsCommandList* self, const FLOAT  BlendFactor[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetStencilRef(ID3D12GraphicsCommandList* self, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPipelineState(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResourceBarrier(ID3D12GraphicsCommandList* self, UINT NumBarriers, const D3D12_RESOURCE_BARRIER * pBarriers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ExecuteBundle(ID3D12GraphicsCommandList* self, ID3D12GraphicsCommandList * pCommandList, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetDescriptorHeaps(ID3D12GraphicsCommandList* self, UINT NumDescriptorHeaps, ID3D12DescriptorHeap *const * ppDescriptorHeaps, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootSignature(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootSignature(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootDescriptorTable(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootDescriptorTable(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRoot32BitConstant(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRoot32BitConstant(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRoot32BitConstants(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRoot32BitConstants(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootConstantBufferView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootConstantBufferView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootShaderResourceView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootShaderResourceView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootUnorderedAccessView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootUnorderedAccessView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetIndexBuffer(ID3D12GraphicsCommandList* self, const D3D12_INDEX_BUFFER_VIEW * pView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetVertexBuffers(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_VERTEX_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOSetTargets(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_STREAM_OUTPUT_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetRenderTargets(ID3D12GraphicsCommandList* self, UINT NumRenderTargetDescriptors, const D3D12_CPU_DESCRIPTOR_HANDLE * pRenderTargetDescriptors, BOOL RTsSingleHandleToDescriptorRange, const D3D12_CPU_DESCRIPTOR_HANDLE * pDepthStencilDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearDepthStencilView(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView, D3D12_CLEAR_FLAGS ClearFlags, FLOAT Depth, UINT8 Stencil, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearRenderTargetView(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView, const FLOAT  ColorRGBA[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewUint(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const UINT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewFloat(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const FLOAT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DiscardResource(ID3D12GraphicsCommandList* self, ID3D12Resource * pResource, const D3D12_DISCARD_REGION * pRegion, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_BeginQuery(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EndQuery(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveQueryData(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT StartIndex, UINT NumQueries, ID3D12Resource * pDestinationBuffer, UINT64 AlignedDestinationBufferOffset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPredication(ID3D12GraphicsCommandList* self, ID3D12Resource * pBuffer, UINT64 AlignedBufferOffset, D3D12_PREDICATION_OP Operation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetMarker(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_BeginEvent(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EndEvent(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ExecuteIndirect(ID3D12GraphicsCommandList* self, ID3D12CommandSignature * pCommandSignature, UINT MaxCommandCount, ID3D12Resource * pArgumentBuffer, UINT64 ArgumentBufferOffset, ID3D12Resource * pCountBuffer, UINT64 CountBufferOffset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_AtomicCopyBufferUINT(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_AtomicCopyBufferUINT64(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetDepthBounds(ID3D12GraphicsCommandList1* self, FLOAT Min, FLOAT Max, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetSamplePositions(ID3D12GraphicsCommandList1* self, UINT NumSamplesPerPixel, UINT NumPixels, D3D12_SAMPLE_POSITION * pSamplePositions, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveSubresourceRegion(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, ID3D12Resource * pSrcResource, UINT SrcSubresource, D3D12_RECT * pSrcRect, DXGI_FORMAT Format, D3D12_RESOLVE_MODE ResolveMode, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetViewInstanceMask(ID3D12GraphicsCommandList1* self, UINT Mask, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12graphicscommandlist1
namespace id3d12graphicscommandlist2 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

D3D12_COMMAND_LIST_TYPE WINAPI Passthrough_GetType(ID3D12CommandList* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Close(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Reset(ID3D12GraphicsCommandList* self, ID3D12CommandAllocator * pAllocator, ID3D12PipelineState * pInitialState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearState(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawInstanced(ID3D12GraphicsCommandList* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexedInstanced(ID3D12GraphicsCommandList* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Dispatch(ID3D12GraphicsCommandList* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyBufferRegion(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT64 NumBytes, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyTextureRegion(ID3D12GraphicsCommandList* self, const D3D12_TEXTURE_COPY_LOCATION * pDst, UINT DstX, UINT DstY, UINT DstZ, const D3D12_TEXTURE_COPY_LOCATION * pSrc, const D3D12_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyResource(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, ID3D12Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyTiles(ID3D12GraphicsCommandList* self, ID3D12Resource * pTiledResource, const D3D12_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pTileRegionSize, ID3D12Resource * pBuffer, UINT64 BufferStartOffsetInBytes, D3D12_TILE_COPY_FLAGS Flags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveSubresource(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, UINT DstSubresource, ID3D12Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetPrimitiveTopology(ID3D12GraphicsCommandList* self, D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetViewports(ID3D12GraphicsCommandList* self, UINT NumViewports, const D3D12_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetScissorRects(ID3D12GraphicsCommandList* self, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetBlendFactor(ID3D12GraphicsCommandList* self, const FLOAT  BlendFactor[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetStencilRef(ID3D12GraphicsCommandList* self, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPipelineState(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResourceBarrier(ID3D12GraphicsCommandList* self, UINT NumBarriers, const D3D12_RESOURCE_BARRIER * pBarriers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ExecuteBundle(ID3D12GraphicsCommandList* self, ID3D12GraphicsCommandList * pCommandList, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetDescriptorHeaps(ID3D12GraphicsCommandList* self, UINT NumDescriptorHeaps, ID3D12DescriptorHeap *const * ppDescriptorHeaps, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootSignature(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootSignature(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootDescriptorTable(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootDescriptorTable(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRoot32BitConstant(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRoot32BitConstant(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRoot32BitConstants(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRoot32BitConstants(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootConstantBufferView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootConstantBufferView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootShaderResourceView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootShaderResourceView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootUnorderedAccessView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootUnorderedAccessView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetIndexBuffer(ID3D12GraphicsCommandList* self, const D3D12_INDEX_BUFFER_VIEW * pView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetVertexBuffers(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_VERTEX_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOSetTargets(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_STREAM_OUTPUT_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetRenderTargets(ID3D12GraphicsCommandList* self, UINT NumRenderTargetDescriptors, const D3D12_CPU_DESCRIPTOR_HANDLE * pRenderTargetDescriptors, BOOL RTsSingleHandleToDescriptorRange, const D3D12_CPU_DESCRIPTOR_HANDLE * pDepthStencilDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearDepthStencilView(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView, D3D12_CLEAR_FLAGS ClearFlags, FLOAT Depth, UINT8 Stencil, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearRenderTargetView(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView, const FLOAT  ColorRGBA[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewUint(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const UINT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewFloat(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const FLOAT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DiscardResource(ID3D12GraphicsCommandList* self, ID3D12Resource * pResource, const D3D12_DISCARD_REGION * pRegion, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_BeginQuery(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EndQuery(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveQueryData(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT StartIndex, UINT NumQueries, ID3D12Resource * pDestinationBuffer, UINT64 AlignedDestinationBufferOffset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPredication(ID3D12GraphicsCommandList* self, ID3D12Resource * pBuffer, UINT64 AlignedBufferOffset, D3D12_PREDICATION_OP Operation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetMarker(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_BeginEvent(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EndEvent(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ExecuteIndirect(ID3D12GraphicsCommandList* self, ID3D12CommandSignature * pCommandSignature, UINT MaxCommandCount, ID3D12Resource * pArgumentBuffer, UINT64 ArgumentBufferOffset, ID3D12Resource * pCountBuffer, UINT64 CountBufferOffset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_AtomicCopyBufferUINT(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_AtomicCopyBufferUINT64(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetDepthBounds(ID3D12GraphicsCommandList1* self, FLOAT Min, FLOAT Max, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetSamplePositions(ID3D12GraphicsCommandList1* self, UINT NumSamplesPerPixel, UINT NumPixels, D3D12_SAMPLE_POSITION * pSamplePositions, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveSubresourceRegion(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, ID3D12Resource * pSrcResource, UINT SrcSubresource, D3D12_RECT * pSrcRect, DXGI_FORMAT Format, D3D12_RESOLVE_MODE ResolveMode, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetViewInstanceMask(ID3D12GraphicsCommandList1* self, UINT Mask, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_WriteBufferImmediate(ID3D12GraphicsCommandList2* self, UINT Count, const D3D12_WRITEBUFFERIMMEDIATE_PARAMETER * pParams, const D3D12_WRITEBUFFERIMMEDIATE_MODE * pModes, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12graphicscommandlist2
namespace id3d12commandqueue {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UpdateTileMappings(ID3D12CommandQueue* self, ID3D12Resource * pResource, UINT NumResourceRegions, const D3D12_TILED_RESOURCE_COORDINATE * pResourceRegionStartCoordinates, const D3D12_TILE_REGION_SIZE * pResourceRegionSizes, ID3D12Heap * pHeap, UINT NumRanges, const D3D12_TILE_RANGE_FLAGS * pRangeFlags, const UINT * pHeapRangeStartOffsets, const UINT * pRangeTileCounts, D3D12_TILE_MAPPING_FLAGS Flags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyTileMappings(ID3D12CommandQueue* self, ID3D12Resource * pDstResource, const D3D12_TILED_RESOURCE_COORDINATE * pDstRegionStartCoordinate, ID3D12Resource * pSrcResource, const D3D12_TILED_RESOURCE_COORDINATE * pSrcRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pRegionSize, D3D12_TILE_MAPPING_FLAGS Flags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ExecuteCommandLists(ID3D12CommandQueue* self, UINT NumCommandLists, ID3D12CommandList *const * ppCommandLists, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetMarker(ID3D12CommandQueue* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_BeginEvent(ID3D12CommandQueue* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EndEvent(ID3D12CommandQueue* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Signal(ID3D12CommandQueue* self, ID3D12Fence * pFence, UINT64 Value, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Wait(ID3D12CommandQueue* self, ID3D12Fence * pFence, UINT64 Value, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetTimestampFrequency(ID3D12CommandQueue* self, UINT64 * pFrequency, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetClockCalibration(ID3D12CommandQueue* self, UINT64 * pGpuTimestamp, UINT64 * pCpuTimestamp, struct ::GPADispatchTable const*& tlsRef);

D3D12_COMMAND_QUEUE_DESC* WINAPI Passthrough_GetDesc(ID3D12CommandQueue* self, D3D12_COMMAND_QUEUE_DESC* outReturnValue, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12commandqueue
namespace id3d12device {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetNodeCount(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandQueue(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandAllocator(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGraphicsPipelineState(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateComputePipelineState(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandList(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFeatureSupport(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDescriptorHeap(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetDescriptorHandleIncrementSize(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRootSignature(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateConstantBufferView(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateShaderResourceView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateUnorderedAccessView(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateRenderTargetView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateDepthStencilView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateSampler(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyDescriptors(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyDescriptorsSimple(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);

D3D12_RESOURCE_ALLOCATION_INFO* WINAPI Passthrough_GetResourceAllocationInfo(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, struct ::GPADispatchTable const*& tlsRef);

D3D12_HEAP_PROPERTIES* WINAPI Passthrough_GetCustomHeapProperties(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommittedResource(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateHeap(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePlacedResource(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateReservedResource(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSharedHandle(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedHandle(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedHandleByName(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_MakeResident(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Evict(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateFence(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDeviceRemovedReason(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetCopyableFootprints(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateQueryHeap(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetStablePowerState(ID3D12Device* self, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandSignature(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResourceTiling(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);

LUID* WINAPI Passthrough_GetAdapterLuid(ID3D12Device* self, LUID* outReturnValue, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12device
namespace id3d12pipelinelibrary {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_StorePipeline(ID3D12PipelineLibrary* self, LPCWSTR pName, ID3D12PipelineState * pPipeline, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_LoadGraphicsPipeline(ID3D12PipelineLibrary* self, LPCWSTR pName, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_LoadComputePipeline(ID3D12PipelineLibrary* self, LPCWSTR pName, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

SIZE_T WINAPI Passthrough_GetSerializedSize(ID3D12PipelineLibrary* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Serialize(ID3D12PipelineLibrary* self, void * pData, SIZE_T DataSizeInBytes, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12pipelinelibrary
namespace id3d12pipelinelibrary1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_StorePipeline(ID3D12PipelineLibrary* self, LPCWSTR pName, ID3D12PipelineState * pPipeline, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_LoadGraphicsPipeline(ID3D12PipelineLibrary* self, LPCWSTR pName, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_LoadComputePipeline(ID3D12PipelineLibrary* self, LPCWSTR pName, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

SIZE_T WINAPI Passthrough_GetSerializedSize(ID3D12PipelineLibrary* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Serialize(ID3D12PipelineLibrary* self, void * pData, SIZE_T DataSizeInBytes, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_LoadPipeline(ID3D12PipelineLibrary1* self, LPCWSTR pName, const D3D12_PIPELINE_STATE_STREAM_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12pipelinelibrary1
namespace id3d12device1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetNodeCount(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandQueue(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandAllocator(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGraphicsPipelineState(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateComputePipelineState(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandList(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFeatureSupport(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDescriptorHeap(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetDescriptorHandleIncrementSize(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRootSignature(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateConstantBufferView(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateShaderResourceView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateUnorderedAccessView(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateRenderTargetView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateDepthStencilView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateSampler(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyDescriptors(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyDescriptorsSimple(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);

D3D12_RESOURCE_ALLOCATION_INFO* WINAPI Passthrough_GetResourceAllocationInfo(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, struct ::GPADispatchTable const*& tlsRef);

D3D12_HEAP_PROPERTIES* WINAPI Passthrough_GetCustomHeapProperties(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommittedResource(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateHeap(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePlacedResource(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateReservedResource(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSharedHandle(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedHandle(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedHandleByName(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_MakeResident(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Evict(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateFence(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDeviceRemovedReason(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetCopyableFootprints(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateQueryHeap(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetStablePowerState(ID3D12Device* self, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandSignature(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResourceTiling(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);

LUID* WINAPI Passthrough_GetAdapterLuid(ID3D12Device* self, LUID* outReturnValue, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePipelineLibrary(ID3D12Device1* self, const void * pLibraryBlob, SIZE_T BlobLength, const IID & riid, void ** ppPipelineLibrary, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetEventOnMultipleFenceCompletion(ID3D12Device1* self, ID3D12Fence *const * ppFences, const UINT64 * pFenceValues, UINT NumFences, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetResidencyPriority(ID3D12Device1* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, const D3D12_RESIDENCY_PRIORITY * pPriorities, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12device1
namespace id3d12device2 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetNodeCount(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandQueue(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandAllocator(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGraphicsPipelineState(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateComputePipelineState(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandList(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFeatureSupport(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDescriptorHeap(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetDescriptorHandleIncrementSize(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRootSignature(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateConstantBufferView(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateShaderResourceView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateUnorderedAccessView(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateRenderTargetView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateDepthStencilView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateSampler(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyDescriptors(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyDescriptorsSimple(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);

D3D12_RESOURCE_ALLOCATION_INFO* WINAPI Passthrough_GetResourceAllocationInfo(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, struct ::GPADispatchTable const*& tlsRef);

D3D12_HEAP_PROPERTIES* WINAPI Passthrough_GetCustomHeapProperties(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommittedResource(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateHeap(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePlacedResource(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateReservedResource(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSharedHandle(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedHandle(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedHandleByName(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_MakeResident(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Evict(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateFence(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDeviceRemovedReason(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetCopyableFootprints(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateQueryHeap(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetStablePowerState(ID3D12Device* self, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandSignature(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResourceTiling(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);

LUID* WINAPI Passthrough_GetAdapterLuid(ID3D12Device* self, LUID* outReturnValue, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePipelineLibrary(ID3D12Device1* self, const void * pLibraryBlob, SIZE_T BlobLength, const IID & riid, void ** ppPipelineLibrary, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetEventOnMultipleFenceCompletion(ID3D12Device1* self, ID3D12Fence *const * ppFences, const UINT64 * pFenceValues, UINT NumFences, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetResidencyPriority(ID3D12Device1* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, const D3D12_RESIDENCY_PRIORITY * pPriorities, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePipelineState(ID3D12Device2* self, const D3D12_PIPELINE_STATE_STREAM_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12device2
namespace id3d12device3 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetNodeCount(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandQueue(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandAllocator(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGraphicsPipelineState(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateComputePipelineState(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandList(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFeatureSupport(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDescriptorHeap(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetDescriptorHandleIncrementSize(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRootSignature(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateConstantBufferView(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateShaderResourceView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateUnorderedAccessView(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateRenderTargetView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateDepthStencilView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateSampler(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyDescriptors(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyDescriptorsSimple(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);

D3D12_RESOURCE_ALLOCATION_INFO* WINAPI Passthrough_GetResourceAllocationInfo(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, struct ::GPADispatchTable const*& tlsRef);

D3D12_HEAP_PROPERTIES* WINAPI Passthrough_GetCustomHeapProperties(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommittedResource(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateHeap(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePlacedResource(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateReservedResource(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSharedHandle(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedHandle(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedHandleByName(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_MakeResident(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Evict(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateFence(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDeviceRemovedReason(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetCopyableFootprints(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateQueryHeap(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetStablePowerState(ID3D12Device* self, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandSignature(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResourceTiling(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);

LUID* WINAPI Passthrough_GetAdapterLuid(ID3D12Device* self, LUID* outReturnValue, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePipelineLibrary(ID3D12Device1* self, const void * pLibraryBlob, SIZE_T BlobLength, const IID & riid, void ** ppPipelineLibrary, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetEventOnMultipleFenceCompletion(ID3D12Device1* self, ID3D12Fence *const * ppFences, const UINT64 * pFenceValues, UINT NumFences, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetResidencyPriority(ID3D12Device1* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, const D3D12_RESIDENCY_PRIORITY * pPriorities, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePipelineState(ID3D12Device2* self, const D3D12_PIPELINE_STATE_STREAM_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenExistingHeapFromAddress(ID3D12Device3* self, const void * pAddress, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenExistingHeapFromFileMapping(ID3D12Device3* self, HANDLE hFileMapping, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnqueueMakeResident(ID3D12Device3* self, D3D12_RESIDENCY_FLAGS Flags, UINT NumObjects, ID3D12Pageable *const * ppObjects, ID3D12Fence * pFenceToSignal, UINT64 FenceValueToSignal, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12device3
namespace id3d12protectedsession {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetStatusFence(ID3D12ProtectedSession* self, const IID & riid, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);

D3D12_PROTECTED_SESSION_STATUS WINAPI Passthrough_GetSessionStatus(ID3D12ProtectedSession* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12protectedsession
namespace id3d12protectedresourcesession {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetStatusFence(ID3D12ProtectedSession* self, const IID & riid, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);

D3D12_PROTECTED_SESSION_STATUS WINAPI Passthrough_GetSessionStatus(ID3D12ProtectedSession* self, struct ::GPADispatchTable const*& tlsRef);

D3D12_PROTECTED_RESOURCE_SESSION_DESC* WINAPI Passthrough_GetDesc(ID3D12ProtectedResourceSession* self, D3D12_PROTECTED_RESOURCE_SESSION_DESC* outReturnValue, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12protectedresourcesession
namespace id3d12device4 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetNodeCount(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandQueue(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandAllocator(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGraphicsPipelineState(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateComputePipelineState(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandList(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFeatureSupport(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDescriptorHeap(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetDescriptorHandleIncrementSize(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRootSignature(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateConstantBufferView(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateShaderResourceView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateUnorderedAccessView(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateRenderTargetView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateDepthStencilView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateSampler(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyDescriptors(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyDescriptorsSimple(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);

D3D12_RESOURCE_ALLOCATION_INFO* WINAPI Passthrough_GetResourceAllocationInfo(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, struct ::GPADispatchTable const*& tlsRef);

D3D12_HEAP_PROPERTIES* WINAPI Passthrough_GetCustomHeapProperties(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommittedResource(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateHeap(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePlacedResource(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateReservedResource(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSharedHandle(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedHandle(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedHandleByName(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_MakeResident(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Evict(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateFence(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDeviceRemovedReason(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetCopyableFootprints(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateQueryHeap(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetStablePowerState(ID3D12Device* self, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandSignature(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResourceTiling(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);

LUID* WINAPI Passthrough_GetAdapterLuid(ID3D12Device* self, LUID* outReturnValue, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePipelineLibrary(ID3D12Device1* self, const void * pLibraryBlob, SIZE_T BlobLength, const IID & riid, void ** ppPipelineLibrary, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetEventOnMultipleFenceCompletion(ID3D12Device1* self, ID3D12Fence *const * ppFences, const UINT64 * pFenceValues, UINT NumFences, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetResidencyPriority(ID3D12Device1* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, const D3D12_RESIDENCY_PRIORITY * pPriorities, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePipelineState(ID3D12Device2* self, const D3D12_PIPELINE_STATE_STREAM_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenExistingHeapFromAddress(ID3D12Device3* self, const void * pAddress, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenExistingHeapFromFileMapping(ID3D12Device3* self, HANDLE hFileMapping, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnqueueMakeResident(ID3D12Device3* self, D3D12_RESIDENCY_FLAGS Flags, UINT NumObjects, ID3D12Pageable *const * ppObjects, ID3D12Fence * pFenceToSignal, UINT64 FenceValueToSignal, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandList1(ID3D12Device4* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, D3D12_COMMAND_LIST_FLAGS flags, const IID & riid, void ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateProtectedResourceSession(ID3D12Device4* self, const D3D12_PROTECTED_RESOURCE_SESSION_DESC * pDesc, const IID & riid, void ** ppSession, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommittedResource1(ID3D12Device4* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riidResource, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateHeap1(ID3D12Device4* self, const D3D12_HEAP_DESC * pDesc, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateReservedResource1(ID3D12Device4* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

D3D12_RESOURCE_ALLOCATION_INFO* WINAPI Passthrough_GetResourceAllocationInfo1(ID3D12Device4* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, D3D12_RESOURCE_ALLOCATION_INFO1 * pResourceAllocationInfo1, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12device4
namespace id3d12lifetimeowner {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_LifetimeStateUpdated(ID3D12LifetimeOwner* self, D3D12_LIFETIME_STATE NewState, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12lifetimeowner
namespace id3d12swapchainassistant {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

LUID* WINAPI Passthrough_GetLUID(ID3D12SwapChainAssistant* self, LUID* outReturnValue, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetSwapChainObject(ID3D12SwapChainAssistant* self, const IID & riid, void ** ppv, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetCurrentResourceAndCommandQueue(ID3D12SwapChainAssistant* self, const IID & riidResource, void ** ppvResource, const IID & riidQueue, void ** ppvQueue, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_InsertImplicitSync(ID3D12SwapChainAssistant* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12swapchainassistant
namespace id3d12lifetimetracker {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DestroyOwnedObject(ID3D12LifetimeTracker* self, ID3D12DeviceChild * pObject, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12lifetimetracker
namespace id3d12stateobject {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12stateobject
namespace id3d12stateobjectproperties {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void * WINAPI Passthrough_GetShaderIdentifier(ID3D12StateObjectProperties* self, LPCWSTR pExportName, struct ::GPADispatchTable const*& tlsRef);

UINT64 WINAPI Passthrough_GetShaderStackSize(ID3D12StateObjectProperties* self, LPCWSTR pExportName, struct ::GPADispatchTable const*& tlsRef);

UINT64 WINAPI Passthrough_GetPipelineStackSize(ID3D12StateObjectProperties* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPipelineStackSize(ID3D12StateObjectProperties* self, UINT64 PipelineStackSizeInBytes, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12stateobjectproperties
namespace id3d12device5 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetNodeCount(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandQueue(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandAllocator(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateGraphicsPipelineState(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateComputePipelineState(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandList(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFeatureSupport(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDescriptorHeap(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetDescriptorHandleIncrementSize(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateRootSignature(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateConstantBufferView(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateShaderResourceView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateUnorderedAccessView(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateRenderTargetView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateDepthStencilView(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CreateSampler(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyDescriptors(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyDescriptorsSimple(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);

D3D12_RESOURCE_ALLOCATION_INFO* WINAPI Passthrough_GetResourceAllocationInfo(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, struct ::GPADispatchTable const*& tlsRef);

D3D12_HEAP_PROPERTIES* WINAPI Passthrough_GetCustomHeapProperties(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommittedResource(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateHeap(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePlacedResource(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateReservedResource(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSharedHandle(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedHandle(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenSharedHandleByName(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_MakeResident(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Evict(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateFence(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDeviceRemovedReason(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetCopyableFootprints(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateQueryHeap(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetStablePowerState(ID3D12Device* self, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandSignature(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetResourceTiling(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);

LUID* WINAPI Passthrough_GetAdapterLuid(ID3D12Device* self, LUID* outReturnValue, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePipelineLibrary(ID3D12Device1* self, const void * pLibraryBlob, SIZE_T BlobLength, const IID & riid, void ** ppPipelineLibrary, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetEventOnMultipleFenceCompletion(ID3D12Device1* self, ID3D12Fence *const * ppFences, const UINT64 * pFenceValues, UINT NumFences, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetResidencyPriority(ID3D12Device1* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, const D3D12_RESIDENCY_PRIORITY * pPriorities, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreatePipelineState(ID3D12Device2* self, const D3D12_PIPELINE_STATE_STREAM_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenExistingHeapFromAddress(ID3D12Device3* self, const void * pAddress, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OpenExistingHeapFromFileMapping(ID3D12Device3* self, HANDLE hFileMapping, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnqueueMakeResident(ID3D12Device3* self, D3D12_RESIDENCY_FLAGS Flags, UINT NumObjects, ID3D12Pageable *const * ppObjects, ID3D12Fence * pFenceToSignal, UINT64 FenceValueToSignal, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommandList1(ID3D12Device4* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, D3D12_COMMAND_LIST_FLAGS flags, const IID & riid, void ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateProtectedResourceSession(ID3D12Device4* self, const D3D12_PROTECTED_RESOURCE_SESSION_DESC * pDesc, const IID & riid, void ** ppSession, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateCommittedResource1(ID3D12Device4* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riidResource, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateHeap1(ID3D12Device4* self, const D3D12_HEAP_DESC * pDesc, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateReservedResource1(ID3D12Device4* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);

D3D12_RESOURCE_ALLOCATION_INFO* WINAPI Passthrough_GetResourceAllocationInfo1(ID3D12Device4* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, D3D12_RESOURCE_ALLOCATION_INFO1 * pResourceAllocationInfo1, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateLifetimeTracker(ID3D12Device5* self, ID3D12LifetimeOwner * pOwner, const IID & riid, void ** ppvTracker, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RemoveDevice(ID3D12Device5* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumerateMetaCommands(ID3D12Device5* self, UINT * pNumMetaCommands, D3D12_META_COMMAND_DESC * pDescs, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumerateMetaCommandParameters(ID3D12Device5* self, const GUID & CommandId, D3D12_META_COMMAND_PARAMETER_STAGE Stage, UINT * pTotalStructureSizeInBytes, UINT * pParameterCount, D3D12_META_COMMAND_PARAMETER_DESC * pParameterDescs, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateMetaCommand(ID3D12Device5* self, const GUID & CommandId, UINT NodeMask, const void * pCreationParametersData, SIZE_T CreationParametersDataSizeInBytes, const IID & riid, void ** ppMetaCommand, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateStateObject(ID3D12Device5* self, const D3D12_STATE_OBJECT_DESC * pDesc, const IID & riid, void ** ppStateObject, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetRaytracingAccelerationStructurePrebuildInfo(ID3D12Device5* self, const D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS * pDesc, D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO * pInfo, struct ::GPADispatchTable const*& tlsRef);

D3D12_DRIVER_MATCHING_IDENTIFIER_STATUS WINAPI Passthrough_CheckDriverMatchingIdentifier(ID3D12Device5* self, D3D12_SERIALIZED_DATA_TYPE SerializedDataType, const D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER * pIdentifierToCheck, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12device5
namespace id3d12resource1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Map(ID3D12Resource* self, UINT Subresource, const D3D12_RANGE * pReadRange, void ** ppData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Unmap(ID3D12Resource* self, UINT Subresource, const D3D12_RANGE * pWrittenRange, struct ::GPADispatchTable const*& tlsRef);

D3D12_RESOURCE_DESC* WINAPI Passthrough_GetDesc(ID3D12Resource* self, D3D12_RESOURCE_DESC* outReturnValue, struct ::GPADispatchTable const*& tlsRef);

D3D12_GPU_VIRTUAL_ADDRESS WINAPI Passthrough_GetGPUVirtualAddress(ID3D12Resource* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_WriteToSubresource(ID3D12Resource* self, UINT DstSubresource, const D3D12_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ReadFromSubresource(ID3D12Resource* self, void * pDstData, UINT DstRowPitch, UINT DstDepthPitch, UINT SrcSubresource, const D3D12_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetHeapProperties(ID3D12Resource* self, D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS * pHeapFlags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetProtectedResourceSession(ID3D12Resource1* self, const IID & riid, void ** ppProtectedSession, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12resource1
namespace id3d12heap1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

D3D12_HEAP_DESC* WINAPI Passthrough_GetDesc(ID3D12Heap* self, D3D12_HEAP_DESC* outReturnValue, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetProtectedResourceSession(ID3D12Heap1* self, const IID & riid, void ** ppProtectedSession, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12heap1
namespace id3d12graphicscommandlist3 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

D3D12_COMMAND_LIST_TYPE WINAPI Passthrough_GetType(ID3D12CommandList* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Close(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Reset(ID3D12GraphicsCommandList* self, ID3D12CommandAllocator * pAllocator, ID3D12PipelineState * pInitialState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearState(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawInstanced(ID3D12GraphicsCommandList* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexedInstanced(ID3D12GraphicsCommandList* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Dispatch(ID3D12GraphicsCommandList* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyBufferRegion(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT64 NumBytes, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyTextureRegion(ID3D12GraphicsCommandList* self, const D3D12_TEXTURE_COPY_LOCATION * pDst, UINT DstX, UINT DstY, UINT DstZ, const D3D12_TEXTURE_COPY_LOCATION * pSrc, const D3D12_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyResource(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, ID3D12Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyTiles(ID3D12GraphicsCommandList* self, ID3D12Resource * pTiledResource, const D3D12_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pTileRegionSize, ID3D12Resource * pBuffer, UINT64 BufferStartOffsetInBytes, D3D12_TILE_COPY_FLAGS Flags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveSubresource(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, UINT DstSubresource, ID3D12Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetPrimitiveTopology(ID3D12GraphicsCommandList* self, D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetViewports(ID3D12GraphicsCommandList* self, UINT NumViewports, const D3D12_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetScissorRects(ID3D12GraphicsCommandList* self, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetBlendFactor(ID3D12GraphicsCommandList* self, const FLOAT  BlendFactor[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetStencilRef(ID3D12GraphicsCommandList* self, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPipelineState(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResourceBarrier(ID3D12GraphicsCommandList* self, UINT NumBarriers, const D3D12_RESOURCE_BARRIER * pBarriers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ExecuteBundle(ID3D12GraphicsCommandList* self, ID3D12GraphicsCommandList * pCommandList, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetDescriptorHeaps(ID3D12GraphicsCommandList* self, UINT NumDescriptorHeaps, ID3D12DescriptorHeap *const * ppDescriptorHeaps, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootSignature(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootSignature(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootDescriptorTable(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootDescriptorTable(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRoot32BitConstant(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRoot32BitConstant(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRoot32BitConstants(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRoot32BitConstants(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootConstantBufferView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootConstantBufferView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootShaderResourceView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootShaderResourceView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootUnorderedAccessView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootUnorderedAccessView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetIndexBuffer(ID3D12GraphicsCommandList* self, const D3D12_INDEX_BUFFER_VIEW * pView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetVertexBuffers(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_VERTEX_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOSetTargets(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_STREAM_OUTPUT_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetRenderTargets(ID3D12GraphicsCommandList* self, UINT NumRenderTargetDescriptors, const D3D12_CPU_DESCRIPTOR_HANDLE * pRenderTargetDescriptors, BOOL RTsSingleHandleToDescriptorRange, const D3D12_CPU_DESCRIPTOR_HANDLE * pDepthStencilDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearDepthStencilView(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView, D3D12_CLEAR_FLAGS ClearFlags, FLOAT Depth, UINT8 Stencil, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearRenderTargetView(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView, const FLOAT  ColorRGBA[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewUint(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const UINT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewFloat(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const FLOAT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DiscardResource(ID3D12GraphicsCommandList* self, ID3D12Resource * pResource, const D3D12_DISCARD_REGION * pRegion, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_BeginQuery(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EndQuery(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveQueryData(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT StartIndex, UINT NumQueries, ID3D12Resource * pDestinationBuffer, UINT64 AlignedDestinationBufferOffset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPredication(ID3D12GraphicsCommandList* self, ID3D12Resource * pBuffer, UINT64 AlignedBufferOffset, D3D12_PREDICATION_OP Operation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetMarker(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_BeginEvent(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EndEvent(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ExecuteIndirect(ID3D12GraphicsCommandList* self, ID3D12CommandSignature * pCommandSignature, UINT MaxCommandCount, ID3D12Resource * pArgumentBuffer, UINT64 ArgumentBufferOffset, ID3D12Resource * pCountBuffer, UINT64 CountBufferOffset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_AtomicCopyBufferUINT(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_AtomicCopyBufferUINT64(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetDepthBounds(ID3D12GraphicsCommandList1* self, FLOAT Min, FLOAT Max, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetSamplePositions(ID3D12GraphicsCommandList1* self, UINT NumSamplesPerPixel, UINT NumPixels, D3D12_SAMPLE_POSITION * pSamplePositions, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveSubresourceRegion(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, ID3D12Resource * pSrcResource, UINT SrcSubresource, D3D12_RECT * pSrcRect, DXGI_FORMAT Format, D3D12_RESOLVE_MODE ResolveMode, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetViewInstanceMask(ID3D12GraphicsCommandList1* self, UINT Mask, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_WriteBufferImmediate(ID3D12GraphicsCommandList2* self, UINT Count, const D3D12_WRITEBUFFERIMMEDIATE_PARAMETER * pParams, const D3D12_WRITEBUFFERIMMEDIATE_MODE * pModes, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetProtectedResourceSession(ID3D12GraphicsCommandList3* self, ID3D12ProtectedResourceSession * pProtectedResourceSession, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12graphicscommandlist3
namespace id3d12metacommand {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

UINT64 WINAPI Passthrough_GetRequiredParameterResourceSize(ID3D12MetaCommand* self, D3D12_META_COMMAND_PARAMETER_STAGE Stage, UINT ParameterIndex, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12metacommand
namespace id3d12graphicscommandlist4 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetName(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);

D3D12_COMMAND_LIST_TYPE WINAPI Passthrough_GetType(ID3D12CommandList* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Close(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Reset(ID3D12GraphicsCommandList* self, ID3D12CommandAllocator * pAllocator, ID3D12PipelineState * pInitialState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearState(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawInstanced(ID3D12GraphicsCommandList* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DrawIndexedInstanced(ID3D12GraphicsCommandList* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Dispatch(ID3D12GraphicsCommandList* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyBufferRegion(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT64 NumBytes, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyTextureRegion(ID3D12GraphicsCommandList* self, const D3D12_TEXTURE_COPY_LOCATION * pDst, UINT DstX, UINT DstY, UINT DstZ, const D3D12_TEXTURE_COPY_LOCATION * pSrc, const D3D12_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyResource(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, ID3D12Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyTiles(ID3D12GraphicsCommandList* self, ID3D12Resource * pTiledResource, const D3D12_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pTileRegionSize, ID3D12Resource * pBuffer, UINT64 BufferStartOffsetInBytes, D3D12_TILE_COPY_FLAGS Flags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveSubresource(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, UINT DstSubresource, ID3D12Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetPrimitiveTopology(ID3D12GraphicsCommandList* self, D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetViewports(ID3D12GraphicsCommandList* self, UINT NumViewports, const D3D12_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_RSSetScissorRects(ID3D12GraphicsCommandList* self, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetBlendFactor(ID3D12GraphicsCommandList* self, const FLOAT  BlendFactor[4], struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetStencilRef(ID3D12GraphicsCommandList* self, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPipelineState(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResourceBarrier(ID3D12GraphicsCommandList* self, UINT NumBarriers, const D3D12_RESOURCE_BARRIER * pBarriers, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ExecuteBundle(ID3D12GraphicsCommandList* self, ID3D12GraphicsCommandList * pCommandList, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetDescriptorHeaps(ID3D12GraphicsCommandList* self, UINT NumDescriptorHeaps, ID3D12DescriptorHeap *const * ppDescriptorHeaps, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootSignature(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootSignature(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootDescriptorTable(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootDescriptorTable(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRoot32BitConstant(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRoot32BitConstant(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRoot32BitConstants(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRoot32BitConstants(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootConstantBufferView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootConstantBufferView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootShaderResourceView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootShaderResourceView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetComputeRootUnorderedAccessView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetGraphicsRootUnorderedAccessView(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetIndexBuffer(ID3D12GraphicsCommandList* self, const D3D12_INDEX_BUFFER_VIEW * pView, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_IASetVertexBuffers(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_VERTEX_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SOSetTargets(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_STREAM_OUTPUT_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetRenderTargets(ID3D12GraphicsCommandList* self, UINT NumRenderTargetDescriptors, const D3D12_CPU_DESCRIPTOR_HANDLE * pRenderTargetDescriptors, BOOL RTsSingleHandleToDescriptorRange, const D3D12_CPU_DESCRIPTOR_HANDLE * pDepthStencilDescriptor, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearDepthStencilView(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView, D3D12_CLEAR_FLAGS ClearFlags, FLOAT Depth, UINT8 Stencil, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearRenderTargetView(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView, const FLOAT  ColorRGBA[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewUint(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const UINT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ClearUnorderedAccessViewFloat(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const FLOAT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DiscardResource(ID3D12GraphicsCommandList* self, ID3D12Resource * pResource, const D3D12_DISCARD_REGION * pRegion, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_BeginQuery(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EndQuery(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveQueryData(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT StartIndex, UINT NumQueries, ID3D12Resource * pDestinationBuffer, UINT64 AlignedDestinationBufferOffset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPredication(ID3D12GraphicsCommandList* self, ID3D12Resource * pBuffer, UINT64 AlignedBufferOffset, D3D12_PREDICATION_OP Operation, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetMarker(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_BeginEvent(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EndEvent(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ExecuteIndirect(ID3D12GraphicsCommandList* self, ID3D12CommandSignature * pCommandSignature, UINT MaxCommandCount, ID3D12Resource * pArgumentBuffer, UINT64 ArgumentBufferOffset, ID3D12Resource * pCountBuffer, UINT64 CountBufferOffset, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_AtomicCopyBufferUINT(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_AtomicCopyBufferUINT64(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_OMSetDepthBounds(ID3D12GraphicsCommandList1* self, FLOAT Min, FLOAT Max, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetSamplePositions(ID3D12GraphicsCommandList1* self, UINT NumSamplesPerPixel, UINT NumPixels, D3D12_SAMPLE_POSITION * pSamplePositions, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ResolveSubresourceRegion(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, ID3D12Resource * pSrcResource, UINT SrcSubresource, D3D12_RECT * pSrcRect, DXGI_FORMAT Format, D3D12_RESOLVE_MODE ResolveMode, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetViewInstanceMask(ID3D12GraphicsCommandList1* self, UINT Mask, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_WriteBufferImmediate(ID3D12GraphicsCommandList2* self, UINT Count, const D3D12_WRITEBUFFERIMMEDIATE_PARAMETER * pParams, const D3D12_WRITEBUFFERIMMEDIATE_MODE * pModes, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetProtectedResourceSession(ID3D12GraphicsCommandList3* self, ID3D12ProtectedResourceSession * pProtectedResourceSession, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_BeginRenderPass(ID3D12GraphicsCommandList4* self, UINT NumRenderTargets, const D3D12_RENDER_PASS_RENDER_TARGET_DESC * pRenderTargets, const D3D12_RENDER_PASS_DEPTH_STENCIL_DESC * pDepthStencil, D3D12_RENDER_PASS_FLAGS Flags, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EndRenderPass(ID3D12GraphicsCommandList4* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_InitializeMetaCommand(ID3D12GraphicsCommandList4* self, ID3D12MetaCommand * pMetaCommand, const void * pInitializationParametersData, SIZE_T InitializationParametersDataSizeInBytes, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ExecuteMetaCommand(ID3D12GraphicsCommandList4* self, ID3D12MetaCommand * pMetaCommand, const void * pExecutionParametersData, SIZE_T ExecutionParametersDataSizeInBytes, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_BuildRaytracingAccelerationStructure(ID3D12GraphicsCommandList4* self, const D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC * pDesc, UINT NumPostbuildInfoDescs, const D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC * pPostbuildInfoDescs, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EmitRaytracingAccelerationStructurePostbuildInfo(ID3D12GraphicsCommandList4* self, const D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC * pDesc, UINT NumSourceAccelerationStructures, const D3D12_GPU_VIRTUAL_ADDRESS * pSourceAccelerationStructureData, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_CopyRaytracingAccelerationStructure(ID3D12GraphicsCommandList4* self, D3D12_GPU_VIRTUAL_ADDRESS DestAccelerationStructureData, D3D12_GPU_VIRTUAL_ADDRESS SourceAccelerationStructureData, D3D12_RAYTRACING_ACCELERATION_STRUCTURE_COPY_MODE Mode, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetPipelineState1(ID3D12GraphicsCommandList4* self, ID3D12StateObject * pStateObject, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_DispatchRays(ID3D12GraphicsCommandList4* self, const D3D12_DISPATCH_RAYS_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12graphicscommandlist4
namespace id3d12tools {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_EnableShaderInstrumentation(ID3D12Tools* self, BOOL bEnable, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_ShaderInstrumentationEnabled(ID3D12Tools* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace id3d12tools
namespace idxgiobject {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgiobject
namespace idxgidevicesubobject {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgidevicesubobject
namespace idxgiresource {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetSharedHandle(IDXGIResource* self, HANDLE * pSharedHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetUsage(IDXGIResource* self, DXGI_USAGE * pUsage, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetEvictionPriority(IDXGIResource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetEvictionPriority(IDXGIResource* self, UINT * pEvictionPriority, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgiresource
namespace idxgikeyedmutex {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_AcquireSync(IDXGIKeyedMutex* self, UINT64 Key, DWORD dwMilliseconds, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ReleaseSync(IDXGIKeyedMutex* self, UINT64 Key, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgikeyedmutex
namespace idxgisurface {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGISurface* self, DXGI_SURFACE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Map(IDXGISurface* self, DXGI_MAPPED_RECT * pLockedRect, UINT MapFlags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Unmap(IDXGISurface* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgisurface
namespace idxgisurface1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGISurface* self, DXGI_SURFACE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Map(IDXGISurface* self, DXGI_MAPPED_RECT * pLockedRect, UINT MapFlags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Unmap(IDXGISurface* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDC(IDXGISurface1* self, BOOL Discard, HDC * phdc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ReleaseDC(IDXGISurface1* self, RECT * pDirtyRect, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgisurface1
namespace idxgiadapter {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumOutputs(IDXGIAdapter* self, UINT Output, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGIAdapter* self, DXGI_ADAPTER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckInterfaceSupport(IDXGIAdapter* self, const GUID & InterfaceName, LARGE_INTEGER * pUMDVersion, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgiadapter
namespace idxgioutput {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplayModeList(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FindClosestMatchingMode(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_WaitForVBlank(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_TakeOwnership(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ReleaseOwnership(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGammaControlCapabilities(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetGammaControl(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGammaControl(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetDisplaySurface(IDXGIOutput* self, IDXGISurface * pScanoutSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplaySurfaceData(IDXGIOutput* self, IDXGISurface * pDestination, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFrameStatistics(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgioutput
namespace idxgiswapchain {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Present(IDXGISwapChain* self, UINT SyncInterval, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetBuffer(IDXGISwapChain* self, UINT Buffer, const IID & riid, void ** ppSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetFullscreenState(IDXGISwapChain* self, BOOL Fullscreen, IDXGIOutput * pTarget, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFullscreenState(IDXGISwapChain* self, BOOL * pFullscreen, IDXGIOutput ** ppTarget, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGISwapChain* self, DXGI_SWAP_CHAIN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ResizeBuffers(IDXGISwapChain* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ResizeTarget(IDXGISwapChain* self, const DXGI_MODE_DESC * pNewTargetParameters, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetContainingOutput(IDXGISwapChain* self, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFrameStatistics(IDXGISwapChain* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetLastPresentCount(IDXGISwapChain* self, UINT * pLastPresentCount, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgiswapchain
namespace idxgifactory {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapters(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_MakeWindowAssociation(IDXGIFactory* self, HWND WindowHandle, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetWindowAssociation(IDXGIFactory* self, HWND * pWindowHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChain(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSoftwareAdapter(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgifactory
namespace idxgidevice {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetAdapter(IDXGIDevice* self, IDXGIAdapter ** pAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSurface(IDXGIDevice* self, const DXGI_SURFACE_DESC * pDesc, UINT NumSurfaces, DXGI_USAGE Usage, const DXGI_SHARED_RESOURCE * pSharedResource, IDXGISurface ** ppSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_QueryResourceResidency(IDXGIDevice* self, IUnknown *const * ppResources, DXGI_RESIDENCY * pResidencyStatus, UINT NumResources, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetGPUThreadPriority(IDXGIDevice* self, INT Priority, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGPUThreadPriority(IDXGIDevice* self, INT * pPriority, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgidevice
namespace idxgifactory1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapters(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_MakeWindowAssociation(IDXGIFactory* self, HWND WindowHandle, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetWindowAssociation(IDXGIFactory* self, HWND * pWindowHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChain(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSoftwareAdapter(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapters1(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsCurrent(IDXGIFactory1* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgifactory1
namespace idxgiadapter1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumOutputs(IDXGIAdapter* self, UINT Output, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGIAdapter* self, DXGI_ADAPTER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckInterfaceSupport(IDXGIAdapter* self, const GUID & InterfaceName, LARGE_INTEGER * pUMDVersion, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc1(IDXGIAdapter1* self, DXGI_ADAPTER_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgiadapter1
namespace idxgidevice1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetAdapter(IDXGIDevice* self, IDXGIAdapter ** pAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSurface(IDXGIDevice* self, const DXGI_SURFACE_DESC * pDesc, UINT NumSurfaces, DXGI_USAGE Usage, const DXGI_SHARED_RESOURCE * pSharedResource, IDXGISurface ** ppSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_QueryResourceResidency(IDXGIDevice* self, IUnknown *const * ppResources, DXGI_RESIDENCY * pResidencyStatus, UINT NumResources, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetGPUThreadPriority(IDXGIDevice* self, INT Priority, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGPUThreadPriority(IDXGIDevice* self, INT * pPriority, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetMaximumFrameLatency(IDXGIDevice1* self, UINT MaxLatency, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetMaximumFrameLatency(IDXGIDevice1* self, UINT * pMaxLatency, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgidevice1
namespace idxgidisplaycontrol {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsStereoEnabled(IDXGIDisplayControl* self, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_SetStereoEnabled(IDXGIDisplayControl* self, BOOL enabled, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgidisplaycontrol
namespace idxgioutputduplication {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_GetDesc(IDXGIOutputDuplication* self, DXGI_OUTDUPL_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_AcquireNextFrame(IDXGIOutputDuplication* self, UINT TimeoutInMilliseconds, DXGI_OUTDUPL_FRAME_INFO * pFrameInfo, IDXGIResource ** ppDesktopResource, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFrameDirtyRects(IDXGIOutputDuplication* self, UINT DirtyRectsBufferSize, RECT * pDirtyRectsBuffer, UINT * pDirtyRectsBufferSizeRequired, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFrameMoveRects(IDXGIOutputDuplication* self, UINT MoveRectsBufferSize, DXGI_OUTDUPL_MOVE_RECT * pMoveRectBuffer, UINT * pMoveRectsBufferSizeRequired, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFramePointerShape(IDXGIOutputDuplication* self, UINT PointerShapeBufferSize, void * pPointerShapeBuffer, UINT * pPointerShapeBufferSizeRequired, DXGI_OUTDUPL_POINTER_SHAPE_INFO * pPointerShapeInfo, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_MapDesktopSurface(IDXGIOutputDuplication* self, DXGI_MAPPED_RECT * pLockedRect, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_UnMapDesktopSurface(IDXGIOutputDuplication* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ReleaseFrame(IDXGIOutputDuplication* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgioutputduplication
namespace idxgisurface2 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGISurface* self, DXGI_SURFACE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Map(IDXGISurface* self, DXGI_MAPPED_RECT * pLockedRect, UINT MapFlags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Unmap(IDXGISurface* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDC(IDXGISurface1* self, BOOL Discard, HDC * phdc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ReleaseDC(IDXGISurface1* self, RECT * pDirtyRect, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetResource(IDXGISurface2* self, const IID & riid, void ** ppParentResource, UINT * pSubresourceIndex, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgisurface2
namespace idxgiresource1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetSharedHandle(IDXGIResource* self, HANDLE * pSharedHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetUsage(IDXGIResource* self, DXGI_USAGE * pUsage, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetEvictionPriority(IDXGIResource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetEvictionPriority(IDXGIResource* self, UINT * pEvictionPriority, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSubresourceSurface(IDXGIResource1* self, UINT index, IDXGISurface2 ** ppSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSharedHandle(IDXGIResource1* self, const SECURITY_ATTRIBUTES * pAttributes, DWORD dwAccess, LPCWSTR lpName, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgiresource1
namespace idxgidevice2 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetAdapter(IDXGIDevice* self, IDXGIAdapter ** pAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSurface(IDXGIDevice* self, const DXGI_SURFACE_DESC * pDesc, UINT NumSurfaces, DXGI_USAGE Usage, const DXGI_SHARED_RESOURCE * pSharedResource, IDXGISurface ** ppSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_QueryResourceResidency(IDXGIDevice* self, IUnknown *const * ppResources, DXGI_RESIDENCY * pResidencyStatus, UINT NumResources, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetGPUThreadPriority(IDXGIDevice* self, INT Priority, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGPUThreadPriority(IDXGIDevice* self, INT * pPriority, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetMaximumFrameLatency(IDXGIDevice1* self, UINT MaxLatency, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetMaximumFrameLatency(IDXGIDevice1* self, UINT * pMaxLatency, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OfferResources(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, DXGI_OFFER_RESOURCE_PRIORITY Priority, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ReclaimResources(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, BOOL * pDiscarded, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnqueueSetEvent(IDXGIDevice2* self, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgidevice2
namespace idxgiswapchain1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Present(IDXGISwapChain* self, UINT SyncInterval, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetBuffer(IDXGISwapChain* self, UINT Buffer, const IID & riid, void ** ppSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetFullscreenState(IDXGISwapChain* self, BOOL Fullscreen, IDXGIOutput * pTarget, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFullscreenState(IDXGISwapChain* self, BOOL * pFullscreen, IDXGIOutput ** ppTarget, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGISwapChain* self, DXGI_SWAP_CHAIN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ResizeBuffers(IDXGISwapChain* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ResizeTarget(IDXGISwapChain* self, const DXGI_MODE_DESC * pNewTargetParameters, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetContainingOutput(IDXGISwapChain* self, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFrameStatistics(IDXGISwapChain* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetLastPresentCount(IDXGISwapChain* self, UINT * pLastPresentCount, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc1(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFullscreenDesc(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetHwnd(IDXGISwapChain1* self, HWND * pHwnd, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetCoreWindow(IDXGISwapChain1* self, const IID & refiid, void ** ppUnk, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Present1(IDXGISwapChain1* self, UINT SyncInterval, UINT PresentFlags, const DXGI_PRESENT_PARAMETERS * pPresentParameters, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsTemporaryMonoSupported(IDXGISwapChain1* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetRestrictToOutput(IDXGISwapChain1* self, IDXGIOutput ** ppRestrictToOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetBackgroundColor(IDXGISwapChain1* self, const DXGI_RGBA * pColor, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetBackgroundColor(IDXGISwapChain1* self, DXGI_RGBA * pColor, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetRotation(IDXGISwapChain1* self, DXGI_MODE_ROTATION Rotation, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetRotation(IDXGISwapChain1* self, DXGI_MODE_ROTATION * pRotation, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgiswapchain1
namespace idxgifactory2 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapters(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_MakeWindowAssociation(IDXGIFactory* self, HWND WindowHandle, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetWindowAssociation(IDXGIFactory* self, HWND * pWindowHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChain(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSoftwareAdapter(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapters1(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsCurrent(IDXGIFactory1* self, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsWindowedStereoEnabled(IDXGIFactory2* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForHwnd(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForCoreWindow(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetSharedResourceAdapterLuid(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterStereoStatusWindow(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterStereoStatusEvent(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterStereoStatus(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterOcclusionStatusWindow(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterOcclusionStatusEvent(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterOcclusionStatus(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForComposition(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgifactory2
namespace idxgiadapter2 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumOutputs(IDXGIAdapter* self, UINT Output, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGIAdapter* self, DXGI_ADAPTER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckInterfaceSupport(IDXGIAdapter* self, const GUID & InterfaceName, LARGE_INTEGER * pUMDVersion, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc1(IDXGIAdapter1* self, DXGI_ADAPTER_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc2(IDXGIAdapter2* self, DXGI_ADAPTER_DESC2 * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgiadapter2
namespace idxgioutput1 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplayModeList(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FindClosestMatchingMode(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_WaitForVBlank(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_TakeOwnership(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ReleaseOwnership(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGammaControlCapabilities(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetGammaControl(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGammaControl(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetDisplaySurface(IDXGIOutput* self, IDXGISurface * pScanoutSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplaySurfaceData(IDXGIOutput* self, IDXGISurface * pDestination, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFrameStatistics(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplayModeList1(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FindClosestMatchingMode1(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplaySurfaceData1(IDXGIOutput1* self, IDXGIResource * pDestination, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DuplicateOutput(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgioutput1
namespace idxgidevice3 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetAdapter(IDXGIDevice* self, IDXGIAdapter ** pAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSurface(IDXGIDevice* self, const DXGI_SURFACE_DESC * pDesc, UINT NumSurfaces, DXGI_USAGE Usage, const DXGI_SHARED_RESOURCE * pSharedResource, IDXGISurface ** ppSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_QueryResourceResidency(IDXGIDevice* self, IUnknown *const * ppResources, DXGI_RESIDENCY * pResidencyStatus, UINT NumResources, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetGPUThreadPriority(IDXGIDevice* self, INT Priority, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGPUThreadPriority(IDXGIDevice* self, INT * pPriority, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetMaximumFrameLatency(IDXGIDevice1* self, UINT MaxLatency, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetMaximumFrameLatency(IDXGIDevice1* self, UINT * pMaxLatency, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OfferResources(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, DXGI_OFFER_RESOURCE_PRIORITY Priority, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ReclaimResources(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, BOOL * pDiscarded, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnqueueSetEvent(IDXGIDevice2* self, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Trim(IDXGIDevice3* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgidevice3
namespace idxgiswapchain2 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Present(IDXGISwapChain* self, UINT SyncInterval, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetBuffer(IDXGISwapChain* self, UINT Buffer, const IID & riid, void ** ppSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetFullscreenState(IDXGISwapChain* self, BOOL Fullscreen, IDXGIOutput * pTarget, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFullscreenState(IDXGISwapChain* self, BOOL * pFullscreen, IDXGIOutput ** ppTarget, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGISwapChain* self, DXGI_SWAP_CHAIN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ResizeBuffers(IDXGISwapChain* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ResizeTarget(IDXGISwapChain* self, const DXGI_MODE_DESC * pNewTargetParameters, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetContainingOutput(IDXGISwapChain* self, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFrameStatistics(IDXGISwapChain* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetLastPresentCount(IDXGISwapChain* self, UINT * pLastPresentCount, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc1(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFullscreenDesc(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetHwnd(IDXGISwapChain1* self, HWND * pHwnd, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetCoreWindow(IDXGISwapChain1* self, const IID & refiid, void ** ppUnk, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Present1(IDXGISwapChain1* self, UINT SyncInterval, UINT PresentFlags, const DXGI_PRESENT_PARAMETERS * pPresentParameters, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsTemporaryMonoSupported(IDXGISwapChain1* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetRestrictToOutput(IDXGISwapChain1* self, IDXGIOutput ** ppRestrictToOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetBackgroundColor(IDXGISwapChain1* self, const DXGI_RGBA * pColor, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetBackgroundColor(IDXGISwapChain1* self, DXGI_RGBA * pColor, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetRotation(IDXGISwapChain1* self, DXGI_MODE_ROTATION Rotation, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetRotation(IDXGISwapChain1* self, DXGI_MODE_ROTATION * pRotation, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetSourceSize(IDXGISwapChain2* self, UINT Width, UINT Height, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetSourceSize(IDXGISwapChain2* self, UINT * pWidth, UINT * pHeight, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetMaximumFrameLatency(IDXGISwapChain2* self, UINT MaxLatency, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetMaximumFrameLatency(IDXGISwapChain2* self, UINT * pMaxLatency, struct ::GPADispatchTable const*& tlsRef);

HANDLE WINAPI Passthrough_GetFrameLatencyWaitableObject(IDXGISwapChain2* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetMatrixTransform(IDXGISwapChain2* self, const DXGI_MATRIX_3X2_F * pMatrix, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetMatrixTransform(IDXGISwapChain2* self, DXGI_MATRIX_3X2_F * pMatrix, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgiswapchain2
namespace idxgioutput2 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplayModeList(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FindClosestMatchingMode(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_WaitForVBlank(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_TakeOwnership(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ReleaseOwnership(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGammaControlCapabilities(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetGammaControl(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGammaControl(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetDisplaySurface(IDXGIOutput* self, IDXGISurface * pScanoutSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplaySurfaceData(IDXGIOutput* self, IDXGISurface * pDestination, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFrameStatistics(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplayModeList1(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FindClosestMatchingMode1(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplaySurfaceData1(IDXGIOutput1* self, IDXGIResource * pDestination, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DuplicateOutput(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_SupportsOverlays(IDXGIOutput2* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgioutput2
namespace idxgifactory3 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapters(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_MakeWindowAssociation(IDXGIFactory* self, HWND WindowHandle, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetWindowAssociation(IDXGIFactory* self, HWND * pWindowHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChain(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSoftwareAdapter(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapters1(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsCurrent(IDXGIFactory1* self, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsWindowedStereoEnabled(IDXGIFactory2* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForHwnd(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForCoreWindow(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetSharedResourceAdapterLuid(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterStereoStatusWindow(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterStereoStatusEvent(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterStereoStatus(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterOcclusionStatusWindow(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterOcclusionStatusEvent(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterOcclusionStatus(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForComposition(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetCreationFlags(IDXGIFactory3* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgifactory3
namespace idxgidecodeswapchain {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_PresentBuffer(IDXGIDecodeSwapChain* self, UINT BufferToPresent, UINT SyncInterval, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetSourceRect(IDXGIDecodeSwapChain* self, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetTargetRect(IDXGIDecodeSwapChain* self, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetDestSize(IDXGIDecodeSwapChain* self, UINT Width, UINT Height, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetSourceRect(IDXGIDecodeSwapChain* self, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetTargetRect(IDXGIDecodeSwapChain* self, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDestSize(IDXGIDecodeSwapChain* self, UINT * pWidth, UINT * pHeight, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetColorSpace(IDXGIDecodeSwapChain* self, DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS ColorSpace, struct ::GPADispatchTable const*& tlsRef);

DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS WINAPI Passthrough_GetColorSpace(IDXGIDecodeSwapChain* self, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgidecodeswapchain
namespace idxgifactorymedia {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForCompositionSurfaceHandle(IDXGIFactoryMedia* self, IUnknown * pDevice, HANDLE hSurface, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateDecodeSwapChainForCompositionSurfaceHandle(IDXGIFactoryMedia* self, IUnknown * pDevice, HANDLE hSurface, DXGI_DECODE_SWAP_CHAIN_DESC * pDesc, IDXGIResource * pYuvDecodeBuffers, IDXGIOutput * pRestrictToOutput, IDXGIDecodeSwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgifactorymedia
namespace idxgiswapchainmedia {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFrameStatisticsMedia(IDXGISwapChainMedia* self, DXGI_FRAME_STATISTICS_MEDIA * pStats, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPresentDuration(IDXGISwapChainMedia* self, UINT Duration, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckPresentDurationSupport(IDXGISwapChainMedia* self, UINT DesiredPresentDuration, UINT * pClosestSmallerPresentDuration, UINT * pClosestLargerPresentDuration, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgiswapchainmedia
namespace idxgioutput3 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplayModeList(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FindClosestMatchingMode(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_WaitForVBlank(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_TakeOwnership(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ReleaseOwnership(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGammaControlCapabilities(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetGammaControl(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGammaControl(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetDisplaySurface(IDXGIOutput* self, IDXGISurface * pScanoutSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplaySurfaceData(IDXGIOutput* self, IDXGISurface * pDestination, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFrameStatistics(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplayModeList1(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FindClosestMatchingMode1(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplaySurfaceData1(IDXGIOutput1* self, IDXGIResource * pDestination, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DuplicateOutput(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_SupportsOverlays(IDXGIOutput2* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckOverlaySupport(IDXGIOutput3* self, DXGI_FORMAT EnumFormat, IUnknown * pConcernedDevice, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgioutput3
namespace idxgiswapchain3 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Present(IDXGISwapChain* self, UINT SyncInterval, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetBuffer(IDXGISwapChain* self, UINT Buffer, const IID & riid, void ** ppSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetFullscreenState(IDXGISwapChain* self, BOOL Fullscreen, IDXGIOutput * pTarget, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFullscreenState(IDXGISwapChain* self, BOOL * pFullscreen, IDXGIOutput ** ppTarget, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGISwapChain* self, DXGI_SWAP_CHAIN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ResizeBuffers(IDXGISwapChain* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ResizeTarget(IDXGISwapChain* self, const DXGI_MODE_DESC * pNewTargetParameters, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetContainingOutput(IDXGISwapChain* self, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFrameStatistics(IDXGISwapChain* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetLastPresentCount(IDXGISwapChain* self, UINT * pLastPresentCount, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc1(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFullscreenDesc(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetHwnd(IDXGISwapChain1* self, HWND * pHwnd, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetCoreWindow(IDXGISwapChain1* self, const IID & refiid, void ** ppUnk, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Present1(IDXGISwapChain1* self, UINT SyncInterval, UINT PresentFlags, const DXGI_PRESENT_PARAMETERS * pPresentParameters, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsTemporaryMonoSupported(IDXGISwapChain1* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetRestrictToOutput(IDXGISwapChain1* self, IDXGIOutput ** ppRestrictToOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetBackgroundColor(IDXGISwapChain1* self, const DXGI_RGBA * pColor, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetBackgroundColor(IDXGISwapChain1* self, DXGI_RGBA * pColor, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetRotation(IDXGISwapChain1* self, DXGI_MODE_ROTATION Rotation, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetRotation(IDXGISwapChain1* self, DXGI_MODE_ROTATION * pRotation, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetSourceSize(IDXGISwapChain2* self, UINT Width, UINT Height, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetSourceSize(IDXGISwapChain2* self, UINT * pWidth, UINT * pHeight, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetMaximumFrameLatency(IDXGISwapChain2* self, UINT MaxLatency, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetMaximumFrameLatency(IDXGISwapChain2* self, UINT * pMaxLatency, struct ::GPADispatchTable const*& tlsRef);

HANDLE WINAPI Passthrough_GetFrameLatencyWaitableObject(IDXGISwapChain2* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetMatrixTransform(IDXGISwapChain2* self, const DXGI_MATRIX_3X2_F * pMatrix, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetMatrixTransform(IDXGISwapChain2* self, DXGI_MATRIX_3X2_F * pMatrix, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetCurrentBackBufferIndex(IDXGISwapChain3* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckColorSpaceSupport(IDXGISwapChain3* self, DXGI_COLOR_SPACE_TYPE ColorSpace, UINT * pColorSpaceSupport, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetColorSpace1(IDXGISwapChain3* self, DXGI_COLOR_SPACE_TYPE ColorSpace, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ResizeBuffers1(IDXGISwapChain3* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT Format, UINT SwapChainFlags, const UINT * pCreationNodeMask, IUnknown *const * ppPresentQueue, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgiswapchain3
namespace idxgioutput4 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplayModeList(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FindClosestMatchingMode(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_WaitForVBlank(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_TakeOwnership(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ReleaseOwnership(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGammaControlCapabilities(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetGammaControl(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGammaControl(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetDisplaySurface(IDXGIOutput* self, IDXGISurface * pScanoutSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplaySurfaceData(IDXGIOutput* self, IDXGISurface * pDestination, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFrameStatistics(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplayModeList1(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FindClosestMatchingMode1(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplaySurfaceData1(IDXGIOutput1* self, IDXGIResource * pDestination, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DuplicateOutput(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_SupportsOverlays(IDXGIOutput2* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckOverlaySupport(IDXGIOutput3* self, DXGI_FORMAT EnumFormat, IUnknown * pConcernedDevice, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckOverlayColorSpaceSupport(IDXGIOutput4* self, DXGI_FORMAT Format, DXGI_COLOR_SPACE_TYPE ColorSpace, IUnknown * pConcernedDevice, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgioutput4
namespace idxgifactory4 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapters(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_MakeWindowAssociation(IDXGIFactory* self, HWND WindowHandle, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetWindowAssociation(IDXGIFactory* self, HWND * pWindowHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChain(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSoftwareAdapter(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapters1(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsCurrent(IDXGIFactory1* self, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsWindowedStereoEnabled(IDXGIFactory2* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForHwnd(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForCoreWindow(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetSharedResourceAdapterLuid(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterStereoStatusWindow(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterStereoStatusEvent(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterStereoStatus(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterOcclusionStatusWindow(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterOcclusionStatusEvent(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterOcclusionStatus(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForComposition(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetCreationFlags(IDXGIFactory3* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapterByLuid(IDXGIFactory4* self, LUID AdapterLuid, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumWarpAdapter(IDXGIFactory4* self, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgifactory4
namespace idxgiadapter3 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumOutputs(IDXGIAdapter* self, UINT Output, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGIAdapter* self, DXGI_ADAPTER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckInterfaceSupport(IDXGIAdapter* self, const GUID & InterfaceName, LARGE_INTEGER * pUMDVersion, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc1(IDXGIAdapter1* self, DXGI_ADAPTER_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc2(IDXGIAdapter2* self, DXGI_ADAPTER_DESC2 * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterHardwareContentProtectionTeardownStatusEvent(IDXGIAdapter3* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterHardwareContentProtectionTeardownStatus(IDXGIAdapter3* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_QueryVideoMemoryInfo(IDXGIAdapter3* self, UINT NodeIndex, DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup, DXGI_QUERY_VIDEO_MEMORY_INFO * pVideoMemoryInfo, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetVideoMemoryReservation(IDXGIAdapter3* self, UINT NodeIndex, DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup, UINT64 Reservation, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterVideoMemoryBudgetChangeNotificationEvent(IDXGIAdapter3* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterVideoMemoryBudgetChangeNotification(IDXGIAdapter3* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgiadapter3
namespace idxgioutput5 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplayModeList(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FindClosestMatchingMode(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_WaitForVBlank(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_TakeOwnership(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ReleaseOwnership(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGammaControlCapabilities(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetGammaControl(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGammaControl(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetDisplaySurface(IDXGIOutput* self, IDXGISurface * pScanoutSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplaySurfaceData(IDXGIOutput* self, IDXGISurface * pDestination, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFrameStatistics(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplayModeList1(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FindClosestMatchingMode1(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplaySurfaceData1(IDXGIOutput1* self, IDXGIResource * pDestination, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DuplicateOutput(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_SupportsOverlays(IDXGIOutput2* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckOverlaySupport(IDXGIOutput3* self, DXGI_FORMAT EnumFormat, IUnknown * pConcernedDevice, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckOverlayColorSpaceSupport(IDXGIOutput4* self, DXGI_FORMAT Format, DXGI_COLOR_SPACE_TYPE ColorSpace, IUnknown * pConcernedDevice, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DuplicateOutput1(IDXGIOutput5* self, IUnknown * pDevice, UINT Flags, UINT SupportedFormatsCount, const DXGI_FORMAT * pSupportedFormats, IDXGIOutputDuplication ** ppOutputDuplication, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgioutput5
namespace idxgiswapchain4 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDevice(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Present(IDXGISwapChain* self, UINT SyncInterval, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetBuffer(IDXGISwapChain* self, UINT Buffer, const IID & riid, void ** ppSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetFullscreenState(IDXGISwapChain* self, BOOL Fullscreen, IDXGIOutput * pTarget, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFullscreenState(IDXGISwapChain* self, BOOL * pFullscreen, IDXGIOutput ** ppTarget, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGISwapChain* self, DXGI_SWAP_CHAIN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ResizeBuffers(IDXGISwapChain* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ResizeTarget(IDXGISwapChain* self, const DXGI_MODE_DESC * pNewTargetParameters, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetContainingOutput(IDXGISwapChain* self, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFrameStatistics(IDXGISwapChain* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetLastPresentCount(IDXGISwapChain* self, UINT * pLastPresentCount, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc1(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFullscreenDesc(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetHwnd(IDXGISwapChain1* self, HWND * pHwnd, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetCoreWindow(IDXGISwapChain1* self, const IID & refiid, void ** ppUnk, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_Present1(IDXGISwapChain1* self, UINT SyncInterval, UINT PresentFlags, const DXGI_PRESENT_PARAMETERS * pPresentParameters, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsTemporaryMonoSupported(IDXGISwapChain1* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetRestrictToOutput(IDXGISwapChain1* self, IDXGIOutput ** ppRestrictToOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetBackgroundColor(IDXGISwapChain1* self, const DXGI_RGBA * pColor, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetBackgroundColor(IDXGISwapChain1* self, DXGI_RGBA * pColor, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetRotation(IDXGISwapChain1* self, DXGI_MODE_ROTATION Rotation, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetRotation(IDXGISwapChain1* self, DXGI_MODE_ROTATION * pRotation, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetSourceSize(IDXGISwapChain2* self, UINT Width, UINT Height, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetSourceSize(IDXGISwapChain2* self, UINT * pWidth, UINT * pHeight, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetMaximumFrameLatency(IDXGISwapChain2* self, UINT MaxLatency, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetMaximumFrameLatency(IDXGISwapChain2* self, UINT * pMaxLatency, struct ::GPADispatchTable const*& tlsRef);

HANDLE WINAPI Passthrough_GetFrameLatencyWaitableObject(IDXGISwapChain2* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetMatrixTransform(IDXGISwapChain2* self, const DXGI_MATRIX_3X2_F * pMatrix, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetMatrixTransform(IDXGISwapChain2* self, DXGI_MATRIX_3X2_F * pMatrix, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetCurrentBackBufferIndex(IDXGISwapChain3* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckColorSpaceSupport(IDXGISwapChain3* self, DXGI_COLOR_SPACE_TYPE ColorSpace, UINT * pColorSpaceSupport, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetColorSpace1(IDXGISwapChain3* self, DXGI_COLOR_SPACE_TYPE ColorSpace, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ResizeBuffers1(IDXGISwapChain3* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT Format, UINT SwapChainFlags, const UINT * pCreationNodeMask, IUnknown *const * ppPresentQueue, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetHDRMetaData(IDXGISwapChain4* self, DXGI_HDR_METADATA_TYPE Type, UINT Size, void * pMetaData, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgiswapchain4
namespace idxgidevice4 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetAdapter(IDXGIDevice* self, IDXGIAdapter ** pAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSurface(IDXGIDevice* self, const DXGI_SURFACE_DESC * pDesc, UINT NumSurfaces, DXGI_USAGE Usage, const DXGI_SHARED_RESOURCE * pSharedResource, IDXGISurface ** ppSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_QueryResourceResidency(IDXGIDevice* self, IUnknown *const * ppResources, DXGI_RESIDENCY * pResidencyStatus, UINT NumResources, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetGPUThreadPriority(IDXGIDevice* self, INT Priority, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGPUThreadPriority(IDXGIDevice* self, INT * pPriority, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetMaximumFrameLatency(IDXGIDevice1* self, UINT MaxLatency, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetMaximumFrameLatency(IDXGIDevice1* self, UINT * pMaxLatency, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OfferResources(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, DXGI_OFFER_RESOURCE_PRIORITY Priority, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ReclaimResources(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, BOOL * pDiscarded, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnqueueSetEvent(IDXGIDevice2* self, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_Trim(IDXGIDevice3* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_OfferResources1(IDXGIDevice4* self, UINT NumResources, IDXGIResource *const * ppResources, DXGI_OFFER_RESOURCE_PRIORITY Priority, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_ReclaimResources1(IDXGIDevice4* self, UINT NumResources, IDXGIResource *const * ppResources, DXGI_RECLAIM_RESOURCE_RESULTS * pResults, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgidevice4
namespace idxgifactory5 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapters(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_MakeWindowAssociation(IDXGIFactory* self, HWND WindowHandle, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetWindowAssociation(IDXGIFactory* self, HWND * pWindowHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChain(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSoftwareAdapter(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapters1(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsCurrent(IDXGIFactory1* self, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsWindowedStereoEnabled(IDXGIFactory2* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForHwnd(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForCoreWindow(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetSharedResourceAdapterLuid(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterStereoStatusWindow(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterStereoStatusEvent(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterStereoStatus(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterOcclusionStatusWindow(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterOcclusionStatusEvent(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterOcclusionStatus(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForComposition(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetCreationFlags(IDXGIFactory3* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapterByLuid(IDXGIFactory4* self, LUID AdapterLuid, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumWarpAdapter(IDXGIFactory4* self, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFeatureSupport(IDXGIFactory5* self, DXGI_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgifactory5
namespace idxgiadapter4 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumOutputs(IDXGIAdapter* self, UINT Output, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGIAdapter* self, DXGI_ADAPTER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckInterfaceSupport(IDXGIAdapter* self, const GUID & InterfaceName, LARGE_INTEGER * pUMDVersion, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc1(IDXGIAdapter1* self, DXGI_ADAPTER_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc2(IDXGIAdapter2* self, DXGI_ADAPTER_DESC2 * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterHardwareContentProtectionTeardownStatusEvent(IDXGIAdapter3* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterHardwareContentProtectionTeardownStatus(IDXGIAdapter3* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_QueryVideoMemoryInfo(IDXGIAdapter3* self, UINT NodeIndex, DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup, DXGI_QUERY_VIDEO_MEMORY_INFO * pVideoMemoryInfo, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetVideoMemoryReservation(IDXGIAdapter3* self, UINT NodeIndex, DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup, UINT64 Reservation, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterVideoMemoryBudgetChangeNotificationEvent(IDXGIAdapter3* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterVideoMemoryBudgetChangeNotification(IDXGIAdapter3* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc3(IDXGIAdapter4* self, DXGI_ADAPTER_DESC3 * pDesc, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgiadapter4
namespace idxgioutput6 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplayModeList(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FindClosestMatchingMode(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_WaitForVBlank(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_TakeOwnership(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_ReleaseOwnership(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGammaControlCapabilities(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetGammaControl(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetGammaControl(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetDisplaySurface(IDXGIOutput* self, IDXGISurface * pScanoutSurface, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplaySurfaceData(IDXGIOutput* self, IDXGISurface * pDestination, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetFrameStatistics(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplayModeList1(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_FindClosestMatchingMode1(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDisplaySurfaceData1(IDXGIOutput1* self, IDXGIResource * pDestination, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DuplicateOutput(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_SupportsOverlays(IDXGIOutput2* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckOverlaySupport(IDXGIOutput3* self, DXGI_FORMAT EnumFormat, IUnknown * pConcernedDevice, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckOverlayColorSpaceSupport(IDXGIOutput4* self, DXGI_FORMAT Format, DXGI_COLOR_SPACE_TYPE ColorSpace, IUnknown * pConcernedDevice, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_DuplicateOutput1(IDXGIOutput5* self, IUnknown * pDevice, UINT Flags, UINT SupportedFormatsCount, const DXGI_FORMAT * pSupportedFormats, IDXGIOutputDuplication ** ppOutputDuplication, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetDesc1(IDXGIOutput6* self, DXGI_OUTPUT_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckHardwareCompositionSupport(IDXGIOutput6* self, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgioutput6
namespace idxgifactory6 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapters(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_MakeWindowAssociation(IDXGIFactory* self, HWND WindowHandle, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetWindowAssociation(IDXGIFactory* self, HWND * pWindowHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChain(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSoftwareAdapter(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapters1(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsCurrent(IDXGIFactory1* self, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsWindowedStereoEnabled(IDXGIFactory2* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForHwnd(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForCoreWindow(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetSharedResourceAdapterLuid(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterStereoStatusWindow(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterStereoStatusEvent(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterStereoStatus(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterOcclusionStatusWindow(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterOcclusionStatusEvent(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterOcclusionStatus(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForComposition(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetCreationFlags(IDXGIFactory3* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapterByLuid(IDXGIFactory4* self, LUID AdapterLuid, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumWarpAdapter(IDXGIFactory4* self, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFeatureSupport(IDXGIFactory5* self, DXGI_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapterByGpuPreference(IDXGIFactory6* self, UINT Adapter, DXGI_GPU_PREFERENCE GpuPreference, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgifactory6
namespace idxgifactory7 {

HRESULT WINAPI Passthrough_QueryInterface(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_AddRef(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

ULONG WINAPI Passthrough_Release(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateData(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_SetPrivateDataInterface(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetPrivateData(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetParent(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapters(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_MakeWindowAssociation(IDXGIFactory* self, HWND WindowHandle, UINT Flags, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetWindowAssociation(IDXGIFactory* self, HWND * pWindowHandle, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChain(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSoftwareAdapter(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapters1(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsCurrent(IDXGIFactory1* self, struct ::GPADispatchTable const*& tlsRef);

BOOL WINAPI Passthrough_IsWindowedStereoEnabled(IDXGIFactory2* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForHwnd(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForCoreWindow(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_GetSharedResourceAdapterLuid(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterStereoStatusWindow(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterStereoStatusEvent(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterStereoStatus(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterOcclusionStatusWindow(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterOcclusionStatusEvent(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

void WINAPI Passthrough_UnregisterOcclusionStatus(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CreateSwapChainForComposition(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);

UINT WINAPI Passthrough_GetCreationFlags(IDXGIFactory3* self, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapterByLuid(IDXGIFactory4* self, LUID AdapterLuid, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumWarpAdapter(IDXGIFactory4* self, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_CheckFeatureSupport(IDXGIFactory5* self, DXGI_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_EnumAdapterByGpuPreference(IDXGIFactory6* self, UINT Adapter, DXGI_GPU_PREFERENCE GpuPreference, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_RegisterAdaptersChangedEvent(IDXGIFactory7* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);

HRESULT WINAPI Passthrough_UnregisterAdaptersChangedEvent(IDXGIFactory7* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);

} // namespace idxgifactory7


} // directx
} // gpa
