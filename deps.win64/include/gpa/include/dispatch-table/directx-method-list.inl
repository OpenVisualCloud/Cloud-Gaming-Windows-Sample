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
struct
{
    
    HRESULT (WINAPI *D3D10CreateDevice1)(IDXGIAdapter * pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, D3D10_FEATURE_LEVEL1 HardwareLevel, UINT SDKVersion, ID3D10Device1 ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
    
    HRESULT (WINAPI *D3D10CreateDeviceAndSwapChain1)(IDXGIAdapter * pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, D3D10_FEATURE_LEVEL1 HardwareLevel, UINT SDKVersion, DXGI_SWAP_CHAIN_DESC * pSwapChainDesc, IDXGISwapChain ** ppSwapChain, ID3D10Device1 ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
    
    HRESULT (WINAPI *D3D10CreateDevice)(IDXGIAdapter * pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, UINT SDKVersion, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
    
    HRESULT (WINAPI *D3D10CreateDeviceAndSwapChain)(IDXGIAdapter * pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, UINT SDKVersion, DXGI_SWAP_CHAIN_DESC * pSwapChainDesc, IDXGISwapChain ** ppSwapChain, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
    
    HRESULT (WINAPI *D3D10CreateBlob)(SIZE_T NumBytes, LPD3D10BLOB * ppBuffer, struct ::GPADispatchTable const*& tlsRef);
    
    HRESULT (WINAPI *D3D11CreateDevice)(IDXGIAdapter * pAdapter, D3D_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, ID3D11Device ** ppDevice, D3D_FEATURE_LEVEL * pFeatureLevel, ID3D11DeviceContext ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
    
    HRESULT (WINAPI *D3D11CreateDeviceAndSwapChain)(IDXGIAdapter * pAdapter, D3D_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const DXGI_SWAP_CHAIN_DESC * pSwapChainDesc, IDXGISwapChain ** ppSwapChain, ID3D11Device ** ppDevice, D3D_FEATURE_LEVEL * pFeatureLevel, ID3D11DeviceContext ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
    
    HRESULT (WINAPI *D3D12CreateRootSignatureDeserializer)(LPCVOID pSrcData, SIZE_T SrcDataSizeInBytes, const IID & pRootSignatureDeserializerInterface, void ** ppRootSignatureDeserializer, struct ::GPADispatchTable const*& tlsRef);
    
    HRESULT (WINAPI *D3D12CreateVersionedRootSignatureDeserializer)(LPCVOID pSrcData, SIZE_T SrcDataSizeInBytes, const IID & pRootSignatureDeserializerInterface, void ** ppRootSignatureDeserializer, struct ::GPADispatchTable const*& tlsRef);
    
    HRESULT (WINAPI *D3D12CreateDevice)(IUnknown * pAdapter, D3D_FEATURE_LEVEL MinimumFeatureLevel, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
    
    HRESULT (WINAPI *D3D12GetDebugInterface)(const IID & riid, void ** ppvDebug, struct ::GPADispatchTable const*& tlsRef);
    
    HRESULT (WINAPI *D3D12EnableExperimentalFeatures)(UINT NumFeatures, const IID * pIIDs, void * pConfigurationStructs, UINT * pConfigurationStructSizes, struct ::GPADispatchTable const*& tlsRef);
    
    HRESULT (WINAPI *CreateDXGIFactory)(const IID & riid, void ** ppFactory, struct ::GPADispatchTable const*& tlsRef);
    
    HRESULT (WINAPI *CreateDXGIFactory1)(const IID & riid, void ** ppFactory, struct ::GPADispatchTable const*& tlsRef);
    
    HRESULT (WINAPI *CreateDXGIFactory2)(UINT Flags, const IID & riid, void ** ppFactory, struct ::GPADispatchTable const*& tlsRef);
    
    HRESULT (WINAPI *DXGIGetDebugInterface1)(UINT Flags, const IID & riid, void ** pDebug, struct ::GPADispatchTable const*& tlsRef);
    
    HRESULT (WINAPI *DXGIDeclareAdapterRemovalSupport)(struct ::GPADispatchTable const*& tlsRef);
    
        struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
            
        } IUnknownTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        LPVOID (WINAPI *GetBufferPointer)(ID3D10Blob* self, struct ::GPADispatchTable const*& tlsRef);
                        SIZE_T (WINAPI *GetBufferSize)(ID3D10Blob* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10BlobTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10DeviceChildTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D10DepthStencilState* self, D3D10_DEPTH_STENCIL_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10DepthStencilStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D10BlendState* self, D3D10_BLEND_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10BlendStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D10RasterizerState* self, D3D10_RASTERIZER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10RasterizerStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetType)(ID3D10Resource* self, D3D10_RESOURCE_DIMENSION * rType, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetEvictionPriority)(ID3D10Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetEvictionPriority)(ID3D10Resource* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10ResourceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetType)(ID3D10Resource* self, D3D10_RESOURCE_DIMENSION * rType, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetEvictionPriority)(ID3D10Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetEvictionPriority)(ID3D10Resource* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Map)(ID3D10Buffer* self, D3D10_MAP MapType, UINT MapFlags, void ** ppData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Unmap)(ID3D10Buffer* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D10Buffer* self, D3D10_BUFFER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10BufferTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetType)(ID3D10Resource* self, D3D10_RESOURCE_DIMENSION * rType, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetEvictionPriority)(ID3D10Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetEvictionPriority)(ID3D10Resource* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Map)(ID3D10Texture1D* self, UINT Subresource, D3D10_MAP MapType, UINT MapFlags, void ** ppData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Unmap)(ID3D10Texture1D* self, UINT Subresource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D10Texture1D* self, D3D10_TEXTURE1D_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10Texture1DTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetType)(ID3D10Resource* self, D3D10_RESOURCE_DIMENSION * rType, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetEvictionPriority)(ID3D10Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetEvictionPriority)(ID3D10Resource* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Map)(ID3D10Texture2D* self, UINT Subresource, D3D10_MAP MapType, UINT MapFlags, D3D10_MAPPED_TEXTURE2D * pMappedTex2D, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Unmap)(ID3D10Texture2D* self, UINT Subresource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D10Texture2D* self, D3D10_TEXTURE2D_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10Texture2DTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetType)(ID3D10Resource* self, D3D10_RESOURCE_DIMENSION * rType, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetEvictionPriority)(ID3D10Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetEvictionPriority)(ID3D10Resource* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Map)(ID3D10Texture3D* self, UINT Subresource, D3D10_MAP MapType, UINT MapFlags, D3D10_MAPPED_TEXTURE3D * pMappedTex3D, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Unmap)(ID3D10Texture3D* self, UINT Subresource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D10Texture3D* self, D3D10_TEXTURE3D_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10Texture3DTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResource)(ID3D10View* self, ID3D10Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10ViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResource)(ID3D10View* self, ID3D10Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D10ShaderResourceView* self, D3D10_SHADER_RESOURCE_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10ShaderResourceViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResource)(ID3D10View* self, ID3D10Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D10RenderTargetView* self, D3D10_RENDER_TARGET_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10RenderTargetViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResource)(ID3D10View* self, ID3D10Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D10DepthStencilView* self, D3D10_DEPTH_STENCIL_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10DepthStencilViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10VertexShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10GeometryShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10PixelShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10InputLayoutTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D10SamplerState* self, D3D10_SAMPLER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10SamplerStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Begin)(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *End)(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetData)(ID3D10Asynchronous* self, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetDataSize)(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10AsynchronousTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Begin)(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *End)(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetData)(ID3D10Asynchronous* self, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetDataSize)(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D10Query* self, D3D10_QUERY_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10QueryTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Begin)(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *End)(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetData)(ID3D10Asynchronous* self, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetDataSize)(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D10Query* self, D3D10_QUERY_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10PredicateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Begin)(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *End)(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetData)(ID3D10Asynchronous* self, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetDataSize)(ID3D10Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D10Counter* self, D3D10_COUNTER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10CounterTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetShader)(ID3D10Device* self, ID3D10PixelShader * pPixelShader, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetShader)(ID3D10Device* self, ID3D10VertexShader * pVertexShader, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexed)(ID3D10Device* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Draw)(ID3D10Device* self, UINT VertexCount, UINT StartVertexLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetInputLayout)(ID3D10Device* self, ID3D10InputLayout * pInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetVertexBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetIndexBuffer)(ID3D10Device* self, ID3D10Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexedInstanced)(ID3D10Device* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawInstanced)(ID3D10Device* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetShader)(ID3D10Device* self, ID3D10GeometryShader * pShader, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D10Device* self, D3D10_PRIMITIVE_TOPOLOGY Topology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPredication)(ID3D10Device* self, ID3D10Predicate * pPredicate, BOOL PredicateValue, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetRenderTargets)(ID3D10Device* self, UINT NumViews, ID3D10RenderTargetView *const * ppRenderTargetViews, ID3D10DepthStencilView * pDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetBlendState)(ID3D10Device* self, ID3D10BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetDepthStencilState)(ID3D10Device* self, ID3D10DepthStencilState * pDepthStencilState, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOSetTargets)(ID3D10Device* self, UINT NumBuffers, ID3D10Buffer *const * ppSOTargets, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawAuto)(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetState)(ID3D10Device* self, ID3D10RasterizerState * pRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetViewports)(ID3D10Device* self, UINT NumViewports, const D3D10_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetScissorRects)(ID3D10Device* self, UINT NumRects, const D3D10_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopySubresourceRegion)(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D10Resource * pSrcResource, UINT SrcSubresource, const D3D10_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyResource)(ID3D10Device* self, ID3D10Resource * pDstResource, ID3D10Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UpdateSubresource)(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, const D3D10_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearRenderTargetView)(ID3D10Device* self, ID3D10RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearDepthStencilView)(ID3D10Device* self, ID3D10DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GenerateMips)(ID3D10Device* self, ID3D10ShaderResourceView * pShaderResourceView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveSubresource)(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, ID3D10Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetShader)(ID3D10Device* self, ID3D10PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetShader)(ID3D10Device* self, ID3D10VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetInputLayout)(ID3D10Device* self, ID3D10InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetVertexBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetIndexBuffer)(ID3D10Device* self, ID3D10Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetShader)(ID3D10Device* self, ID3D10GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetPrimitiveTopology)(ID3D10Device* self, D3D10_PRIMITIVE_TOPOLOGY * pTopology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetPredication)(ID3D10Device* self, ID3D10Predicate ** ppPredicate, BOOL * pPredicateValue, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetRenderTargets)(ID3D10Device* self, UINT NumViews, ID3D10RenderTargetView ** ppRenderTargetViews, ID3D10DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetBlendState)(ID3D10Device* self, ID3D10BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetDepthStencilState)(ID3D10Device* self, ID3D10DepthStencilState ** ppDepthStencilState, UINT * pStencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOGetTargets)(ID3D10Device* self, UINT NumBuffers, ID3D10Buffer ** ppSOTargets, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetState)(ID3D10Device* self, ID3D10RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetViewports)(ID3D10Device* self, UINT * NumViewports, D3D10_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetScissorRects)(ID3D10Device* self, UINT * NumRects, D3D10_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetExceptionMode)(ID3D10Device* self, UINT RaiseFlags, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetExceptionMode)(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10Device* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10Device* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10Device* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearState)(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Flush)(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBuffer)(ID3D10Device* self, const D3D10_BUFFER_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Buffer ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture1D)(ID3D10Device* self, const D3D10_TEXTURE1D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture1D ** ppTexture1D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture2D)(ID3D10Device* self, const D3D10_TEXTURE2D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture2D ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture3D)(ID3D10Device* self, const D3D10_TEXTURE3D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture3D ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateShaderResourceView)(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D10ShaderResourceView ** ppSRView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRenderTargetView)(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_RENDER_TARGET_VIEW_DESC * pDesc, ID3D10RenderTargetView ** ppRTView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDepthStencilView)(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D10DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateInputLayout)(ID3D10Device* self, const D3D10_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D10InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVertexShader)(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGeometryShader)(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGeometryShaderWithStreamOutput)(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D10_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, UINT OutputStreamStride, ID3D10GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePixelShader)(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBlendState)(ID3D10Device* self, const D3D10_BLEND_DESC * pBlendStateDesc, ID3D10BlendState ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDepthStencilState)(ID3D10Device* self, const D3D10_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D10DepthStencilState ** ppDepthStencilState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRasterizerState)(ID3D10Device* self, const D3D10_RASTERIZER_DESC * pRasterizerDesc, ID3D10RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSamplerState)(ID3D10Device* self, const D3D10_SAMPLER_DESC * pSamplerDesc, ID3D10SamplerState ** ppSamplerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateQuery)(ID3D10Device* self, const D3D10_QUERY_DESC * pQueryDesc, ID3D10Query ** ppQuery, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePredicate)(ID3D10Device* self, const D3D10_QUERY_DESC * pPredicateDesc, ID3D10Predicate ** ppPredicate, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCounter)(ID3D10Device* self, const D3D10_COUNTER_DESC * pCounterDesc, ID3D10Counter ** ppCounter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFormatSupport)(ID3D10Device* self, DXGI_FORMAT Format, UINT * pFormatSupport, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels)(ID3D10Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CheckCounterInfo)(ID3D10Device* self, D3D10_COUNTER_INFO * pCounterInfo, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckCounter)(ID3D10Device* self, const D3D10_COUNTER_DESC * pDesc, D3D10_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetCreationFlags)(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResource)(ID3D10Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetTextFilterSize)(ID3D10Device* self, UINT Width, UINT Height, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetTextFilterSize)(ID3D10Device* self, UINT * pWidth, UINT * pHeight, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10DeviceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Enter)(ID3D10Multithread* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Leave)(ID3D10Multithread* self, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *SetMultithreadProtected)(ID3D10Multithread* self, BOOL bMTProtect, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *GetMultithreadProtected)(ID3D10Multithread* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10MultithreadTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D10BlendState* self, D3D10_BLEND_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc1)(ID3D10BlendState1* self, D3D10_BLEND_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10BlendState1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResource)(ID3D10View* self, ID3D10Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D10ShaderResourceView* self, D3D10_SHADER_RESOURCE_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc1)(ID3D10ShaderResourceView1* self, D3D10_SHADER_RESOURCE_VIEW_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10ShaderResourceView1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetShader)(ID3D10Device* self, ID3D10PixelShader * pPixelShader, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetShader)(ID3D10Device* self, ID3D10VertexShader * pVertexShader, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexed)(ID3D10Device* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Draw)(ID3D10Device* self, UINT VertexCount, UINT StartVertexLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetInputLayout)(ID3D10Device* self, ID3D10InputLayout * pInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetVertexBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetIndexBuffer)(ID3D10Device* self, ID3D10Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexedInstanced)(ID3D10Device* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawInstanced)(ID3D10Device* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetShader)(ID3D10Device* self, ID3D10GeometryShader * pShader, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D10Device* self, D3D10_PRIMITIVE_TOPOLOGY Topology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPredication)(ID3D10Device* self, ID3D10Predicate * pPredicate, BOOL PredicateValue, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetRenderTargets)(ID3D10Device* self, UINT NumViews, ID3D10RenderTargetView *const * ppRenderTargetViews, ID3D10DepthStencilView * pDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetBlendState)(ID3D10Device* self, ID3D10BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetDepthStencilState)(ID3D10Device* self, ID3D10DepthStencilState * pDepthStencilState, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOSetTargets)(ID3D10Device* self, UINT NumBuffers, ID3D10Buffer *const * ppSOTargets, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawAuto)(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetState)(ID3D10Device* self, ID3D10RasterizerState * pRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetViewports)(ID3D10Device* self, UINT NumViewports, const D3D10_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetScissorRects)(ID3D10Device* self, UINT NumRects, const D3D10_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopySubresourceRegion)(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D10Resource * pSrcResource, UINT SrcSubresource, const D3D10_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyResource)(ID3D10Device* self, ID3D10Resource * pDstResource, ID3D10Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UpdateSubresource)(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, const D3D10_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearRenderTargetView)(ID3D10Device* self, ID3D10RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearDepthStencilView)(ID3D10Device* self, ID3D10DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GenerateMips)(ID3D10Device* self, ID3D10ShaderResourceView * pShaderResourceView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveSubresource)(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, ID3D10Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetShader)(ID3D10Device* self, ID3D10PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetShader)(ID3D10Device* self, ID3D10VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetInputLayout)(ID3D10Device* self, ID3D10InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetVertexBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetIndexBuffer)(ID3D10Device* self, ID3D10Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetShader)(ID3D10Device* self, ID3D10GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetPrimitiveTopology)(ID3D10Device* self, D3D10_PRIMITIVE_TOPOLOGY * pTopology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetPredication)(ID3D10Device* self, ID3D10Predicate ** ppPredicate, BOOL * pPredicateValue, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetRenderTargets)(ID3D10Device* self, UINT NumViews, ID3D10RenderTargetView ** ppRenderTargetViews, ID3D10DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetBlendState)(ID3D10Device* self, ID3D10BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetDepthStencilState)(ID3D10Device* self, ID3D10DepthStencilState ** ppDepthStencilState, UINT * pStencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOGetTargets)(ID3D10Device* self, UINT NumBuffers, ID3D10Buffer ** ppSOTargets, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetState)(ID3D10Device* self, ID3D10RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetViewports)(ID3D10Device* self, UINT * NumViewports, D3D10_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetScissorRects)(ID3D10Device* self, UINT * NumRects, D3D10_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetExceptionMode)(ID3D10Device* self, UINT RaiseFlags, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetExceptionMode)(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10Device* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10Device* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10Device* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearState)(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Flush)(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBuffer)(ID3D10Device* self, const D3D10_BUFFER_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Buffer ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture1D)(ID3D10Device* self, const D3D10_TEXTURE1D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture1D ** ppTexture1D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture2D)(ID3D10Device* self, const D3D10_TEXTURE2D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture2D ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture3D)(ID3D10Device* self, const D3D10_TEXTURE3D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture3D ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateShaderResourceView)(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D10ShaderResourceView ** ppSRView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRenderTargetView)(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_RENDER_TARGET_VIEW_DESC * pDesc, ID3D10RenderTargetView ** ppRTView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDepthStencilView)(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D10DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateInputLayout)(ID3D10Device* self, const D3D10_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D10InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVertexShader)(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGeometryShader)(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGeometryShaderWithStreamOutput)(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D10_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, UINT OutputStreamStride, ID3D10GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePixelShader)(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBlendState)(ID3D10Device* self, const D3D10_BLEND_DESC * pBlendStateDesc, ID3D10BlendState ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDepthStencilState)(ID3D10Device* self, const D3D10_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D10DepthStencilState ** ppDepthStencilState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRasterizerState)(ID3D10Device* self, const D3D10_RASTERIZER_DESC * pRasterizerDesc, ID3D10RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSamplerState)(ID3D10Device* self, const D3D10_SAMPLER_DESC * pSamplerDesc, ID3D10SamplerState ** ppSamplerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateQuery)(ID3D10Device* self, const D3D10_QUERY_DESC * pQueryDesc, ID3D10Query ** ppQuery, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePredicate)(ID3D10Device* self, const D3D10_QUERY_DESC * pPredicateDesc, ID3D10Predicate ** ppPredicate, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCounter)(ID3D10Device* self, const D3D10_COUNTER_DESC * pCounterDesc, ID3D10Counter ** ppCounter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFormatSupport)(ID3D10Device* self, DXGI_FORMAT Format, UINT * pFormatSupport, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels)(ID3D10Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CheckCounterInfo)(ID3D10Device* self, D3D10_COUNTER_INFO * pCounterInfo, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckCounter)(ID3D10Device* self, const D3D10_COUNTER_DESC * pDesc, D3D10_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetCreationFlags)(ID3D10Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResource)(ID3D10Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetTextFilterSize)(ID3D10Device* self, UINT Width, UINT Height, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetTextFilterSize)(ID3D10Device* self, UINT * pWidth, UINT * pHeight, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateShaderResourceView1)(ID3D10Device1* self, ID3D10Resource * pResource, const D3D10_SHADER_RESOURCE_VIEW_DESC1 * pDesc, ID3D10ShaderResourceView1 ** ppSRView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBlendState1)(ID3D10Device1* self, const D3D10_BLEND_DESC1 * pBlendStateDesc, ID3D10BlendState1 ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);
                        D3D10_FEATURE_LEVEL1 (WINAPI *GetFeatureLevel)(ID3D10Device1* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D10Device1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11DeviceChildTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11DepthStencilState* self, D3D11_DEPTH_STENCIL_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11DepthStencilStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11BlendState* self, D3D11_BLEND_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11BlendStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11RasterizerState* self, D3D11_RASTERIZER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11RasterizerStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetType)(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetEvictionPriority)(ID3D11Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetEvictionPriority)(ID3D11Resource* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11ResourceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetType)(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetEvictionPriority)(ID3D11Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetEvictionPriority)(ID3D11Resource* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11Buffer* self, D3D11_BUFFER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11BufferTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetType)(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetEvictionPriority)(ID3D11Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetEvictionPriority)(ID3D11Resource* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11Texture1D* self, D3D11_TEXTURE1D_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11Texture1DTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetType)(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetEvictionPriority)(ID3D11Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetEvictionPriority)(ID3D11Resource* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11Texture2D* self, D3D11_TEXTURE2D_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11Texture2DTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetType)(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetEvictionPriority)(ID3D11Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetEvictionPriority)(ID3D11Resource* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11Texture3D* self, D3D11_TEXTURE3D_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11Texture3DTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11ViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11ShaderResourceView* self, D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11ShaderResourceViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11RenderTargetView* self, D3D11_RENDER_TARGET_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11RenderTargetViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11DepthStencilView* self, D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11DepthStencilViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11UnorderedAccessView* self, D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11UnorderedAccessViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11VertexShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11HullShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11DomainShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11GeometryShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11PixelShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11ComputeShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11InputLayoutTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11SamplerState* self, D3D11_SAMPLER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11SamplerStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetDataSize)(ID3D11Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11AsynchronousTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetDataSize)(ID3D11Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11Query* self, D3D11_QUERY_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11QueryTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetDataSize)(ID3D11Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11Query* self, D3D11_QUERY_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11PredicateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetDataSize)(ID3D11Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11Counter* self, D3D11_COUNTER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11CounterTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetClassLinkage)(ID3D11ClassInstance* self, ID3D11ClassLinkage ** ppLinkage, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11ClassInstance* self, D3D11_CLASS_INSTANCE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetInstanceName)(ID3D11ClassInstance* self, LPSTR pInstanceName, SIZE_T * pBufferLength, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetTypeName)(ID3D11ClassInstance* self, LPSTR pTypeName, SIZE_T * pBufferLength, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11ClassInstanceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetClassInstance)(ID3D11ClassLinkage* self, LPCSTR pClassInstanceName, UINT InstanceIndex, ID3D11ClassInstance ** ppInstance, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateClassInstance)(ID3D11ClassLinkage* self, LPCSTR pClassTypeName, UINT ConstantBufferOffset, UINT ConstantVectorOffset, UINT TextureOffset, UINT SamplerOffset, ID3D11ClassInstance ** ppInstance, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11ClassLinkageTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetContextFlags)(ID3D11CommandList* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11CommandListTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetShader)(ID3D11DeviceContext* self, ID3D11PixelShader * pPixelShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetShader)(ID3D11DeviceContext* self, ID3D11VertexShader * pVertexShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexed)(ID3D11DeviceContext* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Draw)(ID3D11DeviceContext* self, UINT VertexCount, UINT StartVertexLocation, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Map)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE * pMappedResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Unmap)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout * pInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexedInstanced)(ID3D11DeviceContext* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawInstanced)(ID3D11DeviceContext* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader * pShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY Topology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Begin)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *End)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetData)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPredication)(ID3D11DeviceContext* self, ID3D11Predicate * pPredicate, BOOL PredicateValue, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState * pDepthStencilState, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOSetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer *const * ppSOTargets, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawAuto)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexedInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Dispatch)(ID3D11DeviceContext* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DispatchIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetState)(ID3D11DeviceContext* self, ID3D11RasterizerState * pRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetViewports)(ID3D11DeviceContext* self, UINT NumViewports, const D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetScissorRects)(ID3D11DeviceContext* self, UINT NumRects, const D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopySubresourceRegion)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyResource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, ID3D11Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UpdateSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyStructureCount)(ID3D11DeviceContext* self, ID3D11Buffer * pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView * pSrcView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearRenderTargetView)(ID3D11DeviceContext* self, ID3D11RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const UINT  Values[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const FLOAT  Values[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearDepthStencilView)(ID3D11DeviceContext* self, ID3D11DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GenerateMips)(ID3D11DeviceContext* self, ID3D11ShaderResourceView * pShaderResourceView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource, FLOAT MinLOD, struct ::GPADispatchTable const*& tlsRef);
                        FLOAT (WINAPI *GetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, ID3D11Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ExecuteCommandList)(ID3D11DeviceContext* self, ID3D11CommandList * pCommandList, BOOL RestoreContextState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetShader)(ID3D11DeviceContext* self, ID3D11HullShader * pHullShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetShader)(ID3D11DeviceContext* self, ID3D11DomainShader * pDomainShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader * pComputeShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetShader)(ID3D11DeviceContext* self, ID3D11PixelShader ** ppPixelShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetShader)(ID3D11DeviceContext* self, ID3D11VertexShader ** ppVertexShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader ** ppGeometryShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY * pTopology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetPredication)(ID3D11DeviceContext* self, ID3D11Predicate ** ppPredicate, BOOL * pPredicateValue, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState ** ppDepthStencilState, UINT * pStencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOGetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer ** ppSOTargets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetState)(ID3D11DeviceContext* self, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetViewports)(ID3D11DeviceContext* self, UINT * pNumViewports, D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetScissorRects)(ID3D11DeviceContext* self, UINT * pNumRects, D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetShader)(ID3D11DeviceContext* self, ID3D11HullShader ** ppHullShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetShader)(ID3D11DeviceContext* self, ID3D11DomainShader ** ppDomainShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader ** ppComputeShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearState)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Flush)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        D3D11_DEVICE_CONTEXT_TYPE (WINAPI *GetType)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetContextFlags)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FinishCommandList)(ID3D11DeviceContext* self, BOOL RestoreDeferredContextState, ID3D11CommandList ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11DeviceContextTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetCreationParameters)(ID3D11VideoDecoder* self, D3D11_VIDEO_DECODER_DESC * pVideoDesc, D3D11_VIDEO_DECODER_CONFIG * pConfig, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDriverHandle)(ID3D11VideoDecoder* self, HANDLE * pDriverHandle, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11VideoDecoderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoProcessorContentDesc)(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pContentDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckVideoProcessorFormat)(ID3D11VideoProcessorEnumerator* self, DXGI_FORMAT Format, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoProcessorCaps)(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_CAPS * pCaps, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoProcessorRateConversionCaps)(ID3D11VideoProcessorEnumerator* self, UINT TypeIndex, D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS * pCaps, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoProcessorCustomRate)(ID3D11VideoProcessorEnumerator* self, UINT TypeIndex, UINT CustomRateIndex, D3D11_VIDEO_PROCESSOR_CUSTOM_RATE * pRate, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoProcessorFilterRange)(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_FILTER Filter, D3D11_VIDEO_PROCESSOR_FILTER_RANGE * pRange, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11VideoProcessorEnumeratorTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetContentDesc)(ID3D11VideoProcessor* self, D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetRateConversionCaps)(ID3D11VideoProcessor* self, D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS * pCaps, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11VideoProcessorTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetCertificateSize)(ID3D11AuthenticatedChannel* self, UINT * pCertificateSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetCertificate)(ID3D11AuthenticatedChannel* self, UINT CertificateSize, BYTE * pCertificate, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetChannelHandle)(ID3D11AuthenticatedChannel* self, HANDLE * pChannelHandle, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11AuthenticatedChannelTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetCryptoType)(ID3D11CryptoSession* self, GUID * pCryptoType, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDecoderProfile)(ID3D11CryptoSession* self, GUID * pDecoderProfile, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetCertificateSize)(ID3D11CryptoSession* self, UINT * pCertificateSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetCertificate)(ID3D11CryptoSession* self, UINT CertificateSize, BYTE * pCertificate, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetCryptoSessionHandle)(ID3D11CryptoSession* self, HANDLE * pCryptoSessionHandle, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11CryptoSessionTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11VideoDecoderOutputView* self, D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11VideoDecoderOutputViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11VideoProcessorInputView* self, D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11VideoProcessorInputViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11VideoProcessorOutputView* self, D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11VideoProcessorOutputViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDecoderBuffer)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, UINT * pBufferSize, void ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ReleaseDecoderBuffer)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DecoderBeginFrame)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, ID3D11VideoDecoderOutputView * pView, UINT ContentKeySize, const void * pContentKey, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DecoderEndFrame)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SubmitDecoderBuffers)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC * pBufferDesc, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *DecoderExtension)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_DECODER_EXTENSION * pExtensionData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputTargetRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputBackgroundColor)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL YCbCr, const D3D11_VIDEO_COLOR * pColor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputAlphaFillMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode, UINT StreamIndex, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputConstriction)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, SIZE Size, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputStereoMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorSetOutputExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputTargetRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * Enabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputBackgroundColor)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pYCbCr, D3D11_VIDEO_COLOR * pColor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputAlphaFillMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE * pAlphaFillMode, UINT * pStreamIndex, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputConstriction)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, SIZE * pSize, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputStereoMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorGetOutputExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamFrameFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT FrameFormat, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamOutputRate)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate, BOOL RepeatFrame, const DXGI_RATIONAL * pCustomRate, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamSourceRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamDestRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamAlpha)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Alpha, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamPalette)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, const UINT * pEntries, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamPixelAspectRatio)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const DXGI_RATIONAL * pSourceAspectRatio, const DXGI_RATIONAL * pDestinationAspectRatio, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamLumaKey)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Lower, FLOAT Upper, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamStereoFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format, BOOL LeftViewFrame0, BOOL BaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode, int MonoOffset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamAutoProcessingMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamFilter)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL Enable, int Level, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorSetStreamExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamFrameFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT * pFrameFormat, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamOutputRate)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE * pOutputRate, BOOL * pRepeatFrame, DXGI_RATIONAL * pCustomRate, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamSourceRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamDestRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamAlpha)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pAlpha, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamPalette)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, UINT * pEntries, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamPixelAspectRatio)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, DXGI_RATIONAL * pSourceAspectRatio, DXGI_RATIONAL * pDestinationAspectRatio, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamLumaKey)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pLower, FLOAT * pUpper, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamStereoFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT * pFormat, BOOL * pLeftViewFrame0, BOOL * pBaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE * pFlipMode, int * MonoOffset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamAutoProcessingMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamFilter)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL * pEnabled, int * pLevel, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorGetStreamExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *VideoProcessorBlt)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, ID3D11VideoProcessorOutputView * pView, UINT OutputFrame, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM * pStreams, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *NegotiateCryptoSessionKeyExchange)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EncryptionBlt)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, UINT IVSize, void * pIV, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DecryptionBlt)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, D3D11_ENCRYPTED_BLOCK_INFO * pEncryptedBlockInfo, UINT ContentKeySize, const void * pContentKey, UINT IVSize, void * pIV, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *StartSessionKeyRefresh)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT RandomNumberSize, void * pRandomNumber, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *FinishSessionKeyRefresh)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetEncryptionBltKey)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT KeySize, void * pReadbackKey, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *NegotiateAuthenticatedChannelKeyExchange)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *QueryAuthenticatedChannel)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, UINT OutputSize, void * pOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ConfigureAuthenticatedChannel)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, D3D11_AUTHENTICATED_CONFIGURE_OUTPUT * pOutput, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamRotation)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_ROTATION Rotation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamRotation)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_ROTATION * pRotation, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11VideoContextTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoDecoder)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pVideoDesc, const D3D11_VIDEO_DECODER_CONFIG * pConfig, ID3D11VideoDecoder ** ppDecoder, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoProcessor)(ID3D11VideoDevice* self, ID3D11VideoProcessorEnumerator * pEnum, UINT RateConversionIndex, ID3D11VideoProcessor ** ppVideoProcessor, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateAuthenticatedChannel)(ID3D11VideoDevice* self, D3D11_AUTHENTICATED_CHANNEL_TYPE ChannelType, ID3D11AuthenticatedChannel ** ppAuthenticatedChannel, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCryptoSession)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, const GUID * pKeyExchangeType, ID3D11CryptoSession ** ppCryptoSession, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoDecoderOutputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, const D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoDecoderOutputView ** ppVDOVView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoProcessorInputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorInputView ** ppVPIView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoProcessorOutputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorOutputView ** ppVPOView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoProcessorEnumerator)(ID3D11VideoDevice* self, const D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pDesc, ID3D11VideoProcessorEnumerator ** ppEnum, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetVideoDecoderProfileCount)(ID3D11VideoDevice* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoDecoderProfile)(ID3D11VideoDevice* self, UINT Index, GUID * pDecoderProfile, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckVideoDecoderFormat)(ID3D11VideoDevice* self, const GUID * pDecoderProfile, DXGI_FORMAT Format, BOOL * pSupported, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoDecoderConfigCount)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT * pCount, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoDecoderConfig)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT Index, D3D11_VIDEO_DECODER_CONFIG * pConfig, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetContentProtectionCaps)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, D3D11_VIDEO_CONTENT_PROTECTION_CAPS * pCaps, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckCryptoKeyExchange)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, UINT Index, GUID * pKeyExchangeType, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11VideoDevice* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11VideoDevice* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11VideoDeviceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBuffer)(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture1D)(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture2D)(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture3D)(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateShaderResourceView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateUnorderedAccessView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRenderTargetView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDepthStencilView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateInputLayout)(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVertexShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGeometryShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGeometryShaderWithStreamOutput)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePixelShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateHullShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDomainShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateComputeShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateClassLinkage)(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBlendState)(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDepthStencilState)(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRasterizerState)(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSamplerState)(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateQuery)(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePredicate)(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext)(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResource)(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFormatSupport)(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels)(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CheckCounterInfo)(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11Device* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        D3D_FEATURE_LEVEL (WINAPI *GetFeatureLevel)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetCreationFlags)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext)(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetExceptionMode)(ID3D11Device* self, UINT RaiseFlags, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetExceptionMode)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11DeviceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11BlendState* self, D3D11_BLEND_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc1)(ID3D11BlendState1* self, D3D11_BLEND_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11BlendState1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11RasterizerState* self, D3D11_RASTERIZER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc1)(ID3D11RasterizerState1* self, D3D11_RASTERIZER_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11RasterizerState1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3DDeviceContextStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetShader)(ID3D11DeviceContext* self, ID3D11PixelShader * pPixelShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetShader)(ID3D11DeviceContext* self, ID3D11VertexShader * pVertexShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexed)(ID3D11DeviceContext* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Draw)(ID3D11DeviceContext* self, UINT VertexCount, UINT StartVertexLocation, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Map)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE * pMappedResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Unmap)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout * pInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexedInstanced)(ID3D11DeviceContext* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawInstanced)(ID3D11DeviceContext* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader * pShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY Topology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Begin)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *End)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetData)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPredication)(ID3D11DeviceContext* self, ID3D11Predicate * pPredicate, BOOL PredicateValue, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState * pDepthStencilState, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOSetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer *const * ppSOTargets, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawAuto)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexedInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Dispatch)(ID3D11DeviceContext* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DispatchIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetState)(ID3D11DeviceContext* self, ID3D11RasterizerState * pRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetViewports)(ID3D11DeviceContext* self, UINT NumViewports, const D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetScissorRects)(ID3D11DeviceContext* self, UINT NumRects, const D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopySubresourceRegion)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyResource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, ID3D11Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UpdateSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyStructureCount)(ID3D11DeviceContext* self, ID3D11Buffer * pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView * pSrcView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearRenderTargetView)(ID3D11DeviceContext* self, ID3D11RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const UINT  Values[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const FLOAT  Values[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearDepthStencilView)(ID3D11DeviceContext* self, ID3D11DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GenerateMips)(ID3D11DeviceContext* self, ID3D11ShaderResourceView * pShaderResourceView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource, FLOAT MinLOD, struct ::GPADispatchTable const*& tlsRef);
                        FLOAT (WINAPI *GetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, ID3D11Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ExecuteCommandList)(ID3D11DeviceContext* self, ID3D11CommandList * pCommandList, BOOL RestoreContextState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetShader)(ID3D11DeviceContext* self, ID3D11HullShader * pHullShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetShader)(ID3D11DeviceContext* self, ID3D11DomainShader * pDomainShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader * pComputeShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetShader)(ID3D11DeviceContext* self, ID3D11PixelShader ** ppPixelShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetShader)(ID3D11DeviceContext* self, ID3D11VertexShader ** ppVertexShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader ** ppGeometryShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY * pTopology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetPredication)(ID3D11DeviceContext* self, ID3D11Predicate ** ppPredicate, BOOL * pPredicateValue, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState ** ppDepthStencilState, UINT * pStencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOGetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer ** ppSOTargets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetState)(ID3D11DeviceContext* self, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetViewports)(ID3D11DeviceContext* self, UINT * pNumViewports, D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetScissorRects)(ID3D11DeviceContext* self, UINT * pNumRects, D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetShader)(ID3D11DeviceContext* self, ID3D11HullShader ** ppHullShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetShader)(ID3D11DeviceContext* self, ID3D11DomainShader ** ppDomainShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader ** ppComputeShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearState)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Flush)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        D3D11_DEVICE_CONTEXT_TYPE (WINAPI *GetType)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetContextFlags)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FinishCommandList)(ID3D11DeviceContext* self, BOOL RestoreDeferredContextState, ID3D11CommandList ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopySubresourceRegion1)(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, UINT CopyFlags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UpdateSubresource1)(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, UINT CopyFlags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DiscardResource)(ID3D11DeviceContext1* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DiscardView)(ID3D11DeviceContext1* self, ID3D11View * pResourceView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SwapDeviceContextState)(ID3D11DeviceContext1* self, ID3DDeviceContextState * pState, ID3DDeviceContextState ** ppPreviousState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearView)(ID3D11DeviceContext1* self, ID3D11View * pView, const FLOAT  Color[4], const D3D11_RECT * pRect, UINT NumRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DiscardView1)(ID3D11DeviceContext1* self, ID3D11View * pResourceView, const D3D11_RECT * pRects, UINT NumRects, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11DeviceContext1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDecoderBuffer)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, UINT * pBufferSize, void ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ReleaseDecoderBuffer)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DecoderBeginFrame)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, ID3D11VideoDecoderOutputView * pView, UINT ContentKeySize, const void * pContentKey, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DecoderEndFrame)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SubmitDecoderBuffers)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC * pBufferDesc, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *DecoderExtension)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_DECODER_EXTENSION * pExtensionData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputTargetRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputBackgroundColor)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL YCbCr, const D3D11_VIDEO_COLOR * pColor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputAlphaFillMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode, UINT StreamIndex, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputConstriction)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, SIZE Size, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputStereoMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorSetOutputExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputTargetRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * Enabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputBackgroundColor)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pYCbCr, D3D11_VIDEO_COLOR * pColor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputAlphaFillMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE * pAlphaFillMode, UINT * pStreamIndex, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputConstriction)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, SIZE * pSize, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputStereoMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorGetOutputExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamFrameFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT FrameFormat, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamOutputRate)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate, BOOL RepeatFrame, const DXGI_RATIONAL * pCustomRate, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamSourceRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamDestRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamAlpha)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Alpha, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamPalette)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, const UINT * pEntries, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamPixelAspectRatio)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const DXGI_RATIONAL * pSourceAspectRatio, const DXGI_RATIONAL * pDestinationAspectRatio, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamLumaKey)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Lower, FLOAT Upper, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamStereoFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format, BOOL LeftViewFrame0, BOOL BaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode, int MonoOffset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamAutoProcessingMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamFilter)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL Enable, int Level, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorSetStreamExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamFrameFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT * pFrameFormat, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamOutputRate)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE * pOutputRate, BOOL * pRepeatFrame, DXGI_RATIONAL * pCustomRate, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamSourceRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamDestRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamAlpha)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pAlpha, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamPalette)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, UINT * pEntries, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamPixelAspectRatio)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, DXGI_RATIONAL * pSourceAspectRatio, DXGI_RATIONAL * pDestinationAspectRatio, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamLumaKey)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pLower, FLOAT * pUpper, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamStereoFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT * pFormat, BOOL * pLeftViewFrame0, BOOL * pBaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE * pFlipMode, int * MonoOffset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamAutoProcessingMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamFilter)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL * pEnabled, int * pLevel, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorGetStreamExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *VideoProcessorBlt)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, ID3D11VideoProcessorOutputView * pView, UINT OutputFrame, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM * pStreams, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *NegotiateCryptoSessionKeyExchange)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EncryptionBlt)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, UINT IVSize, void * pIV, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DecryptionBlt)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, D3D11_ENCRYPTED_BLOCK_INFO * pEncryptedBlockInfo, UINT ContentKeySize, const void * pContentKey, UINT IVSize, void * pIV, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *StartSessionKeyRefresh)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT RandomNumberSize, void * pRandomNumber, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *FinishSessionKeyRefresh)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetEncryptionBltKey)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT KeySize, void * pReadbackKey, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *NegotiateAuthenticatedChannelKeyExchange)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *QueryAuthenticatedChannel)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, UINT OutputSize, void * pOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ConfigureAuthenticatedChannel)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, D3D11_AUTHENTICATED_CONFIGURE_OUTPUT * pOutput, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamRotation)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_ROTATION Rotation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamRotation)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_ROTATION * pRotation, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SubmitDecoderBuffers1)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC1 * pBufferDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDataForNewHardwareKey)(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, UINT PrivateInputSize, const void * pPrivatInputData, UINT64 * pPrivateOutputData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckCryptoSessionStatus)(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, D3D11_CRYPTO_SESSION_STATUS * pStatus, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DecoderEnableDownsampling)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, UINT ReferenceFrameCount, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DecoderUpdateDownsampling)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE ColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputShaderUsage)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL ShaderUsage, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputShaderUsage)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pShaderUsage, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE ColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamMirror)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, BOOL FlipHorizontal, BOOL FlipVertical, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamMirror)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, BOOL * pFlipHorizontal, BOOL * pFlipVertical, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *VideoProcessorGetBehaviorHints)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT OutputWidth, UINT OutputHeight, DXGI_FORMAT OutputFormat, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT * pStreams, UINT * pBehaviorHints, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11VideoContext1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoDecoder)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pVideoDesc, const D3D11_VIDEO_DECODER_CONFIG * pConfig, ID3D11VideoDecoder ** ppDecoder, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoProcessor)(ID3D11VideoDevice* self, ID3D11VideoProcessorEnumerator * pEnum, UINT RateConversionIndex, ID3D11VideoProcessor ** ppVideoProcessor, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateAuthenticatedChannel)(ID3D11VideoDevice* self, D3D11_AUTHENTICATED_CHANNEL_TYPE ChannelType, ID3D11AuthenticatedChannel ** ppAuthenticatedChannel, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCryptoSession)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, const GUID * pKeyExchangeType, ID3D11CryptoSession ** ppCryptoSession, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoDecoderOutputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, const D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoDecoderOutputView ** ppVDOVView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoProcessorInputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorInputView ** ppVPIView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoProcessorOutputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorOutputView ** ppVPOView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoProcessorEnumerator)(ID3D11VideoDevice* self, const D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pDesc, ID3D11VideoProcessorEnumerator ** ppEnum, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetVideoDecoderProfileCount)(ID3D11VideoDevice* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoDecoderProfile)(ID3D11VideoDevice* self, UINT Index, GUID * pDecoderProfile, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckVideoDecoderFormat)(ID3D11VideoDevice* self, const GUID * pDecoderProfile, DXGI_FORMAT Format, BOOL * pSupported, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoDecoderConfigCount)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT * pCount, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoDecoderConfig)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT Index, D3D11_VIDEO_DECODER_CONFIG * pConfig, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetContentProtectionCaps)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, D3D11_VIDEO_CONTENT_PROTECTION_CAPS * pCaps, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckCryptoKeyExchange)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, UINT Index, GUID * pKeyExchangeType, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11VideoDevice* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11VideoDevice* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetCryptoSessionPrivateDataSize)(ID3D11VideoDevice1* self, const GUID * pCryptoType, const GUID * pDecoderProfile, const GUID * pKeyExchangeType, UINT * pPrivateInputSize, UINT * pPrivateOutputSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoDecoderCaps)(ID3D11VideoDevice1* self, const GUID * pDecoderProfile, UINT SampleWidth, UINT SampleHeight, const DXGI_RATIONAL * pFrameRate, UINT BitRate, const GUID * pCryptoType, UINT * pDecoderCaps, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckVideoDecoderDownsampling)(ID3D11VideoDevice1* self, const D3D11_VIDEO_DECODER_DESC * pInputDesc, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_DECODER_CONFIG * pInputConfig, const DXGI_RATIONAL * pFrameRate, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, BOOL * pSupported, BOOL * pRealTimeHint, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RecommendVideoDecoderDownsampleParameters)(ID3D11VideoDevice1* self, const D3D11_VIDEO_DECODER_DESC * pInputDesc, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_DECODER_CONFIG * pInputConfig, const DXGI_RATIONAL * pFrameRate, D3D11_VIDEO_SAMPLE_DESC * pRecommendedOutputDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11VideoDevice1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoProcessorContentDesc)(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pContentDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckVideoProcessorFormat)(ID3D11VideoProcessorEnumerator* self, DXGI_FORMAT Format, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoProcessorCaps)(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_CAPS * pCaps, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoProcessorRateConversionCaps)(ID3D11VideoProcessorEnumerator* self, UINT TypeIndex, D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS * pCaps, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoProcessorCustomRate)(ID3D11VideoProcessorEnumerator* self, UINT TypeIndex, UINT CustomRateIndex, D3D11_VIDEO_PROCESSOR_CUSTOM_RATE * pRate, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoProcessorFilterRange)(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_FILTER Filter, D3D11_VIDEO_PROCESSOR_FILTER_RANGE * pRange, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckVideoProcessorFormatConversion)(ID3D11VideoProcessorEnumerator1* self, DXGI_FORMAT InputFormat, DXGI_COLOR_SPACE_TYPE InputColorSpace, DXGI_FORMAT OutputFormat, DXGI_COLOR_SPACE_TYPE OutputColorSpace, BOOL * pSupported, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11VideoProcessorEnumerator1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBuffer)(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture1D)(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture2D)(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture3D)(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateShaderResourceView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateUnorderedAccessView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRenderTargetView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDepthStencilView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateInputLayout)(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVertexShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGeometryShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGeometryShaderWithStreamOutput)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePixelShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateHullShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDomainShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateComputeShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateClassLinkage)(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBlendState)(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDepthStencilState)(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRasterizerState)(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSamplerState)(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateQuery)(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePredicate)(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext)(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResource)(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFormatSupport)(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels)(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CheckCounterInfo)(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11Device* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        D3D_FEATURE_LEVEL (WINAPI *GetFeatureLevel)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetCreationFlags)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext)(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetExceptionMode)(ID3D11Device* self, UINT RaiseFlags, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetExceptionMode)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext1)(ID3D11Device1* self, ID3D11DeviceContext1 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext1)(ID3D11Device1* self, UINT ContextFlags, ID3D11DeviceContext1 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBlendState1)(ID3D11Device1* self, const D3D11_BLEND_DESC1 * pBlendStateDesc, ID3D11BlendState1 ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRasterizerState1)(ID3D11Device1* self, const D3D11_RASTERIZER_DESC1 * pRasterizerDesc, ID3D11RasterizerState1 ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeviceContextState)(ID3D11Device1* self, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const IID & EmulatedInterface, D3D_FEATURE_LEVEL * pChosenFeatureLevel, ID3DDeviceContextState ** ppContextState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResource1)(ID3D11Device1* self, HANDLE hResource, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResourceByName)(ID3D11Device1* self, LPCWSTR lpName, DWORD dwDesiredAccess, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11Device1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        INT (WINAPI *BeginEvent)(ID3DUserDefinedAnnotation* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        INT (WINAPI *EndEvent)(ID3DUserDefinedAnnotation* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetMarker)(ID3DUserDefinedAnnotation* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *GetStatus)(ID3DUserDefinedAnnotation* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3DUserDefinedAnnotationTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetShader)(ID3D11DeviceContext* self, ID3D11PixelShader * pPixelShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetShader)(ID3D11DeviceContext* self, ID3D11VertexShader * pVertexShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexed)(ID3D11DeviceContext* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Draw)(ID3D11DeviceContext* self, UINT VertexCount, UINT StartVertexLocation, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Map)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE * pMappedResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Unmap)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout * pInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexedInstanced)(ID3D11DeviceContext* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawInstanced)(ID3D11DeviceContext* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader * pShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY Topology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Begin)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *End)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetData)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPredication)(ID3D11DeviceContext* self, ID3D11Predicate * pPredicate, BOOL PredicateValue, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState * pDepthStencilState, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOSetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer *const * ppSOTargets, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawAuto)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexedInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Dispatch)(ID3D11DeviceContext* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DispatchIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetState)(ID3D11DeviceContext* self, ID3D11RasterizerState * pRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetViewports)(ID3D11DeviceContext* self, UINT NumViewports, const D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetScissorRects)(ID3D11DeviceContext* self, UINT NumRects, const D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopySubresourceRegion)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyResource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, ID3D11Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UpdateSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyStructureCount)(ID3D11DeviceContext* self, ID3D11Buffer * pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView * pSrcView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearRenderTargetView)(ID3D11DeviceContext* self, ID3D11RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const UINT  Values[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const FLOAT  Values[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearDepthStencilView)(ID3D11DeviceContext* self, ID3D11DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GenerateMips)(ID3D11DeviceContext* self, ID3D11ShaderResourceView * pShaderResourceView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource, FLOAT MinLOD, struct ::GPADispatchTable const*& tlsRef);
                        FLOAT (WINAPI *GetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, ID3D11Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ExecuteCommandList)(ID3D11DeviceContext* self, ID3D11CommandList * pCommandList, BOOL RestoreContextState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetShader)(ID3D11DeviceContext* self, ID3D11HullShader * pHullShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetShader)(ID3D11DeviceContext* self, ID3D11DomainShader * pDomainShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader * pComputeShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetShader)(ID3D11DeviceContext* self, ID3D11PixelShader ** ppPixelShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetShader)(ID3D11DeviceContext* self, ID3D11VertexShader ** ppVertexShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader ** ppGeometryShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY * pTopology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetPredication)(ID3D11DeviceContext* self, ID3D11Predicate ** ppPredicate, BOOL * pPredicateValue, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState ** ppDepthStencilState, UINT * pStencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOGetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer ** ppSOTargets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetState)(ID3D11DeviceContext* self, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetViewports)(ID3D11DeviceContext* self, UINT * pNumViewports, D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetScissorRects)(ID3D11DeviceContext* self, UINT * pNumRects, D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetShader)(ID3D11DeviceContext* self, ID3D11HullShader ** ppHullShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetShader)(ID3D11DeviceContext* self, ID3D11DomainShader ** ppDomainShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader ** ppComputeShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearState)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Flush)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        D3D11_DEVICE_CONTEXT_TYPE (WINAPI *GetType)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetContextFlags)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FinishCommandList)(ID3D11DeviceContext* self, BOOL RestoreDeferredContextState, ID3D11CommandList ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopySubresourceRegion1)(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, UINT CopyFlags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UpdateSubresource1)(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, UINT CopyFlags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DiscardResource)(ID3D11DeviceContext1* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DiscardView)(ID3D11DeviceContext1* self, ID3D11View * pResourceView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SwapDeviceContextState)(ID3D11DeviceContext1* self, ID3DDeviceContextState * pState, ID3DDeviceContextState ** ppPreviousState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearView)(ID3D11DeviceContext1* self, ID3D11View * pView, const FLOAT  Color[4], const D3D11_RECT * pRect, UINT NumRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DiscardView1)(ID3D11DeviceContext1* self, ID3D11View * pResourceView, const D3D11_RECT * pRects, UINT NumRects, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *UpdateTileMappings)(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, UINT NumTiledResourceRegions, const D3D11_TILED_RESOURCE_COORDINATE * pTiledResourceRegionStartCoordinates, const D3D11_TILE_REGION_SIZE * pTiledResourceRegionSizes, ID3D11Buffer * pTilePool, UINT NumRanges, const UINT * pRangeFlags, const UINT * pTilePoolStartOffsets, const UINT * pRangeTileCounts, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CopyTileMappings)(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestRegionStartCoordinate, ID3D11Resource * pSourceTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pSourceRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyTiles)(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, ID3D11Buffer * pBuffer, UINT64 BufferStartOffsetInBytes, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UpdateTiles)(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pDestTileRegionSize, const void * pSourceTileData, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ResizeTilePool)(ID3D11DeviceContext2* self, ID3D11Buffer * pTilePool, UINT64 NewSizeInBytes, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *TiledResourceBarrier)(ID3D11DeviceContext2* self, ID3D11DeviceChild * pTiledResourceOrViewAccessBeforeBarrier, ID3D11DeviceChild * pTiledResourceOrViewAccessAfterBarrier, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsAnnotationEnabled)(ID3D11DeviceContext2* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetMarkerInt)(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *BeginEventInt)(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EndEvent)(ID3D11DeviceContext2* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11DeviceContext2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBuffer)(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture1D)(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture2D)(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture3D)(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateShaderResourceView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateUnorderedAccessView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRenderTargetView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDepthStencilView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateInputLayout)(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVertexShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGeometryShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGeometryShaderWithStreamOutput)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePixelShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateHullShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDomainShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateComputeShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateClassLinkage)(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBlendState)(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDepthStencilState)(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRasterizerState)(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSamplerState)(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateQuery)(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePredicate)(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext)(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResource)(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFormatSupport)(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels)(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CheckCounterInfo)(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11Device* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        D3D_FEATURE_LEVEL (WINAPI *GetFeatureLevel)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetCreationFlags)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext)(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetExceptionMode)(ID3D11Device* self, UINT RaiseFlags, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetExceptionMode)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext1)(ID3D11Device1* self, ID3D11DeviceContext1 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext1)(ID3D11Device1* self, UINT ContextFlags, ID3D11DeviceContext1 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBlendState1)(ID3D11Device1* self, const D3D11_BLEND_DESC1 * pBlendStateDesc, ID3D11BlendState1 ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRasterizerState1)(ID3D11Device1* self, const D3D11_RASTERIZER_DESC1 * pRasterizerDesc, ID3D11RasterizerState1 ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeviceContextState)(ID3D11Device1* self, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const IID & EmulatedInterface, D3D_FEATURE_LEVEL * pChosenFeatureLevel, ID3DDeviceContextState ** ppContextState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResource1)(ID3D11Device1* self, HANDLE hResource, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResourceByName)(ID3D11Device1* self, LPCWSTR lpName, DWORD dwDesiredAccess, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext2)(ID3D11Device2* self, ID3D11DeviceContext2 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext2)(ID3D11Device2* self, UINT ContextFlags, ID3D11DeviceContext2 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResourceTiling)(ID3D11Device2* self, ID3D11Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D11_PACKED_MIP_DESC * pPackedMipDesc, D3D11_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D11_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels1)(ID3D11Device2* self, DXGI_FORMAT Format, UINT SampleCount, UINT Flags, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11Device2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetType)(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetEvictionPriority)(ID3D11Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetEvictionPriority)(ID3D11Resource* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11Texture2D* self, D3D11_TEXTURE2D_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc1)(ID3D11Texture2D1* self, D3D11_TEXTURE2D_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11Texture2D1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetType)(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetEvictionPriority)(ID3D11Resource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetEvictionPriority)(ID3D11Resource* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11Texture3D* self, D3D11_TEXTURE3D_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc1)(ID3D11Texture3D1* self, D3D11_TEXTURE3D_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11Texture3D1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11RasterizerState* self, D3D11_RASTERIZER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc1)(ID3D11RasterizerState1* self, D3D11_RASTERIZER_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc2)(ID3D11RasterizerState2* self, D3D11_RASTERIZER_DESC2 * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11RasterizerState2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11ShaderResourceView* self, D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc1)(ID3D11ShaderResourceView1* self, D3D11_SHADER_RESOURCE_VIEW_DESC1 * pDesc1, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11ShaderResourceView1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11RenderTargetView* self, D3D11_RENDER_TARGET_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc1)(ID3D11RenderTargetView1* self, D3D11_RENDER_TARGET_VIEW_DESC1 * pDesc1, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11RenderTargetView1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11UnorderedAccessView* self, D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc1)(ID3D11UnorderedAccessView1* self, D3D11_UNORDERED_ACCESS_VIEW_DESC1 * pDesc1, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11UnorderedAccessView1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetDataSize)(ID3D11Asynchronous* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(ID3D11Query* self, D3D11_QUERY_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc1)(ID3D11Query1* self, D3D11_QUERY_DESC1 * pDesc1, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11Query1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetShader)(ID3D11DeviceContext* self, ID3D11PixelShader * pPixelShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetShader)(ID3D11DeviceContext* self, ID3D11VertexShader * pVertexShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexed)(ID3D11DeviceContext* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Draw)(ID3D11DeviceContext* self, UINT VertexCount, UINT StartVertexLocation, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Map)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE * pMappedResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Unmap)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout * pInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexedInstanced)(ID3D11DeviceContext* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawInstanced)(ID3D11DeviceContext* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader * pShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY Topology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Begin)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *End)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetData)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPredication)(ID3D11DeviceContext* self, ID3D11Predicate * pPredicate, BOOL PredicateValue, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState * pDepthStencilState, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOSetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer *const * ppSOTargets, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawAuto)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexedInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Dispatch)(ID3D11DeviceContext* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DispatchIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetState)(ID3D11DeviceContext* self, ID3D11RasterizerState * pRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetViewports)(ID3D11DeviceContext* self, UINT NumViewports, const D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetScissorRects)(ID3D11DeviceContext* self, UINT NumRects, const D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopySubresourceRegion)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyResource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, ID3D11Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UpdateSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyStructureCount)(ID3D11DeviceContext* self, ID3D11Buffer * pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView * pSrcView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearRenderTargetView)(ID3D11DeviceContext* self, ID3D11RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const UINT  Values[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const FLOAT  Values[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearDepthStencilView)(ID3D11DeviceContext* self, ID3D11DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GenerateMips)(ID3D11DeviceContext* self, ID3D11ShaderResourceView * pShaderResourceView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource, FLOAT MinLOD, struct ::GPADispatchTable const*& tlsRef);
                        FLOAT (WINAPI *GetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, ID3D11Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ExecuteCommandList)(ID3D11DeviceContext* self, ID3D11CommandList * pCommandList, BOOL RestoreContextState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetShader)(ID3D11DeviceContext* self, ID3D11HullShader * pHullShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetShader)(ID3D11DeviceContext* self, ID3D11DomainShader * pDomainShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader * pComputeShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetShader)(ID3D11DeviceContext* self, ID3D11PixelShader ** ppPixelShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetShader)(ID3D11DeviceContext* self, ID3D11VertexShader ** ppVertexShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader ** ppGeometryShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY * pTopology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetPredication)(ID3D11DeviceContext* self, ID3D11Predicate ** ppPredicate, BOOL * pPredicateValue, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState ** ppDepthStencilState, UINT * pStencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOGetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer ** ppSOTargets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetState)(ID3D11DeviceContext* self, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetViewports)(ID3D11DeviceContext* self, UINT * pNumViewports, D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetScissorRects)(ID3D11DeviceContext* self, UINT * pNumRects, D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetShader)(ID3D11DeviceContext* self, ID3D11HullShader ** ppHullShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetShader)(ID3D11DeviceContext* self, ID3D11DomainShader ** ppDomainShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader ** ppComputeShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearState)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Flush)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        D3D11_DEVICE_CONTEXT_TYPE (WINAPI *GetType)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetContextFlags)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FinishCommandList)(ID3D11DeviceContext* self, BOOL RestoreDeferredContextState, ID3D11CommandList ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopySubresourceRegion1)(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, UINT CopyFlags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UpdateSubresource1)(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, UINT CopyFlags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DiscardResource)(ID3D11DeviceContext1* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DiscardView)(ID3D11DeviceContext1* self, ID3D11View * pResourceView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SwapDeviceContextState)(ID3D11DeviceContext1* self, ID3DDeviceContextState * pState, ID3DDeviceContextState ** ppPreviousState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearView)(ID3D11DeviceContext1* self, ID3D11View * pView, const FLOAT  Color[4], const D3D11_RECT * pRect, UINT NumRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DiscardView1)(ID3D11DeviceContext1* self, ID3D11View * pResourceView, const D3D11_RECT * pRects, UINT NumRects, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *UpdateTileMappings)(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, UINT NumTiledResourceRegions, const D3D11_TILED_RESOURCE_COORDINATE * pTiledResourceRegionStartCoordinates, const D3D11_TILE_REGION_SIZE * pTiledResourceRegionSizes, ID3D11Buffer * pTilePool, UINT NumRanges, const UINT * pRangeFlags, const UINT * pTilePoolStartOffsets, const UINT * pRangeTileCounts, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CopyTileMappings)(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestRegionStartCoordinate, ID3D11Resource * pSourceTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pSourceRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyTiles)(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, ID3D11Buffer * pBuffer, UINT64 BufferStartOffsetInBytes, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UpdateTiles)(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pDestTileRegionSize, const void * pSourceTileData, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ResizeTilePool)(ID3D11DeviceContext2* self, ID3D11Buffer * pTilePool, UINT64 NewSizeInBytes, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *TiledResourceBarrier)(ID3D11DeviceContext2* self, ID3D11DeviceChild * pTiledResourceOrViewAccessBeforeBarrier, ID3D11DeviceChild * pTiledResourceOrViewAccessAfterBarrier, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsAnnotationEnabled)(ID3D11DeviceContext2* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetMarkerInt)(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *BeginEventInt)(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EndEvent)(ID3D11DeviceContext2* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Flush1)(ID3D11DeviceContext3* self, D3D11_CONTEXT_TYPE ContextType, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetHardwareProtectionState)(ID3D11DeviceContext3* self, BOOL HwProtectionEnable, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetHardwareProtectionState)(ID3D11DeviceContext3* self, BOOL * pHwProtectionEnable, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11DeviceContext3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSharedHandle)(ID3D11Fence* self, const SECURITY_ATTRIBUTES * pAttributes, DWORD dwAccess, LPCWSTR lpName, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);
                        UINT64 (WINAPI *GetCompletedValue)(ID3D11Fence* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetEventOnCompletion)(ID3D11Fence* self, UINT64 Value, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11FenceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetShader)(ID3D11DeviceContext* self, ID3D11PixelShader * pPixelShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetShader)(ID3D11DeviceContext* self, ID3D11VertexShader * pVertexShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexed)(ID3D11DeviceContext* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Draw)(ID3D11DeviceContext* self, UINT VertexCount, UINT StartVertexLocation, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Map)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE * pMappedResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Unmap)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout * pInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexedInstanced)(ID3D11DeviceContext* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawInstanced)(ID3D11DeviceContext* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader * pShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY Topology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Begin)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *End)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetData)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, void * pData, UINT DataSize, UINT GetDataFlags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPredication)(ID3D11DeviceContext* self, ID3D11Predicate * pPredicate, BOOL PredicateValue, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState * pDepthStencilState, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOSetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer *const * ppSOTargets, const UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawAuto)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexedInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Dispatch)(ID3D11DeviceContext* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DispatchIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetState)(ID3D11DeviceContext* self, ID3D11RasterizerState * pRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetViewports)(ID3D11DeviceContext* self, UINT NumViewports, const D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetScissorRects)(ID3D11DeviceContext* self, UINT NumRects, const D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopySubresourceRegion)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyResource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, ID3D11Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UpdateSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyStructureCount)(ID3D11DeviceContext* self, ID3D11Buffer * pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView * pSrcView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearRenderTargetView)(ID3D11DeviceContext* self, ID3D11RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const UINT  Values[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const FLOAT  Values[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearDepthStencilView)(ID3D11DeviceContext* self, ID3D11DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GenerateMips)(ID3D11DeviceContext* self, ID3D11ShaderResourceView * pShaderResourceView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource, FLOAT MinLOD, struct ::GPADispatchTable const*& tlsRef);
                        FLOAT (WINAPI *GetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, ID3D11Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ExecuteCommandList)(ID3D11DeviceContext* self, ID3D11CommandList * pCommandList, BOOL RestoreContextState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetShader)(ID3D11DeviceContext* self, ID3D11HullShader * pHullShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetShader)(ID3D11DeviceContext* self, ID3D11DomainShader * pDomainShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader * pComputeShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetShader)(ID3D11DeviceContext* self, ID3D11PixelShader ** ppPixelShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetShader)(ID3D11DeviceContext* self, ID3D11VertexShader ** ppVertexShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader ** ppGeometryShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IAGetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY * pTopology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetPredication)(ID3D11DeviceContext* self, ID3D11Predicate ** ppPredicate, BOOL * pPredicateValue, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMGetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState ** ppDepthStencilState, UINT * pStencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOGetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer ** ppSOTargets, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetState)(ID3D11DeviceContext* self, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetViewports)(ID3D11DeviceContext* self, UINT * pNumViewports, D3D11_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSGetScissorRects)(ID3D11DeviceContext* self, UINT * pNumRects, D3D11_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetShader)(ID3D11DeviceContext* self, ID3D11HullShader ** ppHullShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetShader)(ID3D11DeviceContext* self, ID3D11DomainShader ** ppDomainShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader ** ppComputeShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearState)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Flush)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        D3D11_DEVICE_CONTEXT_TYPE (WINAPI *GetType)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetContextFlags)(ID3D11DeviceContext* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FinishCommandList)(ID3D11DeviceContext* self, BOOL RestoreDeferredContextState, ID3D11CommandList ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopySubresourceRegion1)(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, UINT CopyFlags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UpdateSubresource1)(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, UINT CopyFlags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DiscardResource)(ID3D11DeviceContext1* self, ID3D11Resource * pResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DiscardView)(ID3D11DeviceContext1* self, ID3D11View * pResourceView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *HSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *PSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SwapDeviceContextState)(ID3D11DeviceContext1* self, ID3DDeviceContextState * pState, ID3DDeviceContextState ** ppPreviousState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearView)(ID3D11DeviceContext1* self, ID3D11View * pView, const FLOAT  Color[4], const D3D11_RECT * pRect, UINT NumRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DiscardView1)(ID3D11DeviceContext1* self, ID3D11View * pResourceView, const D3D11_RECT * pRects, UINT NumRects, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *UpdateTileMappings)(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, UINT NumTiledResourceRegions, const D3D11_TILED_RESOURCE_COORDINATE * pTiledResourceRegionStartCoordinates, const D3D11_TILE_REGION_SIZE * pTiledResourceRegionSizes, ID3D11Buffer * pTilePool, UINT NumRanges, const UINT * pRangeFlags, const UINT * pTilePoolStartOffsets, const UINT * pRangeTileCounts, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CopyTileMappings)(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestRegionStartCoordinate, ID3D11Resource * pSourceTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pSourceRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyTiles)(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, ID3D11Buffer * pBuffer, UINT64 BufferStartOffsetInBytes, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UpdateTiles)(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pDestTileRegionSize, const void * pSourceTileData, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ResizeTilePool)(ID3D11DeviceContext2* self, ID3D11Buffer * pTilePool, UINT64 NewSizeInBytes, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *TiledResourceBarrier)(ID3D11DeviceContext2* self, ID3D11DeviceChild * pTiledResourceOrViewAccessBeforeBarrier, ID3D11DeviceChild * pTiledResourceOrViewAccessAfterBarrier, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsAnnotationEnabled)(ID3D11DeviceContext2* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetMarkerInt)(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *BeginEventInt)(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EndEvent)(ID3D11DeviceContext2* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Flush1)(ID3D11DeviceContext3* self, D3D11_CONTEXT_TYPE ContextType, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetHardwareProtectionState)(ID3D11DeviceContext3* self, BOOL HwProtectionEnable, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetHardwareProtectionState)(ID3D11DeviceContext3* self, BOOL * pHwProtectionEnable, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Signal)(ID3D11DeviceContext4* self, ID3D11Fence * pFence, UINT64 Value, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Wait)(ID3D11DeviceContext4* self, ID3D11Fence * pFence, UINT64 Value, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11DeviceContext4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBuffer)(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture1D)(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture2D)(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture3D)(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateShaderResourceView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateUnorderedAccessView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRenderTargetView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDepthStencilView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateInputLayout)(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVertexShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGeometryShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGeometryShaderWithStreamOutput)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePixelShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateHullShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDomainShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateComputeShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateClassLinkage)(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBlendState)(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDepthStencilState)(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRasterizerState)(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSamplerState)(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateQuery)(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePredicate)(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext)(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResource)(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFormatSupport)(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels)(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CheckCounterInfo)(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11Device* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        D3D_FEATURE_LEVEL (WINAPI *GetFeatureLevel)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetCreationFlags)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext)(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetExceptionMode)(ID3D11Device* self, UINT RaiseFlags, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetExceptionMode)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext1)(ID3D11Device1* self, ID3D11DeviceContext1 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext1)(ID3D11Device1* self, UINT ContextFlags, ID3D11DeviceContext1 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBlendState1)(ID3D11Device1* self, const D3D11_BLEND_DESC1 * pBlendStateDesc, ID3D11BlendState1 ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRasterizerState1)(ID3D11Device1* self, const D3D11_RASTERIZER_DESC1 * pRasterizerDesc, ID3D11RasterizerState1 ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeviceContextState)(ID3D11Device1* self, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const IID & EmulatedInterface, D3D_FEATURE_LEVEL * pChosenFeatureLevel, ID3DDeviceContextState ** ppContextState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResource1)(ID3D11Device1* self, HANDLE hResource, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResourceByName)(ID3D11Device1* self, LPCWSTR lpName, DWORD dwDesiredAccess, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext2)(ID3D11Device2* self, ID3D11DeviceContext2 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext2)(ID3D11Device2* self, UINT ContextFlags, ID3D11DeviceContext2 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResourceTiling)(ID3D11Device2* self, ID3D11Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D11_PACKED_MIP_DESC * pPackedMipDesc, D3D11_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D11_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels1)(ID3D11Device2* self, DXGI_FORMAT Format, UINT SampleCount, UINT Flags, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture2D1)(ID3D11Device3* self, const D3D11_TEXTURE2D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D1 ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture3D1)(ID3D11Device3* self, const D3D11_TEXTURE3D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D1 ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRasterizerState2)(ID3D11Device3* self, const D3D11_RASTERIZER_DESC2 * pRasterizerDesc, ID3D11RasterizerState2 ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateShaderResourceView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC1 * pDesc1, ID3D11ShaderResourceView1 ** ppSRView1, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateUnorderedAccessView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC1 * pDesc1, ID3D11UnorderedAccessView1 ** ppUAView1, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRenderTargetView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC1 * pDesc1, ID3D11RenderTargetView1 ** ppRTView1, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateQuery1)(ID3D11Device3* self, const D3D11_QUERY_DESC1 * pQueryDesc1, ID3D11Query1 ** ppQuery1, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext3)(ID3D11Device3* self, ID3D11DeviceContext3 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext3)(ID3D11Device3* self, UINT ContextFlags, ID3D11DeviceContext3 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *WriteToSubresource)(ID3D11Device3* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ReadFromSubresource)(ID3D11Device3* self, void * pDstData, UINT DstRowPitch, UINT DstDepthPitch, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11Device3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBuffer)(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture1D)(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture2D)(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture3D)(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateShaderResourceView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateUnorderedAccessView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRenderTargetView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDepthStencilView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateInputLayout)(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVertexShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGeometryShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGeometryShaderWithStreamOutput)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePixelShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateHullShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDomainShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateComputeShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateClassLinkage)(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBlendState)(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDepthStencilState)(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRasterizerState)(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSamplerState)(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateQuery)(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePredicate)(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext)(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResource)(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFormatSupport)(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels)(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CheckCounterInfo)(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11Device* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        D3D_FEATURE_LEVEL (WINAPI *GetFeatureLevel)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetCreationFlags)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext)(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetExceptionMode)(ID3D11Device* self, UINT RaiseFlags, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetExceptionMode)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext1)(ID3D11Device1* self, ID3D11DeviceContext1 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext1)(ID3D11Device1* self, UINT ContextFlags, ID3D11DeviceContext1 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBlendState1)(ID3D11Device1* self, const D3D11_BLEND_DESC1 * pBlendStateDesc, ID3D11BlendState1 ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRasterizerState1)(ID3D11Device1* self, const D3D11_RASTERIZER_DESC1 * pRasterizerDesc, ID3D11RasterizerState1 ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeviceContextState)(ID3D11Device1* self, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const IID & EmulatedInterface, D3D_FEATURE_LEVEL * pChosenFeatureLevel, ID3DDeviceContextState ** ppContextState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResource1)(ID3D11Device1* self, HANDLE hResource, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResourceByName)(ID3D11Device1* self, LPCWSTR lpName, DWORD dwDesiredAccess, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext2)(ID3D11Device2* self, ID3D11DeviceContext2 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext2)(ID3D11Device2* self, UINT ContextFlags, ID3D11DeviceContext2 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResourceTiling)(ID3D11Device2* self, ID3D11Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D11_PACKED_MIP_DESC * pPackedMipDesc, D3D11_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D11_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels1)(ID3D11Device2* self, DXGI_FORMAT Format, UINT SampleCount, UINT Flags, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture2D1)(ID3D11Device3* self, const D3D11_TEXTURE2D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D1 ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture3D1)(ID3D11Device3* self, const D3D11_TEXTURE3D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D1 ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRasterizerState2)(ID3D11Device3* self, const D3D11_RASTERIZER_DESC2 * pRasterizerDesc, ID3D11RasterizerState2 ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateShaderResourceView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC1 * pDesc1, ID3D11ShaderResourceView1 ** ppSRView1, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateUnorderedAccessView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC1 * pDesc1, ID3D11UnorderedAccessView1 ** ppUAView1, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRenderTargetView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC1 * pDesc1, ID3D11RenderTargetView1 ** ppRTView1, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateQuery1)(ID3D11Device3* self, const D3D11_QUERY_DESC1 * pQueryDesc1, ID3D11Query1 ** ppQuery1, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext3)(ID3D11Device3* self, ID3D11DeviceContext3 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext3)(ID3D11Device3* self, UINT ContextFlags, ID3D11DeviceContext3 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *WriteToSubresource)(ID3D11Device3* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ReadFromSubresource)(ID3D11Device3* self, void * pDstData, UINT DstRowPitch, UINT DstDepthPitch, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterDeviceRemovedEvent)(ID3D11Device4* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterDeviceRemoved)(ID3D11Device4* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11Device4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBuffer)(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture1D)(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture2D)(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture3D)(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateShaderResourceView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateUnorderedAccessView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRenderTargetView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDepthStencilView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateInputLayout)(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVertexShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGeometryShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGeometryShaderWithStreamOutput)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePixelShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateHullShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDomainShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateComputeShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateClassLinkage)(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBlendState)(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDepthStencilState)(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRasterizerState)(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSamplerState)(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateQuery)(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePredicate)(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext)(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResource)(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFormatSupport)(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels)(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CheckCounterInfo)(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11Device* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        D3D_FEATURE_LEVEL (WINAPI *GetFeatureLevel)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetCreationFlags)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext)(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetExceptionMode)(ID3D11Device* self, UINT RaiseFlags, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetExceptionMode)(ID3D11Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext1)(ID3D11Device1* self, ID3D11DeviceContext1 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext1)(ID3D11Device1* self, UINT ContextFlags, ID3D11DeviceContext1 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateBlendState1)(ID3D11Device1* self, const D3D11_BLEND_DESC1 * pBlendStateDesc, ID3D11BlendState1 ** ppBlendState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRasterizerState1)(ID3D11Device1* self, const D3D11_RASTERIZER_DESC1 * pRasterizerDesc, ID3D11RasterizerState1 ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeviceContextState)(ID3D11Device1* self, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const IID & EmulatedInterface, D3D_FEATURE_LEVEL * pChosenFeatureLevel, ID3DDeviceContextState ** ppContextState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResource1)(ID3D11Device1* self, HANDLE hResource, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedResourceByName)(ID3D11Device1* self, LPCWSTR lpName, DWORD dwDesiredAccess, const IID & returnedInterface, void ** ppResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext2)(ID3D11Device2* self, ID3D11DeviceContext2 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext2)(ID3D11Device2* self, UINT ContextFlags, ID3D11DeviceContext2 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResourceTiling)(ID3D11Device2* self, ID3D11Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D11_PACKED_MIP_DESC * pPackedMipDesc, D3D11_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D11_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels1)(ID3D11Device2* self, DXGI_FORMAT Format, UINT SampleCount, UINT Flags, UINT * pNumQualityLevels, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture2D1)(ID3D11Device3* self, const D3D11_TEXTURE2D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D1 ** ppTexture2D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateTexture3D1)(ID3D11Device3* self, const D3D11_TEXTURE3D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D1 ** ppTexture3D, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRasterizerState2)(ID3D11Device3* self, const D3D11_RASTERIZER_DESC2 * pRasterizerDesc, ID3D11RasterizerState2 ** ppRasterizerState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateShaderResourceView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC1 * pDesc1, ID3D11ShaderResourceView1 ** ppSRView1, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateUnorderedAccessView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC1 * pDesc1, ID3D11UnorderedAccessView1 ** ppUAView1, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRenderTargetView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC1 * pDesc1, ID3D11RenderTargetView1 ** ppRTView1, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateQuery1)(ID3D11Device3* self, const D3D11_QUERY_DESC1 * pQueryDesc1, ID3D11Query1 ** ppQuery1, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetImmediateContext3)(ID3D11Device3* self, ID3D11DeviceContext3 ** ppImmediateContext, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDeferredContext3)(ID3D11Device3* self, UINT ContextFlags, ID3D11DeviceContext3 ** ppDeferredContext, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *WriteToSubresource)(ID3D11Device3* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ReadFromSubresource)(ID3D11Device3* self, void * pDstData, UINT DstRowPitch, UINT DstDepthPitch, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterDeviceRemovedEvent)(ID3D11Device4* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterDeviceRemoved)(ID3D11Device4* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedFence)(ID3D11Device5* self, HANDLE hFence, const IID & ReturnedInterface, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateFence)(ID3D11Device5* self, UINT64 InitialValue, D3D11_FENCE_FLAG Flags, const IID & ReturnedInterface, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11Device5Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Enter)(ID3D11Multithread* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Leave)(ID3D11Multithread* self, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *SetMultithreadProtected)(ID3D11Multithread* self, BOOL bMTProtect, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *GetMultithreadProtected)(ID3D11Multithread* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11MultithreadTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDecoderBuffer)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, UINT * pBufferSize, void ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ReleaseDecoderBuffer)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DecoderBeginFrame)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, ID3D11VideoDecoderOutputView * pView, UINT ContentKeySize, const void * pContentKey, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DecoderEndFrame)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SubmitDecoderBuffers)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC * pBufferDesc, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *DecoderExtension)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_DECODER_EXTENSION * pExtensionData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputTargetRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputBackgroundColor)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL YCbCr, const D3D11_VIDEO_COLOR * pColor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputAlphaFillMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode, UINT StreamIndex, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputConstriction)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, SIZE Size, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputStereoMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorSetOutputExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputTargetRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * Enabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputBackgroundColor)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pYCbCr, D3D11_VIDEO_COLOR * pColor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputAlphaFillMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE * pAlphaFillMode, UINT * pStreamIndex, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputConstriction)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, SIZE * pSize, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputStereoMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorGetOutputExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamFrameFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT FrameFormat, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamOutputRate)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate, BOOL RepeatFrame, const DXGI_RATIONAL * pCustomRate, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamSourceRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamDestRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamAlpha)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Alpha, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamPalette)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, const UINT * pEntries, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamPixelAspectRatio)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const DXGI_RATIONAL * pSourceAspectRatio, const DXGI_RATIONAL * pDestinationAspectRatio, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamLumaKey)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Lower, FLOAT Upper, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamStereoFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format, BOOL LeftViewFrame0, BOOL BaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode, int MonoOffset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamAutoProcessingMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamFilter)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL Enable, int Level, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorSetStreamExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamFrameFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT * pFrameFormat, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamOutputRate)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE * pOutputRate, BOOL * pRepeatFrame, DXGI_RATIONAL * pCustomRate, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamSourceRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamDestRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamAlpha)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pAlpha, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamPalette)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, UINT * pEntries, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamPixelAspectRatio)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, DXGI_RATIONAL * pSourceAspectRatio, DXGI_RATIONAL * pDestinationAspectRatio, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamLumaKey)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pLower, FLOAT * pUpper, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamStereoFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT * pFormat, BOOL * pLeftViewFrame0, BOOL * pBaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE * pFlipMode, int * MonoOffset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamAutoProcessingMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamFilter)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL * pEnabled, int * pLevel, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorGetStreamExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *VideoProcessorBlt)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, ID3D11VideoProcessorOutputView * pView, UINT OutputFrame, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM * pStreams, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *NegotiateCryptoSessionKeyExchange)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EncryptionBlt)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, UINT IVSize, void * pIV, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DecryptionBlt)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, D3D11_ENCRYPTED_BLOCK_INFO * pEncryptedBlockInfo, UINT ContentKeySize, const void * pContentKey, UINT IVSize, void * pIV, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *StartSessionKeyRefresh)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT RandomNumberSize, void * pRandomNumber, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *FinishSessionKeyRefresh)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetEncryptionBltKey)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT KeySize, void * pReadbackKey, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *NegotiateAuthenticatedChannelKeyExchange)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *QueryAuthenticatedChannel)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, UINT OutputSize, void * pOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ConfigureAuthenticatedChannel)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, D3D11_AUTHENTICATED_CONFIGURE_OUTPUT * pOutput, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamRotation)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_ROTATION Rotation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamRotation)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_ROTATION * pRotation, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SubmitDecoderBuffers1)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC1 * pBufferDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDataForNewHardwareKey)(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, UINT PrivateInputSize, const void * pPrivatInputData, UINT64 * pPrivateOutputData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckCryptoSessionStatus)(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, D3D11_CRYPTO_SESSION_STATUS * pStatus, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DecoderEnableDownsampling)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, UINT ReferenceFrameCount, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DecoderUpdateDownsampling)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE ColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputShaderUsage)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL ShaderUsage, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputShaderUsage)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pShaderUsage, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE ColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamMirror)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, BOOL FlipHorizontal, BOOL FlipVertical, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamMirror)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, BOOL * pFlipHorizontal, BOOL * pFlipVertical, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *VideoProcessorGetBehaviorHints)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT OutputWidth, UINT OutputHeight, DXGI_FORMAT OutputFormat, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT * pStreams, UINT * pBehaviorHints, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputHDRMetaData)(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_HDR_METADATA_TYPE Type, UINT Size, const void * pHDRMetaData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputHDRMetaData)(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_HDR_METADATA_TYPE * pType, UINT Size, void * pMetaData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamHDRMetaData)(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_HDR_METADATA_TYPE Type, UINT Size, const void * pHDRMetaData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamHDRMetaData)(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_HDR_METADATA_TYPE * pType, UINT Size, void * pMetaData, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11VideoContext2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoDecoder)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pVideoDesc, const D3D11_VIDEO_DECODER_CONFIG * pConfig, ID3D11VideoDecoder ** ppDecoder, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoProcessor)(ID3D11VideoDevice* self, ID3D11VideoProcessorEnumerator * pEnum, UINT RateConversionIndex, ID3D11VideoProcessor ** ppVideoProcessor, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateAuthenticatedChannel)(ID3D11VideoDevice* self, D3D11_AUTHENTICATED_CHANNEL_TYPE ChannelType, ID3D11AuthenticatedChannel ** ppAuthenticatedChannel, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCryptoSession)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, const GUID * pKeyExchangeType, ID3D11CryptoSession ** ppCryptoSession, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoDecoderOutputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, const D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoDecoderOutputView ** ppVDOVView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoProcessorInputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorInputView ** ppVPIView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoProcessorOutputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorOutputView ** ppVPOView, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateVideoProcessorEnumerator)(ID3D11VideoDevice* self, const D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pDesc, ID3D11VideoProcessorEnumerator ** ppEnum, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetVideoDecoderProfileCount)(ID3D11VideoDevice* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoDecoderProfile)(ID3D11VideoDevice* self, UINT Index, GUID * pDecoderProfile, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckVideoDecoderFormat)(ID3D11VideoDevice* self, const GUID * pDecoderProfile, DXGI_FORMAT Format, BOOL * pSupported, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoDecoderConfigCount)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT * pCount, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoDecoderConfig)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT Index, D3D11_VIDEO_DECODER_CONFIG * pConfig, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetContentProtectionCaps)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, D3D11_VIDEO_CONTENT_PROTECTION_CAPS * pCaps, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckCryptoKeyExchange)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, UINT Index, GUID * pKeyExchangeType, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11VideoDevice* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11VideoDevice* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetCryptoSessionPrivateDataSize)(ID3D11VideoDevice1* self, const GUID * pCryptoType, const GUID * pDecoderProfile, const GUID * pKeyExchangeType, UINT * pPrivateInputSize, UINT * pPrivateOutputSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetVideoDecoderCaps)(ID3D11VideoDevice1* self, const GUID * pDecoderProfile, UINT SampleWidth, UINT SampleHeight, const DXGI_RATIONAL * pFrameRate, UINT BitRate, const GUID * pCryptoType, UINT * pDecoderCaps, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckVideoDecoderDownsampling)(ID3D11VideoDevice1* self, const D3D11_VIDEO_DECODER_DESC * pInputDesc, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_DECODER_CONFIG * pInputConfig, const DXGI_RATIONAL * pFrameRate, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, BOOL * pSupported, BOOL * pRealTimeHint, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RecommendVideoDecoderDownsampleParameters)(ID3D11VideoDevice1* self, const D3D11_VIDEO_DECODER_DESC * pInputDesc, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_DECODER_CONFIG * pInputConfig, const DXGI_RATIONAL * pFrameRate, D3D11_VIDEO_SAMPLE_DESC * pRecommendedOutputDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D11VideoDevice2* self, D3D11_FEATURE_VIDEO Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *NegotiateCryptoSessionKeyExchangeMT)(ID3D11VideoDevice2* self, ID3D11CryptoSession * pCryptoSession, D3D11_CRYPTO_SESSION_KEY_EXCHANGE_FLAGS flags, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11VideoDevice2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDecoderBuffer)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, UINT * pBufferSize, void ** ppBuffer, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ReleaseDecoderBuffer)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DecoderBeginFrame)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, ID3D11VideoDecoderOutputView * pView, UINT ContentKeySize, const void * pContentKey, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DecoderEndFrame)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SubmitDecoderBuffers)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC * pBufferDesc, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *DecoderExtension)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_DECODER_EXTENSION * pExtensionData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputTargetRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputBackgroundColor)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL YCbCr, const D3D11_VIDEO_COLOR * pColor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputAlphaFillMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode, UINT StreamIndex, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputConstriction)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, SIZE Size, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputStereoMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorSetOutputExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputTargetRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * Enabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputBackgroundColor)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pYCbCr, D3D11_VIDEO_COLOR * pColor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputAlphaFillMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE * pAlphaFillMode, UINT * pStreamIndex, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputConstriction)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, SIZE * pSize, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputStereoMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorGetOutputExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamFrameFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT FrameFormat, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamOutputRate)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate, BOOL RepeatFrame, const DXGI_RATIONAL * pCustomRate, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamSourceRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamDestRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamAlpha)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Alpha, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamPalette)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, const UINT * pEntries, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamPixelAspectRatio)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const DXGI_RATIONAL * pSourceAspectRatio, const DXGI_RATIONAL * pDestinationAspectRatio, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamLumaKey)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Lower, FLOAT Upper, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamStereoFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format, BOOL LeftViewFrame0, BOOL BaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode, int MonoOffset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamAutoProcessingMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamFilter)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL Enable, int Level, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorSetStreamExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamFrameFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT * pFrameFormat, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamOutputRate)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE * pOutputRate, BOOL * pRepeatFrame, DXGI_RATIONAL * pCustomRate, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamSourceRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamDestRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamAlpha)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pAlpha, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamPalette)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, UINT * pEntries, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamPixelAspectRatio)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, DXGI_RATIONAL * pSourceAspectRatio, DXGI_RATIONAL * pDestinationAspectRatio, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamLumaKey)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pLower, FLOAT * pUpper, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamStereoFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT * pFormat, BOOL * pLeftViewFrame0, BOOL * pBaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE * pFlipMode, int * MonoOffset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamAutoProcessingMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamFilter)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL * pEnabled, int * pLevel, struct ::GPADispatchTable const*& tlsRef);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorGetStreamExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *VideoProcessorBlt)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, ID3D11VideoProcessorOutputView * pView, UINT OutputFrame, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM * pStreams, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *NegotiateCryptoSessionKeyExchange)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EncryptionBlt)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, UINT IVSize, void * pIV, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DecryptionBlt)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, D3D11_ENCRYPTED_BLOCK_INFO * pEncryptedBlockInfo, UINT ContentKeySize, const void * pContentKey, UINT IVSize, void * pIV, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *StartSessionKeyRefresh)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT RandomNumberSize, void * pRandomNumber, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *FinishSessionKeyRefresh)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetEncryptionBltKey)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT KeySize, void * pReadbackKey, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *NegotiateAuthenticatedChannelKeyExchange)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT DataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *QueryAuthenticatedChannel)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, UINT OutputSize, void * pOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ConfigureAuthenticatedChannel)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, D3D11_AUTHENTICATED_CONFIGURE_OUTPUT * pOutput, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamRotation)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_ROTATION Rotation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamRotation)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_ROTATION * pRotation, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SubmitDecoderBuffers1)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC1 * pBufferDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDataForNewHardwareKey)(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, UINT PrivateInputSize, const void * pPrivatInputData, UINT64 * pPrivateOutputData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckCryptoSessionStatus)(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, D3D11_CRYPTO_SESSION_STATUS * pStatus, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DecoderEnableDownsampling)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, UINT ReferenceFrameCount, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DecoderUpdateDownsampling)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE ColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputShaderUsage)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL ShaderUsage, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputShaderUsage)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pShaderUsage, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE ColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamMirror)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, BOOL FlipHorizontal, BOOL FlipVertical, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE * pColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamMirror)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, BOOL * pFlipHorizontal, BOOL * pFlipVertical, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *VideoProcessorGetBehaviorHints)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT OutputWidth, UINT OutputHeight, DXGI_FORMAT OutputFormat, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT * pStreams, UINT * pBehaviorHints, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetOutputHDRMetaData)(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_HDR_METADATA_TYPE Type, UINT Size, const void * pHDRMetaData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetOutputHDRMetaData)(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_HDR_METADATA_TYPE * pType, UINT Size, void * pMetaData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorSetStreamHDRMetaData)(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_HDR_METADATA_TYPE Type, UINT Size, const void * pHDRMetaData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *VideoProcessorGetStreamHDRMetaData)(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_HDR_METADATA_TYPE * pType, UINT Size, void * pMetaData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DecoderBeginFrame1)(ID3D11VideoContext3* self, ID3D11VideoDecoder * pDecoder, ID3D11VideoDecoderOutputView * pView, UINT ContentKeySize, const void * pContentKey, UINT NumComponentHistograms, const UINT * pHistogramOffsets, ID3D11Buffer *const * ppHistogramBuffers, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SubmitDecoderBuffers2)(ID3D11VideoContext3* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC2 * pBufferDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D11VideoContext3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12ObjectTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12DeviceChildTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12RootSignatureTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        const D3D12_ROOT_SIGNATURE_DESC * (WINAPI *GetRootSignatureDesc)(ID3D12RootSignatureDeserializer* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12RootSignatureDeserializerTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetRootSignatureDescAtVersion)(ID3D12VersionedRootSignatureDeserializer* self, D3D_ROOT_SIGNATURE_VERSION convertToVersion, const D3D12_VERSIONED_ROOT_SIGNATURE_DESC ** ppDesc, struct ::GPADispatchTable const*& tlsRef);
                        const D3D12_VERSIONED_ROOT_SIGNATURE_DESC * (WINAPI *GetUnconvertedRootSignatureDesc)(ID3D12VersionedRootSignatureDeserializer* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12VersionedRootSignatureDeserializerTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12PageableTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_HEAP_DESC* (WINAPI *GetDesc)(ID3D12Heap* self, D3D12_HEAP_DESC* outReturnValue, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12HeapTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Map)(ID3D12Resource* self, UINT Subresource, const D3D12_RANGE * pReadRange, void ** ppData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Unmap)(ID3D12Resource* self, UINT Subresource, const D3D12_RANGE * pWrittenRange, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_RESOURCE_DESC* (WINAPI *GetDesc)(ID3D12Resource* self, D3D12_RESOURCE_DESC* outReturnValue, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_GPU_VIRTUAL_ADDRESS (WINAPI *GetGPUVirtualAddress)(ID3D12Resource* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *WriteToSubresource)(ID3D12Resource* self, UINT DstSubresource, const D3D12_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ReadFromSubresource)(ID3D12Resource* self, void * pDstData, UINT DstRowPitch, UINT DstDepthPitch, UINT SrcSubresource, const D3D12_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetHeapProperties)(ID3D12Resource* self, D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS * pHeapFlags, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12ResourceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Reset)(ID3D12CommandAllocator* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12CommandAllocatorTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        UINT64 (WINAPI *GetCompletedValue)(ID3D12Fence* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetEventOnCompletion)(ID3D12Fence* self, UINT64 Value, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Signal)(ID3D12Fence* self, UINT64 Value, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12FenceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        UINT64 (WINAPI *GetCompletedValue)(ID3D12Fence* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetEventOnCompletion)(ID3D12Fence* self, UINT64 Value, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Signal)(ID3D12Fence* self, UINT64 Value, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_FENCE_FLAGS (WINAPI *GetCreationFlags)(ID3D12Fence1* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12Fence1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetCachedBlob)(ID3D12PipelineState* self, ID3DBlob ** ppBlob, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12PipelineStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_DESCRIPTOR_HEAP_DESC* (WINAPI *GetDesc)(ID3D12DescriptorHeap* self, D3D12_DESCRIPTOR_HEAP_DESC* outReturnValue, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_CPU_DESCRIPTOR_HANDLE* (WINAPI *GetCPUDescriptorHandleForHeapStart)(ID3D12DescriptorHeap* self, D3D12_CPU_DESCRIPTOR_HANDLE* outReturnValue, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_GPU_DESCRIPTOR_HANDLE* (WINAPI *GetGPUDescriptorHandleForHeapStart)(ID3D12DescriptorHeap* self, D3D12_GPU_DESCRIPTOR_HANDLE* outReturnValue, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12DescriptorHeapTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12QueryHeapTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12CommandSignatureTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_COMMAND_LIST_TYPE (WINAPI *GetType)(ID3D12CommandList* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12CommandListTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_COMMAND_LIST_TYPE (WINAPI *GetType)(ID3D12CommandList* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Close)(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Reset)(ID3D12GraphicsCommandList* self, ID3D12CommandAllocator * pAllocator, ID3D12PipelineState * pInitialState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawInstanced)(ID3D12GraphicsCommandList* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexedInstanced)(ID3D12GraphicsCommandList* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Dispatch)(ID3D12GraphicsCommandList* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyBufferRegion)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT64 NumBytes, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyTextureRegion)(ID3D12GraphicsCommandList* self, const D3D12_TEXTURE_COPY_LOCATION * pDst, UINT DstX, UINT DstY, UINT DstZ, const D3D12_TEXTURE_COPY_LOCATION * pSrc, const D3D12_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, ID3D12Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyTiles)(ID3D12GraphicsCommandList* self, ID3D12Resource * pTiledResource, const D3D12_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pTileRegionSize, ID3D12Resource * pBuffer, UINT64 BufferStartOffsetInBytes, D3D12_TILE_COPY_FLAGS Flags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveSubresource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, UINT DstSubresource, ID3D12Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D12GraphicsCommandList* self, D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetViewports)(ID3D12GraphicsCommandList* self, UINT NumViewports, const D3D12_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetScissorRects)(ID3D12GraphicsCommandList* self, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetBlendFactor)(ID3D12GraphicsCommandList* self, const FLOAT  BlendFactor[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetStencilRef)(ID3D12GraphicsCommandList* self, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPipelineState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResourceBarrier)(ID3D12GraphicsCommandList* self, UINT NumBarriers, const D3D12_RESOURCE_BARRIER * pBarriers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ExecuteBundle)(ID3D12GraphicsCommandList* self, ID3D12GraphicsCommandList * pCommandList, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetDescriptorHeaps)(ID3D12GraphicsCommandList* self, UINT NumDescriptorHeaps, ID3D12DescriptorHeap *const * ppDescriptorHeaps, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetIndexBuffer)(ID3D12GraphicsCommandList* self, const D3D12_INDEX_BUFFER_VIEW * pView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetVertexBuffers)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_VERTEX_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOSetTargets)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_STREAM_OUTPUT_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetRenderTargets)(ID3D12GraphicsCommandList* self, UINT NumRenderTargetDescriptors, const D3D12_CPU_DESCRIPTOR_HANDLE * pRenderTargetDescriptors, BOOL RTsSingleHandleToDescriptorRange, const D3D12_CPU_DESCRIPTOR_HANDLE * pDepthStencilDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearDepthStencilView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView, D3D12_CLEAR_FLAGS ClearFlags, FLOAT Depth, UINT8 Stencil, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearRenderTargetView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView, const FLOAT  ColorRGBA[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const UINT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const FLOAT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DiscardResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pResource, const D3D12_DISCARD_REGION * pRegion, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *BeginQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EndQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveQueryData)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT StartIndex, UINT NumQueries, ID3D12Resource * pDestinationBuffer, UINT64 AlignedDestinationBufferOffset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPredication)(ID3D12GraphicsCommandList* self, ID3D12Resource * pBuffer, UINT64 AlignedBufferOffset, D3D12_PREDICATION_OP Operation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetMarker)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *BeginEvent)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EndEvent)(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ExecuteIndirect)(ID3D12GraphicsCommandList* self, ID3D12CommandSignature * pCommandSignature, UINT MaxCommandCount, ID3D12Resource * pArgumentBuffer, UINT64 ArgumentBufferOffset, ID3D12Resource * pCountBuffer, UINT64 CountBufferOffset, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12GraphicsCommandListTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_COMMAND_LIST_TYPE (WINAPI *GetType)(ID3D12CommandList* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Close)(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Reset)(ID3D12GraphicsCommandList* self, ID3D12CommandAllocator * pAllocator, ID3D12PipelineState * pInitialState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawInstanced)(ID3D12GraphicsCommandList* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexedInstanced)(ID3D12GraphicsCommandList* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Dispatch)(ID3D12GraphicsCommandList* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyBufferRegion)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT64 NumBytes, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyTextureRegion)(ID3D12GraphicsCommandList* self, const D3D12_TEXTURE_COPY_LOCATION * pDst, UINT DstX, UINT DstY, UINT DstZ, const D3D12_TEXTURE_COPY_LOCATION * pSrc, const D3D12_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, ID3D12Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyTiles)(ID3D12GraphicsCommandList* self, ID3D12Resource * pTiledResource, const D3D12_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pTileRegionSize, ID3D12Resource * pBuffer, UINT64 BufferStartOffsetInBytes, D3D12_TILE_COPY_FLAGS Flags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveSubresource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, UINT DstSubresource, ID3D12Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D12GraphicsCommandList* self, D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetViewports)(ID3D12GraphicsCommandList* self, UINT NumViewports, const D3D12_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetScissorRects)(ID3D12GraphicsCommandList* self, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetBlendFactor)(ID3D12GraphicsCommandList* self, const FLOAT  BlendFactor[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetStencilRef)(ID3D12GraphicsCommandList* self, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPipelineState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResourceBarrier)(ID3D12GraphicsCommandList* self, UINT NumBarriers, const D3D12_RESOURCE_BARRIER * pBarriers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ExecuteBundle)(ID3D12GraphicsCommandList* self, ID3D12GraphicsCommandList * pCommandList, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetDescriptorHeaps)(ID3D12GraphicsCommandList* self, UINT NumDescriptorHeaps, ID3D12DescriptorHeap *const * ppDescriptorHeaps, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetIndexBuffer)(ID3D12GraphicsCommandList* self, const D3D12_INDEX_BUFFER_VIEW * pView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetVertexBuffers)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_VERTEX_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOSetTargets)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_STREAM_OUTPUT_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetRenderTargets)(ID3D12GraphicsCommandList* self, UINT NumRenderTargetDescriptors, const D3D12_CPU_DESCRIPTOR_HANDLE * pRenderTargetDescriptors, BOOL RTsSingleHandleToDescriptorRange, const D3D12_CPU_DESCRIPTOR_HANDLE * pDepthStencilDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearDepthStencilView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView, D3D12_CLEAR_FLAGS ClearFlags, FLOAT Depth, UINT8 Stencil, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearRenderTargetView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView, const FLOAT  ColorRGBA[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const UINT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const FLOAT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DiscardResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pResource, const D3D12_DISCARD_REGION * pRegion, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *BeginQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EndQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveQueryData)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT StartIndex, UINT NumQueries, ID3D12Resource * pDestinationBuffer, UINT64 AlignedDestinationBufferOffset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPredication)(ID3D12GraphicsCommandList* self, ID3D12Resource * pBuffer, UINT64 AlignedBufferOffset, D3D12_PREDICATION_OP Operation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetMarker)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *BeginEvent)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EndEvent)(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ExecuteIndirect)(ID3D12GraphicsCommandList* self, ID3D12CommandSignature * pCommandSignature, UINT MaxCommandCount, ID3D12Resource * pArgumentBuffer, UINT64 ArgumentBufferOffset, ID3D12Resource * pCountBuffer, UINT64 CountBufferOffset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *AtomicCopyBufferUINT)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *AtomicCopyBufferUINT64)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetDepthBounds)(ID3D12GraphicsCommandList1* self, FLOAT Min, FLOAT Max, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetSamplePositions)(ID3D12GraphicsCommandList1* self, UINT NumSamplesPerPixel, UINT NumPixels, D3D12_SAMPLE_POSITION * pSamplePositions, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveSubresourceRegion)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, ID3D12Resource * pSrcResource, UINT SrcSubresource, D3D12_RECT * pSrcRect, DXGI_FORMAT Format, D3D12_RESOLVE_MODE ResolveMode, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetViewInstanceMask)(ID3D12GraphicsCommandList1* self, UINT Mask, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12GraphicsCommandList1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_COMMAND_LIST_TYPE (WINAPI *GetType)(ID3D12CommandList* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Close)(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Reset)(ID3D12GraphicsCommandList* self, ID3D12CommandAllocator * pAllocator, ID3D12PipelineState * pInitialState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawInstanced)(ID3D12GraphicsCommandList* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexedInstanced)(ID3D12GraphicsCommandList* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Dispatch)(ID3D12GraphicsCommandList* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyBufferRegion)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT64 NumBytes, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyTextureRegion)(ID3D12GraphicsCommandList* self, const D3D12_TEXTURE_COPY_LOCATION * pDst, UINT DstX, UINT DstY, UINT DstZ, const D3D12_TEXTURE_COPY_LOCATION * pSrc, const D3D12_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, ID3D12Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyTiles)(ID3D12GraphicsCommandList* self, ID3D12Resource * pTiledResource, const D3D12_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pTileRegionSize, ID3D12Resource * pBuffer, UINT64 BufferStartOffsetInBytes, D3D12_TILE_COPY_FLAGS Flags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveSubresource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, UINT DstSubresource, ID3D12Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D12GraphicsCommandList* self, D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetViewports)(ID3D12GraphicsCommandList* self, UINT NumViewports, const D3D12_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetScissorRects)(ID3D12GraphicsCommandList* self, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetBlendFactor)(ID3D12GraphicsCommandList* self, const FLOAT  BlendFactor[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetStencilRef)(ID3D12GraphicsCommandList* self, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPipelineState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResourceBarrier)(ID3D12GraphicsCommandList* self, UINT NumBarriers, const D3D12_RESOURCE_BARRIER * pBarriers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ExecuteBundle)(ID3D12GraphicsCommandList* self, ID3D12GraphicsCommandList * pCommandList, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetDescriptorHeaps)(ID3D12GraphicsCommandList* self, UINT NumDescriptorHeaps, ID3D12DescriptorHeap *const * ppDescriptorHeaps, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetIndexBuffer)(ID3D12GraphicsCommandList* self, const D3D12_INDEX_BUFFER_VIEW * pView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetVertexBuffers)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_VERTEX_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOSetTargets)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_STREAM_OUTPUT_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetRenderTargets)(ID3D12GraphicsCommandList* self, UINT NumRenderTargetDescriptors, const D3D12_CPU_DESCRIPTOR_HANDLE * pRenderTargetDescriptors, BOOL RTsSingleHandleToDescriptorRange, const D3D12_CPU_DESCRIPTOR_HANDLE * pDepthStencilDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearDepthStencilView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView, D3D12_CLEAR_FLAGS ClearFlags, FLOAT Depth, UINT8 Stencil, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearRenderTargetView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView, const FLOAT  ColorRGBA[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const UINT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const FLOAT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DiscardResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pResource, const D3D12_DISCARD_REGION * pRegion, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *BeginQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EndQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveQueryData)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT StartIndex, UINT NumQueries, ID3D12Resource * pDestinationBuffer, UINT64 AlignedDestinationBufferOffset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPredication)(ID3D12GraphicsCommandList* self, ID3D12Resource * pBuffer, UINT64 AlignedBufferOffset, D3D12_PREDICATION_OP Operation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetMarker)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *BeginEvent)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EndEvent)(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ExecuteIndirect)(ID3D12GraphicsCommandList* self, ID3D12CommandSignature * pCommandSignature, UINT MaxCommandCount, ID3D12Resource * pArgumentBuffer, UINT64 ArgumentBufferOffset, ID3D12Resource * pCountBuffer, UINT64 CountBufferOffset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *AtomicCopyBufferUINT)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *AtomicCopyBufferUINT64)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetDepthBounds)(ID3D12GraphicsCommandList1* self, FLOAT Min, FLOAT Max, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetSamplePositions)(ID3D12GraphicsCommandList1* self, UINT NumSamplesPerPixel, UINT NumPixels, D3D12_SAMPLE_POSITION * pSamplePositions, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveSubresourceRegion)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, ID3D12Resource * pSrcResource, UINT SrcSubresource, D3D12_RECT * pSrcRect, DXGI_FORMAT Format, D3D12_RESOLVE_MODE ResolveMode, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetViewInstanceMask)(ID3D12GraphicsCommandList1* self, UINT Mask, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *WriteBufferImmediate)(ID3D12GraphicsCommandList2* self, UINT Count, const D3D12_WRITEBUFFERIMMEDIATE_PARAMETER * pParams, const D3D12_WRITEBUFFERIMMEDIATE_MODE * pModes, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12GraphicsCommandList2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UpdateTileMappings)(ID3D12CommandQueue* self, ID3D12Resource * pResource, UINT NumResourceRegions, const D3D12_TILED_RESOURCE_COORDINATE * pResourceRegionStartCoordinates, const D3D12_TILE_REGION_SIZE * pResourceRegionSizes, ID3D12Heap * pHeap, UINT NumRanges, const D3D12_TILE_RANGE_FLAGS * pRangeFlags, const UINT * pHeapRangeStartOffsets, const UINT * pRangeTileCounts, D3D12_TILE_MAPPING_FLAGS Flags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyTileMappings)(ID3D12CommandQueue* self, ID3D12Resource * pDstResource, const D3D12_TILED_RESOURCE_COORDINATE * pDstRegionStartCoordinate, ID3D12Resource * pSrcResource, const D3D12_TILED_RESOURCE_COORDINATE * pSrcRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pRegionSize, D3D12_TILE_MAPPING_FLAGS Flags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ExecuteCommandLists)(ID3D12CommandQueue* self, UINT NumCommandLists, ID3D12CommandList *const * ppCommandLists, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetMarker)(ID3D12CommandQueue* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *BeginEvent)(ID3D12CommandQueue* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EndEvent)(ID3D12CommandQueue* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Signal)(ID3D12CommandQueue* self, ID3D12Fence * pFence, UINT64 Value, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Wait)(ID3D12CommandQueue* self, ID3D12Fence * pFence, UINT64 Value, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetTimestampFrequency)(ID3D12CommandQueue* self, UINT64 * pFrequency, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetClockCalibration)(ID3D12CommandQueue* self, UINT64 * pGpuTimestamp, UINT64 * pCpuTimestamp, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_COMMAND_QUEUE_DESC* (WINAPI *GetDesc)(ID3D12CommandQueue* self, D3D12_COMMAND_QUEUE_DESC* outReturnValue, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12CommandQueueTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetNodeCount)(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandQueue)(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandAllocator)(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGraphicsPipelineState)(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateComputePipelineState)(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandList)(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDescriptorHeap)(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetDescriptorHandleIncrementSize)(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRootSignature)(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateConstantBufferView)(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateShaderResourceView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateUnorderedAccessView)(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateRenderTargetView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateDepthStencilView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateSampler)(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyDescriptors)(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyDescriptorsSimple)(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_RESOURCE_ALLOCATION_INFO* (WINAPI *GetResourceAllocationInfo)(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_HEAP_PROPERTIES* (WINAPI *GetCustomHeapProperties)(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommittedResource)(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateHeap)(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePlacedResource)(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateReservedResource)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSharedHandle)(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedHandle)(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedHandleByName)(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *MakeResident)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Evict)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateFence)(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetCopyableFootprints)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateQueryHeap)(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetStablePowerState)(ID3D12Device* self, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandSignature)(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResourceTiling)(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);
                        LUID* (WINAPI *GetAdapterLuid)(ID3D12Device* self, LUID* outReturnValue, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12DeviceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *StorePipeline)(ID3D12PipelineLibrary* self, LPCWSTR pName, ID3D12PipelineState * pPipeline, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *LoadGraphicsPipeline)(ID3D12PipelineLibrary* self, LPCWSTR pName, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *LoadComputePipeline)(ID3D12PipelineLibrary* self, LPCWSTR pName, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        SIZE_T (WINAPI *GetSerializedSize)(ID3D12PipelineLibrary* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Serialize)(ID3D12PipelineLibrary* self, void * pData, SIZE_T DataSizeInBytes, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12PipelineLibraryTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *StorePipeline)(ID3D12PipelineLibrary* self, LPCWSTR pName, ID3D12PipelineState * pPipeline, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *LoadGraphicsPipeline)(ID3D12PipelineLibrary* self, LPCWSTR pName, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *LoadComputePipeline)(ID3D12PipelineLibrary* self, LPCWSTR pName, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        SIZE_T (WINAPI *GetSerializedSize)(ID3D12PipelineLibrary* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Serialize)(ID3D12PipelineLibrary* self, void * pData, SIZE_T DataSizeInBytes, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *LoadPipeline)(ID3D12PipelineLibrary1* self, LPCWSTR pName, const D3D12_PIPELINE_STATE_STREAM_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12PipelineLibrary1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetNodeCount)(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandQueue)(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandAllocator)(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGraphicsPipelineState)(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateComputePipelineState)(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandList)(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDescriptorHeap)(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetDescriptorHandleIncrementSize)(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRootSignature)(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateConstantBufferView)(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateShaderResourceView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateUnorderedAccessView)(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateRenderTargetView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateDepthStencilView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateSampler)(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyDescriptors)(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyDescriptorsSimple)(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_RESOURCE_ALLOCATION_INFO* (WINAPI *GetResourceAllocationInfo)(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_HEAP_PROPERTIES* (WINAPI *GetCustomHeapProperties)(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommittedResource)(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateHeap)(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePlacedResource)(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateReservedResource)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSharedHandle)(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedHandle)(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedHandleByName)(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *MakeResident)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Evict)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateFence)(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetCopyableFootprints)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateQueryHeap)(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetStablePowerState)(ID3D12Device* self, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandSignature)(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResourceTiling)(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);
                        LUID* (WINAPI *GetAdapterLuid)(ID3D12Device* self, LUID* outReturnValue, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePipelineLibrary)(ID3D12Device1* self, const void * pLibraryBlob, SIZE_T BlobLength, const IID & riid, void ** ppPipelineLibrary, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetEventOnMultipleFenceCompletion)(ID3D12Device1* self, ID3D12Fence *const * ppFences, const UINT64 * pFenceValues, UINT NumFences, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetResidencyPriority)(ID3D12Device1* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, const D3D12_RESIDENCY_PRIORITY * pPriorities, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12Device1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetNodeCount)(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandQueue)(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandAllocator)(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGraphicsPipelineState)(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateComputePipelineState)(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandList)(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDescriptorHeap)(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetDescriptorHandleIncrementSize)(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRootSignature)(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateConstantBufferView)(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateShaderResourceView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateUnorderedAccessView)(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateRenderTargetView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateDepthStencilView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateSampler)(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyDescriptors)(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyDescriptorsSimple)(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_RESOURCE_ALLOCATION_INFO* (WINAPI *GetResourceAllocationInfo)(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_HEAP_PROPERTIES* (WINAPI *GetCustomHeapProperties)(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommittedResource)(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateHeap)(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePlacedResource)(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateReservedResource)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSharedHandle)(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedHandle)(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedHandleByName)(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *MakeResident)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Evict)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateFence)(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetCopyableFootprints)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateQueryHeap)(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetStablePowerState)(ID3D12Device* self, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandSignature)(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResourceTiling)(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);
                        LUID* (WINAPI *GetAdapterLuid)(ID3D12Device* self, LUID* outReturnValue, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePipelineLibrary)(ID3D12Device1* self, const void * pLibraryBlob, SIZE_T BlobLength, const IID & riid, void ** ppPipelineLibrary, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetEventOnMultipleFenceCompletion)(ID3D12Device1* self, ID3D12Fence *const * ppFences, const UINT64 * pFenceValues, UINT NumFences, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetResidencyPriority)(ID3D12Device1* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, const D3D12_RESIDENCY_PRIORITY * pPriorities, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePipelineState)(ID3D12Device2* self, const D3D12_PIPELINE_STATE_STREAM_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12Device2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetNodeCount)(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandQueue)(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandAllocator)(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGraphicsPipelineState)(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateComputePipelineState)(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandList)(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDescriptorHeap)(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetDescriptorHandleIncrementSize)(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRootSignature)(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateConstantBufferView)(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateShaderResourceView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateUnorderedAccessView)(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateRenderTargetView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateDepthStencilView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateSampler)(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyDescriptors)(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyDescriptorsSimple)(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_RESOURCE_ALLOCATION_INFO* (WINAPI *GetResourceAllocationInfo)(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_HEAP_PROPERTIES* (WINAPI *GetCustomHeapProperties)(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommittedResource)(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateHeap)(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePlacedResource)(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateReservedResource)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSharedHandle)(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedHandle)(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedHandleByName)(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *MakeResident)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Evict)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateFence)(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetCopyableFootprints)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateQueryHeap)(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetStablePowerState)(ID3D12Device* self, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandSignature)(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResourceTiling)(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);
                        LUID* (WINAPI *GetAdapterLuid)(ID3D12Device* self, LUID* outReturnValue, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePipelineLibrary)(ID3D12Device1* self, const void * pLibraryBlob, SIZE_T BlobLength, const IID & riid, void ** ppPipelineLibrary, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetEventOnMultipleFenceCompletion)(ID3D12Device1* self, ID3D12Fence *const * ppFences, const UINT64 * pFenceValues, UINT NumFences, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetResidencyPriority)(ID3D12Device1* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, const D3D12_RESIDENCY_PRIORITY * pPriorities, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePipelineState)(ID3D12Device2* self, const D3D12_PIPELINE_STATE_STREAM_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenExistingHeapFromAddress)(ID3D12Device3* self, const void * pAddress, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenExistingHeapFromFileMapping)(ID3D12Device3* self, HANDLE hFileMapping, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnqueueMakeResident)(ID3D12Device3* self, D3D12_RESIDENCY_FLAGS Flags, UINT NumObjects, ID3D12Pageable *const * ppObjects, ID3D12Fence * pFenceToSignal, UINT64 FenceValueToSignal, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12Device3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetStatusFence)(ID3D12ProtectedSession* self, const IID & riid, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_PROTECTED_SESSION_STATUS (WINAPI *GetSessionStatus)(ID3D12ProtectedSession* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12ProtectedSessionTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetStatusFence)(ID3D12ProtectedSession* self, const IID & riid, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_PROTECTED_SESSION_STATUS (WINAPI *GetSessionStatus)(ID3D12ProtectedSession* self, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_PROTECTED_RESOURCE_SESSION_DESC* (WINAPI *GetDesc)(ID3D12ProtectedResourceSession* self, D3D12_PROTECTED_RESOURCE_SESSION_DESC* outReturnValue, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12ProtectedResourceSessionTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetNodeCount)(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandQueue)(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandAllocator)(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGraphicsPipelineState)(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateComputePipelineState)(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandList)(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDescriptorHeap)(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetDescriptorHandleIncrementSize)(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRootSignature)(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateConstantBufferView)(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateShaderResourceView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateUnorderedAccessView)(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateRenderTargetView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateDepthStencilView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateSampler)(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyDescriptors)(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyDescriptorsSimple)(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_RESOURCE_ALLOCATION_INFO* (WINAPI *GetResourceAllocationInfo)(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_HEAP_PROPERTIES* (WINAPI *GetCustomHeapProperties)(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommittedResource)(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateHeap)(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePlacedResource)(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateReservedResource)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSharedHandle)(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedHandle)(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedHandleByName)(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *MakeResident)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Evict)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateFence)(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetCopyableFootprints)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateQueryHeap)(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetStablePowerState)(ID3D12Device* self, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandSignature)(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResourceTiling)(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);
                        LUID* (WINAPI *GetAdapterLuid)(ID3D12Device* self, LUID* outReturnValue, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePipelineLibrary)(ID3D12Device1* self, const void * pLibraryBlob, SIZE_T BlobLength, const IID & riid, void ** ppPipelineLibrary, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetEventOnMultipleFenceCompletion)(ID3D12Device1* self, ID3D12Fence *const * ppFences, const UINT64 * pFenceValues, UINT NumFences, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetResidencyPriority)(ID3D12Device1* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, const D3D12_RESIDENCY_PRIORITY * pPriorities, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePipelineState)(ID3D12Device2* self, const D3D12_PIPELINE_STATE_STREAM_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenExistingHeapFromAddress)(ID3D12Device3* self, const void * pAddress, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenExistingHeapFromFileMapping)(ID3D12Device3* self, HANDLE hFileMapping, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnqueueMakeResident)(ID3D12Device3* self, D3D12_RESIDENCY_FLAGS Flags, UINT NumObjects, ID3D12Pageable *const * ppObjects, ID3D12Fence * pFenceToSignal, UINT64 FenceValueToSignal, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandList1)(ID3D12Device4* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, D3D12_COMMAND_LIST_FLAGS flags, const IID & riid, void ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateProtectedResourceSession)(ID3D12Device4* self, const D3D12_PROTECTED_RESOURCE_SESSION_DESC * pDesc, const IID & riid, void ** ppSession, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommittedResource1)(ID3D12Device4* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riidResource, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateHeap1)(ID3D12Device4* self, const D3D12_HEAP_DESC * pDesc, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateReservedResource1)(ID3D12Device4* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_RESOURCE_ALLOCATION_INFO* (WINAPI *GetResourceAllocationInfo1)(ID3D12Device4* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, D3D12_RESOURCE_ALLOCATION_INFO1 * pResourceAllocationInfo1, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12Device4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *LifetimeStateUpdated)(ID3D12LifetimeOwner* self, D3D12_LIFETIME_STATE NewState, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12LifetimeOwnerTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        LUID* (WINAPI *GetLUID)(ID3D12SwapChainAssistant* self, LUID* outReturnValue, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetSwapChainObject)(ID3D12SwapChainAssistant* self, const IID & riid, void ** ppv, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetCurrentResourceAndCommandQueue)(ID3D12SwapChainAssistant* self, const IID & riidResource, void ** ppvResource, const IID & riidQueue, void ** ppvQueue, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *InsertImplicitSync)(ID3D12SwapChainAssistant* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12SwapChainAssistantTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DestroyOwnedObject)(ID3D12LifetimeTracker* self, ID3D12DeviceChild * pObject, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12LifetimeTrackerTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12StateObjectTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void * (WINAPI *GetShaderIdentifier)(ID3D12StateObjectProperties* self, LPCWSTR pExportName, struct ::GPADispatchTable const*& tlsRef);
                        UINT64 (WINAPI *GetShaderStackSize)(ID3D12StateObjectProperties* self, LPCWSTR pExportName, struct ::GPADispatchTable const*& tlsRef);
                        UINT64 (WINAPI *GetPipelineStackSize)(ID3D12StateObjectProperties* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPipelineStackSize)(ID3D12StateObjectProperties* self, UINT64 PipelineStackSizeInBytes, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12StateObjectPropertiesTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetNodeCount)(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandQueue)(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandAllocator)(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateGraphicsPipelineState)(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateComputePipelineState)(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandList)(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDescriptorHeap)(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetDescriptorHandleIncrementSize)(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateRootSignature)(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateConstantBufferView)(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateShaderResourceView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateUnorderedAccessView)(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateRenderTargetView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateDepthStencilView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CreateSampler)(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyDescriptors)(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyDescriptorsSimple)(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_RESOURCE_ALLOCATION_INFO* (WINAPI *GetResourceAllocationInfo)(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_HEAP_PROPERTIES* (WINAPI *GetCustomHeapProperties)(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommittedResource)(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateHeap)(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePlacedResource)(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateReservedResource)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSharedHandle)(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedHandle)(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenSharedHandleByName)(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *MakeResident)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Evict)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateFence)(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D12Device* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetCopyableFootprints)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateQueryHeap)(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetStablePowerState)(ID3D12Device* self, BOOL Enable, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandSignature)(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetResourceTiling)(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips, struct ::GPADispatchTable const*& tlsRef);
                        LUID* (WINAPI *GetAdapterLuid)(ID3D12Device* self, LUID* outReturnValue, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePipelineLibrary)(ID3D12Device1* self, const void * pLibraryBlob, SIZE_T BlobLength, const IID & riid, void ** ppPipelineLibrary, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetEventOnMultipleFenceCompletion)(ID3D12Device1* self, ID3D12Fence *const * ppFences, const UINT64 * pFenceValues, UINT NumFences, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetResidencyPriority)(ID3D12Device1* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, const D3D12_RESIDENCY_PRIORITY * pPriorities, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreatePipelineState)(ID3D12Device2* self, const D3D12_PIPELINE_STATE_STREAM_DESC * pDesc, const IID & riid, void ** ppPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenExistingHeapFromAddress)(ID3D12Device3* self, const void * pAddress, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OpenExistingHeapFromFileMapping)(ID3D12Device3* self, HANDLE hFileMapping, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnqueueMakeResident)(ID3D12Device3* self, D3D12_RESIDENCY_FLAGS Flags, UINT NumObjects, ID3D12Pageable *const * ppObjects, ID3D12Fence * pFenceToSignal, UINT64 FenceValueToSignal, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommandList1)(ID3D12Device4* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, D3D12_COMMAND_LIST_FLAGS flags, const IID & riid, void ** ppCommandList, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateProtectedResourceSession)(ID3D12Device4* self, const D3D12_PROTECTED_RESOURCE_SESSION_DESC * pDesc, const IID & riid, void ** ppSession, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateCommittedResource1)(ID3D12Device4* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riidResource, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateHeap1)(ID3D12Device4* self, const D3D12_HEAP_DESC * pDesc, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riid, void ** ppvHeap, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateReservedResource1)(ID3D12Device4* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riid, void ** ppvResource, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_RESOURCE_ALLOCATION_INFO* (WINAPI *GetResourceAllocationInfo1)(ID3D12Device4* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, D3D12_RESOURCE_ALLOCATION_INFO1 * pResourceAllocationInfo1, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateLifetimeTracker)(ID3D12Device5* self, ID3D12LifetimeOwner * pOwner, const IID & riid, void ** ppvTracker, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RemoveDevice)(ID3D12Device5* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumerateMetaCommands)(ID3D12Device5* self, UINT * pNumMetaCommands, D3D12_META_COMMAND_DESC * pDescs, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumerateMetaCommandParameters)(ID3D12Device5* self, const GUID & CommandId, D3D12_META_COMMAND_PARAMETER_STAGE Stage, UINT * pTotalStructureSizeInBytes, UINT * pParameterCount, D3D12_META_COMMAND_PARAMETER_DESC * pParameterDescs, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateMetaCommand)(ID3D12Device5* self, const GUID & CommandId, UINT NodeMask, const void * pCreationParametersData, SIZE_T CreationParametersDataSizeInBytes, const IID & riid, void ** ppMetaCommand, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateStateObject)(ID3D12Device5* self, const D3D12_STATE_OBJECT_DESC * pDesc, const IID & riid, void ** ppStateObject, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetRaytracingAccelerationStructurePrebuildInfo)(ID3D12Device5* self, const D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS * pDesc, D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO * pInfo, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_DRIVER_MATCHING_IDENTIFIER_STATUS (WINAPI *CheckDriverMatchingIdentifier)(ID3D12Device5* self, D3D12_SERIALIZED_DATA_TYPE SerializedDataType, const D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER * pIdentifierToCheck, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12Device5Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Map)(ID3D12Resource* self, UINT Subresource, const D3D12_RANGE * pReadRange, void ** ppData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Unmap)(ID3D12Resource* self, UINT Subresource, const D3D12_RANGE * pWrittenRange, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_RESOURCE_DESC* (WINAPI *GetDesc)(ID3D12Resource* self, D3D12_RESOURCE_DESC* outReturnValue, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_GPU_VIRTUAL_ADDRESS (WINAPI *GetGPUVirtualAddress)(ID3D12Resource* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *WriteToSubresource)(ID3D12Resource* self, UINT DstSubresource, const D3D12_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ReadFromSubresource)(ID3D12Resource* self, void * pDstData, UINT DstRowPitch, UINT DstDepthPitch, UINT SrcSubresource, const D3D12_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetHeapProperties)(ID3D12Resource* self, D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS * pHeapFlags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetProtectedResourceSession)(ID3D12Resource1* self, const IID & riid, void ** ppProtectedSession, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12Resource1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_HEAP_DESC* (WINAPI *GetDesc)(ID3D12Heap* self, D3D12_HEAP_DESC* outReturnValue, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetProtectedResourceSession)(ID3D12Heap1* self, const IID & riid, void ** ppProtectedSession, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12Heap1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_COMMAND_LIST_TYPE (WINAPI *GetType)(ID3D12CommandList* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Close)(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Reset)(ID3D12GraphicsCommandList* self, ID3D12CommandAllocator * pAllocator, ID3D12PipelineState * pInitialState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawInstanced)(ID3D12GraphicsCommandList* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexedInstanced)(ID3D12GraphicsCommandList* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Dispatch)(ID3D12GraphicsCommandList* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyBufferRegion)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT64 NumBytes, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyTextureRegion)(ID3D12GraphicsCommandList* self, const D3D12_TEXTURE_COPY_LOCATION * pDst, UINT DstX, UINT DstY, UINT DstZ, const D3D12_TEXTURE_COPY_LOCATION * pSrc, const D3D12_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, ID3D12Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyTiles)(ID3D12GraphicsCommandList* self, ID3D12Resource * pTiledResource, const D3D12_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pTileRegionSize, ID3D12Resource * pBuffer, UINT64 BufferStartOffsetInBytes, D3D12_TILE_COPY_FLAGS Flags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveSubresource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, UINT DstSubresource, ID3D12Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D12GraphicsCommandList* self, D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetViewports)(ID3D12GraphicsCommandList* self, UINT NumViewports, const D3D12_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetScissorRects)(ID3D12GraphicsCommandList* self, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetBlendFactor)(ID3D12GraphicsCommandList* self, const FLOAT  BlendFactor[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetStencilRef)(ID3D12GraphicsCommandList* self, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPipelineState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResourceBarrier)(ID3D12GraphicsCommandList* self, UINT NumBarriers, const D3D12_RESOURCE_BARRIER * pBarriers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ExecuteBundle)(ID3D12GraphicsCommandList* self, ID3D12GraphicsCommandList * pCommandList, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetDescriptorHeaps)(ID3D12GraphicsCommandList* self, UINT NumDescriptorHeaps, ID3D12DescriptorHeap *const * ppDescriptorHeaps, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetIndexBuffer)(ID3D12GraphicsCommandList* self, const D3D12_INDEX_BUFFER_VIEW * pView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetVertexBuffers)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_VERTEX_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOSetTargets)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_STREAM_OUTPUT_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetRenderTargets)(ID3D12GraphicsCommandList* self, UINT NumRenderTargetDescriptors, const D3D12_CPU_DESCRIPTOR_HANDLE * pRenderTargetDescriptors, BOOL RTsSingleHandleToDescriptorRange, const D3D12_CPU_DESCRIPTOR_HANDLE * pDepthStencilDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearDepthStencilView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView, D3D12_CLEAR_FLAGS ClearFlags, FLOAT Depth, UINT8 Stencil, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearRenderTargetView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView, const FLOAT  ColorRGBA[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const UINT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const FLOAT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DiscardResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pResource, const D3D12_DISCARD_REGION * pRegion, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *BeginQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EndQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveQueryData)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT StartIndex, UINT NumQueries, ID3D12Resource * pDestinationBuffer, UINT64 AlignedDestinationBufferOffset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPredication)(ID3D12GraphicsCommandList* self, ID3D12Resource * pBuffer, UINT64 AlignedBufferOffset, D3D12_PREDICATION_OP Operation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetMarker)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *BeginEvent)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EndEvent)(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ExecuteIndirect)(ID3D12GraphicsCommandList* self, ID3D12CommandSignature * pCommandSignature, UINT MaxCommandCount, ID3D12Resource * pArgumentBuffer, UINT64 ArgumentBufferOffset, ID3D12Resource * pCountBuffer, UINT64 CountBufferOffset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *AtomicCopyBufferUINT)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *AtomicCopyBufferUINT64)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetDepthBounds)(ID3D12GraphicsCommandList1* self, FLOAT Min, FLOAT Max, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetSamplePositions)(ID3D12GraphicsCommandList1* self, UINT NumSamplesPerPixel, UINT NumPixels, D3D12_SAMPLE_POSITION * pSamplePositions, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveSubresourceRegion)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, ID3D12Resource * pSrcResource, UINT SrcSubresource, D3D12_RECT * pSrcRect, DXGI_FORMAT Format, D3D12_RESOLVE_MODE ResolveMode, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetViewInstanceMask)(ID3D12GraphicsCommandList1* self, UINT Mask, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *WriteBufferImmediate)(ID3D12GraphicsCommandList2* self, UINT Count, const D3D12_WRITEBUFFERIMMEDIATE_PARAMETER * pParams, const D3D12_WRITEBUFFERIMMEDIATE_MODE * pModes, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetProtectedResourceSession)(ID3D12GraphicsCommandList3* self, ID3D12ProtectedResourceSession * pProtectedResourceSession, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12GraphicsCommandList3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        UINT64 (WINAPI *GetRequiredParameterResourceSize)(ID3D12MetaCommand* self, D3D12_META_COMMAND_PARAMETER_STAGE Stage, UINT ParameterIndex, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12MetaCommandTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice, struct ::GPADispatchTable const*& tlsRef);
                        D3D12_COMMAND_LIST_TYPE (WINAPI *GetType)(ID3D12CommandList* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Close)(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Reset)(ID3D12GraphicsCommandList* self, ID3D12CommandAllocator * pAllocator, ID3D12PipelineState * pInitialState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawInstanced)(ID3D12GraphicsCommandList* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DrawIndexedInstanced)(ID3D12GraphicsCommandList* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Dispatch)(ID3D12GraphicsCommandList* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyBufferRegion)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT64 NumBytes, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyTextureRegion)(ID3D12GraphicsCommandList* self, const D3D12_TEXTURE_COPY_LOCATION * pDst, UINT DstX, UINT DstY, UINT DstZ, const D3D12_TEXTURE_COPY_LOCATION * pSrc, const D3D12_BOX * pSrcBox, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, ID3D12Resource * pSrcResource, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyTiles)(ID3D12GraphicsCommandList* self, ID3D12Resource * pTiledResource, const D3D12_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pTileRegionSize, ID3D12Resource * pBuffer, UINT64 BufferStartOffsetInBytes, D3D12_TILE_COPY_FLAGS Flags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveSubresource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, UINT DstSubresource, ID3D12Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D12GraphicsCommandList* self, D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetViewports)(ID3D12GraphicsCommandList* self, UINT NumViewports, const D3D12_VIEWPORT * pViewports, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *RSSetScissorRects)(ID3D12GraphicsCommandList* self, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetBlendFactor)(ID3D12GraphicsCommandList* self, const FLOAT  BlendFactor[4], struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetStencilRef)(ID3D12GraphicsCommandList* self, UINT StencilRef, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPipelineState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResourceBarrier)(ID3D12GraphicsCommandList* self, UINT NumBarriers, const D3D12_RESOURCE_BARRIER * pBarriers, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ExecuteBundle)(ID3D12GraphicsCommandList* self, ID3D12GraphicsCommandList * pCommandList, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetDescriptorHeaps)(ID3D12GraphicsCommandList* self, UINT NumDescriptorHeaps, ID3D12DescriptorHeap *const * ppDescriptorHeaps, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetComputeRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetGraphicsRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetIndexBuffer)(ID3D12GraphicsCommandList* self, const D3D12_INDEX_BUFFER_VIEW * pView, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *IASetVertexBuffers)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_VERTEX_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SOSetTargets)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_STREAM_OUTPUT_BUFFER_VIEW * pViews, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetRenderTargets)(ID3D12GraphicsCommandList* self, UINT NumRenderTargetDescriptors, const D3D12_CPU_DESCRIPTOR_HANDLE * pRenderTargetDescriptors, BOOL RTsSingleHandleToDescriptorRange, const D3D12_CPU_DESCRIPTOR_HANDLE * pDepthStencilDescriptor, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearDepthStencilView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView, D3D12_CLEAR_FLAGS ClearFlags, FLOAT Depth, UINT8 Stencil, UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearRenderTargetView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView, const FLOAT  ColorRGBA[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const UINT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const FLOAT  Values[4], UINT NumRects, const D3D12_RECT * pRects, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DiscardResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pResource, const D3D12_DISCARD_REGION * pRegion, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *BeginQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EndQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveQueryData)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT StartIndex, UINT NumQueries, ID3D12Resource * pDestinationBuffer, UINT64 AlignedDestinationBufferOffset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPredication)(ID3D12GraphicsCommandList* self, ID3D12Resource * pBuffer, UINT64 AlignedBufferOffset, D3D12_PREDICATION_OP Operation, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetMarker)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *BeginEvent)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EndEvent)(ID3D12GraphicsCommandList* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ExecuteIndirect)(ID3D12GraphicsCommandList* self, ID3D12CommandSignature * pCommandSignature, UINT MaxCommandCount, ID3D12Resource * pArgumentBuffer, UINT64 ArgumentBufferOffset, ID3D12Resource * pCountBuffer, UINT64 CountBufferOffset, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *AtomicCopyBufferUINT)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *AtomicCopyBufferUINT64)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *OMSetDepthBounds)(ID3D12GraphicsCommandList1* self, FLOAT Min, FLOAT Max, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetSamplePositions)(ID3D12GraphicsCommandList1* self, UINT NumSamplesPerPixel, UINT NumPixels, D3D12_SAMPLE_POSITION * pSamplePositions, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ResolveSubresourceRegion)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, ID3D12Resource * pSrcResource, UINT SrcSubresource, D3D12_RECT * pSrcRect, DXGI_FORMAT Format, D3D12_RESOLVE_MODE ResolveMode, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetViewInstanceMask)(ID3D12GraphicsCommandList1* self, UINT Mask, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *WriteBufferImmediate)(ID3D12GraphicsCommandList2* self, UINT Count, const D3D12_WRITEBUFFERIMMEDIATE_PARAMETER * pParams, const D3D12_WRITEBUFFERIMMEDIATE_MODE * pModes, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetProtectedResourceSession)(ID3D12GraphicsCommandList3* self, ID3D12ProtectedResourceSession * pProtectedResourceSession, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *BeginRenderPass)(ID3D12GraphicsCommandList4* self, UINT NumRenderTargets, const D3D12_RENDER_PASS_RENDER_TARGET_DESC * pRenderTargets, const D3D12_RENDER_PASS_DEPTH_STENCIL_DESC * pDepthStencil, D3D12_RENDER_PASS_FLAGS Flags, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EndRenderPass)(ID3D12GraphicsCommandList4* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *InitializeMetaCommand)(ID3D12GraphicsCommandList4* self, ID3D12MetaCommand * pMetaCommand, const void * pInitializationParametersData, SIZE_T InitializationParametersDataSizeInBytes, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ExecuteMetaCommand)(ID3D12GraphicsCommandList4* self, ID3D12MetaCommand * pMetaCommand, const void * pExecutionParametersData, SIZE_T ExecutionParametersDataSizeInBytes, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *BuildRaytracingAccelerationStructure)(ID3D12GraphicsCommandList4* self, const D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC * pDesc, UINT NumPostbuildInfoDescs, const D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC * pPostbuildInfoDescs, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EmitRaytracingAccelerationStructurePostbuildInfo)(ID3D12GraphicsCommandList4* self, const D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC * pDesc, UINT NumSourceAccelerationStructures, const D3D12_GPU_VIRTUAL_ADDRESS * pSourceAccelerationStructureData, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *CopyRaytracingAccelerationStructure)(ID3D12GraphicsCommandList4* self, D3D12_GPU_VIRTUAL_ADDRESS DestAccelerationStructureData, D3D12_GPU_VIRTUAL_ADDRESS SourceAccelerationStructureData, D3D12_RAYTRACING_ACCELERATION_STRUCTURE_COPY_MODE Mode, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetPipelineState1)(ID3D12GraphicsCommandList4* self, ID3D12StateObject * pStateObject, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *DispatchRays)(ID3D12GraphicsCommandList4* self, const D3D12_DISPATCH_RAYS_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12GraphicsCommandList4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *EnableShaderInstrumentation)(ID3D12Tools* self, BOOL bEnable, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *ShaderInstrumentationEnabled)(ID3D12Tools* self, struct ::GPADispatchTable const*& tlsRef);
            
        } ID3D12ToolsTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIObjectTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIDeviceSubObjectTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetSharedHandle)(IDXGIResource* self, HANDLE * pSharedHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetUsage)(IDXGIResource* self, DXGI_USAGE * pUsage, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetEvictionPriority)(IDXGIResource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetEvictionPriority)(IDXGIResource* self, UINT * pEvictionPriority, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIResourceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *AcquireSync)(IDXGIKeyedMutex* self, UINT64 Key, DWORD dwMilliseconds, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ReleaseSync)(IDXGIKeyedMutex* self, UINT64 Key, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIKeyedMutexTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGISurface* self, DXGI_SURFACE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Map)(IDXGISurface* self, DXGI_MAPPED_RECT * pLockedRect, UINT MapFlags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Unmap)(IDXGISurface* self, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGISurfaceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGISurface* self, DXGI_SURFACE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Map)(IDXGISurface* self, DXGI_MAPPED_RECT * pLockedRect, UINT MapFlags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Unmap)(IDXGISurface* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDC)(IDXGISurface1* self, BOOL Discard, HDC * phdc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ReleaseDC)(IDXGISurface1* self, RECT * pDirtyRect, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGISurface1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumOutputs)(IDXGIAdapter* self, UINT Output, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGIAdapter* self, DXGI_ADAPTER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckInterfaceSupport)(IDXGIAdapter* self, const GUID & InterfaceName, LARGE_INTEGER * pUMDVersion, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIAdapterTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplayModeList)(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FindClosestMatchingMode)(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *WaitForVBlank)(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *TakeOwnership)(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ReleaseOwnership)(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGammaControlCapabilities)(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetGammaControl)(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGammaControl)(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetDisplaySurface)(IDXGIOutput* self, IDXGISurface * pScanoutSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplaySurfaceData)(IDXGIOutput* self, IDXGISurface * pDestination, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIOutputTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Present)(IDXGISwapChain* self, UINT SyncInterval, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetBuffer)(IDXGISwapChain* self, UINT Buffer, const IID & riid, void ** ppSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetFullscreenState)(IDXGISwapChain* self, BOOL Fullscreen, IDXGIOutput * pTarget, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFullscreenState)(IDXGISwapChain* self, BOOL * pFullscreen, IDXGIOutput ** ppTarget, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGISwapChain* self, DXGI_SWAP_CHAIN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ResizeBuffers)(IDXGISwapChain* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ResizeTarget)(IDXGISwapChain* self, const DXGI_MODE_DESC * pNewTargetParameters, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetContainingOutput)(IDXGISwapChain* self, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGISwapChain* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetLastPresentCount)(IDXGISwapChain* self, UINT * pLastPresentCount, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGISwapChainTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapters)(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *MakeWindowAssociation)(IDXGIFactory* self, HWND WindowHandle, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetWindowAssociation)(IDXGIFactory* self, HWND * pWindowHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChain)(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSoftwareAdapter)(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIFactoryTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetAdapter)(IDXGIDevice* self, IDXGIAdapter ** pAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSurface)(IDXGIDevice* self, const DXGI_SURFACE_DESC * pDesc, UINT NumSurfaces, DXGI_USAGE Usage, const DXGI_SHARED_RESOURCE * pSharedResource, IDXGISurface ** ppSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *QueryResourceResidency)(IDXGIDevice* self, IUnknown *const * ppResources, DXGI_RESIDENCY * pResidencyStatus, UINT NumResources, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetGPUThreadPriority)(IDXGIDevice* self, INT Priority, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGPUThreadPriority)(IDXGIDevice* self, INT * pPriority, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIDeviceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapters)(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *MakeWindowAssociation)(IDXGIFactory* self, HWND WindowHandle, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetWindowAssociation)(IDXGIFactory* self, HWND * pWindowHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChain)(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSoftwareAdapter)(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapters1)(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsCurrent)(IDXGIFactory1* self, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIFactory1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumOutputs)(IDXGIAdapter* self, UINT Output, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGIAdapter* self, DXGI_ADAPTER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckInterfaceSupport)(IDXGIAdapter* self, const GUID & InterfaceName, LARGE_INTEGER * pUMDVersion, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc1)(IDXGIAdapter1* self, DXGI_ADAPTER_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIAdapter1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetAdapter)(IDXGIDevice* self, IDXGIAdapter ** pAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSurface)(IDXGIDevice* self, const DXGI_SURFACE_DESC * pDesc, UINT NumSurfaces, DXGI_USAGE Usage, const DXGI_SHARED_RESOURCE * pSharedResource, IDXGISurface ** ppSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *QueryResourceResidency)(IDXGIDevice* self, IUnknown *const * ppResources, DXGI_RESIDENCY * pResidencyStatus, UINT NumResources, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetGPUThreadPriority)(IDXGIDevice* self, INT Priority, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGPUThreadPriority)(IDXGIDevice* self, INT * pPriority, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetMaximumFrameLatency)(IDXGIDevice1* self, UINT MaxLatency, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetMaximumFrameLatency)(IDXGIDevice1* self, UINT * pMaxLatency, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIDevice1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsStereoEnabled)(IDXGIDisplayControl* self, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *SetStereoEnabled)(IDXGIDisplayControl* self, BOOL enabled, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIDisplayControlTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *GetDesc)(IDXGIOutputDuplication* self, DXGI_OUTDUPL_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *AcquireNextFrame)(IDXGIOutputDuplication* self, UINT TimeoutInMilliseconds, DXGI_OUTDUPL_FRAME_INFO * pFrameInfo, IDXGIResource ** ppDesktopResource, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFrameDirtyRects)(IDXGIOutputDuplication* self, UINT DirtyRectsBufferSize, RECT * pDirtyRectsBuffer, UINT * pDirtyRectsBufferSizeRequired, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFrameMoveRects)(IDXGIOutputDuplication* self, UINT MoveRectsBufferSize, DXGI_OUTDUPL_MOVE_RECT * pMoveRectBuffer, UINT * pMoveRectsBufferSizeRequired, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFramePointerShape)(IDXGIOutputDuplication* self, UINT PointerShapeBufferSize, void * pPointerShapeBuffer, UINT * pPointerShapeBufferSizeRequired, DXGI_OUTDUPL_POINTER_SHAPE_INFO * pPointerShapeInfo, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *MapDesktopSurface)(IDXGIOutputDuplication* self, DXGI_MAPPED_RECT * pLockedRect, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *UnMapDesktopSurface)(IDXGIOutputDuplication* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ReleaseFrame)(IDXGIOutputDuplication* self, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIOutputDuplicationTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGISurface* self, DXGI_SURFACE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Map)(IDXGISurface* self, DXGI_MAPPED_RECT * pLockedRect, UINT MapFlags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Unmap)(IDXGISurface* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDC)(IDXGISurface1* self, BOOL Discard, HDC * phdc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ReleaseDC)(IDXGISurface1* self, RECT * pDirtyRect, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetResource)(IDXGISurface2* self, const IID & riid, void ** ppParentResource, UINT * pSubresourceIndex, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGISurface2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetSharedHandle)(IDXGIResource* self, HANDLE * pSharedHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetUsage)(IDXGIResource* self, DXGI_USAGE * pUsage, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetEvictionPriority)(IDXGIResource* self, UINT EvictionPriority, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetEvictionPriority)(IDXGIResource* self, UINT * pEvictionPriority, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSubresourceSurface)(IDXGIResource1* self, UINT index, IDXGISurface2 ** ppSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSharedHandle)(IDXGIResource1* self, const SECURITY_ATTRIBUTES * pAttributes, DWORD dwAccess, LPCWSTR lpName, HANDLE * pHandle, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIResource1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetAdapter)(IDXGIDevice* self, IDXGIAdapter ** pAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSurface)(IDXGIDevice* self, const DXGI_SURFACE_DESC * pDesc, UINT NumSurfaces, DXGI_USAGE Usage, const DXGI_SHARED_RESOURCE * pSharedResource, IDXGISurface ** ppSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *QueryResourceResidency)(IDXGIDevice* self, IUnknown *const * ppResources, DXGI_RESIDENCY * pResidencyStatus, UINT NumResources, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetGPUThreadPriority)(IDXGIDevice* self, INT Priority, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGPUThreadPriority)(IDXGIDevice* self, INT * pPriority, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetMaximumFrameLatency)(IDXGIDevice1* self, UINT MaxLatency, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetMaximumFrameLatency)(IDXGIDevice1* self, UINT * pMaxLatency, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OfferResources)(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, DXGI_OFFER_RESOURCE_PRIORITY Priority, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ReclaimResources)(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, BOOL * pDiscarded, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnqueueSetEvent)(IDXGIDevice2* self, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIDevice2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Present)(IDXGISwapChain* self, UINT SyncInterval, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetBuffer)(IDXGISwapChain* self, UINT Buffer, const IID & riid, void ** ppSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetFullscreenState)(IDXGISwapChain* self, BOOL Fullscreen, IDXGIOutput * pTarget, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFullscreenState)(IDXGISwapChain* self, BOOL * pFullscreen, IDXGIOutput ** ppTarget, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGISwapChain* self, DXGI_SWAP_CHAIN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ResizeBuffers)(IDXGISwapChain* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ResizeTarget)(IDXGISwapChain* self, const DXGI_MODE_DESC * pNewTargetParameters, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetContainingOutput)(IDXGISwapChain* self, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGISwapChain* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetLastPresentCount)(IDXGISwapChain* self, UINT * pLastPresentCount, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc1)(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFullscreenDesc)(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetHwnd)(IDXGISwapChain1* self, HWND * pHwnd, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetCoreWindow)(IDXGISwapChain1* self, const IID & refiid, void ** ppUnk, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Present1)(IDXGISwapChain1* self, UINT SyncInterval, UINT PresentFlags, const DXGI_PRESENT_PARAMETERS * pPresentParameters, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsTemporaryMonoSupported)(IDXGISwapChain1* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetRestrictToOutput)(IDXGISwapChain1* self, IDXGIOutput ** ppRestrictToOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetBackgroundColor)(IDXGISwapChain1* self, const DXGI_RGBA * pColor, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetBackgroundColor)(IDXGISwapChain1* self, DXGI_RGBA * pColor, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetRotation)(IDXGISwapChain1* self, DXGI_MODE_ROTATION Rotation, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetRotation)(IDXGISwapChain1* self, DXGI_MODE_ROTATION * pRotation, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGISwapChain1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapters)(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *MakeWindowAssociation)(IDXGIFactory* self, HWND WindowHandle, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetWindowAssociation)(IDXGIFactory* self, HWND * pWindowHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChain)(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSoftwareAdapter)(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapters1)(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsCurrent)(IDXGIFactory1* self, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsWindowedStereoEnabled)(IDXGIFactory2* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForHwnd)(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForCoreWindow)(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetSharedResourceAdapterLuid)(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterStereoStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterStereoStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterStereoStatus)(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterOcclusionStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterOcclusionStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterOcclusionStatus)(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForComposition)(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIFactory2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumOutputs)(IDXGIAdapter* self, UINT Output, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGIAdapter* self, DXGI_ADAPTER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckInterfaceSupport)(IDXGIAdapter* self, const GUID & InterfaceName, LARGE_INTEGER * pUMDVersion, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc1)(IDXGIAdapter1* self, DXGI_ADAPTER_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc2)(IDXGIAdapter2* self, DXGI_ADAPTER_DESC2 * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIAdapter2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplayModeList)(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FindClosestMatchingMode)(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *WaitForVBlank)(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *TakeOwnership)(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ReleaseOwnership)(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGammaControlCapabilities)(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetGammaControl)(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGammaControl)(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetDisplaySurface)(IDXGIOutput* self, IDXGISurface * pScanoutSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplaySurfaceData)(IDXGIOutput* self, IDXGISurface * pDestination, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplayModeList1)(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FindClosestMatchingMode1)(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplaySurfaceData1)(IDXGIOutput1* self, IDXGIResource * pDestination, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DuplicateOutput)(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIOutput1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetAdapter)(IDXGIDevice* self, IDXGIAdapter ** pAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSurface)(IDXGIDevice* self, const DXGI_SURFACE_DESC * pDesc, UINT NumSurfaces, DXGI_USAGE Usage, const DXGI_SHARED_RESOURCE * pSharedResource, IDXGISurface ** ppSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *QueryResourceResidency)(IDXGIDevice* self, IUnknown *const * ppResources, DXGI_RESIDENCY * pResidencyStatus, UINT NumResources, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetGPUThreadPriority)(IDXGIDevice* self, INT Priority, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGPUThreadPriority)(IDXGIDevice* self, INT * pPriority, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetMaximumFrameLatency)(IDXGIDevice1* self, UINT MaxLatency, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetMaximumFrameLatency)(IDXGIDevice1* self, UINT * pMaxLatency, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OfferResources)(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, DXGI_OFFER_RESOURCE_PRIORITY Priority, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ReclaimResources)(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, BOOL * pDiscarded, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnqueueSetEvent)(IDXGIDevice2* self, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Trim)(IDXGIDevice3* self, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIDevice3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Present)(IDXGISwapChain* self, UINT SyncInterval, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetBuffer)(IDXGISwapChain* self, UINT Buffer, const IID & riid, void ** ppSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetFullscreenState)(IDXGISwapChain* self, BOOL Fullscreen, IDXGIOutput * pTarget, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFullscreenState)(IDXGISwapChain* self, BOOL * pFullscreen, IDXGIOutput ** ppTarget, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGISwapChain* self, DXGI_SWAP_CHAIN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ResizeBuffers)(IDXGISwapChain* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ResizeTarget)(IDXGISwapChain* self, const DXGI_MODE_DESC * pNewTargetParameters, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetContainingOutput)(IDXGISwapChain* self, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGISwapChain* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetLastPresentCount)(IDXGISwapChain* self, UINT * pLastPresentCount, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc1)(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFullscreenDesc)(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetHwnd)(IDXGISwapChain1* self, HWND * pHwnd, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetCoreWindow)(IDXGISwapChain1* self, const IID & refiid, void ** ppUnk, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Present1)(IDXGISwapChain1* self, UINT SyncInterval, UINT PresentFlags, const DXGI_PRESENT_PARAMETERS * pPresentParameters, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsTemporaryMonoSupported)(IDXGISwapChain1* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetRestrictToOutput)(IDXGISwapChain1* self, IDXGIOutput ** ppRestrictToOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetBackgroundColor)(IDXGISwapChain1* self, const DXGI_RGBA * pColor, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetBackgroundColor)(IDXGISwapChain1* self, DXGI_RGBA * pColor, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetRotation)(IDXGISwapChain1* self, DXGI_MODE_ROTATION Rotation, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetRotation)(IDXGISwapChain1* self, DXGI_MODE_ROTATION * pRotation, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetSourceSize)(IDXGISwapChain2* self, UINT Width, UINT Height, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetSourceSize)(IDXGISwapChain2* self, UINT * pWidth, UINT * pHeight, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetMaximumFrameLatency)(IDXGISwapChain2* self, UINT MaxLatency, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetMaximumFrameLatency)(IDXGISwapChain2* self, UINT * pMaxLatency, struct ::GPADispatchTable const*& tlsRef);
                        HANDLE (WINAPI *GetFrameLatencyWaitableObject)(IDXGISwapChain2* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetMatrixTransform)(IDXGISwapChain2* self, const DXGI_MATRIX_3X2_F * pMatrix, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetMatrixTransform)(IDXGISwapChain2* self, DXGI_MATRIX_3X2_F * pMatrix, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGISwapChain2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplayModeList)(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FindClosestMatchingMode)(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *WaitForVBlank)(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *TakeOwnership)(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ReleaseOwnership)(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGammaControlCapabilities)(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetGammaControl)(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGammaControl)(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetDisplaySurface)(IDXGIOutput* self, IDXGISurface * pScanoutSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplaySurfaceData)(IDXGIOutput* self, IDXGISurface * pDestination, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplayModeList1)(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FindClosestMatchingMode1)(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplaySurfaceData1)(IDXGIOutput1* self, IDXGIResource * pDestination, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DuplicateOutput)(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *SupportsOverlays)(IDXGIOutput2* self, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIOutput2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapters)(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *MakeWindowAssociation)(IDXGIFactory* self, HWND WindowHandle, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetWindowAssociation)(IDXGIFactory* self, HWND * pWindowHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChain)(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSoftwareAdapter)(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapters1)(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsCurrent)(IDXGIFactory1* self, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsWindowedStereoEnabled)(IDXGIFactory2* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForHwnd)(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForCoreWindow)(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetSharedResourceAdapterLuid)(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterStereoStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterStereoStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterStereoStatus)(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterOcclusionStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterOcclusionStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterOcclusionStatus)(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForComposition)(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetCreationFlags)(IDXGIFactory3* self, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIFactory3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *PresentBuffer)(IDXGIDecodeSwapChain* self, UINT BufferToPresent, UINT SyncInterval, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetSourceRect)(IDXGIDecodeSwapChain* self, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetTargetRect)(IDXGIDecodeSwapChain* self, const RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetDestSize)(IDXGIDecodeSwapChain* self, UINT Width, UINT Height, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetSourceRect)(IDXGIDecodeSwapChain* self, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetTargetRect)(IDXGIDecodeSwapChain* self, RECT * pRect, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDestSize)(IDXGIDecodeSwapChain* self, UINT * pWidth, UINT * pHeight, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetColorSpace)(IDXGIDecodeSwapChain* self, DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS ColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS (WINAPI *GetColorSpace)(IDXGIDecodeSwapChain* self, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIDecodeSwapChainTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForCompositionSurfaceHandle)(IDXGIFactoryMedia* self, IUnknown * pDevice, HANDLE hSurface, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateDecodeSwapChainForCompositionSurfaceHandle)(IDXGIFactoryMedia* self, IUnknown * pDevice, HANDLE hSurface, DXGI_DECODE_SWAP_CHAIN_DESC * pDesc, IDXGIResource * pYuvDecodeBuffers, IDXGIOutput * pRestrictToOutput, IDXGIDecodeSwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIFactoryMediaTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFrameStatisticsMedia)(IDXGISwapChainMedia* self, DXGI_FRAME_STATISTICS_MEDIA * pStats, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPresentDuration)(IDXGISwapChainMedia* self, UINT Duration, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckPresentDurationSupport)(IDXGISwapChainMedia* self, UINT DesiredPresentDuration, UINT * pClosestSmallerPresentDuration, UINT * pClosestLargerPresentDuration, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGISwapChainMediaTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplayModeList)(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FindClosestMatchingMode)(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *WaitForVBlank)(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *TakeOwnership)(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ReleaseOwnership)(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGammaControlCapabilities)(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetGammaControl)(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGammaControl)(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetDisplaySurface)(IDXGIOutput* self, IDXGISurface * pScanoutSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplaySurfaceData)(IDXGIOutput* self, IDXGISurface * pDestination, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplayModeList1)(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FindClosestMatchingMode1)(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplaySurfaceData1)(IDXGIOutput1* self, IDXGIResource * pDestination, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DuplicateOutput)(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *SupportsOverlays)(IDXGIOutput2* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckOverlaySupport)(IDXGIOutput3* self, DXGI_FORMAT EnumFormat, IUnknown * pConcernedDevice, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIOutput3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Present)(IDXGISwapChain* self, UINT SyncInterval, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetBuffer)(IDXGISwapChain* self, UINT Buffer, const IID & riid, void ** ppSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetFullscreenState)(IDXGISwapChain* self, BOOL Fullscreen, IDXGIOutput * pTarget, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFullscreenState)(IDXGISwapChain* self, BOOL * pFullscreen, IDXGIOutput ** ppTarget, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGISwapChain* self, DXGI_SWAP_CHAIN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ResizeBuffers)(IDXGISwapChain* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ResizeTarget)(IDXGISwapChain* self, const DXGI_MODE_DESC * pNewTargetParameters, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetContainingOutput)(IDXGISwapChain* self, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGISwapChain* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetLastPresentCount)(IDXGISwapChain* self, UINT * pLastPresentCount, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc1)(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFullscreenDesc)(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetHwnd)(IDXGISwapChain1* self, HWND * pHwnd, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetCoreWindow)(IDXGISwapChain1* self, const IID & refiid, void ** ppUnk, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Present1)(IDXGISwapChain1* self, UINT SyncInterval, UINT PresentFlags, const DXGI_PRESENT_PARAMETERS * pPresentParameters, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsTemporaryMonoSupported)(IDXGISwapChain1* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetRestrictToOutput)(IDXGISwapChain1* self, IDXGIOutput ** ppRestrictToOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetBackgroundColor)(IDXGISwapChain1* self, const DXGI_RGBA * pColor, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetBackgroundColor)(IDXGISwapChain1* self, DXGI_RGBA * pColor, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetRotation)(IDXGISwapChain1* self, DXGI_MODE_ROTATION Rotation, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetRotation)(IDXGISwapChain1* self, DXGI_MODE_ROTATION * pRotation, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetSourceSize)(IDXGISwapChain2* self, UINT Width, UINT Height, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetSourceSize)(IDXGISwapChain2* self, UINT * pWidth, UINT * pHeight, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetMaximumFrameLatency)(IDXGISwapChain2* self, UINT MaxLatency, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetMaximumFrameLatency)(IDXGISwapChain2* self, UINT * pMaxLatency, struct ::GPADispatchTable const*& tlsRef);
                        HANDLE (WINAPI *GetFrameLatencyWaitableObject)(IDXGISwapChain2* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetMatrixTransform)(IDXGISwapChain2* self, const DXGI_MATRIX_3X2_F * pMatrix, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetMatrixTransform)(IDXGISwapChain2* self, DXGI_MATRIX_3X2_F * pMatrix, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetCurrentBackBufferIndex)(IDXGISwapChain3* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckColorSpaceSupport)(IDXGISwapChain3* self, DXGI_COLOR_SPACE_TYPE ColorSpace, UINT * pColorSpaceSupport, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetColorSpace1)(IDXGISwapChain3* self, DXGI_COLOR_SPACE_TYPE ColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ResizeBuffers1)(IDXGISwapChain3* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT Format, UINT SwapChainFlags, const UINT * pCreationNodeMask, IUnknown *const * ppPresentQueue, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGISwapChain3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplayModeList)(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FindClosestMatchingMode)(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *WaitForVBlank)(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *TakeOwnership)(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ReleaseOwnership)(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGammaControlCapabilities)(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetGammaControl)(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGammaControl)(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetDisplaySurface)(IDXGIOutput* self, IDXGISurface * pScanoutSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplaySurfaceData)(IDXGIOutput* self, IDXGISurface * pDestination, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplayModeList1)(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FindClosestMatchingMode1)(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplaySurfaceData1)(IDXGIOutput1* self, IDXGIResource * pDestination, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DuplicateOutput)(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *SupportsOverlays)(IDXGIOutput2* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckOverlaySupport)(IDXGIOutput3* self, DXGI_FORMAT EnumFormat, IUnknown * pConcernedDevice, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckOverlayColorSpaceSupport)(IDXGIOutput4* self, DXGI_FORMAT Format, DXGI_COLOR_SPACE_TYPE ColorSpace, IUnknown * pConcernedDevice, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIOutput4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapters)(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *MakeWindowAssociation)(IDXGIFactory* self, HWND WindowHandle, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetWindowAssociation)(IDXGIFactory* self, HWND * pWindowHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChain)(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSoftwareAdapter)(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapters1)(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsCurrent)(IDXGIFactory1* self, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsWindowedStereoEnabled)(IDXGIFactory2* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForHwnd)(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForCoreWindow)(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetSharedResourceAdapterLuid)(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterStereoStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterStereoStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterStereoStatus)(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterOcclusionStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterOcclusionStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterOcclusionStatus)(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForComposition)(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetCreationFlags)(IDXGIFactory3* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapterByLuid)(IDXGIFactory4* self, LUID AdapterLuid, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumWarpAdapter)(IDXGIFactory4* self, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIFactory4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumOutputs)(IDXGIAdapter* self, UINT Output, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGIAdapter* self, DXGI_ADAPTER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckInterfaceSupport)(IDXGIAdapter* self, const GUID & InterfaceName, LARGE_INTEGER * pUMDVersion, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc1)(IDXGIAdapter1* self, DXGI_ADAPTER_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc2)(IDXGIAdapter2* self, DXGI_ADAPTER_DESC2 * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterHardwareContentProtectionTeardownStatusEvent)(IDXGIAdapter3* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterHardwareContentProtectionTeardownStatus)(IDXGIAdapter3* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *QueryVideoMemoryInfo)(IDXGIAdapter3* self, UINT NodeIndex, DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup, DXGI_QUERY_VIDEO_MEMORY_INFO * pVideoMemoryInfo, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetVideoMemoryReservation)(IDXGIAdapter3* self, UINT NodeIndex, DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup, UINT64 Reservation, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterVideoMemoryBudgetChangeNotificationEvent)(IDXGIAdapter3* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterVideoMemoryBudgetChangeNotification)(IDXGIAdapter3* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIAdapter3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplayModeList)(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FindClosestMatchingMode)(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *WaitForVBlank)(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *TakeOwnership)(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ReleaseOwnership)(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGammaControlCapabilities)(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetGammaControl)(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGammaControl)(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetDisplaySurface)(IDXGIOutput* self, IDXGISurface * pScanoutSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplaySurfaceData)(IDXGIOutput* self, IDXGISurface * pDestination, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplayModeList1)(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FindClosestMatchingMode1)(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplaySurfaceData1)(IDXGIOutput1* self, IDXGIResource * pDestination, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DuplicateOutput)(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *SupportsOverlays)(IDXGIOutput2* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckOverlaySupport)(IDXGIOutput3* self, DXGI_FORMAT EnumFormat, IUnknown * pConcernedDevice, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckOverlayColorSpaceSupport)(IDXGIOutput4* self, DXGI_FORMAT Format, DXGI_COLOR_SPACE_TYPE ColorSpace, IUnknown * pConcernedDevice, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DuplicateOutput1)(IDXGIOutput5* self, IUnknown * pDevice, UINT Flags, UINT SupportedFormatsCount, const DXGI_FORMAT * pSupportedFormats, IDXGIOutputDuplication ** ppOutputDuplication, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIOutput5Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Present)(IDXGISwapChain* self, UINT SyncInterval, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetBuffer)(IDXGISwapChain* self, UINT Buffer, const IID & riid, void ** ppSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetFullscreenState)(IDXGISwapChain* self, BOOL Fullscreen, IDXGIOutput * pTarget, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFullscreenState)(IDXGISwapChain* self, BOOL * pFullscreen, IDXGIOutput ** ppTarget, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGISwapChain* self, DXGI_SWAP_CHAIN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ResizeBuffers)(IDXGISwapChain* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ResizeTarget)(IDXGISwapChain* self, const DXGI_MODE_DESC * pNewTargetParameters, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetContainingOutput)(IDXGISwapChain* self, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGISwapChain* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetLastPresentCount)(IDXGISwapChain* self, UINT * pLastPresentCount, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc1)(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFullscreenDesc)(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetHwnd)(IDXGISwapChain1* self, HWND * pHwnd, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetCoreWindow)(IDXGISwapChain1* self, const IID & refiid, void ** ppUnk, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *Present1)(IDXGISwapChain1* self, UINT SyncInterval, UINT PresentFlags, const DXGI_PRESENT_PARAMETERS * pPresentParameters, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsTemporaryMonoSupported)(IDXGISwapChain1* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetRestrictToOutput)(IDXGISwapChain1* self, IDXGIOutput ** ppRestrictToOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetBackgroundColor)(IDXGISwapChain1* self, const DXGI_RGBA * pColor, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetBackgroundColor)(IDXGISwapChain1* self, DXGI_RGBA * pColor, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetRotation)(IDXGISwapChain1* self, DXGI_MODE_ROTATION Rotation, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetRotation)(IDXGISwapChain1* self, DXGI_MODE_ROTATION * pRotation, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetSourceSize)(IDXGISwapChain2* self, UINT Width, UINT Height, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetSourceSize)(IDXGISwapChain2* self, UINT * pWidth, UINT * pHeight, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetMaximumFrameLatency)(IDXGISwapChain2* self, UINT MaxLatency, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetMaximumFrameLatency)(IDXGISwapChain2* self, UINT * pMaxLatency, struct ::GPADispatchTable const*& tlsRef);
                        HANDLE (WINAPI *GetFrameLatencyWaitableObject)(IDXGISwapChain2* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetMatrixTransform)(IDXGISwapChain2* self, const DXGI_MATRIX_3X2_F * pMatrix, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetMatrixTransform)(IDXGISwapChain2* self, DXGI_MATRIX_3X2_F * pMatrix, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetCurrentBackBufferIndex)(IDXGISwapChain3* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckColorSpaceSupport)(IDXGISwapChain3* self, DXGI_COLOR_SPACE_TYPE ColorSpace, UINT * pColorSpaceSupport, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetColorSpace1)(IDXGISwapChain3* self, DXGI_COLOR_SPACE_TYPE ColorSpace, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ResizeBuffers1)(IDXGISwapChain3* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT Format, UINT SwapChainFlags, const UINT * pCreationNodeMask, IUnknown *const * ppPresentQueue, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetHDRMetaData)(IDXGISwapChain4* self, DXGI_HDR_METADATA_TYPE Type, UINT Size, void * pMetaData, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGISwapChain4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetAdapter)(IDXGIDevice* self, IDXGIAdapter ** pAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSurface)(IDXGIDevice* self, const DXGI_SURFACE_DESC * pDesc, UINT NumSurfaces, DXGI_USAGE Usage, const DXGI_SHARED_RESOURCE * pSharedResource, IDXGISurface ** ppSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *QueryResourceResidency)(IDXGIDevice* self, IUnknown *const * ppResources, DXGI_RESIDENCY * pResidencyStatus, UINT NumResources, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetGPUThreadPriority)(IDXGIDevice* self, INT Priority, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGPUThreadPriority)(IDXGIDevice* self, INT * pPriority, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetMaximumFrameLatency)(IDXGIDevice1* self, UINT MaxLatency, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetMaximumFrameLatency)(IDXGIDevice1* self, UINT * pMaxLatency, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OfferResources)(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, DXGI_OFFER_RESOURCE_PRIORITY Priority, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ReclaimResources)(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, BOOL * pDiscarded, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnqueueSetEvent)(IDXGIDevice2* self, HANDLE hEvent, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *Trim)(IDXGIDevice3* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *OfferResources1)(IDXGIDevice4* self, UINT NumResources, IDXGIResource *const * ppResources, DXGI_OFFER_RESOURCE_PRIORITY Priority, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *ReclaimResources1)(IDXGIDevice4* self, UINT NumResources, IDXGIResource *const * ppResources, DXGI_RECLAIM_RESOURCE_RESULTS * pResults, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIDevice4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapters)(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *MakeWindowAssociation)(IDXGIFactory* self, HWND WindowHandle, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetWindowAssociation)(IDXGIFactory* self, HWND * pWindowHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChain)(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSoftwareAdapter)(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapters1)(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsCurrent)(IDXGIFactory1* self, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsWindowedStereoEnabled)(IDXGIFactory2* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForHwnd)(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForCoreWindow)(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetSharedResourceAdapterLuid)(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterStereoStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterStereoStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterStereoStatus)(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterOcclusionStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterOcclusionStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterOcclusionStatus)(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForComposition)(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetCreationFlags)(IDXGIFactory3* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapterByLuid)(IDXGIFactory4* self, LUID AdapterLuid, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumWarpAdapter)(IDXGIFactory4* self, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFeatureSupport)(IDXGIFactory5* self, DXGI_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIFactory5Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumOutputs)(IDXGIAdapter* self, UINT Output, IDXGIOutput ** ppOutput, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGIAdapter* self, DXGI_ADAPTER_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckInterfaceSupport)(IDXGIAdapter* self, const GUID & InterfaceName, LARGE_INTEGER * pUMDVersion, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc1)(IDXGIAdapter1* self, DXGI_ADAPTER_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc2)(IDXGIAdapter2* self, DXGI_ADAPTER_DESC2 * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterHardwareContentProtectionTeardownStatusEvent)(IDXGIAdapter3* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterHardwareContentProtectionTeardownStatus)(IDXGIAdapter3* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *QueryVideoMemoryInfo)(IDXGIAdapter3* self, UINT NodeIndex, DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup, DXGI_QUERY_VIDEO_MEMORY_INFO * pVideoMemoryInfo, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetVideoMemoryReservation)(IDXGIAdapter3* self, UINT NodeIndex, DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup, UINT64 Reservation, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterVideoMemoryBudgetChangeNotificationEvent)(IDXGIAdapter3* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterVideoMemoryBudgetChangeNotification)(IDXGIAdapter3* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc3)(IDXGIAdapter4* self, DXGI_ADAPTER_DESC3 * pDesc, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIAdapter4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc)(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplayModeList)(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FindClosestMatchingMode)(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *WaitForVBlank)(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *TakeOwnership)(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *ReleaseOwnership)(IDXGIOutput* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGammaControlCapabilities)(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetGammaControl)(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetGammaControl)(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetDisplaySurface)(IDXGIOutput* self, IDXGISurface * pScanoutSurface, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplaySurfaceData)(IDXGIOutput* self, IDXGISurface * pDestination, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplayModeList1)(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *FindClosestMatchingMode1)(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDisplaySurfaceData1)(IDXGIOutput1* self, IDXGIResource * pDestination, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DuplicateOutput)(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *SupportsOverlays)(IDXGIOutput2* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckOverlaySupport)(IDXGIOutput3* self, DXGI_FORMAT EnumFormat, IUnknown * pConcernedDevice, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckOverlayColorSpaceSupport)(IDXGIOutput4* self, DXGI_FORMAT Format, DXGI_COLOR_SPACE_TYPE ColorSpace, IUnknown * pConcernedDevice, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *DuplicateOutput1)(IDXGIOutput5* self, IUnknown * pDevice, UINT Flags, UINT SupportedFormatsCount, const DXGI_FORMAT * pSupportedFormats, IDXGIOutputDuplication ** ppOutputDuplication, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetDesc1)(IDXGIOutput6* self, DXGI_OUTPUT_DESC1 * pDesc, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckHardwareCompositionSupport)(IDXGIOutput6* self, UINT * pFlags, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIOutput6Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapters)(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *MakeWindowAssociation)(IDXGIFactory* self, HWND WindowHandle, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetWindowAssociation)(IDXGIFactory* self, HWND * pWindowHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChain)(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSoftwareAdapter)(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapters1)(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsCurrent)(IDXGIFactory1* self, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsWindowedStereoEnabled)(IDXGIFactory2* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForHwnd)(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForCoreWindow)(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetSharedResourceAdapterLuid)(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterStereoStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterStereoStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterStereoStatus)(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterOcclusionStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterOcclusionStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterOcclusionStatus)(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForComposition)(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetCreationFlags)(IDXGIFactory3* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapterByLuid)(IDXGIFactory4* self, LUID AdapterLuid, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumWarpAdapter)(IDXGIFactory4* self, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFeatureSupport)(IDXGIFactory5* self, DXGI_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapterByGpuPreference)(IDXGIFactory6* self, UINT Adapter, DXGI_GPU_PREFERENCE GpuPreference, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIFactory6Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *AddRef)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        ULONG (WINAPI *Release)(IUnknown* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapters)(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *MakeWindowAssociation)(IDXGIFactory* self, HWND WindowHandle, UINT Flags, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetWindowAssociation)(IDXGIFactory* self, HWND * pWindowHandle, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChain)(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSoftwareAdapter)(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapters1)(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsCurrent)(IDXGIFactory1* self, struct ::GPADispatchTable const*& tlsRef);
                        BOOL (WINAPI *IsWindowedStereoEnabled)(IDXGIFactory2* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForHwnd)(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForCoreWindow)(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *GetSharedResourceAdapterLuid)(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterStereoStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterStereoStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterStereoStatus)(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterOcclusionStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterOcclusionStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        void (WINAPI *UnregisterOcclusionStatus)(IDXGIFactory2* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CreateSwapChainForComposition)(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain, struct ::GPADispatchTable const*& tlsRef);
                        UINT (WINAPI *GetCreationFlags)(IDXGIFactory3* self, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapterByLuid)(IDXGIFactory4* self, LUID AdapterLuid, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumWarpAdapter)(IDXGIFactory4* self, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *CheckFeatureSupport)(IDXGIFactory5* self, DXGI_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *EnumAdapterByGpuPreference)(IDXGIFactory6* self, UINT Adapter, DXGI_GPU_PREFERENCE GpuPreference, const IID & riid, void ** ppvAdapter, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *RegisterAdaptersChangedEvent)(IDXGIFactory7* self, HANDLE hEvent, DWORD * pdwCookie, struct ::GPADispatchTable const*& tlsRef);
                        HRESULT (WINAPI *UnregisterAdaptersChangedEvent)(IDXGIFactory7* self, DWORD dwCookie, struct ::GPADispatchTable const*& tlsRef);
            
        } IDXGIFactory7Table;
    
} DirectX;
