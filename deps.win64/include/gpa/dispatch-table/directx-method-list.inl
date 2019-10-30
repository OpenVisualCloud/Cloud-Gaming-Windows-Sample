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
    
    IDirect3D9 * (WINAPI *Direct3DCreate9)(UINT SDKVersion);
    
    int (WINAPI *D3DPERF_BeginEvent)(D3DCOLOR col, LPCWSTR wszName);
    
    int (WINAPI *D3DPERF_EndEvent)();
    
    void (WINAPI *D3DPERF_SetMarker)(D3DCOLOR col, LPCWSTR wszName);
    
    void (WINAPI *D3DPERF_SetRegion)(D3DCOLOR col, LPCWSTR wszName);
    
    BOOL (WINAPI *D3DPERF_QueryRepeatFrame)();
    
    DWORD (WINAPI *D3DPERF_GetStatus)();
    
    HRESULT (WINAPI *Direct3DCreate9Ex)(UINT SDKVersion, IDirect3D9Ex ** param1);
    
    HRESULT (WINAPI *D3D10CreateDevice1)(IDXGIAdapter * pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, D3D10_FEATURE_LEVEL1 HardwareLevel, UINT SDKVersion, ID3D10Device1 ** ppDevice);
    
    HRESULT (WINAPI *D3D10CreateDeviceAndSwapChain1)(IDXGIAdapter * pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, D3D10_FEATURE_LEVEL1 HardwareLevel, UINT SDKVersion, DXGI_SWAP_CHAIN_DESC * pSwapChainDesc, IDXGISwapChain ** ppSwapChain, ID3D10Device1 ** ppDevice);
    
    HRESULT (WINAPI *D3D10CreateDevice)(IDXGIAdapter * pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, UINT SDKVersion, ID3D10Device ** ppDevice);
    
    HRESULT (WINAPI *D3D10CreateDeviceAndSwapChain)(IDXGIAdapter * pAdapter, D3D10_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, UINT SDKVersion, DXGI_SWAP_CHAIN_DESC * pSwapChainDesc, IDXGISwapChain ** ppSwapChain, ID3D10Device ** ppDevice);
    
    HRESULT (WINAPI *D3D10CreateBlob)(SIZE_T NumBytes, LPD3D10BLOB * ppBuffer);
    
    HRESULT (WINAPI *D3D11CreateDevice)(IDXGIAdapter * pAdapter, D3D_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, ID3D11Device ** ppDevice, D3D_FEATURE_LEVEL * pFeatureLevel, ID3D11DeviceContext ** ppImmediateContext);
    
    HRESULT (WINAPI *D3D11CreateDeviceAndSwapChain)(IDXGIAdapter * pAdapter, D3D_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const DXGI_SWAP_CHAIN_DESC * pSwapChainDesc, IDXGISwapChain ** ppSwapChain, ID3D11Device ** ppDevice, D3D_FEATURE_LEVEL * pFeatureLevel, ID3D11DeviceContext ** ppImmediateContext);
    
    HRESULT (WINAPI *D3D12CreateRootSignatureDeserializer)(LPCVOID pSrcData, SIZE_T SrcDataSizeInBytes, const IID & pRootSignatureDeserializerInterface, void ** ppRootSignatureDeserializer);
    
    HRESULT (WINAPI *D3D12CreateVersionedRootSignatureDeserializer)(LPCVOID pSrcData, SIZE_T SrcDataSizeInBytes, const IID & pRootSignatureDeserializerInterface, void ** ppRootSignatureDeserializer);
    
    HRESULT (WINAPI *D3D12CreateDevice)(IUnknown * pAdapter, D3D_FEATURE_LEVEL MinimumFeatureLevel, const IID & riid, void ** ppDevice);
    
    HRESULT (WINAPI *D3D12GetDebugInterface)(const IID & riid, void ** ppvDebug);
    
    HRESULT (WINAPI *D3D12EnableExperimentalFeatures)(UINT NumFeatures, const IID * pIIDs, void * pConfigurationStructs, UINT * pConfigurationStructSizes);
    
    HRESULT (WINAPI *CreateDXGIFactory)(const IID & riid, void ** ppFactory);
    
    HRESULT (WINAPI *CreateDXGIFactory1)(const IID & riid, void ** ppFactory);
    
    HRESULT (WINAPI *CreateDXGIFactory2)(UINT Flags, const IID & riid, void ** ppFactory);
    
    HRESULT (WINAPI *DXGIGetDebugInterface1)(UINT Flags, const IID & riid, void ** pDebug);
    
    HRESULT (WINAPI *DXGIDeclareAdapterRemovalSupport)();
    
        struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
            
        } IUnknownTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3D9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3D9* self);
                        ULONG (WINAPI *Release)(IDirect3D9* self);
                        HRESULT (WINAPI *RegisterSoftwareDevice)(IDirect3D9* self, void * pInitializeFunction);
                        UINT (WINAPI *GetAdapterCount)(IDirect3D9* self);
                        HRESULT (WINAPI *GetAdapterIdentifier)(IDirect3D9* self, UINT Adapter, DWORD Flags, D3DADAPTER_IDENTIFIER9 * pIdentifier);
                        UINT (WINAPI *GetAdapterModeCount)(IDirect3D9* self, UINT Adapter, D3DFORMAT Format);
                        HRESULT (WINAPI *EnumAdapterModes)(IDirect3D9* self, UINT Adapter, D3DFORMAT Format, UINT Mode, D3DDISPLAYMODE * pMode);
                        HRESULT (WINAPI *GetAdapterDisplayMode)(IDirect3D9* self, UINT Adapter, D3DDISPLAYMODE * pMode);
                        HRESULT (WINAPI *CheckDeviceType)(IDirect3D9* self, UINT Adapter, D3DDEVTYPE DevType, D3DFORMAT AdapterFormat, D3DFORMAT BackBufferFormat, BOOL bWindowed);
                        HRESULT (WINAPI *CheckDeviceFormat)(IDirect3D9* self, UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, DWORD Usage, D3DRESOURCETYPE RType, D3DFORMAT CheckFormat);
                        HRESULT (WINAPI *CheckDeviceMultiSampleType)(IDirect3D9* self, UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT SurfaceFormat, BOOL Windowed, D3DMULTISAMPLE_TYPE MultiSampleType, DWORD * pQualityLevels);
                        HRESULT (WINAPI *CheckDepthStencilMatch)(IDirect3D9* self, UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, D3DFORMAT RenderTargetFormat, D3DFORMAT DepthStencilFormat);
                        HRESULT (WINAPI *CheckDeviceFormatConversion)(IDirect3D9* self, UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT SourceFormat, D3DFORMAT TargetFormat);
                        HRESULT (WINAPI *GetDeviceCaps)(IDirect3D9* self, UINT Adapter, D3DDEVTYPE DeviceType, D3DCAPS9 * pCaps);
                        HMONITOR (WINAPI *GetAdapterMonitor)(IDirect3D9* self, UINT Adapter);
                        HRESULT (WINAPI *CreateDevice)(IDirect3D9* self, UINT Adapter, D3DDEVTYPE DeviceType, HWND hFocusWindow, DWORD BehaviorFlags, D3DPRESENT_PARAMETERS * pPresentationParameters, IDirect3DDevice9 ** ppReturnedDeviceInterface);
            
        } IDirect3D9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DDevice9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DDevice9* self);
                        ULONG (WINAPI *Release)(IDirect3DDevice9* self);
                        HRESULT (WINAPI *TestCooperativeLevel)(IDirect3DDevice9* self);
                        UINT (WINAPI *GetAvailableTextureMem)(IDirect3DDevice9* self);
                        HRESULT (WINAPI *EvictManagedResources)(IDirect3DDevice9* self);
                        HRESULT (WINAPI *GetDirect3D)(IDirect3DDevice9* self, IDirect3D9 ** ppD3D9);
                        HRESULT (WINAPI *GetDeviceCaps)(IDirect3DDevice9* self, D3DCAPS9 * pCaps);
                        HRESULT (WINAPI *GetDisplayMode)(IDirect3DDevice9* self, UINT iSwapChain, D3DDISPLAYMODE * pMode);
                        HRESULT (WINAPI *GetCreationParameters)(IDirect3DDevice9* self, D3DDEVICE_CREATION_PARAMETERS * pParameters);
                        HRESULT (WINAPI *SetCursorProperties)(IDirect3DDevice9* self, UINT XHotSpot, UINT YHotSpot, IDirect3DSurface9 * pCursorBitmap);
                        void (WINAPI *SetCursorPosition)(IDirect3DDevice9* self, int X, int Y, DWORD Flags);
                        BOOL (WINAPI *ShowCursor)(IDirect3DDevice9* self, BOOL bShow);
                        HRESULT (WINAPI *CreateAdditionalSwapChain)(IDirect3DDevice9* self, D3DPRESENT_PARAMETERS * pPresentationParameters, IDirect3DSwapChain9 ** pSwapChain);
                        HRESULT (WINAPI *GetSwapChain)(IDirect3DDevice9* self, UINT iSwapChain, IDirect3DSwapChain9 ** pSwapChain);
                        UINT (WINAPI *GetNumberOfSwapChains)(IDirect3DDevice9* self);
                        HRESULT (WINAPI *Reset)(IDirect3DDevice9* self, D3DPRESENT_PARAMETERS * pPresentationParameters);
                        HRESULT (WINAPI *Present)(IDirect3DDevice9* self, const RECT * pSourceRect, const RECT * pDestRect, HWND hDestWindowOverride, const RGNDATA * pDirtyRegion);
                        HRESULT (WINAPI *GetBackBuffer)(IDirect3DDevice9* self, UINT iSwapChain, UINT iBackBuffer, D3DBACKBUFFER_TYPE Type, IDirect3DSurface9 ** ppBackBuffer);
                        HRESULT (WINAPI *GetRasterStatus)(IDirect3DDevice9* self, UINT iSwapChain, D3DRASTER_STATUS * pRasterStatus);
                        HRESULT (WINAPI *SetDialogBoxMode)(IDirect3DDevice9* self, BOOL bEnableDialogs);
                        void (WINAPI *SetGammaRamp)(IDirect3DDevice9* self, UINT iSwapChain, DWORD Flags, const D3DGAMMARAMP * pRamp);
                        void (WINAPI *GetGammaRamp)(IDirect3DDevice9* self, UINT iSwapChain, D3DGAMMARAMP * pRamp);
                        HRESULT (WINAPI *CreateTexture)(IDirect3DDevice9* self, UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DTexture9 ** ppTexture, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *CreateVolumeTexture)(IDirect3DDevice9* self, UINT Width, UINT Height, UINT Depth, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DVolumeTexture9 ** ppVolumeTexture, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *CreateCubeTexture)(IDirect3DDevice9* self, UINT EdgeLength, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DCubeTexture9 ** ppCubeTexture, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *CreateVertexBuffer)(IDirect3DDevice9* self, UINT Length, DWORD Usage, DWORD FVF, D3DPOOL Pool, IDirect3DVertexBuffer9 ** ppVertexBuffer, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *CreateIndexBuffer)(IDirect3DDevice9* self, UINT Length, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DIndexBuffer9 ** ppIndexBuffer, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *CreateRenderTarget)(IDirect3DDevice9* self, UINT Width, UINT Height, D3DFORMAT Format, D3DMULTISAMPLE_TYPE MultiSample, DWORD MultisampleQuality, BOOL Lockable, IDirect3DSurface9 ** ppSurface, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *CreateDepthStencilSurface)(IDirect3DDevice9* self, UINT Width, UINT Height, D3DFORMAT Format, D3DMULTISAMPLE_TYPE MultiSample, DWORD MultisampleQuality, BOOL Discard, IDirect3DSurface9 ** ppSurface, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *UpdateSurface)(IDirect3DDevice9* self, IDirect3DSurface9 * pSourceSurface, const RECT * pSourceRect, IDirect3DSurface9 * pDestinationSurface, const POINT * pDestPoint);
                        HRESULT (WINAPI *UpdateTexture)(IDirect3DDevice9* self, IDirect3DBaseTexture9 * pSourceTexture, IDirect3DBaseTexture9 * pDestinationTexture);
                        HRESULT (WINAPI *GetRenderTargetData)(IDirect3DDevice9* self, IDirect3DSurface9 * pRenderTarget, IDirect3DSurface9 * pDestSurface);
                        HRESULT (WINAPI *GetFrontBufferData)(IDirect3DDevice9* self, UINT iSwapChain, IDirect3DSurface9 * pDestSurface);
                        HRESULT (WINAPI *StretchRect)(IDirect3DDevice9* self, IDirect3DSurface9 * pSourceSurface, const RECT * pSourceRect, IDirect3DSurface9 * pDestSurface, const RECT * pDestRect, D3DTEXTUREFILTERTYPE Filter);
                        HRESULT (WINAPI *ColorFill)(IDirect3DDevice9* self, IDirect3DSurface9 * pSurface, const RECT * pRect, D3DCOLOR color);
                        HRESULT (WINAPI *CreateOffscreenPlainSurface)(IDirect3DDevice9* self, UINT Width, UINT Height, D3DFORMAT Format, D3DPOOL Pool, IDirect3DSurface9 ** ppSurface, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *SetRenderTarget)(IDirect3DDevice9* self, DWORD RenderTargetIndex, IDirect3DSurface9 * pRenderTarget);
                        HRESULT (WINAPI *GetRenderTarget)(IDirect3DDevice9* self, DWORD RenderTargetIndex, IDirect3DSurface9 ** ppRenderTarget);
                        HRESULT (WINAPI *SetDepthStencilSurface)(IDirect3DDevice9* self, IDirect3DSurface9 * pNewZStencil);
                        HRESULT (WINAPI *GetDepthStencilSurface)(IDirect3DDevice9* self, IDirect3DSurface9 ** ppZStencilSurface);
                        HRESULT (WINAPI *BeginScene)(IDirect3DDevice9* self);
                        HRESULT (WINAPI *EndScene)(IDirect3DDevice9* self);
                        HRESULT (WINAPI *Clear)(IDirect3DDevice9* self, DWORD Count, const D3DRECT * pRects, DWORD Flags, D3DCOLOR Color, float Z, DWORD Stencil);
                        HRESULT (WINAPI *SetTransform)(IDirect3DDevice9* self, D3DTRANSFORMSTATETYPE State, const D3DMATRIX * pMatrix);
                        HRESULT (WINAPI *GetTransform)(IDirect3DDevice9* self, D3DTRANSFORMSTATETYPE State, D3DMATRIX * pMatrix);
                        HRESULT (WINAPI *MultiplyTransform)(IDirect3DDevice9* self, D3DTRANSFORMSTATETYPE param0, const D3DMATRIX * param1);
                        HRESULT (WINAPI *SetViewport)(IDirect3DDevice9* self, const D3DVIEWPORT9 * pViewport);
                        HRESULT (WINAPI *GetViewport)(IDirect3DDevice9* self, D3DVIEWPORT9 * pViewport);
                        HRESULT (WINAPI *SetMaterial)(IDirect3DDevice9* self, const D3DMATERIAL9 * pMaterial);
                        HRESULT (WINAPI *GetMaterial)(IDirect3DDevice9* self, D3DMATERIAL9 * pMaterial);
                        HRESULT (WINAPI *SetLight)(IDirect3DDevice9* self, DWORD Index, const D3DLIGHT9 * param1);
                        HRESULT (WINAPI *GetLight)(IDirect3DDevice9* self, DWORD Index, D3DLIGHT9 * param1);
                        HRESULT (WINAPI *LightEnable)(IDirect3DDevice9* self, DWORD Index, BOOL Enable);
                        HRESULT (WINAPI *GetLightEnable)(IDirect3DDevice9* self, DWORD Index, BOOL * pEnable);
                        HRESULT (WINAPI *SetClipPlane)(IDirect3DDevice9* self, DWORD Index, const float * pPlane);
                        HRESULT (WINAPI *GetClipPlane)(IDirect3DDevice9* self, DWORD Index, float * pPlane);
                        HRESULT (WINAPI *SetRenderState)(IDirect3DDevice9* self, D3DRENDERSTATETYPE State, DWORD Value);
                        HRESULT (WINAPI *GetRenderState)(IDirect3DDevice9* self, D3DRENDERSTATETYPE State, DWORD * pValue);
                        HRESULT (WINAPI *CreateStateBlock)(IDirect3DDevice9* self, D3DSTATEBLOCKTYPE Type, IDirect3DStateBlock9 ** ppSB);
                        HRESULT (WINAPI *BeginStateBlock)(IDirect3DDevice9* self);
                        HRESULT (WINAPI *EndStateBlock)(IDirect3DDevice9* self, IDirect3DStateBlock9 ** ppSB);
                        HRESULT (WINAPI *SetClipStatus)(IDirect3DDevice9* self, const D3DCLIPSTATUS9 * pClipStatus);
                        HRESULT (WINAPI *GetClipStatus)(IDirect3DDevice9* self, D3DCLIPSTATUS9 * pClipStatus);
                        HRESULT (WINAPI *GetTexture)(IDirect3DDevice9* self, DWORD Stage, IDirect3DBaseTexture9 ** ppTexture);
                        HRESULT (WINAPI *SetTexture)(IDirect3DDevice9* self, DWORD Stage, IDirect3DBaseTexture9 * pTexture);
                        HRESULT (WINAPI *GetTextureStageState)(IDirect3DDevice9* self, DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD * pValue);
                        HRESULT (WINAPI *SetTextureStageState)(IDirect3DDevice9* self, DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value);
                        HRESULT (WINAPI *GetSamplerState)(IDirect3DDevice9* self, DWORD Sampler, D3DSAMPLERSTATETYPE Type, DWORD * pValue);
                        HRESULT (WINAPI *SetSamplerState)(IDirect3DDevice9* self, DWORD Sampler, D3DSAMPLERSTATETYPE Type, DWORD Value);
                        HRESULT (WINAPI *ValidateDevice)(IDirect3DDevice9* self, DWORD * pNumPasses);
                        HRESULT (WINAPI *SetPaletteEntries)(IDirect3DDevice9* self, UINT PaletteNumber, const PALETTEENTRY * pEntries);
                        HRESULT (WINAPI *GetPaletteEntries)(IDirect3DDevice9* self, UINT PaletteNumber, PALETTEENTRY * pEntries);
                        HRESULT (WINAPI *SetCurrentTexturePalette)(IDirect3DDevice9* self, UINT PaletteNumber);
                        HRESULT (WINAPI *GetCurrentTexturePalette)(IDirect3DDevice9* self, UINT * PaletteNumber);
                        HRESULT (WINAPI *SetScissorRect)(IDirect3DDevice9* self, const RECT * pRect);
                        HRESULT (WINAPI *GetScissorRect)(IDirect3DDevice9* self, RECT * pRect);
                        HRESULT (WINAPI *SetSoftwareVertexProcessing)(IDirect3DDevice9* self, BOOL bSoftware);
                        BOOL (WINAPI *GetSoftwareVertexProcessing)(IDirect3DDevice9* self);
                        HRESULT (WINAPI *SetNPatchMode)(IDirect3DDevice9* self, float nSegments);
                        float (WINAPI *GetNPatchMode)(IDirect3DDevice9* self);
                        HRESULT (WINAPI *DrawPrimitive)(IDirect3DDevice9* self, D3DPRIMITIVETYPE PrimitiveType, UINT StartVertex, UINT PrimitiveCount);
                        HRESULT (WINAPI *DrawIndexedPrimitive)(IDirect3DDevice9* self, D3DPRIMITIVETYPE param0, INT BaseVertexIndex, UINT MinVertexIndex, UINT NumVertices, UINT startIndex, UINT primCount);
                        HRESULT (WINAPI *DrawPrimitiveUP)(IDirect3DDevice9* self, D3DPRIMITIVETYPE PrimitiveType, UINT PrimitiveCount, const void * pVertexStreamZeroData, UINT VertexStreamZeroStride);
                        HRESULT (WINAPI *DrawIndexedPrimitiveUP)(IDirect3DDevice9* self, D3DPRIMITIVETYPE PrimitiveType, UINT MinVertexIndex, UINT NumVertices, UINT PrimitiveCount, const void * pIndexData, D3DFORMAT IndexDataFormat, const void * pVertexStreamZeroData, UINT VertexStreamZeroStride);
                        HRESULT (WINAPI *ProcessVertices)(IDirect3DDevice9* self, UINT SrcStartIndex, UINT DestIndex, UINT VertexCount, IDirect3DVertexBuffer9 * pDestBuffer, IDirect3DVertexDeclaration9 * pVertexDecl, DWORD Flags);
                        HRESULT (WINAPI *CreateVertexDeclaration)(IDirect3DDevice9* self, const D3DVERTEXELEMENT9 * pVertexElements, IDirect3DVertexDeclaration9 ** ppDecl);
                        HRESULT (WINAPI *SetVertexDeclaration)(IDirect3DDevice9* self, IDirect3DVertexDeclaration9 * pDecl);
                        HRESULT (WINAPI *GetVertexDeclaration)(IDirect3DDevice9* self, IDirect3DVertexDeclaration9 ** ppDecl);
                        HRESULT (WINAPI *SetFVF)(IDirect3DDevice9* self, DWORD FVF);
                        HRESULT (WINAPI *GetFVF)(IDirect3DDevice9* self, DWORD * pFVF);
                        HRESULT (WINAPI *CreateVertexShader)(IDirect3DDevice9* self, const DWORD * pFunction, IDirect3DVertexShader9 ** ppShader);
                        HRESULT (WINAPI *SetVertexShader)(IDirect3DDevice9* self, IDirect3DVertexShader9 * pShader);
                        HRESULT (WINAPI *GetVertexShader)(IDirect3DDevice9* self, IDirect3DVertexShader9 ** ppShader);
                        HRESULT (WINAPI *SetVertexShaderConstantF)(IDirect3DDevice9* self, UINT StartRegister, const float * pConstantData, UINT Vector4fCount);
                        HRESULT (WINAPI *GetVertexShaderConstantF)(IDirect3DDevice9* self, UINT StartRegister, float * pConstantData, UINT Vector4fCount);
                        HRESULT (WINAPI *SetVertexShaderConstantI)(IDirect3DDevice9* self, UINT StartRegister, const int * pConstantData, UINT Vector4iCount);
                        HRESULT (WINAPI *GetVertexShaderConstantI)(IDirect3DDevice9* self, UINT StartRegister, int * pConstantData, UINT Vector4iCount);
                        HRESULT (WINAPI *SetVertexShaderConstantB)(IDirect3DDevice9* self, UINT StartRegister, const BOOL * pConstantData, UINT BoolCount);
                        HRESULT (WINAPI *GetVertexShaderConstantB)(IDirect3DDevice9* self, UINT StartRegister, BOOL * pConstantData, UINT BoolCount);
                        HRESULT (WINAPI *SetStreamSource)(IDirect3DDevice9* self, UINT StreamNumber, IDirect3DVertexBuffer9 * pStreamData, UINT OffsetInBytes, UINT Stride);
                        HRESULT (WINAPI *GetStreamSource)(IDirect3DDevice9* self, UINT StreamNumber, IDirect3DVertexBuffer9 ** ppStreamData, UINT * pOffsetInBytes, UINT * pStride);
                        HRESULT (WINAPI *SetStreamSourceFreq)(IDirect3DDevice9* self, UINT StreamNumber, UINT Setting);
                        HRESULT (WINAPI *GetStreamSourceFreq)(IDirect3DDevice9* self, UINT StreamNumber, UINT * pSetting);
                        HRESULT (WINAPI *SetIndices)(IDirect3DDevice9* self, IDirect3DIndexBuffer9 * pIndexData);
                        HRESULT (WINAPI *GetIndices)(IDirect3DDevice9* self, IDirect3DIndexBuffer9 ** ppIndexData);
                        HRESULT (WINAPI *CreatePixelShader)(IDirect3DDevice9* self, const DWORD * pFunction, IDirect3DPixelShader9 ** ppShader);
                        HRESULT (WINAPI *SetPixelShader)(IDirect3DDevice9* self, IDirect3DPixelShader9 * pShader);
                        HRESULT (WINAPI *GetPixelShader)(IDirect3DDevice9* self, IDirect3DPixelShader9 ** ppShader);
                        HRESULT (WINAPI *SetPixelShaderConstantF)(IDirect3DDevice9* self, UINT StartRegister, const float * pConstantData, UINT Vector4fCount);
                        HRESULT (WINAPI *GetPixelShaderConstantF)(IDirect3DDevice9* self, UINT StartRegister, float * pConstantData, UINT Vector4fCount);
                        HRESULT (WINAPI *SetPixelShaderConstantI)(IDirect3DDevice9* self, UINT StartRegister, const int * pConstantData, UINT Vector4iCount);
                        HRESULT (WINAPI *GetPixelShaderConstantI)(IDirect3DDevice9* self, UINT StartRegister, int * pConstantData, UINT Vector4iCount);
                        HRESULT (WINAPI *SetPixelShaderConstantB)(IDirect3DDevice9* self, UINT StartRegister, const BOOL * pConstantData, UINT BoolCount);
                        HRESULT (WINAPI *GetPixelShaderConstantB)(IDirect3DDevice9* self, UINT StartRegister, BOOL * pConstantData, UINT BoolCount);
                        HRESULT (WINAPI *DrawRectPatch)(IDirect3DDevice9* self, UINT Handle, const float * pNumSegs, const D3DRECTPATCH_INFO * pRectPatchInfo);
                        HRESULT (WINAPI *DrawTriPatch)(IDirect3DDevice9* self, UINT Handle, const float * pNumSegs, const D3DTRIPATCH_INFO * pTriPatchInfo);
                        HRESULT (WINAPI *DeletePatch)(IDirect3DDevice9* self, UINT Handle);
                        HRESULT (WINAPI *CreateQuery)(IDirect3DDevice9* self, D3DQUERYTYPE Type, IDirect3DQuery9 ** ppQuery);
            
        } IDirect3DDevice9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DStateBlock9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DStateBlock9* self);
                        ULONG (WINAPI *Release)(IDirect3DStateBlock9* self);
                        HRESULT (WINAPI *GetDevice)(IDirect3DStateBlock9* self, IDirect3DDevice9 ** ppDevice);
                        HRESULT (WINAPI *Capture)(IDirect3DStateBlock9* self);
                        HRESULT (WINAPI *Apply)(IDirect3DStateBlock9* self);
            
        } IDirect3DStateBlock9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DSwapChain9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DSwapChain9* self);
                        ULONG (WINAPI *Release)(IDirect3DSwapChain9* self);
                        HRESULT (WINAPI *Present)(IDirect3DSwapChain9* self, const RECT * pSourceRect, const RECT * pDestRect, HWND hDestWindowOverride, const RGNDATA * pDirtyRegion, DWORD dwFlags);
                        HRESULT (WINAPI *GetFrontBufferData)(IDirect3DSwapChain9* self, IDirect3DSurface9 * pDestSurface);
                        HRESULT (WINAPI *GetBackBuffer)(IDirect3DSwapChain9* self, UINT iBackBuffer, D3DBACKBUFFER_TYPE Type, IDirect3DSurface9 ** ppBackBuffer);
                        HRESULT (WINAPI *GetRasterStatus)(IDirect3DSwapChain9* self, D3DRASTER_STATUS * pRasterStatus);
                        HRESULT (WINAPI *GetDisplayMode)(IDirect3DSwapChain9* self, D3DDISPLAYMODE * pMode);
                        HRESULT (WINAPI *GetDevice)(IDirect3DSwapChain9* self, IDirect3DDevice9 ** ppDevice);
                        HRESULT (WINAPI *GetPresentParameters)(IDirect3DSwapChain9* self, D3DPRESENT_PARAMETERS * pPresentationParameters);
            
        } IDirect3DSwapChain9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DResource9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DResource9* self);
                        ULONG (WINAPI *Release)(IDirect3DResource9* self);
                        HRESULT (WINAPI *GetDevice)(IDirect3DResource9* self, IDirect3DDevice9 ** ppDevice);
                        HRESULT (WINAPI *SetPrivateData)(IDirect3DResource9* self, const GUID & refguid, const void * pData, DWORD SizeOfData, DWORD Flags);
                        HRESULT (WINAPI *GetPrivateData)(IDirect3DResource9* self, const GUID & refguid, void * pData, DWORD * pSizeOfData);
                        HRESULT (WINAPI *FreePrivateData)(IDirect3DResource9* self, const GUID & refguid);
                        DWORD (WINAPI *SetPriority)(IDirect3DResource9* self, DWORD PriorityNew);
                        DWORD (WINAPI *GetPriority)(IDirect3DResource9* self);
                        void (WINAPI *PreLoad)(IDirect3DResource9* self);
                        D3DRESOURCETYPE (WINAPI *GetType)(IDirect3DResource9* self);
            
        } IDirect3DResource9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DVertexDeclaration9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DVertexDeclaration9* self);
                        ULONG (WINAPI *Release)(IDirect3DVertexDeclaration9* self);
                        HRESULT (WINAPI *GetDevice)(IDirect3DVertexDeclaration9* self, IDirect3DDevice9 ** ppDevice);
                        HRESULT (WINAPI *GetDeclaration)(IDirect3DVertexDeclaration9* self, D3DVERTEXELEMENT9 * pElement, UINT * pNumElements);
            
        } IDirect3DVertexDeclaration9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DVertexShader9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DVertexShader9* self);
                        ULONG (WINAPI *Release)(IDirect3DVertexShader9* self);
                        HRESULT (WINAPI *GetDevice)(IDirect3DVertexShader9* self, IDirect3DDevice9 ** ppDevice);
                        HRESULT (WINAPI *GetFunction)(IDirect3DVertexShader9* self, void * param0, UINT * pSizeOfData);
            
        } IDirect3DVertexShader9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DPixelShader9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DPixelShader9* self);
                        ULONG (WINAPI *Release)(IDirect3DPixelShader9* self);
                        HRESULT (WINAPI *GetDevice)(IDirect3DPixelShader9* self, IDirect3DDevice9 ** ppDevice);
                        HRESULT (WINAPI *GetFunction)(IDirect3DPixelShader9* self, void * param0, UINT * pSizeOfData);
            
        } IDirect3DPixelShader9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DBaseTexture9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DBaseTexture9* self);
                        ULONG (WINAPI *Release)(IDirect3DBaseTexture9* self);
                        HRESULT (WINAPI *GetDevice)(IDirect3DBaseTexture9* self, IDirect3DDevice9 ** ppDevice);
                        HRESULT (WINAPI *SetPrivateData)(IDirect3DBaseTexture9* self, const GUID & refguid, const void * pData, DWORD SizeOfData, DWORD Flags);
                        HRESULT (WINAPI *GetPrivateData)(IDirect3DBaseTexture9* self, const GUID & refguid, void * pData, DWORD * pSizeOfData);
                        HRESULT (WINAPI *FreePrivateData)(IDirect3DBaseTexture9* self, const GUID & refguid);
                        DWORD (WINAPI *SetPriority)(IDirect3DBaseTexture9* self, DWORD PriorityNew);
                        DWORD (WINAPI *GetPriority)(IDirect3DBaseTexture9* self);
                        void (WINAPI *PreLoad)(IDirect3DBaseTexture9* self);
                        D3DRESOURCETYPE (WINAPI *GetType)(IDirect3DBaseTexture9* self);
                        DWORD (WINAPI *SetLOD)(IDirect3DBaseTexture9* self, DWORD LODNew);
                        DWORD (WINAPI *GetLOD)(IDirect3DBaseTexture9* self);
                        DWORD (WINAPI *GetLevelCount)(IDirect3DBaseTexture9* self);
                        HRESULT (WINAPI *SetAutoGenFilterType)(IDirect3DBaseTexture9* self, D3DTEXTUREFILTERTYPE FilterType);
                        D3DTEXTUREFILTERTYPE (WINAPI *GetAutoGenFilterType)(IDirect3DBaseTexture9* self);
                        void (WINAPI *GenerateMipSubLevels)(IDirect3DBaseTexture9* self);
            
        } IDirect3DBaseTexture9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DTexture9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DTexture9* self);
                        ULONG (WINAPI *Release)(IDirect3DTexture9* self);
                        HRESULT (WINAPI *GetDevice)(IDirect3DTexture9* self, IDirect3DDevice9 ** ppDevice);
                        HRESULT (WINAPI *SetPrivateData)(IDirect3DTexture9* self, const GUID & refguid, const void * pData, DWORD SizeOfData, DWORD Flags);
                        HRESULT (WINAPI *GetPrivateData)(IDirect3DTexture9* self, const GUID & refguid, void * pData, DWORD * pSizeOfData);
                        HRESULT (WINAPI *FreePrivateData)(IDirect3DTexture9* self, const GUID & refguid);
                        DWORD (WINAPI *SetPriority)(IDirect3DTexture9* self, DWORD PriorityNew);
                        DWORD (WINAPI *GetPriority)(IDirect3DTexture9* self);
                        void (WINAPI *PreLoad)(IDirect3DTexture9* self);
                        D3DRESOURCETYPE (WINAPI *GetType)(IDirect3DTexture9* self);
                        DWORD (WINAPI *SetLOD)(IDirect3DTexture9* self, DWORD LODNew);
                        DWORD (WINAPI *GetLOD)(IDirect3DTexture9* self);
                        DWORD (WINAPI *GetLevelCount)(IDirect3DTexture9* self);
                        HRESULT (WINAPI *SetAutoGenFilterType)(IDirect3DTexture9* self, D3DTEXTUREFILTERTYPE FilterType);
                        D3DTEXTUREFILTERTYPE (WINAPI *GetAutoGenFilterType)(IDirect3DTexture9* self);
                        void (WINAPI *GenerateMipSubLevels)(IDirect3DTexture9* self);
                        HRESULT (WINAPI *GetLevelDesc)(IDirect3DTexture9* self, UINT Level, D3DSURFACE_DESC * pDesc);
                        HRESULT (WINAPI *GetSurfaceLevel)(IDirect3DTexture9* self, UINT Level, IDirect3DSurface9 ** ppSurfaceLevel);
                        HRESULT (WINAPI *LockRect)(IDirect3DTexture9* self, UINT Level, D3DLOCKED_RECT * pLockedRect, const RECT * pRect, DWORD Flags);
                        HRESULT (WINAPI *UnlockRect)(IDirect3DTexture9* self, UINT Level);
                        HRESULT (WINAPI *AddDirtyRect)(IDirect3DTexture9* self, const RECT * pDirtyRect);
            
        } IDirect3DTexture9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DVolumeTexture9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DVolumeTexture9* self);
                        ULONG (WINAPI *Release)(IDirect3DVolumeTexture9* self);
                        HRESULT (WINAPI *GetDevice)(IDirect3DVolumeTexture9* self, IDirect3DDevice9 ** ppDevice);
                        HRESULT (WINAPI *SetPrivateData)(IDirect3DVolumeTexture9* self, const GUID & refguid, const void * pData, DWORD SizeOfData, DWORD Flags);
                        HRESULT (WINAPI *GetPrivateData)(IDirect3DVolumeTexture9* self, const GUID & refguid, void * pData, DWORD * pSizeOfData);
                        HRESULT (WINAPI *FreePrivateData)(IDirect3DVolumeTexture9* self, const GUID & refguid);
                        DWORD (WINAPI *SetPriority)(IDirect3DVolumeTexture9* self, DWORD PriorityNew);
                        DWORD (WINAPI *GetPriority)(IDirect3DVolumeTexture9* self);
                        void (WINAPI *PreLoad)(IDirect3DVolumeTexture9* self);
                        D3DRESOURCETYPE (WINAPI *GetType)(IDirect3DVolumeTexture9* self);
                        DWORD (WINAPI *SetLOD)(IDirect3DVolumeTexture9* self, DWORD LODNew);
                        DWORD (WINAPI *GetLOD)(IDirect3DVolumeTexture9* self);
                        DWORD (WINAPI *GetLevelCount)(IDirect3DVolumeTexture9* self);
                        HRESULT (WINAPI *SetAutoGenFilterType)(IDirect3DVolumeTexture9* self, D3DTEXTUREFILTERTYPE FilterType);
                        D3DTEXTUREFILTERTYPE (WINAPI *GetAutoGenFilterType)(IDirect3DVolumeTexture9* self);
                        void (WINAPI *GenerateMipSubLevels)(IDirect3DVolumeTexture9* self);
                        HRESULT (WINAPI *GetLevelDesc)(IDirect3DVolumeTexture9* self, UINT Level, D3DVOLUME_DESC * pDesc);
                        HRESULT (WINAPI *GetVolumeLevel)(IDirect3DVolumeTexture9* self, UINT Level, IDirect3DVolume9 ** ppVolumeLevel);
                        HRESULT (WINAPI *LockBox)(IDirect3DVolumeTexture9* self, UINT Level, D3DLOCKED_BOX * pLockedVolume, const D3DBOX * pBox, DWORD Flags);
                        HRESULT (WINAPI *UnlockBox)(IDirect3DVolumeTexture9* self, UINT Level);
                        HRESULT (WINAPI *AddDirtyBox)(IDirect3DVolumeTexture9* self, const D3DBOX * pDirtyBox);
            
        } IDirect3DVolumeTexture9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DCubeTexture9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DCubeTexture9* self);
                        ULONG (WINAPI *Release)(IDirect3DCubeTexture9* self);
                        HRESULT (WINAPI *GetDevice)(IDirect3DCubeTexture9* self, IDirect3DDevice9 ** ppDevice);
                        HRESULT (WINAPI *SetPrivateData)(IDirect3DCubeTexture9* self, const GUID & refguid, const void * pData, DWORD SizeOfData, DWORD Flags);
                        HRESULT (WINAPI *GetPrivateData)(IDirect3DCubeTexture9* self, const GUID & refguid, void * pData, DWORD * pSizeOfData);
                        HRESULT (WINAPI *FreePrivateData)(IDirect3DCubeTexture9* self, const GUID & refguid);
                        DWORD (WINAPI *SetPriority)(IDirect3DCubeTexture9* self, DWORD PriorityNew);
                        DWORD (WINAPI *GetPriority)(IDirect3DCubeTexture9* self);
                        void (WINAPI *PreLoad)(IDirect3DCubeTexture9* self);
                        D3DRESOURCETYPE (WINAPI *GetType)(IDirect3DCubeTexture9* self);
                        DWORD (WINAPI *SetLOD)(IDirect3DCubeTexture9* self, DWORD LODNew);
                        DWORD (WINAPI *GetLOD)(IDirect3DCubeTexture9* self);
                        DWORD (WINAPI *GetLevelCount)(IDirect3DCubeTexture9* self);
                        HRESULT (WINAPI *SetAutoGenFilterType)(IDirect3DCubeTexture9* self, D3DTEXTUREFILTERTYPE FilterType);
                        D3DTEXTUREFILTERTYPE (WINAPI *GetAutoGenFilterType)(IDirect3DCubeTexture9* self);
                        void (WINAPI *GenerateMipSubLevels)(IDirect3DCubeTexture9* self);
                        HRESULT (WINAPI *GetLevelDesc)(IDirect3DCubeTexture9* self, UINT Level, D3DSURFACE_DESC * pDesc);
                        HRESULT (WINAPI *GetCubeMapSurface)(IDirect3DCubeTexture9* self, D3DCUBEMAP_FACES FaceType, UINT Level, IDirect3DSurface9 ** ppCubeMapSurface);
                        HRESULT (WINAPI *LockRect)(IDirect3DCubeTexture9* self, D3DCUBEMAP_FACES FaceType, UINT Level, D3DLOCKED_RECT * pLockedRect, const RECT * pRect, DWORD Flags);
                        HRESULT (WINAPI *UnlockRect)(IDirect3DCubeTexture9* self, D3DCUBEMAP_FACES FaceType, UINT Level);
                        HRESULT (WINAPI *AddDirtyRect)(IDirect3DCubeTexture9* self, D3DCUBEMAP_FACES FaceType, const RECT * pDirtyRect);
            
        } IDirect3DCubeTexture9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DVertexBuffer9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DVertexBuffer9* self);
                        ULONG (WINAPI *Release)(IDirect3DVertexBuffer9* self);
                        HRESULT (WINAPI *GetDevice)(IDirect3DVertexBuffer9* self, IDirect3DDevice9 ** ppDevice);
                        HRESULT (WINAPI *SetPrivateData)(IDirect3DVertexBuffer9* self, const GUID & refguid, const void * pData, DWORD SizeOfData, DWORD Flags);
                        HRESULT (WINAPI *GetPrivateData)(IDirect3DVertexBuffer9* self, const GUID & refguid, void * pData, DWORD * pSizeOfData);
                        HRESULT (WINAPI *FreePrivateData)(IDirect3DVertexBuffer9* self, const GUID & refguid);
                        DWORD (WINAPI *SetPriority)(IDirect3DVertexBuffer9* self, DWORD PriorityNew);
                        DWORD (WINAPI *GetPriority)(IDirect3DVertexBuffer9* self);
                        void (WINAPI *PreLoad)(IDirect3DVertexBuffer9* self);
                        D3DRESOURCETYPE (WINAPI *GetType)(IDirect3DVertexBuffer9* self);
                        HRESULT (WINAPI *Lock)(IDirect3DVertexBuffer9* self, UINT OffsetToLock, UINT SizeToLock, void ** ppbData, DWORD Flags);
                        HRESULT (WINAPI *Unlock)(IDirect3DVertexBuffer9* self);
                        HRESULT (WINAPI *GetDesc)(IDirect3DVertexBuffer9* self, D3DVERTEXBUFFER_DESC * pDesc);
            
        } IDirect3DVertexBuffer9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DIndexBuffer9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DIndexBuffer9* self);
                        ULONG (WINAPI *Release)(IDirect3DIndexBuffer9* self);
                        HRESULT (WINAPI *GetDevice)(IDirect3DIndexBuffer9* self, IDirect3DDevice9 ** ppDevice);
                        HRESULT (WINAPI *SetPrivateData)(IDirect3DIndexBuffer9* self, const GUID & refguid, const void * pData, DWORD SizeOfData, DWORD Flags);
                        HRESULT (WINAPI *GetPrivateData)(IDirect3DIndexBuffer9* self, const GUID & refguid, void * pData, DWORD * pSizeOfData);
                        HRESULT (WINAPI *FreePrivateData)(IDirect3DIndexBuffer9* self, const GUID & refguid);
                        DWORD (WINAPI *SetPriority)(IDirect3DIndexBuffer9* self, DWORD PriorityNew);
                        DWORD (WINAPI *GetPriority)(IDirect3DIndexBuffer9* self);
                        void (WINAPI *PreLoad)(IDirect3DIndexBuffer9* self);
                        D3DRESOURCETYPE (WINAPI *GetType)(IDirect3DIndexBuffer9* self);
                        HRESULT (WINAPI *Lock)(IDirect3DIndexBuffer9* self, UINT OffsetToLock, UINT SizeToLock, void ** ppbData, DWORD Flags);
                        HRESULT (WINAPI *Unlock)(IDirect3DIndexBuffer9* self);
                        HRESULT (WINAPI *GetDesc)(IDirect3DIndexBuffer9* self, D3DINDEXBUFFER_DESC * pDesc);
            
        } IDirect3DIndexBuffer9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DSurface9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DSurface9* self);
                        ULONG (WINAPI *Release)(IDirect3DSurface9* self);
                        HRESULT (WINAPI *GetDevice)(IDirect3DSurface9* self, IDirect3DDevice9 ** ppDevice);
                        HRESULT (WINAPI *SetPrivateData)(IDirect3DSurface9* self, const GUID & refguid, const void * pData, DWORD SizeOfData, DWORD Flags);
                        HRESULT (WINAPI *GetPrivateData)(IDirect3DSurface9* self, const GUID & refguid, void * pData, DWORD * pSizeOfData);
                        HRESULT (WINAPI *FreePrivateData)(IDirect3DSurface9* self, const GUID & refguid);
                        DWORD (WINAPI *SetPriority)(IDirect3DSurface9* self, DWORD PriorityNew);
                        DWORD (WINAPI *GetPriority)(IDirect3DSurface9* self);
                        void (WINAPI *PreLoad)(IDirect3DSurface9* self);
                        D3DRESOURCETYPE (WINAPI *GetType)(IDirect3DSurface9* self);
                        HRESULT (WINAPI *GetContainer)(IDirect3DSurface9* self, const IID & riid, void ** ppContainer);
                        HRESULT (WINAPI *GetDesc)(IDirect3DSurface9* self, D3DSURFACE_DESC * pDesc);
                        HRESULT (WINAPI *LockRect)(IDirect3DSurface9* self, D3DLOCKED_RECT * pLockedRect, const RECT * pRect, DWORD Flags);
                        HRESULT (WINAPI *UnlockRect)(IDirect3DSurface9* self);
                        HRESULT (WINAPI *GetDC)(IDirect3DSurface9* self, HDC * phdc);
                        HRESULT (WINAPI *ReleaseDC)(IDirect3DSurface9* self, HDC hdc);
            
        } IDirect3DSurface9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DVolume9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DVolume9* self);
                        ULONG (WINAPI *Release)(IDirect3DVolume9* self);
                        HRESULT (WINAPI *GetDevice)(IDirect3DVolume9* self, IDirect3DDevice9 ** ppDevice);
                        HRESULT (WINAPI *SetPrivateData)(IDirect3DVolume9* self, const GUID & refguid, const void * pData, DWORD SizeOfData, DWORD Flags);
                        HRESULT (WINAPI *GetPrivateData)(IDirect3DVolume9* self, const GUID & refguid, void * pData, DWORD * pSizeOfData);
                        HRESULT (WINAPI *FreePrivateData)(IDirect3DVolume9* self, const GUID & refguid);
                        HRESULT (WINAPI *GetContainer)(IDirect3DVolume9* self, const IID & riid, void ** ppContainer);
                        HRESULT (WINAPI *GetDesc)(IDirect3DVolume9* self, D3DVOLUME_DESC * pDesc);
                        HRESULT (WINAPI *LockBox)(IDirect3DVolume9* self, D3DLOCKED_BOX * pLockedVolume, const D3DBOX * pBox, DWORD Flags);
                        HRESULT (WINAPI *UnlockBox)(IDirect3DVolume9* self);
            
        } IDirect3DVolume9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DQuery9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DQuery9* self);
                        ULONG (WINAPI *Release)(IDirect3DQuery9* self);
                        HRESULT (WINAPI *GetDevice)(IDirect3DQuery9* self, IDirect3DDevice9 ** ppDevice);
                        D3DQUERYTYPE (WINAPI *GetType)(IDirect3DQuery9* self);
                        DWORD (WINAPI *GetDataSize)(IDirect3DQuery9* self);
                        HRESULT (WINAPI *Issue)(IDirect3DQuery9* self, DWORD dwIssueFlags);
                        HRESULT (WINAPI *GetData)(IDirect3DQuery9* self, void * pData, DWORD dwSize, DWORD dwGetDataFlags);
            
        } IDirect3DQuery9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3D9Ex* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3D9Ex* self);
                        ULONG (WINAPI *Release)(IDirect3D9Ex* self);
                        HRESULT (WINAPI *RegisterSoftwareDevice)(IDirect3D9Ex* self, void * pInitializeFunction);
                        UINT (WINAPI *GetAdapterCount)(IDirect3D9Ex* self);
                        HRESULT (WINAPI *GetAdapterIdentifier)(IDirect3D9Ex* self, UINT Adapter, DWORD Flags, D3DADAPTER_IDENTIFIER9 * pIdentifier);
                        UINT (WINAPI *GetAdapterModeCount)(IDirect3D9Ex* self, UINT Adapter, D3DFORMAT Format);
                        HRESULT (WINAPI *EnumAdapterModes)(IDirect3D9Ex* self, UINT Adapter, D3DFORMAT Format, UINT Mode, D3DDISPLAYMODE * pMode);
                        HRESULT (WINAPI *GetAdapterDisplayMode)(IDirect3D9Ex* self, UINT Adapter, D3DDISPLAYMODE * pMode);
                        HRESULT (WINAPI *CheckDeviceType)(IDirect3D9Ex* self, UINT Adapter, D3DDEVTYPE DevType, D3DFORMAT AdapterFormat, D3DFORMAT BackBufferFormat, BOOL bWindowed);
                        HRESULT (WINAPI *CheckDeviceFormat)(IDirect3D9Ex* self, UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, DWORD Usage, D3DRESOURCETYPE RType, D3DFORMAT CheckFormat);
                        HRESULT (WINAPI *CheckDeviceMultiSampleType)(IDirect3D9Ex* self, UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT SurfaceFormat, BOOL Windowed, D3DMULTISAMPLE_TYPE MultiSampleType, DWORD * pQualityLevels);
                        HRESULT (WINAPI *CheckDepthStencilMatch)(IDirect3D9Ex* self, UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT AdapterFormat, D3DFORMAT RenderTargetFormat, D3DFORMAT DepthStencilFormat);
                        HRESULT (WINAPI *CheckDeviceFormatConversion)(IDirect3D9Ex* self, UINT Adapter, D3DDEVTYPE DeviceType, D3DFORMAT SourceFormat, D3DFORMAT TargetFormat);
                        HRESULT (WINAPI *GetDeviceCaps)(IDirect3D9Ex* self, UINT Adapter, D3DDEVTYPE DeviceType, D3DCAPS9 * pCaps);
                        HMONITOR (WINAPI *GetAdapterMonitor)(IDirect3D9Ex* self, UINT Adapter);
                        HRESULT (WINAPI *CreateDevice)(IDirect3D9Ex* self, UINT Adapter, D3DDEVTYPE DeviceType, HWND hFocusWindow, DWORD BehaviorFlags, D3DPRESENT_PARAMETERS * pPresentationParameters, IDirect3DDevice9 ** ppReturnedDeviceInterface);
                        UINT (WINAPI *GetAdapterModeCountEx)(IDirect3D9Ex* self, UINT Adapter, const D3DDISPLAYMODEFILTER * pFilter);
                        HRESULT (WINAPI *EnumAdapterModesEx)(IDirect3D9Ex* self, UINT Adapter, const D3DDISPLAYMODEFILTER * pFilter, UINT Mode, D3DDISPLAYMODEEX * pMode);
                        HRESULT (WINAPI *GetAdapterDisplayModeEx)(IDirect3D9Ex* self, UINT Adapter, D3DDISPLAYMODEEX * pMode, D3DDISPLAYROTATION * pRotation);
                        HRESULT (WINAPI *CreateDeviceEx)(IDirect3D9Ex* self, UINT Adapter, D3DDEVTYPE DeviceType, HWND hFocusWindow, DWORD BehaviorFlags, D3DPRESENT_PARAMETERS * pPresentationParameters, D3DDISPLAYMODEEX * pFullscreenDisplayMode, IDirect3DDevice9Ex ** ppReturnedDeviceInterface);
                        HRESULT (WINAPI *GetAdapterLUID)(IDirect3D9Ex* self, UINT Adapter, LUID * pLUID);
            
        } IDirect3D9ExTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DDevice9Ex* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DDevice9Ex* self);
                        ULONG (WINAPI *Release)(IDirect3DDevice9Ex* self);
                        HRESULT (WINAPI *TestCooperativeLevel)(IDirect3DDevice9Ex* self);
                        UINT (WINAPI *GetAvailableTextureMem)(IDirect3DDevice9Ex* self);
                        HRESULT (WINAPI *EvictManagedResources)(IDirect3DDevice9Ex* self);
                        HRESULT (WINAPI *GetDirect3D)(IDirect3DDevice9Ex* self, IDirect3D9 ** ppD3D9);
                        HRESULT (WINAPI *GetDeviceCaps)(IDirect3DDevice9Ex* self, D3DCAPS9 * pCaps);
                        HRESULT (WINAPI *GetDisplayMode)(IDirect3DDevice9Ex* self, UINT iSwapChain, D3DDISPLAYMODE * pMode);
                        HRESULT (WINAPI *GetCreationParameters)(IDirect3DDevice9Ex* self, D3DDEVICE_CREATION_PARAMETERS * pParameters);
                        HRESULT (WINAPI *SetCursorProperties)(IDirect3DDevice9Ex* self, UINT XHotSpot, UINT YHotSpot, IDirect3DSurface9 * pCursorBitmap);
                        void (WINAPI *SetCursorPosition)(IDirect3DDevice9Ex* self, int X, int Y, DWORD Flags);
                        BOOL (WINAPI *ShowCursor)(IDirect3DDevice9Ex* self, BOOL bShow);
                        HRESULT (WINAPI *CreateAdditionalSwapChain)(IDirect3DDevice9Ex* self, D3DPRESENT_PARAMETERS * pPresentationParameters, IDirect3DSwapChain9 ** pSwapChain);
                        HRESULT (WINAPI *GetSwapChain)(IDirect3DDevice9Ex* self, UINT iSwapChain, IDirect3DSwapChain9 ** pSwapChain);
                        UINT (WINAPI *GetNumberOfSwapChains)(IDirect3DDevice9Ex* self);
                        HRESULT (WINAPI *Reset)(IDirect3DDevice9Ex* self, D3DPRESENT_PARAMETERS * pPresentationParameters);
                        HRESULT (WINAPI *Present)(IDirect3DDevice9Ex* self, const RECT * pSourceRect, const RECT * pDestRect, HWND hDestWindowOverride, const RGNDATA * pDirtyRegion);
                        HRESULT (WINAPI *GetBackBuffer)(IDirect3DDevice9Ex* self, UINT iSwapChain, UINT iBackBuffer, D3DBACKBUFFER_TYPE Type, IDirect3DSurface9 ** ppBackBuffer);
                        HRESULT (WINAPI *GetRasterStatus)(IDirect3DDevice9Ex* self, UINT iSwapChain, D3DRASTER_STATUS * pRasterStatus);
                        HRESULT (WINAPI *SetDialogBoxMode)(IDirect3DDevice9Ex* self, BOOL bEnableDialogs);
                        void (WINAPI *SetGammaRamp)(IDirect3DDevice9Ex* self, UINT iSwapChain, DWORD Flags, const D3DGAMMARAMP * pRamp);
                        void (WINAPI *GetGammaRamp)(IDirect3DDevice9Ex* self, UINT iSwapChain, D3DGAMMARAMP * pRamp);
                        HRESULT (WINAPI *CreateTexture)(IDirect3DDevice9Ex* self, UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DTexture9 ** ppTexture, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *CreateVolumeTexture)(IDirect3DDevice9Ex* self, UINT Width, UINT Height, UINT Depth, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DVolumeTexture9 ** ppVolumeTexture, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *CreateCubeTexture)(IDirect3DDevice9Ex* self, UINT EdgeLength, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DCubeTexture9 ** ppCubeTexture, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *CreateVertexBuffer)(IDirect3DDevice9Ex* self, UINT Length, DWORD Usage, DWORD FVF, D3DPOOL Pool, IDirect3DVertexBuffer9 ** ppVertexBuffer, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *CreateIndexBuffer)(IDirect3DDevice9Ex* self, UINT Length, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DIndexBuffer9 ** ppIndexBuffer, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *CreateRenderTarget)(IDirect3DDevice9Ex* self, UINT Width, UINT Height, D3DFORMAT Format, D3DMULTISAMPLE_TYPE MultiSample, DWORD MultisampleQuality, BOOL Lockable, IDirect3DSurface9 ** ppSurface, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *CreateDepthStencilSurface)(IDirect3DDevice9Ex* self, UINT Width, UINT Height, D3DFORMAT Format, D3DMULTISAMPLE_TYPE MultiSample, DWORD MultisampleQuality, BOOL Discard, IDirect3DSurface9 ** ppSurface, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *UpdateSurface)(IDirect3DDevice9Ex* self, IDirect3DSurface9 * pSourceSurface, const RECT * pSourceRect, IDirect3DSurface9 * pDestinationSurface, const POINT * pDestPoint);
                        HRESULT (WINAPI *UpdateTexture)(IDirect3DDevice9Ex* self, IDirect3DBaseTexture9 * pSourceTexture, IDirect3DBaseTexture9 * pDestinationTexture);
                        HRESULT (WINAPI *GetRenderTargetData)(IDirect3DDevice9Ex* self, IDirect3DSurface9 * pRenderTarget, IDirect3DSurface9 * pDestSurface);
                        HRESULT (WINAPI *GetFrontBufferData)(IDirect3DDevice9Ex* self, UINT iSwapChain, IDirect3DSurface9 * pDestSurface);
                        HRESULT (WINAPI *StretchRect)(IDirect3DDevice9Ex* self, IDirect3DSurface9 * pSourceSurface, const RECT * pSourceRect, IDirect3DSurface9 * pDestSurface, const RECT * pDestRect, D3DTEXTUREFILTERTYPE Filter);
                        HRESULT (WINAPI *ColorFill)(IDirect3DDevice9Ex* self, IDirect3DSurface9 * pSurface, const RECT * pRect, D3DCOLOR color);
                        HRESULT (WINAPI *CreateOffscreenPlainSurface)(IDirect3DDevice9Ex* self, UINT Width, UINT Height, D3DFORMAT Format, D3DPOOL Pool, IDirect3DSurface9 ** ppSurface, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *SetRenderTarget)(IDirect3DDevice9Ex* self, DWORD RenderTargetIndex, IDirect3DSurface9 * pRenderTarget);
                        HRESULT (WINAPI *GetRenderTarget)(IDirect3DDevice9Ex* self, DWORD RenderTargetIndex, IDirect3DSurface9 ** ppRenderTarget);
                        HRESULT (WINAPI *SetDepthStencilSurface)(IDirect3DDevice9Ex* self, IDirect3DSurface9 * pNewZStencil);
                        HRESULT (WINAPI *GetDepthStencilSurface)(IDirect3DDevice9Ex* self, IDirect3DSurface9 ** ppZStencilSurface);
                        HRESULT (WINAPI *BeginScene)(IDirect3DDevice9Ex* self);
                        HRESULT (WINAPI *EndScene)(IDirect3DDevice9Ex* self);
                        HRESULT (WINAPI *Clear)(IDirect3DDevice9Ex* self, DWORD Count, const D3DRECT * pRects, DWORD Flags, D3DCOLOR Color, float Z, DWORD Stencil);
                        HRESULT (WINAPI *SetTransform)(IDirect3DDevice9Ex* self, D3DTRANSFORMSTATETYPE State, const D3DMATRIX * pMatrix);
                        HRESULT (WINAPI *GetTransform)(IDirect3DDevice9Ex* self, D3DTRANSFORMSTATETYPE State, D3DMATRIX * pMatrix);
                        HRESULT (WINAPI *MultiplyTransform)(IDirect3DDevice9Ex* self, D3DTRANSFORMSTATETYPE param0, const D3DMATRIX * param1);
                        HRESULT (WINAPI *SetViewport)(IDirect3DDevice9Ex* self, const D3DVIEWPORT9 * pViewport);
                        HRESULT (WINAPI *GetViewport)(IDirect3DDevice9Ex* self, D3DVIEWPORT9 * pViewport);
                        HRESULT (WINAPI *SetMaterial)(IDirect3DDevice9Ex* self, const D3DMATERIAL9 * pMaterial);
                        HRESULT (WINAPI *GetMaterial)(IDirect3DDevice9Ex* self, D3DMATERIAL9 * pMaterial);
                        HRESULT (WINAPI *SetLight)(IDirect3DDevice9Ex* self, DWORD Index, const D3DLIGHT9 * param1);
                        HRESULT (WINAPI *GetLight)(IDirect3DDevice9Ex* self, DWORD Index, D3DLIGHT9 * param1);
                        HRESULT (WINAPI *LightEnable)(IDirect3DDevice9Ex* self, DWORD Index, BOOL Enable);
                        HRESULT (WINAPI *GetLightEnable)(IDirect3DDevice9Ex* self, DWORD Index, BOOL * pEnable);
                        HRESULT (WINAPI *SetClipPlane)(IDirect3DDevice9Ex* self, DWORD Index, const float * pPlane);
                        HRESULT (WINAPI *GetClipPlane)(IDirect3DDevice9Ex* self, DWORD Index, float * pPlane);
                        HRESULT (WINAPI *SetRenderState)(IDirect3DDevice9Ex* self, D3DRENDERSTATETYPE State, DWORD Value);
                        HRESULT (WINAPI *GetRenderState)(IDirect3DDevice9Ex* self, D3DRENDERSTATETYPE State, DWORD * pValue);
                        HRESULT (WINAPI *CreateStateBlock)(IDirect3DDevice9Ex* self, D3DSTATEBLOCKTYPE Type, IDirect3DStateBlock9 ** ppSB);
                        HRESULT (WINAPI *BeginStateBlock)(IDirect3DDevice9Ex* self);
                        HRESULT (WINAPI *EndStateBlock)(IDirect3DDevice9Ex* self, IDirect3DStateBlock9 ** ppSB);
                        HRESULT (WINAPI *SetClipStatus)(IDirect3DDevice9Ex* self, const D3DCLIPSTATUS9 * pClipStatus);
                        HRESULT (WINAPI *GetClipStatus)(IDirect3DDevice9Ex* self, D3DCLIPSTATUS9 * pClipStatus);
                        HRESULT (WINAPI *GetTexture)(IDirect3DDevice9Ex* self, DWORD Stage, IDirect3DBaseTexture9 ** ppTexture);
                        HRESULT (WINAPI *SetTexture)(IDirect3DDevice9Ex* self, DWORD Stage, IDirect3DBaseTexture9 * pTexture);
                        HRESULT (WINAPI *GetTextureStageState)(IDirect3DDevice9Ex* self, DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD * pValue);
                        HRESULT (WINAPI *SetTextureStageState)(IDirect3DDevice9Ex* self, DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value);
                        HRESULT (WINAPI *GetSamplerState)(IDirect3DDevice9Ex* self, DWORD Sampler, D3DSAMPLERSTATETYPE Type, DWORD * pValue);
                        HRESULT (WINAPI *SetSamplerState)(IDirect3DDevice9Ex* self, DWORD Sampler, D3DSAMPLERSTATETYPE Type, DWORD Value);
                        HRESULT (WINAPI *ValidateDevice)(IDirect3DDevice9Ex* self, DWORD * pNumPasses);
                        HRESULT (WINAPI *SetPaletteEntries)(IDirect3DDevice9Ex* self, UINT PaletteNumber, const PALETTEENTRY * pEntries);
                        HRESULT (WINAPI *GetPaletteEntries)(IDirect3DDevice9Ex* self, UINT PaletteNumber, PALETTEENTRY * pEntries);
                        HRESULT (WINAPI *SetCurrentTexturePalette)(IDirect3DDevice9Ex* self, UINT PaletteNumber);
                        HRESULT (WINAPI *GetCurrentTexturePalette)(IDirect3DDevice9Ex* self, UINT * PaletteNumber);
                        HRESULT (WINAPI *SetScissorRect)(IDirect3DDevice9Ex* self, const RECT * pRect);
                        HRESULT (WINAPI *GetScissorRect)(IDirect3DDevice9Ex* self, RECT * pRect);
                        HRESULT (WINAPI *SetSoftwareVertexProcessing)(IDirect3DDevice9Ex* self, BOOL bSoftware);
                        BOOL (WINAPI *GetSoftwareVertexProcessing)(IDirect3DDevice9Ex* self);
                        HRESULT (WINAPI *SetNPatchMode)(IDirect3DDevice9Ex* self, float nSegments);
                        float (WINAPI *GetNPatchMode)(IDirect3DDevice9Ex* self);
                        HRESULT (WINAPI *DrawPrimitive)(IDirect3DDevice9Ex* self, D3DPRIMITIVETYPE PrimitiveType, UINT StartVertex, UINT PrimitiveCount);
                        HRESULT (WINAPI *DrawIndexedPrimitive)(IDirect3DDevice9Ex* self, D3DPRIMITIVETYPE param0, INT BaseVertexIndex, UINT MinVertexIndex, UINT NumVertices, UINT startIndex, UINT primCount);
                        HRESULT (WINAPI *DrawPrimitiveUP)(IDirect3DDevice9Ex* self, D3DPRIMITIVETYPE PrimitiveType, UINT PrimitiveCount, const void * pVertexStreamZeroData, UINT VertexStreamZeroStride);
                        HRESULT (WINAPI *DrawIndexedPrimitiveUP)(IDirect3DDevice9Ex* self, D3DPRIMITIVETYPE PrimitiveType, UINT MinVertexIndex, UINT NumVertices, UINT PrimitiveCount, const void * pIndexData, D3DFORMAT IndexDataFormat, const void * pVertexStreamZeroData, UINT VertexStreamZeroStride);
                        HRESULT (WINAPI *ProcessVertices)(IDirect3DDevice9Ex* self, UINT SrcStartIndex, UINT DestIndex, UINT VertexCount, IDirect3DVertexBuffer9 * pDestBuffer, IDirect3DVertexDeclaration9 * pVertexDecl, DWORD Flags);
                        HRESULT (WINAPI *CreateVertexDeclaration)(IDirect3DDevice9Ex* self, const D3DVERTEXELEMENT9 * pVertexElements, IDirect3DVertexDeclaration9 ** ppDecl);
                        HRESULT (WINAPI *SetVertexDeclaration)(IDirect3DDevice9Ex* self, IDirect3DVertexDeclaration9 * pDecl);
                        HRESULT (WINAPI *GetVertexDeclaration)(IDirect3DDevice9Ex* self, IDirect3DVertexDeclaration9 ** ppDecl);
                        HRESULT (WINAPI *SetFVF)(IDirect3DDevice9Ex* self, DWORD FVF);
                        HRESULT (WINAPI *GetFVF)(IDirect3DDevice9Ex* self, DWORD * pFVF);
                        HRESULT (WINAPI *CreateVertexShader)(IDirect3DDevice9Ex* self, const DWORD * pFunction, IDirect3DVertexShader9 ** ppShader);
                        HRESULT (WINAPI *SetVertexShader)(IDirect3DDevice9Ex* self, IDirect3DVertexShader9 * pShader);
                        HRESULT (WINAPI *GetVertexShader)(IDirect3DDevice9Ex* self, IDirect3DVertexShader9 ** ppShader);
                        HRESULT (WINAPI *SetVertexShaderConstantF)(IDirect3DDevice9Ex* self, UINT StartRegister, const float * pConstantData, UINT Vector4fCount);
                        HRESULT (WINAPI *GetVertexShaderConstantF)(IDirect3DDevice9Ex* self, UINT StartRegister, float * pConstantData, UINT Vector4fCount);
                        HRESULT (WINAPI *SetVertexShaderConstantI)(IDirect3DDevice9Ex* self, UINT StartRegister, const int * pConstantData, UINT Vector4iCount);
                        HRESULT (WINAPI *GetVertexShaderConstantI)(IDirect3DDevice9Ex* self, UINT StartRegister, int * pConstantData, UINT Vector4iCount);
                        HRESULT (WINAPI *SetVertexShaderConstantB)(IDirect3DDevice9Ex* self, UINT StartRegister, const BOOL * pConstantData, UINT BoolCount);
                        HRESULT (WINAPI *GetVertexShaderConstantB)(IDirect3DDevice9Ex* self, UINT StartRegister, BOOL * pConstantData, UINT BoolCount);
                        HRESULT (WINAPI *SetStreamSource)(IDirect3DDevice9Ex* self, UINT StreamNumber, IDirect3DVertexBuffer9 * pStreamData, UINT OffsetInBytes, UINT Stride);
                        HRESULT (WINAPI *GetStreamSource)(IDirect3DDevice9Ex* self, UINT StreamNumber, IDirect3DVertexBuffer9 ** ppStreamData, UINT * pOffsetInBytes, UINT * pStride);
                        HRESULT (WINAPI *SetStreamSourceFreq)(IDirect3DDevice9Ex* self, UINT StreamNumber, UINT Setting);
                        HRESULT (WINAPI *GetStreamSourceFreq)(IDirect3DDevice9Ex* self, UINT StreamNumber, UINT * pSetting);
                        HRESULT (WINAPI *SetIndices)(IDirect3DDevice9Ex* self, IDirect3DIndexBuffer9 * pIndexData);
                        HRESULT (WINAPI *GetIndices)(IDirect3DDevice9Ex* self, IDirect3DIndexBuffer9 ** ppIndexData);
                        HRESULT (WINAPI *CreatePixelShader)(IDirect3DDevice9Ex* self, const DWORD * pFunction, IDirect3DPixelShader9 ** ppShader);
                        HRESULT (WINAPI *SetPixelShader)(IDirect3DDevice9Ex* self, IDirect3DPixelShader9 * pShader);
                        HRESULT (WINAPI *GetPixelShader)(IDirect3DDevice9Ex* self, IDirect3DPixelShader9 ** ppShader);
                        HRESULT (WINAPI *SetPixelShaderConstantF)(IDirect3DDevice9Ex* self, UINT StartRegister, const float * pConstantData, UINT Vector4fCount);
                        HRESULT (WINAPI *GetPixelShaderConstantF)(IDirect3DDevice9Ex* self, UINT StartRegister, float * pConstantData, UINT Vector4fCount);
                        HRESULT (WINAPI *SetPixelShaderConstantI)(IDirect3DDevice9Ex* self, UINT StartRegister, const int * pConstantData, UINT Vector4iCount);
                        HRESULT (WINAPI *GetPixelShaderConstantI)(IDirect3DDevice9Ex* self, UINT StartRegister, int * pConstantData, UINT Vector4iCount);
                        HRESULT (WINAPI *SetPixelShaderConstantB)(IDirect3DDevice9Ex* self, UINT StartRegister, const BOOL * pConstantData, UINT BoolCount);
                        HRESULT (WINAPI *GetPixelShaderConstantB)(IDirect3DDevice9Ex* self, UINT StartRegister, BOOL * pConstantData, UINT BoolCount);
                        HRESULT (WINAPI *DrawRectPatch)(IDirect3DDevice9Ex* self, UINT Handle, const float * pNumSegs, const D3DRECTPATCH_INFO * pRectPatchInfo);
                        HRESULT (WINAPI *DrawTriPatch)(IDirect3DDevice9Ex* self, UINT Handle, const float * pNumSegs, const D3DTRIPATCH_INFO * pTriPatchInfo);
                        HRESULT (WINAPI *DeletePatch)(IDirect3DDevice9Ex* self, UINT Handle);
                        HRESULT (WINAPI *CreateQuery)(IDirect3DDevice9Ex* self, D3DQUERYTYPE Type, IDirect3DQuery9 ** ppQuery);
                        HRESULT (WINAPI *SetConvolutionMonoKernel)(IDirect3DDevice9Ex* self, UINT width, UINT height, float * rows, float * columns);
                        HRESULT (WINAPI *ComposeRects)(IDirect3DDevice9Ex* self, IDirect3DSurface9 * pSrc, IDirect3DSurface9 * pDst, IDirect3DVertexBuffer9 * pSrcRectDescs, UINT NumRects, IDirect3DVertexBuffer9 * pDstRectDescs, D3DCOMPOSERECTSOP Operation, int Xoffset, int Yoffset);
                        HRESULT (WINAPI *PresentEx)(IDirect3DDevice9Ex* self, const RECT * pSourceRect, const RECT * pDestRect, HWND hDestWindowOverride, const RGNDATA * pDirtyRegion, DWORD dwFlags);
                        HRESULT (WINAPI *GetGPUThreadPriority)(IDirect3DDevice9Ex* self, INT * pPriority);
                        HRESULT (WINAPI *SetGPUThreadPriority)(IDirect3DDevice9Ex* self, INT Priority);
                        HRESULT (WINAPI *WaitForVBlank)(IDirect3DDevice9Ex* self, UINT iSwapChain);
                        HRESULT (WINAPI *CheckResourceResidency)(IDirect3DDevice9Ex* self, IDirect3DResource9 ** pResourceArray, UINT32 NumResources);
                        HRESULT (WINAPI *SetMaximumFrameLatency)(IDirect3DDevice9Ex* self, UINT MaxLatency);
                        HRESULT (WINAPI *GetMaximumFrameLatency)(IDirect3DDevice9Ex* self, UINT * pMaxLatency);
                        HRESULT (WINAPI *CheckDeviceState)(IDirect3DDevice9Ex* self, HWND hDestinationWindow);
                        HRESULT (WINAPI *CreateRenderTargetEx)(IDirect3DDevice9Ex* self, UINT Width, UINT Height, D3DFORMAT Format, D3DMULTISAMPLE_TYPE MultiSample, DWORD MultisampleQuality, BOOL Lockable, IDirect3DSurface9 ** ppSurface, HANDLE * pSharedHandle, DWORD Usage);
                        HRESULT (WINAPI *CreateOffscreenPlainSurfaceEx)(IDirect3DDevice9Ex* self, UINT Width, UINT Height, D3DFORMAT Format, D3DPOOL Pool, IDirect3DSurface9 ** ppSurface, HANDLE * pSharedHandle, DWORD Usage);
                        HRESULT (WINAPI *CreateDepthStencilSurfaceEx)(IDirect3DDevice9Ex* self, UINT Width, UINT Height, D3DFORMAT Format, D3DMULTISAMPLE_TYPE MultiSample, DWORD MultisampleQuality, BOOL Discard, IDirect3DSurface9 ** ppSurface, HANDLE * pSharedHandle, DWORD Usage);
                        HRESULT (WINAPI *ResetEx)(IDirect3DDevice9Ex* self, D3DPRESENT_PARAMETERS * pPresentationParameters, D3DDISPLAYMODEEX * pFullscreenDisplayMode);
                        HRESULT (WINAPI *GetDisplayModeEx)(IDirect3DDevice9Ex* self, UINT iSwapChain, D3DDISPLAYMODEEX * pMode, D3DDISPLAYROTATION * pRotation);
            
        } IDirect3DDevice9ExTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DSwapChain9Ex* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DSwapChain9Ex* self);
                        ULONG (WINAPI *Release)(IDirect3DSwapChain9Ex* self);
                        HRESULT (WINAPI *Present)(IDirect3DSwapChain9Ex* self, const RECT * pSourceRect, const RECT * pDestRect, HWND hDestWindowOverride, const RGNDATA * pDirtyRegion, DWORD dwFlags);
                        HRESULT (WINAPI *GetFrontBufferData)(IDirect3DSwapChain9Ex* self, IDirect3DSurface9 * pDestSurface);
                        HRESULT (WINAPI *GetBackBuffer)(IDirect3DSwapChain9Ex* self, UINT iBackBuffer, D3DBACKBUFFER_TYPE Type, IDirect3DSurface9 ** ppBackBuffer);
                        HRESULT (WINAPI *GetRasterStatus)(IDirect3DSwapChain9Ex* self, D3DRASTER_STATUS * pRasterStatus);
                        HRESULT (WINAPI *GetDisplayMode)(IDirect3DSwapChain9Ex* self, D3DDISPLAYMODE * pMode);
                        HRESULT (WINAPI *GetDevice)(IDirect3DSwapChain9Ex* self, IDirect3DDevice9 ** ppDevice);
                        HRESULT (WINAPI *GetPresentParameters)(IDirect3DSwapChain9Ex* self, D3DPRESENT_PARAMETERS * pPresentationParameters);
                        HRESULT (WINAPI *GetLastPresentCount)(IDirect3DSwapChain9Ex* self, UINT * pLastPresentCount);
                        HRESULT (WINAPI *GetPresentStats)(IDirect3DSwapChain9Ex* self, D3DPRESENTSTATS * pPresentationStatistics);
                        HRESULT (WINAPI *GetDisplayModeEx)(IDirect3DSwapChain9Ex* self, D3DDISPLAYMODEEX * pMode, D3DDISPLAYROTATION * pRotation);
            
        } IDirect3DSwapChain9ExTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3D9ExOverlayExtension* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3D9ExOverlayExtension* self);
                        ULONG (WINAPI *Release)(IDirect3D9ExOverlayExtension* self);
                        HRESULT (WINAPI *CheckDeviceOverlayType)(IDirect3D9ExOverlayExtension* self, UINT Adapter, D3DDEVTYPE DevType, UINT OverlayWidth, UINT OverlayHeight, D3DFORMAT OverlayFormat, D3DDISPLAYMODEEX * pDisplayMode, D3DDISPLAYROTATION DisplayRotation, D3DOVERLAYCAPS * pOverlayCaps);
            
        } IDirect3D9ExOverlayExtensionTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DDevice9Video* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DDevice9Video* self);
                        ULONG (WINAPI *Release)(IDirect3DDevice9Video* self);
                        HRESULT (WINAPI *GetContentProtectionCaps)(IDirect3DDevice9Video* self, const GUID * pCryptoType, const GUID * pDecodeProfile, D3DCONTENTPROTECTIONCAPS * pCaps);
                        HRESULT (WINAPI *CreateAuthenticatedChannel)(IDirect3DDevice9Video* self, D3DAUTHENTICATEDCHANNELTYPE ChannelType, IDirect3DAuthenticatedChannel9 ** ppAuthenticatedChannel, HANDLE * pChannelHandle);
                        HRESULT (WINAPI *CreateCryptoSession)(IDirect3DDevice9Video* self, const GUID * pCryptoType, const GUID * pDecodeProfile, IDirect3DCryptoSession9 ** ppCryptoSession, HANDLE * pCryptoHandle);
            
        } IDirect3DDevice9VideoTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DAuthenticatedChannel9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DAuthenticatedChannel9* self);
                        ULONG (WINAPI *Release)(IDirect3DAuthenticatedChannel9* self);
                        HRESULT (WINAPI *GetCertificateSize)(IDirect3DAuthenticatedChannel9* self, UINT * pCertificateSize);
                        HRESULT (WINAPI *GetCertificate)(IDirect3DAuthenticatedChannel9* self, UINT CertifacteSize, BYTE * ppCertificate);
                        HRESULT (WINAPI *NegotiateKeyExchange)(IDirect3DAuthenticatedChannel9* self, UINT DataSize, void * pData);
                        HRESULT (WINAPI *Query)(IDirect3DAuthenticatedChannel9* self, UINT InputSize, const void * pInput, UINT OutputSize, void * pOutput);
                        HRESULT (WINAPI *Configure)(IDirect3DAuthenticatedChannel9* self, UINT InputSize, const void * pInput, D3DAUTHENTICATEDCHANNEL_CONFIGURE_OUTPUT * pOutput);
            
        } IDirect3DAuthenticatedChannel9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IDirect3DCryptoSession9* self, const IID & riid, void ** ppvObj);
                        ULONG (WINAPI *AddRef)(IDirect3DCryptoSession9* self);
                        ULONG (WINAPI *Release)(IDirect3DCryptoSession9* self);
                        HRESULT (WINAPI *GetCertificateSize)(IDirect3DCryptoSession9* self, UINT * pCertificateSize);
                        HRESULT (WINAPI *GetCertificate)(IDirect3DCryptoSession9* self, UINT CertifacteSize, BYTE * ppCertificate);
                        HRESULT (WINAPI *NegotiateKeyExchange)(IDirect3DCryptoSession9* self, UINT DataSize, void * pData);
                        HRESULT (WINAPI *EncryptionBlt)(IDirect3DCryptoSession9* self, IDirect3DSurface9 * pSrcSurface, IDirect3DSurface9 * pDstSurface, UINT DstSurfaceSize, void * pIV);
                        HRESULT (WINAPI *DecryptionBlt)(IDirect3DCryptoSession9* self, IDirect3DSurface9 * pSrcSurface, IDirect3DSurface9 * pDstSurface, UINT SrcSurfaceSize, D3DENCRYPTED_BLOCK_INFO * pEncryptedBlockInfo, void * pContentKey, void * pIV);
                        HRESULT (WINAPI *GetSurfacePitch)(IDirect3DCryptoSession9* self, IDirect3DSurface9 * pSrcSurface, UINT * pSurfacePitch);
                        HRESULT (WINAPI *StartSessionKeyRefresh)(IDirect3DCryptoSession9* self, void * pRandomNumber, UINT RandomNumberSize);
                        HRESULT (WINAPI *FinishSessionKeyRefresh)(IDirect3DCryptoSession9* self);
                        HRESULT (WINAPI *GetEncryptionBltKey)(IDirect3DCryptoSession9* self, void * pReadbackKey, UINT KeySize);
            
        } IDirect3DCryptoSession9Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        LPVOID (WINAPI *GetBufferPointer)(ID3D10Blob* self);
                        SIZE_T (WINAPI *GetBufferSize)(ID3D10Blob* self);
            
        } ID3D10BlobTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
            
        } ID3D10DeviceChildTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetDesc)(ID3D10DepthStencilState* self, D3D10_DEPTH_STENCIL_DESC * pDesc);
            
        } ID3D10DepthStencilStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetDesc)(ID3D10BlendState* self, D3D10_BLEND_DESC * pDesc);
            
        } ID3D10BlendStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetDesc)(ID3D10RasterizerState* self, D3D10_RASTERIZER_DESC * pDesc);
            
        } ID3D10RasterizerStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetType)(ID3D10Resource* self, D3D10_RESOURCE_DIMENSION * rType);
                        void (WINAPI *SetEvictionPriority)(ID3D10Resource* self, UINT EvictionPriority);
                        UINT (WINAPI *GetEvictionPriority)(ID3D10Resource* self);
            
        } ID3D10ResourceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetType)(ID3D10Resource* self, D3D10_RESOURCE_DIMENSION * rType);
                        void (WINAPI *SetEvictionPriority)(ID3D10Resource* self, UINT EvictionPriority);
                        UINT (WINAPI *GetEvictionPriority)(ID3D10Resource* self);
                        HRESULT (WINAPI *Map)(ID3D10Buffer* self, D3D10_MAP MapType, UINT MapFlags, void ** ppData);
                        void (WINAPI *Unmap)(ID3D10Buffer* self);
                        void (WINAPI *GetDesc)(ID3D10Buffer* self, D3D10_BUFFER_DESC * pDesc);
            
        } ID3D10BufferTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetType)(ID3D10Resource* self, D3D10_RESOURCE_DIMENSION * rType);
                        void (WINAPI *SetEvictionPriority)(ID3D10Resource* self, UINT EvictionPriority);
                        UINT (WINAPI *GetEvictionPriority)(ID3D10Resource* self);
                        HRESULT (WINAPI *Map)(ID3D10Texture1D* self, UINT Subresource, D3D10_MAP MapType, UINT MapFlags, void ** ppData);
                        void (WINAPI *Unmap)(ID3D10Texture1D* self, UINT Subresource);
                        void (WINAPI *GetDesc)(ID3D10Texture1D* self, D3D10_TEXTURE1D_DESC * pDesc);
            
        } ID3D10Texture1DTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetType)(ID3D10Resource* self, D3D10_RESOURCE_DIMENSION * rType);
                        void (WINAPI *SetEvictionPriority)(ID3D10Resource* self, UINT EvictionPriority);
                        UINT (WINAPI *GetEvictionPriority)(ID3D10Resource* self);
                        HRESULT (WINAPI *Map)(ID3D10Texture2D* self, UINT Subresource, D3D10_MAP MapType, UINT MapFlags, D3D10_MAPPED_TEXTURE2D * pMappedTex2D);
                        void (WINAPI *Unmap)(ID3D10Texture2D* self, UINT Subresource);
                        void (WINAPI *GetDesc)(ID3D10Texture2D* self, D3D10_TEXTURE2D_DESC * pDesc);
            
        } ID3D10Texture2DTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetType)(ID3D10Resource* self, D3D10_RESOURCE_DIMENSION * rType);
                        void (WINAPI *SetEvictionPriority)(ID3D10Resource* self, UINT EvictionPriority);
                        UINT (WINAPI *GetEvictionPriority)(ID3D10Resource* self);
                        HRESULT (WINAPI *Map)(ID3D10Texture3D* self, UINT Subresource, D3D10_MAP MapType, UINT MapFlags, D3D10_MAPPED_TEXTURE3D * pMappedTex3D);
                        void (WINAPI *Unmap)(ID3D10Texture3D* self, UINT Subresource);
                        void (WINAPI *GetDesc)(ID3D10Texture3D* self, D3D10_TEXTURE3D_DESC * pDesc);
            
        } ID3D10Texture3DTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetResource)(ID3D10View* self, ID3D10Resource ** ppResource);
            
        } ID3D10ViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetResource)(ID3D10View* self, ID3D10Resource ** ppResource);
                        void (WINAPI *GetDesc)(ID3D10ShaderResourceView* self, D3D10_SHADER_RESOURCE_VIEW_DESC * pDesc);
            
        } ID3D10ShaderResourceViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetResource)(ID3D10View* self, ID3D10Resource ** ppResource);
                        void (WINAPI *GetDesc)(ID3D10RenderTargetView* self, D3D10_RENDER_TARGET_VIEW_DESC * pDesc);
            
        } ID3D10RenderTargetViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetResource)(ID3D10View* self, ID3D10Resource ** ppResource);
                        void (WINAPI *GetDesc)(ID3D10DepthStencilView* self, D3D10_DEPTH_STENCIL_VIEW_DESC * pDesc);
            
        } ID3D10DepthStencilViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
            
        } ID3D10VertexShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
            
        } ID3D10GeometryShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
            
        } ID3D10PixelShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
            
        } ID3D10InputLayoutTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetDesc)(ID3D10SamplerState* self, D3D10_SAMPLER_DESC * pDesc);
            
        } ID3D10SamplerStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *Begin)(ID3D10Asynchronous* self);
                        void (WINAPI *End)(ID3D10Asynchronous* self);
                        HRESULT (WINAPI *GetData)(ID3D10Asynchronous* self, void * pData, UINT DataSize, UINT GetDataFlags);
                        UINT (WINAPI *GetDataSize)(ID3D10Asynchronous* self);
            
        } ID3D10AsynchronousTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *Begin)(ID3D10Asynchronous* self);
                        void (WINAPI *End)(ID3D10Asynchronous* self);
                        HRESULT (WINAPI *GetData)(ID3D10Asynchronous* self, void * pData, UINT DataSize, UINT GetDataFlags);
                        UINT (WINAPI *GetDataSize)(ID3D10Asynchronous* self);
                        void (WINAPI *GetDesc)(ID3D10Query* self, D3D10_QUERY_DESC * pDesc);
            
        } ID3D10QueryTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *Begin)(ID3D10Asynchronous* self);
                        void (WINAPI *End)(ID3D10Asynchronous* self);
                        HRESULT (WINAPI *GetData)(ID3D10Asynchronous* self, void * pData, UINT DataSize, UINT GetDataFlags);
                        UINT (WINAPI *GetDataSize)(ID3D10Asynchronous* self);
                        void (WINAPI *GetDesc)(ID3D10Query* self, D3D10_QUERY_DESC * pDesc);
            
        } ID3D10PredicateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *Begin)(ID3D10Asynchronous* self);
                        void (WINAPI *End)(ID3D10Asynchronous* self);
                        HRESULT (WINAPI *GetData)(ID3D10Asynchronous* self, void * pData, UINT DataSize, UINT GetDataFlags);
                        UINT (WINAPI *GetDataSize)(ID3D10Asynchronous* self);
                        void (WINAPI *GetDesc)(ID3D10Counter* self, D3D10_COUNTER_DESC * pDesc);
            
        } ID3D10CounterTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *VSSetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers);
                        void (WINAPI *PSSetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *PSSetShader)(ID3D10Device* self, ID3D10PixelShader * pPixelShader);
                        void (WINAPI *PSSetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers);
                        void (WINAPI *VSSetShader)(ID3D10Device* self, ID3D10VertexShader * pVertexShader);
                        void (WINAPI *DrawIndexed)(ID3D10Device* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation);
                        void (WINAPI *Draw)(ID3D10Device* self, UINT VertexCount, UINT StartVertexLocation);
                        void (WINAPI *PSSetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers);
                        void (WINAPI *IASetInputLayout)(ID3D10Device* self, ID3D10InputLayout * pInputLayout);
                        void (WINAPI *IASetVertexBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets);
                        void (WINAPI *IASetIndexBuffer)(ID3D10Device* self, ID3D10Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset);
                        void (WINAPI *DrawIndexedInstanced)(ID3D10Device* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *DrawInstanced)(ID3D10Device* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *GSSetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers);
                        void (WINAPI *GSSetShader)(ID3D10Device* self, ID3D10GeometryShader * pShader);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D10Device* self, D3D10_PRIMITIVE_TOPOLOGY Topology);
                        void (WINAPI *VSSetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *VSSetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers);
                        void (WINAPI *SetPredication)(ID3D10Device* self, ID3D10Predicate * pPredicate, BOOL PredicateValue);
                        void (WINAPI *GSSetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *GSSetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers);
                        void (WINAPI *OMSetRenderTargets)(ID3D10Device* self, UINT NumViews, ID3D10RenderTargetView *const * ppRenderTargetViews, ID3D10DepthStencilView * pDepthStencilView);
                        void (WINAPI *OMSetBlendState)(ID3D10Device* self, ID3D10BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask);
                        void (WINAPI *OMSetDepthStencilState)(ID3D10Device* self, ID3D10DepthStencilState * pDepthStencilState, UINT StencilRef);
                        void (WINAPI *SOSetTargets)(ID3D10Device* self, UINT NumBuffers, ID3D10Buffer *const * ppSOTargets, const UINT * pOffsets);
                        void (WINAPI *DrawAuto)(ID3D10Device* self);
                        void (WINAPI *RSSetState)(ID3D10Device* self, ID3D10RasterizerState * pRasterizerState);
                        void (WINAPI *RSSetViewports)(ID3D10Device* self, UINT NumViewports, const D3D10_VIEWPORT * pViewports);
                        void (WINAPI *RSSetScissorRects)(ID3D10Device* self, UINT NumRects, const D3D10_RECT * pRects);
                        void (WINAPI *CopySubresourceRegion)(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D10Resource * pSrcResource, UINT SrcSubresource, const D3D10_BOX * pSrcBox);
                        void (WINAPI *CopyResource)(ID3D10Device* self, ID3D10Resource * pDstResource, ID3D10Resource * pSrcResource);
                        void (WINAPI *UpdateSubresource)(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, const D3D10_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch);
                        void (WINAPI *ClearRenderTargetView)(ID3D10Device* self, ID3D10RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4]);
                        void (WINAPI *ClearDepthStencilView)(ID3D10Device* self, ID3D10DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil);
                        void (WINAPI *GenerateMips)(ID3D10Device* self, ID3D10ShaderResourceView * pShaderResourceView);
                        void (WINAPI *ResolveSubresource)(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, ID3D10Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format);
                        void (WINAPI *VSGetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers);
                        void (WINAPI *PSGetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *PSGetShader)(ID3D10Device* self, ID3D10PixelShader ** ppPixelShader);
                        void (WINAPI *PSGetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers);
                        void (WINAPI *VSGetShader)(ID3D10Device* self, ID3D10VertexShader ** ppVertexShader);
                        void (WINAPI *PSGetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers);
                        void (WINAPI *IAGetInputLayout)(ID3D10Device* self, ID3D10InputLayout ** ppInputLayout);
                        void (WINAPI *IAGetVertexBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets);
                        void (WINAPI *IAGetIndexBuffer)(ID3D10Device* self, ID3D10Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset);
                        void (WINAPI *GSGetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers);
                        void (WINAPI *GSGetShader)(ID3D10Device* self, ID3D10GeometryShader ** ppGeometryShader);
                        void (WINAPI *IAGetPrimitiveTopology)(ID3D10Device* self, D3D10_PRIMITIVE_TOPOLOGY * pTopology);
                        void (WINAPI *VSGetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *VSGetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers);
                        void (WINAPI *GetPredication)(ID3D10Device* self, ID3D10Predicate ** ppPredicate, BOOL * pPredicateValue);
                        void (WINAPI *GSGetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *GSGetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers);
                        void (WINAPI *OMGetRenderTargets)(ID3D10Device* self, UINT NumViews, ID3D10RenderTargetView ** ppRenderTargetViews, ID3D10DepthStencilView ** ppDepthStencilView);
                        void (WINAPI *OMGetBlendState)(ID3D10Device* self, ID3D10BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask);
                        void (WINAPI *OMGetDepthStencilState)(ID3D10Device* self, ID3D10DepthStencilState ** ppDepthStencilState, UINT * pStencilRef);
                        void (WINAPI *SOGetTargets)(ID3D10Device* self, UINT NumBuffers, ID3D10Buffer ** ppSOTargets, UINT * pOffsets);
                        void (WINAPI *RSGetState)(ID3D10Device* self, ID3D10RasterizerState ** ppRasterizerState);
                        void (WINAPI *RSGetViewports)(ID3D10Device* self, UINT * NumViewports, D3D10_VIEWPORT * pViewports);
                        void (WINAPI *RSGetScissorRects)(ID3D10Device* self, UINT * NumRects, D3D10_RECT * pRects);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D10Device* self);
                        HRESULT (WINAPI *SetExceptionMode)(ID3D10Device* self, UINT RaiseFlags);
                        UINT (WINAPI *GetExceptionMode)(ID3D10Device* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10Device* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10Device* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10Device* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *ClearState)(ID3D10Device* self);
                        void (WINAPI *Flush)(ID3D10Device* self);
                        HRESULT (WINAPI *CreateBuffer)(ID3D10Device* self, const D3D10_BUFFER_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Buffer ** ppBuffer);
                        HRESULT (WINAPI *CreateTexture1D)(ID3D10Device* self, const D3D10_TEXTURE1D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture1D ** ppTexture1D);
                        HRESULT (WINAPI *CreateTexture2D)(ID3D10Device* self, const D3D10_TEXTURE2D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture2D ** ppTexture2D);
                        HRESULT (WINAPI *CreateTexture3D)(ID3D10Device* self, const D3D10_TEXTURE3D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture3D ** ppTexture3D);
                        HRESULT (WINAPI *CreateShaderResourceView)(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D10ShaderResourceView ** ppSRView);
                        HRESULT (WINAPI *CreateRenderTargetView)(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_RENDER_TARGET_VIEW_DESC * pDesc, ID3D10RenderTargetView ** ppRTView);
                        HRESULT (WINAPI *CreateDepthStencilView)(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D10DepthStencilView ** ppDepthStencilView);
                        HRESULT (WINAPI *CreateInputLayout)(ID3D10Device* self, const D3D10_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D10InputLayout ** ppInputLayout);
                        HRESULT (WINAPI *CreateVertexShader)(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10VertexShader ** ppVertexShader);
                        HRESULT (WINAPI *CreateGeometryShader)(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10GeometryShader ** ppGeometryShader);
                        HRESULT (WINAPI *CreateGeometryShaderWithStreamOutput)(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D10_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, UINT OutputStreamStride, ID3D10GeometryShader ** ppGeometryShader);
                        HRESULT (WINAPI *CreatePixelShader)(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10PixelShader ** ppPixelShader);
                        HRESULT (WINAPI *CreateBlendState)(ID3D10Device* self, const D3D10_BLEND_DESC * pBlendStateDesc, ID3D10BlendState ** ppBlendState);
                        HRESULT (WINAPI *CreateDepthStencilState)(ID3D10Device* self, const D3D10_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D10DepthStencilState ** ppDepthStencilState);
                        HRESULT (WINAPI *CreateRasterizerState)(ID3D10Device* self, const D3D10_RASTERIZER_DESC * pRasterizerDesc, ID3D10RasterizerState ** ppRasterizerState);
                        HRESULT (WINAPI *CreateSamplerState)(ID3D10Device* self, const D3D10_SAMPLER_DESC * pSamplerDesc, ID3D10SamplerState ** ppSamplerState);
                        HRESULT (WINAPI *CreateQuery)(ID3D10Device* self, const D3D10_QUERY_DESC * pQueryDesc, ID3D10Query ** ppQuery);
                        HRESULT (WINAPI *CreatePredicate)(ID3D10Device* self, const D3D10_QUERY_DESC * pPredicateDesc, ID3D10Predicate ** ppPredicate);
                        HRESULT (WINAPI *CreateCounter)(ID3D10Device* self, const D3D10_COUNTER_DESC * pCounterDesc, ID3D10Counter ** ppCounter);
                        HRESULT (WINAPI *CheckFormatSupport)(ID3D10Device* self, DXGI_FORMAT Format, UINT * pFormatSupport);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels)(ID3D10Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels);
                        void (WINAPI *CheckCounterInfo)(ID3D10Device* self, D3D10_COUNTER_INFO * pCounterInfo);
                        HRESULT (WINAPI *CheckCounter)(ID3D10Device* self, const D3D10_COUNTER_DESC * pDesc, D3D10_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength);
                        UINT (WINAPI *GetCreationFlags)(ID3D10Device* self);
                        HRESULT (WINAPI *OpenSharedResource)(ID3D10Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource);
                        void (WINAPI *SetTextFilterSize)(ID3D10Device* self, UINT Width, UINT Height);
                        void (WINAPI *GetTextFilterSize)(ID3D10Device* self, UINT * pWidth, UINT * pHeight);
            
        } ID3D10DeviceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *Enter)(ID3D10Multithread* self);
                        void (WINAPI *Leave)(ID3D10Multithread* self);
                        BOOL (WINAPI *SetMultithreadProtected)(ID3D10Multithread* self, BOOL bMTProtect);
                        BOOL (WINAPI *GetMultithreadProtected)(ID3D10Multithread* self);
            
        } ID3D10MultithreadTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetDesc)(ID3D10BlendState* self, D3D10_BLEND_DESC * pDesc);
                        void (WINAPI *GetDesc1)(ID3D10BlendState1* self, D3D10_BLEND_DESC1 * pDesc);
            
        } ID3D10BlendState1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D10DeviceChild* self, ID3D10Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetResource)(ID3D10View* self, ID3D10Resource ** ppResource);
                        void (WINAPI *GetDesc)(ID3D10ShaderResourceView* self, D3D10_SHADER_RESOURCE_VIEW_DESC * pDesc);
                        void (WINAPI *GetDesc1)(ID3D10ShaderResourceView1* self, D3D10_SHADER_RESOURCE_VIEW_DESC1 * pDesc);
            
        } ID3D10ShaderResourceView1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *VSSetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers);
                        void (WINAPI *PSSetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *PSSetShader)(ID3D10Device* self, ID3D10PixelShader * pPixelShader);
                        void (WINAPI *PSSetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers);
                        void (WINAPI *VSSetShader)(ID3D10Device* self, ID3D10VertexShader * pVertexShader);
                        void (WINAPI *DrawIndexed)(ID3D10Device* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation);
                        void (WINAPI *Draw)(ID3D10Device* self, UINT VertexCount, UINT StartVertexLocation);
                        void (WINAPI *PSSetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers);
                        void (WINAPI *IASetInputLayout)(ID3D10Device* self, ID3D10InputLayout * pInputLayout);
                        void (WINAPI *IASetVertexBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets);
                        void (WINAPI *IASetIndexBuffer)(ID3D10Device* self, ID3D10Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset);
                        void (WINAPI *DrawIndexedInstanced)(ID3D10Device* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *DrawInstanced)(ID3D10Device* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *GSSetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer *const * ppConstantBuffers);
                        void (WINAPI *GSSetShader)(ID3D10Device* self, ID3D10GeometryShader * pShader);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D10Device* self, D3D10_PRIMITIVE_TOPOLOGY Topology);
                        void (WINAPI *VSSetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *VSSetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers);
                        void (WINAPI *SetPredication)(ID3D10Device* self, ID3D10Predicate * pPredicate, BOOL PredicateValue);
                        void (WINAPI *GSSetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *GSSetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState *const * ppSamplers);
                        void (WINAPI *OMSetRenderTargets)(ID3D10Device* self, UINT NumViews, ID3D10RenderTargetView *const * ppRenderTargetViews, ID3D10DepthStencilView * pDepthStencilView);
                        void (WINAPI *OMSetBlendState)(ID3D10Device* self, ID3D10BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask);
                        void (WINAPI *OMSetDepthStencilState)(ID3D10Device* self, ID3D10DepthStencilState * pDepthStencilState, UINT StencilRef);
                        void (WINAPI *SOSetTargets)(ID3D10Device* self, UINT NumBuffers, ID3D10Buffer *const * ppSOTargets, const UINT * pOffsets);
                        void (WINAPI *DrawAuto)(ID3D10Device* self);
                        void (WINAPI *RSSetState)(ID3D10Device* self, ID3D10RasterizerState * pRasterizerState);
                        void (WINAPI *RSSetViewports)(ID3D10Device* self, UINT NumViewports, const D3D10_VIEWPORT * pViewports);
                        void (WINAPI *RSSetScissorRects)(ID3D10Device* self, UINT NumRects, const D3D10_RECT * pRects);
                        void (WINAPI *CopySubresourceRegion)(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D10Resource * pSrcResource, UINT SrcSubresource, const D3D10_BOX * pSrcBox);
                        void (WINAPI *CopyResource)(ID3D10Device* self, ID3D10Resource * pDstResource, ID3D10Resource * pSrcResource);
                        void (WINAPI *UpdateSubresource)(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, const D3D10_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch);
                        void (WINAPI *ClearRenderTargetView)(ID3D10Device* self, ID3D10RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4]);
                        void (WINAPI *ClearDepthStencilView)(ID3D10Device* self, ID3D10DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil);
                        void (WINAPI *GenerateMips)(ID3D10Device* self, ID3D10ShaderResourceView * pShaderResourceView);
                        void (WINAPI *ResolveSubresource)(ID3D10Device* self, ID3D10Resource * pDstResource, UINT DstSubresource, ID3D10Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format);
                        void (WINAPI *VSGetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers);
                        void (WINAPI *PSGetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *PSGetShader)(ID3D10Device* self, ID3D10PixelShader ** ppPixelShader);
                        void (WINAPI *PSGetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers);
                        void (WINAPI *VSGetShader)(ID3D10Device* self, ID3D10VertexShader ** ppVertexShader);
                        void (WINAPI *PSGetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers);
                        void (WINAPI *IAGetInputLayout)(ID3D10Device* self, ID3D10InputLayout ** ppInputLayout);
                        void (WINAPI *IAGetVertexBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets);
                        void (WINAPI *IAGetIndexBuffer)(ID3D10Device* self, ID3D10Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset);
                        void (WINAPI *GSGetConstantBuffers)(ID3D10Device* self, UINT StartSlot, UINT NumBuffers, ID3D10Buffer ** ppConstantBuffers);
                        void (WINAPI *GSGetShader)(ID3D10Device* self, ID3D10GeometryShader ** ppGeometryShader);
                        void (WINAPI *IAGetPrimitiveTopology)(ID3D10Device* self, D3D10_PRIMITIVE_TOPOLOGY * pTopology);
                        void (WINAPI *VSGetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *VSGetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers);
                        void (WINAPI *GetPredication)(ID3D10Device* self, ID3D10Predicate ** ppPredicate, BOOL * pPredicateValue);
                        void (WINAPI *GSGetShaderResources)(ID3D10Device* self, UINT StartSlot, UINT NumViews, ID3D10ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *GSGetSamplers)(ID3D10Device* self, UINT StartSlot, UINT NumSamplers, ID3D10SamplerState ** ppSamplers);
                        void (WINAPI *OMGetRenderTargets)(ID3D10Device* self, UINT NumViews, ID3D10RenderTargetView ** ppRenderTargetViews, ID3D10DepthStencilView ** ppDepthStencilView);
                        void (WINAPI *OMGetBlendState)(ID3D10Device* self, ID3D10BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask);
                        void (WINAPI *OMGetDepthStencilState)(ID3D10Device* self, ID3D10DepthStencilState ** ppDepthStencilState, UINT * pStencilRef);
                        void (WINAPI *SOGetTargets)(ID3D10Device* self, UINT NumBuffers, ID3D10Buffer ** ppSOTargets, UINT * pOffsets);
                        void (WINAPI *RSGetState)(ID3D10Device* self, ID3D10RasterizerState ** ppRasterizerState);
                        void (WINAPI *RSGetViewports)(ID3D10Device* self, UINT * NumViewports, D3D10_VIEWPORT * pViewports);
                        void (WINAPI *RSGetScissorRects)(ID3D10Device* self, UINT * NumRects, D3D10_RECT * pRects);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D10Device* self);
                        HRESULT (WINAPI *SetExceptionMode)(ID3D10Device* self, UINT RaiseFlags);
                        UINT (WINAPI *GetExceptionMode)(ID3D10Device* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D10Device* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D10Device* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D10Device* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *ClearState)(ID3D10Device* self);
                        void (WINAPI *Flush)(ID3D10Device* self);
                        HRESULT (WINAPI *CreateBuffer)(ID3D10Device* self, const D3D10_BUFFER_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Buffer ** ppBuffer);
                        HRESULT (WINAPI *CreateTexture1D)(ID3D10Device* self, const D3D10_TEXTURE1D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture1D ** ppTexture1D);
                        HRESULT (WINAPI *CreateTexture2D)(ID3D10Device* self, const D3D10_TEXTURE2D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture2D ** ppTexture2D);
                        HRESULT (WINAPI *CreateTexture3D)(ID3D10Device* self, const D3D10_TEXTURE3D_DESC * pDesc, const D3D10_SUBRESOURCE_DATA * pInitialData, ID3D10Texture3D ** ppTexture3D);
                        HRESULT (WINAPI *CreateShaderResourceView)(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D10ShaderResourceView ** ppSRView);
                        HRESULT (WINAPI *CreateRenderTargetView)(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_RENDER_TARGET_VIEW_DESC * pDesc, ID3D10RenderTargetView ** ppRTView);
                        HRESULT (WINAPI *CreateDepthStencilView)(ID3D10Device* self, ID3D10Resource * pResource, const D3D10_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D10DepthStencilView ** ppDepthStencilView);
                        HRESULT (WINAPI *CreateInputLayout)(ID3D10Device* self, const D3D10_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D10InputLayout ** ppInputLayout);
                        HRESULT (WINAPI *CreateVertexShader)(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10VertexShader ** ppVertexShader);
                        HRESULT (WINAPI *CreateGeometryShader)(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10GeometryShader ** ppGeometryShader);
                        HRESULT (WINAPI *CreateGeometryShaderWithStreamOutput)(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D10_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, UINT OutputStreamStride, ID3D10GeometryShader ** ppGeometryShader);
                        HRESULT (WINAPI *CreatePixelShader)(ID3D10Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D10PixelShader ** ppPixelShader);
                        HRESULT (WINAPI *CreateBlendState)(ID3D10Device* self, const D3D10_BLEND_DESC * pBlendStateDesc, ID3D10BlendState ** ppBlendState);
                        HRESULT (WINAPI *CreateDepthStencilState)(ID3D10Device* self, const D3D10_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D10DepthStencilState ** ppDepthStencilState);
                        HRESULT (WINAPI *CreateRasterizerState)(ID3D10Device* self, const D3D10_RASTERIZER_DESC * pRasterizerDesc, ID3D10RasterizerState ** ppRasterizerState);
                        HRESULT (WINAPI *CreateSamplerState)(ID3D10Device* self, const D3D10_SAMPLER_DESC * pSamplerDesc, ID3D10SamplerState ** ppSamplerState);
                        HRESULT (WINAPI *CreateQuery)(ID3D10Device* self, const D3D10_QUERY_DESC * pQueryDesc, ID3D10Query ** ppQuery);
                        HRESULT (WINAPI *CreatePredicate)(ID3D10Device* self, const D3D10_QUERY_DESC * pPredicateDesc, ID3D10Predicate ** ppPredicate);
                        HRESULT (WINAPI *CreateCounter)(ID3D10Device* self, const D3D10_COUNTER_DESC * pCounterDesc, ID3D10Counter ** ppCounter);
                        HRESULT (WINAPI *CheckFormatSupport)(ID3D10Device* self, DXGI_FORMAT Format, UINT * pFormatSupport);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels)(ID3D10Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels);
                        void (WINAPI *CheckCounterInfo)(ID3D10Device* self, D3D10_COUNTER_INFO * pCounterInfo);
                        HRESULT (WINAPI *CheckCounter)(ID3D10Device* self, const D3D10_COUNTER_DESC * pDesc, D3D10_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength);
                        UINT (WINAPI *GetCreationFlags)(ID3D10Device* self);
                        HRESULT (WINAPI *OpenSharedResource)(ID3D10Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource);
                        void (WINAPI *SetTextFilterSize)(ID3D10Device* self, UINT Width, UINT Height);
                        void (WINAPI *GetTextFilterSize)(ID3D10Device* self, UINT * pWidth, UINT * pHeight);
                        HRESULT (WINAPI *CreateShaderResourceView1)(ID3D10Device1* self, ID3D10Resource * pResource, const D3D10_SHADER_RESOURCE_VIEW_DESC1 * pDesc, ID3D10ShaderResourceView1 ** ppSRView);
                        HRESULT (WINAPI *CreateBlendState1)(ID3D10Device1* self, const D3D10_BLEND_DESC1 * pBlendStateDesc, ID3D10BlendState1 ** ppBlendState);
                        D3D10_FEATURE_LEVEL1 (WINAPI *GetFeatureLevel)(ID3D10Device1* self);
            
        } ID3D10Device1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
            
        } ID3D11DeviceChildTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetDesc)(ID3D11DepthStencilState* self, D3D11_DEPTH_STENCIL_DESC * pDesc);
            
        } ID3D11DepthStencilStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetDesc)(ID3D11BlendState* self, D3D11_BLEND_DESC * pDesc);
            
        } ID3D11BlendStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetDesc)(ID3D11RasterizerState* self, D3D11_RASTERIZER_DESC * pDesc);
            
        } ID3D11RasterizerStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetType)(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension);
                        void (WINAPI *SetEvictionPriority)(ID3D11Resource* self, UINT EvictionPriority);
                        UINT (WINAPI *GetEvictionPriority)(ID3D11Resource* self);
            
        } ID3D11ResourceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetType)(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension);
                        void (WINAPI *SetEvictionPriority)(ID3D11Resource* self, UINT EvictionPriority);
                        UINT (WINAPI *GetEvictionPriority)(ID3D11Resource* self);
                        void (WINAPI *GetDesc)(ID3D11Buffer* self, D3D11_BUFFER_DESC * pDesc);
            
        } ID3D11BufferTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetType)(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension);
                        void (WINAPI *SetEvictionPriority)(ID3D11Resource* self, UINT EvictionPriority);
                        UINT (WINAPI *GetEvictionPriority)(ID3D11Resource* self);
                        void (WINAPI *GetDesc)(ID3D11Texture1D* self, D3D11_TEXTURE1D_DESC * pDesc);
            
        } ID3D11Texture1DTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetType)(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension);
                        void (WINAPI *SetEvictionPriority)(ID3D11Resource* self, UINT EvictionPriority);
                        UINT (WINAPI *GetEvictionPriority)(ID3D11Resource* self);
                        void (WINAPI *GetDesc)(ID3D11Texture2D* self, D3D11_TEXTURE2D_DESC * pDesc);
            
        } ID3D11Texture2DTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetType)(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension);
                        void (WINAPI *SetEvictionPriority)(ID3D11Resource* self, UINT EvictionPriority);
                        UINT (WINAPI *GetEvictionPriority)(ID3D11Resource* self);
                        void (WINAPI *GetDesc)(ID3D11Texture3D* self, D3D11_TEXTURE3D_DESC * pDesc);
            
        } ID3D11Texture3DTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource);
            
        } ID3D11ViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource);
                        void (WINAPI *GetDesc)(ID3D11ShaderResourceView* self, D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc);
            
        } ID3D11ShaderResourceViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource);
                        void (WINAPI *GetDesc)(ID3D11RenderTargetView* self, D3D11_RENDER_TARGET_VIEW_DESC * pDesc);
            
        } ID3D11RenderTargetViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource);
                        void (WINAPI *GetDesc)(ID3D11DepthStencilView* self, D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc);
            
        } ID3D11DepthStencilViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource);
                        void (WINAPI *GetDesc)(ID3D11UnorderedAccessView* self, D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc);
            
        } ID3D11UnorderedAccessViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
            
        } ID3D11VertexShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
            
        } ID3D11HullShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
            
        } ID3D11DomainShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
            
        } ID3D11GeometryShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
            
        } ID3D11PixelShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
            
        } ID3D11ComputeShaderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
            
        } ID3D11InputLayoutTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetDesc)(ID3D11SamplerState* self, D3D11_SAMPLER_DESC * pDesc);
            
        } ID3D11SamplerStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        UINT (WINAPI *GetDataSize)(ID3D11Asynchronous* self);
            
        } ID3D11AsynchronousTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        UINT (WINAPI *GetDataSize)(ID3D11Asynchronous* self);
                        void (WINAPI *GetDesc)(ID3D11Query* self, D3D11_QUERY_DESC * pDesc);
            
        } ID3D11QueryTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        UINT (WINAPI *GetDataSize)(ID3D11Asynchronous* self);
                        void (WINAPI *GetDesc)(ID3D11Query* self, D3D11_QUERY_DESC * pDesc);
            
        } ID3D11PredicateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        UINT (WINAPI *GetDataSize)(ID3D11Asynchronous* self);
                        void (WINAPI *GetDesc)(ID3D11Counter* self, D3D11_COUNTER_DESC * pDesc);
            
        } ID3D11CounterTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetClassLinkage)(ID3D11ClassInstance* self, ID3D11ClassLinkage ** ppLinkage);
                        void (WINAPI *GetDesc)(ID3D11ClassInstance* self, D3D11_CLASS_INSTANCE_DESC * pDesc);
                        void (WINAPI *GetInstanceName)(ID3D11ClassInstance* self, LPSTR pInstanceName, SIZE_T * pBufferLength);
                        void (WINAPI *GetTypeName)(ID3D11ClassInstance* self, LPSTR pTypeName, SIZE_T * pBufferLength);
            
        } ID3D11ClassInstanceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *GetClassInstance)(ID3D11ClassLinkage* self, LPCSTR pClassInstanceName, UINT InstanceIndex, ID3D11ClassInstance ** ppInstance);
                        HRESULT (WINAPI *CreateClassInstance)(ID3D11ClassLinkage* self, LPCSTR pClassTypeName, UINT ConstantBufferOffset, UINT ConstantVectorOffset, UINT TextureOffset, UINT SamplerOffset, ID3D11ClassInstance ** ppInstance);
            
        } ID3D11ClassLinkageTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        UINT (WINAPI *GetContextFlags)(ID3D11CommandList* self);
            
        } ID3D11CommandListTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *VSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *PSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *PSSetShader)(ID3D11DeviceContext* self, ID3D11PixelShader * pPixelShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *PSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *VSSetShader)(ID3D11DeviceContext* self, ID3D11VertexShader * pVertexShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *DrawIndexed)(ID3D11DeviceContext* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation);
                        void (WINAPI *Draw)(ID3D11DeviceContext* self, UINT VertexCount, UINT StartVertexLocation);
                        HRESULT (WINAPI *Map)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE * pMappedResource);
                        void (WINAPI *Unmap)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource);
                        void (WINAPI *PSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *IASetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout * pInputLayout);
                        void (WINAPI *IASetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets);
                        void (WINAPI *IASetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset);
                        void (WINAPI *DrawIndexedInstanced)(ID3D11DeviceContext* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *DrawInstanced)(ID3D11DeviceContext* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *GSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *GSSetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader * pShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY Topology);
                        void (WINAPI *VSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *VSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *Begin)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync);
                        void (WINAPI *End)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync);
                        HRESULT (WINAPI *GetData)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, void * pData, UINT DataSize, UINT GetDataFlags);
                        void (WINAPI *SetPredication)(ID3D11DeviceContext* self, ID3D11Predicate * pPredicate, BOOL PredicateValue);
                        void (WINAPI *GSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *GSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *OMSetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView);
                        void (WINAPI *OMSetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts);
                        void (WINAPI *OMSetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask);
                        void (WINAPI *OMSetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState * pDepthStencilState, UINT StencilRef);
                        void (WINAPI *SOSetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer *const * ppSOTargets, const UINT * pOffsets);
                        void (WINAPI *DrawAuto)(ID3D11DeviceContext* self);
                        void (WINAPI *DrawIndexedInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
                        void (WINAPI *DrawInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
                        void (WINAPI *Dispatch)(ID3D11DeviceContext* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ);
                        void (WINAPI *DispatchIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
                        void (WINAPI *RSSetState)(ID3D11DeviceContext* self, ID3D11RasterizerState * pRasterizerState);
                        void (WINAPI *RSSetViewports)(ID3D11DeviceContext* self, UINT NumViewports, const D3D11_VIEWPORT * pViewports);
                        void (WINAPI *RSSetScissorRects)(ID3D11DeviceContext* self, UINT NumRects, const D3D11_RECT * pRects);
                        void (WINAPI *CopySubresourceRegion)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox);
                        void (WINAPI *CopyResource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, ID3D11Resource * pSrcResource);
                        void (WINAPI *UpdateSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch);
                        void (WINAPI *CopyStructureCount)(ID3D11DeviceContext* self, ID3D11Buffer * pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView * pSrcView);
                        void (WINAPI *ClearRenderTargetView)(ID3D11DeviceContext* self, ID3D11RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4]);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const UINT  Values[4]);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const FLOAT  Values[4]);
                        void (WINAPI *ClearDepthStencilView)(ID3D11DeviceContext* self, ID3D11DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil);
                        void (WINAPI *GenerateMips)(ID3D11DeviceContext* self, ID3D11ShaderResourceView * pShaderResourceView);
                        void (WINAPI *SetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource, FLOAT MinLOD);
                        FLOAT (WINAPI *GetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource);
                        void (WINAPI *ResolveSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, ID3D11Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format);
                        void (WINAPI *ExecuteCommandList)(ID3D11DeviceContext* self, ID3D11CommandList * pCommandList, BOOL RestoreContextState);
                        void (WINAPI *HSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *HSSetShader)(ID3D11DeviceContext* self, ID3D11HullShader * pHullShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *HSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *HSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *DSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *DSSetShader)(ID3D11DeviceContext* self, ID3D11DomainShader * pDomainShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *DSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *DSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *CSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *CSSetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts);
                        void (WINAPI *CSSetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader * pComputeShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *CSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *CSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *VSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *PSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *PSGetShader)(ID3D11DeviceContext* self, ID3D11PixelShader ** ppPixelShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *PSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *VSGetShader)(ID3D11DeviceContext* self, ID3D11VertexShader ** ppVertexShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *PSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *IAGetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout ** ppInputLayout);
                        void (WINAPI *IAGetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets);
                        void (WINAPI *IAGetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset);
                        void (WINAPI *GSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *GSGetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader ** ppGeometryShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *IAGetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY * pTopology);
                        void (WINAPI *VSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *VSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *GetPredication)(ID3D11DeviceContext* self, ID3D11Predicate ** ppPredicate, BOOL * pPredicateValue);
                        void (WINAPI *GSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *GSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *OMGetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView);
                        void (WINAPI *OMGetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews);
                        void (WINAPI *OMGetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask);
                        void (WINAPI *OMGetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState ** ppDepthStencilState, UINT * pStencilRef);
                        void (WINAPI *SOGetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer ** ppSOTargets);
                        void (WINAPI *RSGetState)(ID3D11DeviceContext* self, ID3D11RasterizerState ** ppRasterizerState);
                        void (WINAPI *RSGetViewports)(ID3D11DeviceContext* self, UINT * pNumViewports, D3D11_VIEWPORT * pViewports);
                        void (WINAPI *RSGetScissorRects)(ID3D11DeviceContext* self, UINT * pNumRects, D3D11_RECT * pRects);
                        void (WINAPI *HSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *HSGetShader)(ID3D11DeviceContext* self, ID3D11HullShader ** ppHullShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *HSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *HSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *DSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *DSGetShader)(ID3D11DeviceContext* self, ID3D11DomainShader ** ppDomainShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *DSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *DSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *CSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *CSGetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews);
                        void (WINAPI *CSGetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader ** ppComputeShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *CSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *CSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *ClearState)(ID3D11DeviceContext* self);
                        void (WINAPI *Flush)(ID3D11DeviceContext* self);
                        D3D11_DEVICE_CONTEXT_TYPE (WINAPI *GetType)(ID3D11DeviceContext* self);
                        UINT (WINAPI *GetContextFlags)(ID3D11DeviceContext* self);
                        HRESULT (WINAPI *FinishCommandList)(ID3D11DeviceContext* self, BOOL RestoreDeferredContextState, ID3D11CommandList ** ppCommandList);
            
        } ID3D11DeviceContextTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *GetCreationParameters)(ID3D11VideoDecoder* self, D3D11_VIDEO_DECODER_DESC * pVideoDesc, D3D11_VIDEO_DECODER_CONFIG * pConfig);
                        HRESULT (WINAPI *GetDriverHandle)(ID3D11VideoDecoder* self, HANDLE * pDriverHandle);
            
        } ID3D11VideoDecoderTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *GetVideoProcessorContentDesc)(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pContentDesc);
                        HRESULT (WINAPI *CheckVideoProcessorFormat)(ID3D11VideoProcessorEnumerator* self, DXGI_FORMAT Format, UINT * pFlags);
                        HRESULT (WINAPI *GetVideoProcessorCaps)(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_CAPS * pCaps);
                        HRESULT (WINAPI *GetVideoProcessorRateConversionCaps)(ID3D11VideoProcessorEnumerator* self, UINT TypeIndex, D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS * pCaps);
                        HRESULT (WINAPI *GetVideoProcessorCustomRate)(ID3D11VideoProcessorEnumerator* self, UINT TypeIndex, UINT CustomRateIndex, D3D11_VIDEO_PROCESSOR_CUSTOM_RATE * pRate);
                        HRESULT (WINAPI *GetVideoProcessorFilterRange)(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_FILTER Filter, D3D11_VIDEO_PROCESSOR_FILTER_RANGE * pRange);
            
        } ID3D11VideoProcessorEnumeratorTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetContentDesc)(ID3D11VideoProcessor* self, D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pDesc);
                        void (WINAPI *GetRateConversionCaps)(ID3D11VideoProcessor* self, D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS * pCaps);
            
        } ID3D11VideoProcessorTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *GetCertificateSize)(ID3D11AuthenticatedChannel* self, UINT * pCertificateSize);
                        HRESULT (WINAPI *GetCertificate)(ID3D11AuthenticatedChannel* self, UINT CertificateSize, BYTE * pCertificate);
                        void (WINAPI *GetChannelHandle)(ID3D11AuthenticatedChannel* self, HANDLE * pChannelHandle);
            
        } ID3D11AuthenticatedChannelTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetCryptoType)(ID3D11CryptoSession* self, GUID * pCryptoType);
                        void (WINAPI *GetDecoderProfile)(ID3D11CryptoSession* self, GUID * pDecoderProfile);
                        HRESULT (WINAPI *GetCertificateSize)(ID3D11CryptoSession* self, UINT * pCertificateSize);
                        HRESULT (WINAPI *GetCertificate)(ID3D11CryptoSession* self, UINT CertificateSize, BYTE * pCertificate);
                        void (WINAPI *GetCryptoSessionHandle)(ID3D11CryptoSession* self, HANDLE * pCryptoSessionHandle);
            
        } ID3D11CryptoSessionTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource);
                        void (WINAPI *GetDesc)(ID3D11VideoDecoderOutputView* self, D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC * pDesc);
            
        } ID3D11VideoDecoderOutputViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource);
                        void (WINAPI *GetDesc)(ID3D11VideoProcessorInputView* self, D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC * pDesc);
            
        } ID3D11VideoProcessorInputViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource);
                        void (WINAPI *GetDesc)(ID3D11VideoProcessorOutputView* self, D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC * pDesc);
            
        } ID3D11VideoProcessorOutputViewTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *GetDecoderBuffer)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, UINT * pBufferSize, void ** ppBuffer);
                        HRESULT (WINAPI *ReleaseDecoderBuffer)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type);
                        HRESULT (WINAPI *DecoderBeginFrame)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, ID3D11VideoDecoderOutputView * pView, UINT ContentKeySize, const void * pContentKey);
                        HRESULT (WINAPI *DecoderEndFrame)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder);
                        HRESULT (WINAPI *SubmitDecoderBuffers)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC * pBufferDesc);
                        APP_DEPRECATED_HRESULT (WINAPI *DecoderExtension)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_DECODER_EXTENSION * pExtensionData);
                        void (WINAPI *VideoProcessorSetOutputTargetRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, const RECT * pRect);
                        void (WINAPI *VideoProcessorSetOutputBackgroundColor)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL YCbCr, const D3D11_VIDEO_COLOR * pColor);
                        void (WINAPI *VideoProcessorSetOutputColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace);
                        void (WINAPI *VideoProcessorSetOutputAlphaFillMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode, UINT StreamIndex);
                        void (WINAPI *VideoProcessorSetOutputConstriction)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, SIZE Size);
                        void (WINAPI *VideoProcessorSetOutputStereoMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorSetOutputExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData);
                        void (WINAPI *VideoProcessorGetOutputTargetRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * Enabled, RECT * pRect);
                        void (WINAPI *VideoProcessorGetOutputBackgroundColor)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pYCbCr, D3D11_VIDEO_COLOR * pColor);
                        void (WINAPI *VideoProcessorGetOutputColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace);
                        void (WINAPI *VideoProcessorGetOutputAlphaFillMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE * pAlphaFillMode, UINT * pStreamIndex);
                        void (WINAPI *VideoProcessorGetOutputConstriction)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, SIZE * pSize);
                        void (WINAPI *VideoProcessorGetOutputStereoMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorGetOutputExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData);
                        void (WINAPI *VideoProcessorSetStreamFrameFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT FrameFormat);
                        void (WINAPI *VideoProcessorSetStreamColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace);
                        void (WINAPI *VideoProcessorSetStreamOutputRate)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate, BOOL RepeatFrame, const DXGI_RATIONAL * pCustomRate);
                        void (WINAPI *VideoProcessorSetStreamSourceRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect);
                        void (WINAPI *VideoProcessorSetStreamDestRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect);
                        void (WINAPI *VideoProcessorSetStreamAlpha)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Alpha);
                        void (WINAPI *VideoProcessorSetStreamPalette)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, const UINT * pEntries);
                        void (WINAPI *VideoProcessorSetStreamPixelAspectRatio)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const DXGI_RATIONAL * pSourceAspectRatio, const DXGI_RATIONAL * pDestinationAspectRatio);
                        void (WINAPI *VideoProcessorSetStreamLumaKey)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Lower, FLOAT Upper);
                        void (WINAPI *VideoProcessorSetStreamStereoFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format, BOOL LeftViewFrame0, BOOL BaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode, int MonoOffset);
                        void (WINAPI *VideoProcessorSetStreamAutoProcessingMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable);
                        void (WINAPI *VideoProcessorSetStreamFilter)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL Enable, int Level);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorSetStreamExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData);
                        void (WINAPI *VideoProcessorGetStreamFrameFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT * pFrameFormat);
                        void (WINAPI *VideoProcessorGetStreamColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace);
                        void (WINAPI *VideoProcessorGetStreamOutputRate)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE * pOutputRate, BOOL * pRepeatFrame, DXGI_RATIONAL * pCustomRate);
                        void (WINAPI *VideoProcessorGetStreamSourceRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect);
                        void (WINAPI *VideoProcessorGetStreamDestRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect);
                        void (WINAPI *VideoProcessorGetStreamAlpha)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pAlpha);
                        void (WINAPI *VideoProcessorGetStreamPalette)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, UINT * pEntries);
                        void (WINAPI *VideoProcessorGetStreamPixelAspectRatio)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, DXGI_RATIONAL * pSourceAspectRatio, DXGI_RATIONAL * pDestinationAspectRatio);
                        void (WINAPI *VideoProcessorGetStreamLumaKey)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pLower, FLOAT * pUpper);
                        void (WINAPI *VideoProcessorGetStreamStereoFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT * pFormat, BOOL * pLeftViewFrame0, BOOL * pBaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE * pFlipMode, int * MonoOffset);
                        void (WINAPI *VideoProcessorGetStreamAutoProcessingMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled);
                        void (WINAPI *VideoProcessorGetStreamFilter)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL * pEnabled, int * pLevel);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorGetStreamExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData);
                        HRESULT (WINAPI *VideoProcessorBlt)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, ID3D11VideoProcessorOutputView * pView, UINT OutputFrame, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM * pStreams);
                        HRESULT (WINAPI *NegotiateCryptoSessionKeyExchange)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT DataSize, void * pData);
                        void (WINAPI *EncryptionBlt)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, UINT IVSize, void * pIV);
                        void (WINAPI *DecryptionBlt)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, D3D11_ENCRYPTED_BLOCK_INFO * pEncryptedBlockInfo, UINT ContentKeySize, const void * pContentKey, UINT IVSize, void * pIV);
                        void (WINAPI *StartSessionKeyRefresh)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT RandomNumberSize, void * pRandomNumber);
                        void (WINAPI *FinishSessionKeyRefresh)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession);
                        HRESULT (WINAPI *GetEncryptionBltKey)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT KeySize, void * pReadbackKey);
                        HRESULT (WINAPI *NegotiateAuthenticatedChannelKeyExchange)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT DataSize, void * pData);
                        HRESULT (WINAPI *QueryAuthenticatedChannel)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, UINT OutputSize, void * pOutput);
                        HRESULT (WINAPI *ConfigureAuthenticatedChannel)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, D3D11_AUTHENTICATED_CONFIGURE_OUTPUT * pOutput);
                        void (WINAPI *VideoProcessorSetStreamRotation)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_ROTATION Rotation);
                        void (WINAPI *VideoProcessorGetStreamRotation)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_ROTATION * pRotation);
            
        } ID3D11VideoContextTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *CreateVideoDecoder)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pVideoDesc, const D3D11_VIDEO_DECODER_CONFIG * pConfig, ID3D11VideoDecoder ** ppDecoder);
                        HRESULT (WINAPI *CreateVideoProcessor)(ID3D11VideoDevice* self, ID3D11VideoProcessorEnumerator * pEnum, UINT RateConversionIndex, ID3D11VideoProcessor ** ppVideoProcessor);
                        HRESULT (WINAPI *CreateAuthenticatedChannel)(ID3D11VideoDevice* self, D3D11_AUTHENTICATED_CHANNEL_TYPE ChannelType, ID3D11AuthenticatedChannel ** ppAuthenticatedChannel);
                        HRESULT (WINAPI *CreateCryptoSession)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, const GUID * pKeyExchangeType, ID3D11CryptoSession ** ppCryptoSession);
                        HRESULT (WINAPI *CreateVideoDecoderOutputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, const D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoDecoderOutputView ** ppVDOVView);
                        HRESULT (WINAPI *CreateVideoProcessorInputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorInputView ** ppVPIView);
                        HRESULT (WINAPI *CreateVideoProcessorOutputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorOutputView ** ppVPOView);
                        HRESULT (WINAPI *CreateVideoProcessorEnumerator)(ID3D11VideoDevice* self, const D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pDesc, ID3D11VideoProcessorEnumerator ** ppEnum);
                        UINT (WINAPI *GetVideoDecoderProfileCount)(ID3D11VideoDevice* self);
                        HRESULT (WINAPI *GetVideoDecoderProfile)(ID3D11VideoDevice* self, UINT Index, GUID * pDecoderProfile);
                        HRESULT (WINAPI *CheckVideoDecoderFormat)(ID3D11VideoDevice* self, const GUID * pDecoderProfile, DXGI_FORMAT Format, BOOL * pSupported);
                        HRESULT (WINAPI *GetVideoDecoderConfigCount)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT * pCount);
                        HRESULT (WINAPI *GetVideoDecoderConfig)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT Index, D3D11_VIDEO_DECODER_CONFIG * pConfig);
                        HRESULT (WINAPI *GetContentProtectionCaps)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, D3D11_VIDEO_CONTENT_PROTECTION_CAPS * pCaps);
                        HRESULT (WINAPI *CheckCryptoKeyExchange)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, UINT Index, GUID * pKeyExchangeType);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11VideoDevice* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11VideoDevice* self, const GUID & guid, const IUnknown * pData);
            
        } ID3D11VideoDeviceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *CreateBuffer)(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer);
                        HRESULT (WINAPI *CreateTexture1D)(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D);
                        HRESULT (WINAPI *CreateTexture2D)(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D);
                        HRESULT (WINAPI *CreateTexture3D)(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D);
                        HRESULT (WINAPI *CreateShaderResourceView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView);
                        HRESULT (WINAPI *CreateUnorderedAccessView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView);
                        HRESULT (WINAPI *CreateRenderTargetView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView);
                        HRESULT (WINAPI *CreateDepthStencilView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView);
                        HRESULT (WINAPI *CreateInputLayout)(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout);
                        HRESULT (WINAPI *CreateVertexShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader);
                        HRESULT (WINAPI *CreateGeometryShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader);
                        HRESULT (WINAPI *CreateGeometryShaderWithStreamOutput)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader);
                        HRESULT (WINAPI *CreatePixelShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader);
                        HRESULT (WINAPI *CreateHullShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader);
                        HRESULT (WINAPI *CreateDomainShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader);
                        HRESULT (WINAPI *CreateComputeShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader);
                        HRESULT (WINAPI *CreateClassLinkage)(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage);
                        HRESULT (WINAPI *CreateBlendState)(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState);
                        HRESULT (WINAPI *CreateDepthStencilState)(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState);
                        HRESULT (WINAPI *CreateRasterizerState)(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState);
                        HRESULT (WINAPI *CreateSamplerState)(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState);
                        HRESULT (WINAPI *CreateQuery)(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery);
                        HRESULT (WINAPI *CreatePredicate)(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate);
                        HRESULT (WINAPI *CreateCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter);
                        HRESULT (WINAPI *CreateDeferredContext)(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext);
                        HRESULT (WINAPI *OpenSharedResource)(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource);
                        HRESULT (WINAPI *CheckFormatSupport)(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels)(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels);
                        void (WINAPI *CheckCounterInfo)(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo);
                        HRESULT (WINAPI *CheckCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11Device* self, const GUID & guid, const IUnknown * pData);
                        D3D_FEATURE_LEVEL (WINAPI *GetFeatureLevel)(ID3D11Device* self);
                        UINT (WINAPI *GetCreationFlags)(ID3D11Device* self);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D11Device* self);
                        void (WINAPI *GetImmediateContext)(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext);
                        HRESULT (WINAPI *SetExceptionMode)(ID3D11Device* self, UINT RaiseFlags);
                        UINT (WINAPI *GetExceptionMode)(ID3D11Device* self);
            
        } ID3D11DeviceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetDesc)(ID3D11BlendState* self, D3D11_BLEND_DESC * pDesc);
                        void (WINAPI *GetDesc1)(ID3D11BlendState1* self, D3D11_BLEND_DESC1 * pDesc);
            
        } ID3D11BlendState1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetDesc)(ID3D11RasterizerState* self, D3D11_RASTERIZER_DESC * pDesc);
                        void (WINAPI *GetDesc1)(ID3D11RasterizerState1* self, D3D11_RASTERIZER_DESC1 * pDesc);
            
        } ID3D11RasterizerState1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
            
        } ID3DDeviceContextStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *VSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *PSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *PSSetShader)(ID3D11DeviceContext* self, ID3D11PixelShader * pPixelShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *PSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *VSSetShader)(ID3D11DeviceContext* self, ID3D11VertexShader * pVertexShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *DrawIndexed)(ID3D11DeviceContext* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation);
                        void (WINAPI *Draw)(ID3D11DeviceContext* self, UINT VertexCount, UINT StartVertexLocation);
                        HRESULT (WINAPI *Map)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE * pMappedResource);
                        void (WINAPI *Unmap)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource);
                        void (WINAPI *PSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *IASetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout * pInputLayout);
                        void (WINAPI *IASetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets);
                        void (WINAPI *IASetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset);
                        void (WINAPI *DrawIndexedInstanced)(ID3D11DeviceContext* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *DrawInstanced)(ID3D11DeviceContext* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *GSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *GSSetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader * pShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY Topology);
                        void (WINAPI *VSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *VSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *Begin)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync);
                        void (WINAPI *End)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync);
                        HRESULT (WINAPI *GetData)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, void * pData, UINT DataSize, UINT GetDataFlags);
                        void (WINAPI *SetPredication)(ID3D11DeviceContext* self, ID3D11Predicate * pPredicate, BOOL PredicateValue);
                        void (WINAPI *GSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *GSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *OMSetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView);
                        void (WINAPI *OMSetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts);
                        void (WINAPI *OMSetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask);
                        void (WINAPI *OMSetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState * pDepthStencilState, UINT StencilRef);
                        void (WINAPI *SOSetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer *const * ppSOTargets, const UINT * pOffsets);
                        void (WINAPI *DrawAuto)(ID3D11DeviceContext* self);
                        void (WINAPI *DrawIndexedInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
                        void (WINAPI *DrawInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
                        void (WINAPI *Dispatch)(ID3D11DeviceContext* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ);
                        void (WINAPI *DispatchIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
                        void (WINAPI *RSSetState)(ID3D11DeviceContext* self, ID3D11RasterizerState * pRasterizerState);
                        void (WINAPI *RSSetViewports)(ID3D11DeviceContext* self, UINT NumViewports, const D3D11_VIEWPORT * pViewports);
                        void (WINAPI *RSSetScissorRects)(ID3D11DeviceContext* self, UINT NumRects, const D3D11_RECT * pRects);
                        void (WINAPI *CopySubresourceRegion)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox);
                        void (WINAPI *CopyResource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, ID3D11Resource * pSrcResource);
                        void (WINAPI *UpdateSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch);
                        void (WINAPI *CopyStructureCount)(ID3D11DeviceContext* self, ID3D11Buffer * pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView * pSrcView);
                        void (WINAPI *ClearRenderTargetView)(ID3D11DeviceContext* self, ID3D11RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4]);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const UINT  Values[4]);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const FLOAT  Values[4]);
                        void (WINAPI *ClearDepthStencilView)(ID3D11DeviceContext* self, ID3D11DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil);
                        void (WINAPI *GenerateMips)(ID3D11DeviceContext* self, ID3D11ShaderResourceView * pShaderResourceView);
                        void (WINAPI *SetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource, FLOAT MinLOD);
                        FLOAT (WINAPI *GetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource);
                        void (WINAPI *ResolveSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, ID3D11Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format);
                        void (WINAPI *ExecuteCommandList)(ID3D11DeviceContext* self, ID3D11CommandList * pCommandList, BOOL RestoreContextState);
                        void (WINAPI *HSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *HSSetShader)(ID3D11DeviceContext* self, ID3D11HullShader * pHullShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *HSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *HSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *DSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *DSSetShader)(ID3D11DeviceContext* self, ID3D11DomainShader * pDomainShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *DSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *DSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *CSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *CSSetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts);
                        void (WINAPI *CSSetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader * pComputeShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *CSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *CSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *VSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *PSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *PSGetShader)(ID3D11DeviceContext* self, ID3D11PixelShader ** ppPixelShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *PSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *VSGetShader)(ID3D11DeviceContext* self, ID3D11VertexShader ** ppVertexShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *PSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *IAGetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout ** ppInputLayout);
                        void (WINAPI *IAGetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets);
                        void (WINAPI *IAGetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset);
                        void (WINAPI *GSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *GSGetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader ** ppGeometryShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *IAGetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY * pTopology);
                        void (WINAPI *VSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *VSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *GetPredication)(ID3D11DeviceContext* self, ID3D11Predicate ** ppPredicate, BOOL * pPredicateValue);
                        void (WINAPI *GSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *GSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *OMGetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView);
                        void (WINAPI *OMGetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews);
                        void (WINAPI *OMGetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask);
                        void (WINAPI *OMGetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState ** ppDepthStencilState, UINT * pStencilRef);
                        void (WINAPI *SOGetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer ** ppSOTargets);
                        void (WINAPI *RSGetState)(ID3D11DeviceContext* self, ID3D11RasterizerState ** ppRasterizerState);
                        void (WINAPI *RSGetViewports)(ID3D11DeviceContext* self, UINT * pNumViewports, D3D11_VIEWPORT * pViewports);
                        void (WINAPI *RSGetScissorRects)(ID3D11DeviceContext* self, UINT * pNumRects, D3D11_RECT * pRects);
                        void (WINAPI *HSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *HSGetShader)(ID3D11DeviceContext* self, ID3D11HullShader ** ppHullShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *HSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *HSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *DSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *DSGetShader)(ID3D11DeviceContext* self, ID3D11DomainShader ** ppDomainShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *DSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *DSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *CSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *CSGetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews);
                        void (WINAPI *CSGetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader ** ppComputeShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *CSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *CSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *ClearState)(ID3D11DeviceContext* self);
                        void (WINAPI *Flush)(ID3D11DeviceContext* self);
                        D3D11_DEVICE_CONTEXT_TYPE (WINAPI *GetType)(ID3D11DeviceContext* self);
                        UINT (WINAPI *GetContextFlags)(ID3D11DeviceContext* self);
                        HRESULT (WINAPI *FinishCommandList)(ID3D11DeviceContext* self, BOOL RestoreDeferredContextState, ID3D11CommandList ** ppCommandList);
                        void (WINAPI *CopySubresourceRegion1)(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, UINT CopyFlags);
                        void (WINAPI *UpdateSubresource1)(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, UINT CopyFlags);
                        void (WINAPI *DiscardResource)(ID3D11DeviceContext1* self, ID3D11Resource * pResource);
                        void (WINAPI *DiscardView)(ID3D11DeviceContext1* self, ID3D11View * pResourceView);
                        void (WINAPI *VSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *HSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *DSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *GSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *PSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *CSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *VSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *HSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *DSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *GSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *PSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *CSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *SwapDeviceContextState)(ID3D11DeviceContext1* self, ID3DDeviceContextState * pState, ID3DDeviceContextState ** ppPreviousState);
                        void (WINAPI *ClearView)(ID3D11DeviceContext1* self, ID3D11View * pView, const FLOAT  Color[4], const D3D11_RECT * pRect, UINT NumRects);
                        void (WINAPI *DiscardView1)(ID3D11DeviceContext1* self, ID3D11View * pResourceView, const D3D11_RECT * pRects, UINT NumRects);
            
        } ID3D11DeviceContext1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *GetDecoderBuffer)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, UINT * pBufferSize, void ** ppBuffer);
                        HRESULT (WINAPI *ReleaseDecoderBuffer)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type);
                        HRESULT (WINAPI *DecoderBeginFrame)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, ID3D11VideoDecoderOutputView * pView, UINT ContentKeySize, const void * pContentKey);
                        HRESULT (WINAPI *DecoderEndFrame)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder);
                        HRESULT (WINAPI *SubmitDecoderBuffers)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC * pBufferDesc);
                        APP_DEPRECATED_HRESULT (WINAPI *DecoderExtension)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_DECODER_EXTENSION * pExtensionData);
                        void (WINAPI *VideoProcessorSetOutputTargetRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, const RECT * pRect);
                        void (WINAPI *VideoProcessorSetOutputBackgroundColor)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL YCbCr, const D3D11_VIDEO_COLOR * pColor);
                        void (WINAPI *VideoProcessorSetOutputColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace);
                        void (WINAPI *VideoProcessorSetOutputAlphaFillMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode, UINT StreamIndex);
                        void (WINAPI *VideoProcessorSetOutputConstriction)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, SIZE Size);
                        void (WINAPI *VideoProcessorSetOutputStereoMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorSetOutputExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData);
                        void (WINAPI *VideoProcessorGetOutputTargetRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * Enabled, RECT * pRect);
                        void (WINAPI *VideoProcessorGetOutputBackgroundColor)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pYCbCr, D3D11_VIDEO_COLOR * pColor);
                        void (WINAPI *VideoProcessorGetOutputColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace);
                        void (WINAPI *VideoProcessorGetOutputAlphaFillMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE * pAlphaFillMode, UINT * pStreamIndex);
                        void (WINAPI *VideoProcessorGetOutputConstriction)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, SIZE * pSize);
                        void (WINAPI *VideoProcessorGetOutputStereoMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorGetOutputExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData);
                        void (WINAPI *VideoProcessorSetStreamFrameFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT FrameFormat);
                        void (WINAPI *VideoProcessorSetStreamColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace);
                        void (WINAPI *VideoProcessorSetStreamOutputRate)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate, BOOL RepeatFrame, const DXGI_RATIONAL * pCustomRate);
                        void (WINAPI *VideoProcessorSetStreamSourceRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect);
                        void (WINAPI *VideoProcessorSetStreamDestRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect);
                        void (WINAPI *VideoProcessorSetStreamAlpha)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Alpha);
                        void (WINAPI *VideoProcessorSetStreamPalette)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, const UINT * pEntries);
                        void (WINAPI *VideoProcessorSetStreamPixelAspectRatio)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const DXGI_RATIONAL * pSourceAspectRatio, const DXGI_RATIONAL * pDestinationAspectRatio);
                        void (WINAPI *VideoProcessorSetStreamLumaKey)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Lower, FLOAT Upper);
                        void (WINAPI *VideoProcessorSetStreamStereoFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format, BOOL LeftViewFrame0, BOOL BaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode, int MonoOffset);
                        void (WINAPI *VideoProcessorSetStreamAutoProcessingMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable);
                        void (WINAPI *VideoProcessorSetStreamFilter)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL Enable, int Level);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorSetStreamExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData);
                        void (WINAPI *VideoProcessorGetStreamFrameFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT * pFrameFormat);
                        void (WINAPI *VideoProcessorGetStreamColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace);
                        void (WINAPI *VideoProcessorGetStreamOutputRate)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE * pOutputRate, BOOL * pRepeatFrame, DXGI_RATIONAL * pCustomRate);
                        void (WINAPI *VideoProcessorGetStreamSourceRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect);
                        void (WINAPI *VideoProcessorGetStreamDestRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect);
                        void (WINAPI *VideoProcessorGetStreamAlpha)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pAlpha);
                        void (WINAPI *VideoProcessorGetStreamPalette)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, UINT * pEntries);
                        void (WINAPI *VideoProcessorGetStreamPixelAspectRatio)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, DXGI_RATIONAL * pSourceAspectRatio, DXGI_RATIONAL * pDestinationAspectRatio);
                        void (WINAPI *VideoProcessorGetStreamLumaKey)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pLower, FLOAT * pUpper);
                        void (WINAPI *VideoProcessorGetStreamStereoFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT * pFormat, BOOL * pLeftViewFrame0, BOOL * pBaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE * pFlipMode, int * MonoOffset);
                        void (WINAPI *VideoProcessorGetStreamAutoProcessingMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled);
                        void (WINAPI *VideoProcessorGetStreamFilter)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL * pEnabled, int * pLevel);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorGetStreamExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData);
                        HRESULT (WINAPI *VideoProcessorBlt)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, ID3D11VideoProcessorOutputView * pView, UINT OutputFrame, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM * pStreams);
                        HRESULT (WINAPI *NegotiateCryptoSessionKeyExchange)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT DataSize, void * pData);
                        void (WINAPI *EncryptionBlt)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, UINT IVSize, void * pIV);
                        void (WINAPI *DecryptionBlt)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, D3D11_ENCRYPTED_BLOCK_INFO * pEncryptedBlockInfo, UINT ContentKeySize, const void * pContentKey, UINT IVSize, void * pIV);
                        void (WINAPI *StartSessionKeyRefresh)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT RandomNumberSize, void * pRandomNumber);
                        void (WINAPI *FinishSessionKeyRefresh)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession);
                        HRESULT (WINAPI *GetEncryptionBltKey)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT KeySize, void * pReadbackKey);
                        HRESULT (WINAPI *NegotiateAuthenticatedChannelKeyExchange)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT DataSize, void * pData);
                        HRESULT (WINAPI *QueryAuthenticatedChannel)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, UINT OutputSize, void * pOutput);
                        HRESULT (WINAPI *ConfigureAuthenticatedChannel)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, D3D11_AUTHENTICATED_CONFIGURE_OUTPUT * pOutput);
                        void (WINAPI *VideoProcessorSetStreamRotation)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_ROTATION Rotation);
                        void (WINAPI *VideoProcessorGetStreamRotation)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_ROTATION * pRotation);
                        HRESULT (WINAPI *SubmitDecoderBuffers1)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC1 * pBufferDesc);
                        HRESULT (WINAPI *GetDataForNewHardwareKey)(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, UINT PrivateInputSize, const void * pPrivatInputData, UINT64 * pPrivateOutputData);
                        HRESULT (WINAPI *CheckCryptoSessionStatus)(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, D3D11_CRYPTO_SESSION_STATUS * pStatus);
                        HRESULT (WINAPI *DecoderEnableDownsampling)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, UINT ReferenceFrameCount);
                        HRESULT (WINAPI *DecoderUpdateDownsampling)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc);
                        void (WINAPI *VideoProcessorSetOutputColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE ColorSpace);
                        void (WINAPI *VideoProcessorSetOutputShaderUsage)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL ShaderUsage);
                        void (WINAPI *VideoProcessorGetOutputColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE * pColorSpace);
                        void (WINAPI *VideoProcessorGetOutputShaderUsage)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pShaderUsage);
                        void (WINAPI *VideoProcessorSetStreamColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE ColorSpace);
                        void (WINAPI *VideoProcessorSetStreamMirror)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, BOOL FlipHorizontal, BOOL FlipVertical);
                        void (WINAPI *VideoProcessorGetStreamColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE * pColorSpace);
                        void (WINAPI *VideoProcessorGetStreamMirror)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, BOOL * pFlipHorizontal, BOOL * pFlipVertical);
                        HRESULT (WINAPI *VideoProcessorGetBehaviorHints)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT OutputWidth, UINT OutputHeight, DXGI_FORMAT OutputFormat, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT * pStreams, UINT * pBehaviorHints);
            
        } ID3D11VideoContext1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *CreateVideoDecoder)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pVideoDesc, const D3D11_VIDEO_DECODER_CONFIG * pConfig, ID3D11VideoDecoder ** ppDecoder);
                        HRESULT (WINAPI *CreateVideoProcessor)(ID3D11VideoDevice* self, ID3D11VideoProcessorEnumerator * pEnum, UINT RateConversionIndex, ID3D11VideoProcessor ** ppVideoProcessor);
                        HRESULT (WINAPI *CreateAuthenticatedChannel)(ID3D11VideoDevice* self, D3D11_AUTHENTICATED_CHANNEL_TYPE ChannelType, ID3D11AuthenticatedChannel ** ppAuthenticatedChannel);
                        HRESULT (WINAPI *CreateCryptoSession)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, const GUID * pKeyExchangeType, ID3D11CryptoSession ** ppCryptoSession);
                        HRESULT (WINAPI *CreateVideoDecoderOutputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, const D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoDecoderOutputView ** ppVDOVView);
                        HRESULT (WINAPI *CreateVideoProcessorInputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorInputView ** ppVPIView);
                        HRESULT (WINAPI *CreateVideoProcessorOutputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorOutputView ** ppVPOView);
                        HRESULT (WINAPI *CreateVideoProcessorEnumerator)(ID3D11VideoDevice* self, const D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pDesc, ID3D11VideoProcessorEnumerator ** ppEnum);
                        UINT (WINAPI *GetVideoDecoderProfileCount)(ID3D11VideoDevice* self);
                        HRESULT (WINAPI *GetVideoDecoderProfile)(ID3D11VideoDevice* self, UINT Index, GUID * pDecoderProfile);
                        HRESULT (WINAPI *CheckVideoDecoderFormat)(ID3D11VideoDevice* self, const GUID * pDecoderProfile, DXGI_FORMAT Format, BOOL * pSupported);
                        HRESULT (WINAPI *GetVideoDecoderConfigCount)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT * pCount);
                        HRESULT (WINAPI *GetVideoDecoderConfig)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT Index, D3D11_VIDEO_DECODER_CONFIG * pConfig);
                        HRESULT (WINAPI *GetContentProtectionCaps)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, D3D11_VIDEO_CONTENT_PROTECTION_CAPS * pCaps);
                        HRESULT (WINAPI *CheckCryptoKeyExchange)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, UINT Index, GUID * pKeyExchangeType);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11VideoDevice* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11VideoDevice* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *GetCryptoSessionPrivateDataSize)(ID3D11VideoDevice1* self, const GUID * pCryptoType, const GUID * pDecoderProfile, const GUID * pKeyExchangeType, UINT * pPrivateInputSize, UINT * pPrivateOutputSize);
                        HRESULT (WINAPI *GetVideoDecoderCaps)(ID3D11VideoDevice1* self, const GUID * pDecoderProfile, UINT SampleWidth, UINT SampleHeight, const DXGI_RATIONAL * pFrameRate, UINT BitRate, const GUID * pCryptoType, UINT * pDecoderCaps);
                        HRESULT (WINAPI *CheckVideoDecoderDownsampling)(ID3D11VideoDevice1* self, const D3D11_VIDEO_DECODER_DESC * pInputDesc, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_DECODER_CONFIG * pInputConfig, const DXGI_RATIONAL * pFrameRate, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, BOOL * pSupported, BOOL * pRealTimeHint);
                        HRESULT (WINAPI *RecommendVideoDecoderDownsampleParameters)(ID3D11VideoDevice1* self, const D3D11_VIDEO_DECODER_DESC * pInputDesc, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_DECODER_CONFIG * pInputConfig, const DXGI_RATIONAL * pFrameRate, D3D11_VIDEO_SAMPLE_DESC * pRecommendedOutputDesc);
            
        } ID3D11VideoDevice1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *GetVideoProcessorContentDesc)(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pContentDesc);
                        HRESULT (WINAPI *CheckVideoProcessorFormat)(ID3D11VideoProcessorEnumerator* self, DXGI_FORMAT Format, UINT * pFlags);
                        HRESULT (WINAPI *GetVideoProcessorCaps)(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_CAPS * pCaps);
                        HRESULT (WINAPI *GetVideoProcessorRateConversionCaps)(ID3D11VideoProcessorEnumerator* self, UINT TypeIndex, D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS * pCaps);
                        HRESULT (WINAPI *GetVideoProcessorCustomRate)(ID3D11VideoProcessorEnumerator* self, UINT TypeIndex, UINT CustomRateIndex, D3D11_VIDEO_PROCESSOR_CUSTOM_RATE * pRate);
                        HRESULT (WINAPI *GetVideoProcessorFilterRange)(ID3D11VideoProcessorEnumerator* self, D3D11_VIDEO_PROCESSOR_FILTER Filter, D3D11_VIDEO_PROCESSOR_FILTER_RANGE * pRange);
                        HRESULT (WINAPI *CheckVideoProcessorFormatConversion)(ID3D11VideoProcessorEnumerator1* self, DXGI_FORMAT InputFormat, DXGI_COLOR_SPACE_TYPE InputColorSpace, DXGI_FORMAT OutputFormat, DXGI_COLOR_SPACE_TYPE OutputColorSpace, BOOL * pSupported);
            
        } ID3D11VideoProcessorEnumerator1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *CreateBuffer)(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer);
                        HRESULT (WINAPI *CreateTexture1D)(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D);
                        HRESULT (WINAPI *CreateTexture2D)(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D);
                        HRESULT (WINAPI *CreateTexture3D)(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D);
                        HRESULT (WINAPI *CreateShaderResourceView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView);
                        HRESULT (WINAPI *CreateUnorderedAccessView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView);
                        HRESULT (WINAPI *CreateRenderTargetView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView);
                        HRESULT (WINAPI *CreateDepthStencilView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView);
                        HRESULT (WINAPI *CreateInputLayout)(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout);
                        HRESULT (WINAPI *CreateVertexShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader);
                        HRESULT (WINAPI *CreateGeometryShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader);
                        HRESULT (WINAPI *CreateGeometryShaderWithStreamOutput)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader);
                        HRESULT (WINAPI *CreatePixelShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader);
                        HRESULT (WINAPI *CreateHullShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader);
                        HRESULT (WINAPI *CreateDomainShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader);
                        HRESULT (WINAPI *CreateComputeShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader);
                        HRESULT (WINAPI *CreateClassLinkage)(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage);
                        HRESULT (WINAPI *CreateBlendState)(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState);
                        HRESULT (WINAPI *CreateDepthStencilState)(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState);
                        HRESULT (WINAPI *CreateRasterizerState)(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState);
                        HRESULT (WINAPI *CreateSamplerState)(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState);
                        HRESULT (WINAPI *CreateQuery)(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery);
                        HRESULT (WINAPI *CreatePredicate)(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate);
                        HRESULT (WINAPI *CreateCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter);
                        HRESULT (WINAPI *CreateDeferredContext)(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext);
                        HRESULT (WINAPI *OpenSharedResource)(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource);
                        HRESULT (WINAPI *CheckFormatSupport)(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels)(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels);
                        void (WINAPI *CheckCounterInfo)(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo);
                        HRESULT (WINAPI *CheckCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11Device* self, const GUID & guid, const IUnknown * pData);
                        D3D_FEATURE_LEVEL (WINAPI *GetFeatureLevel)(ID3D11Device* self);
                        UINT (WINAPI *GetCreationFlags)(ID3D11Device* self);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D11Device* self);
                        void (WINAPI *GetImmediateContext)(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext);
                        HRESULT (WINAPI *SetExceptionMode)(ID3D11Device* self, UINT RaiseFlags);
                        UINT (WINAPI *GetExceptionMode)(ID3D11Device* self);
                        void (WINAPI *GetImmediateContext1)(ID3D11Device1* self, ID3D11DeviceContext1 ** ppImmediateContext);
                        HRESULT (WINAPI *CreateDeferredContext1)(ID3D11Device1* self, UINT ContextFlags, ID3D11DeviceContext1 ** ppDeferredContext);
                        HRESULT (WINAPI *CreateBlendState1)(ID3D11Device1* self, const D3D11_BLEND_DESC1 * pBlendStateDesc, ID3D11BlendState1 ** ppBlendState);
                        HRESULT (WINAPI *CreateRasterizerState1)(ID3D11Device1* self, const D3D11_RASTERIZER_DESC1 * pRasterizerDesc, ID3D11RasterizerState1 ** ppRasterizerState);
                        HRESULT (WINAPI *CreateDeviceContextState)(ID3D11Device1* self, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const IID & EmulatedInterface, D3D_FEATURE_LEVEL * pChosenFeatureLevel, ID3DDeviceContextState ** ppContextState);
                        HRESULT (WINAPI *OpenSharedResource1)(ID3D11Device1* self, HANDLE hResource, const IID & returnedInterface, void ** ppResource);
                        HRESULT (WINAPI *OpenSharedResourceByName)(ID3D11Device1* self, LPCWSTR lpName, DWORD dwDesiredAccess, const IID & returnedInterface, void ** ppResource);
            
        } ID3D11Device1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        INT (WINAPI *BeginEvent)(ID3DUserDefinedAnnotation* self, LPCWSTR Name);
                        INT (WINAPI *EndEvent)(ID3DUserDefinedAnnotation* self);
                        void (WINAPI *SetMarker)(ID3DUserDefinedAnnotation* self, LPCWSTR Name);
                        BOOL (WINAPI *GetStatus)(ID3DUserDefinedAnnotation* self);
            
        } ID3DUserDefinedAnnotationTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *VSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *PSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *PSSetShader)(ID3D11DeviceContext* self, ID3D11PixelShader * pPixelShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *PSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *VSSetShader)(ID3D11DeviceContext* self, ID3D11VertexShader * pVertexShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *DrawIndexed)(ID3D11DeviceContext* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation);
                        void (WINAPI *Draw)(ID3D11DeviceContext* self, UINT VertexCount, UINT StartVertexLocation);
                        HRESULT (WINAPI *Map)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE * pMappedResource);
                        void (WINAPI *Unmap)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource);
                        void (WINAPI *PSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *IASetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout * pInputLayout);
                        void (WINAPI *IASetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets);
                        void (WINAPI *IASetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset);
                        void (WINAPI *DrawIndexedInstanced)(ID3D11DeviceContext* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *DrawInstanced)(ID3D11DeviceContext* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *GSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *GSSetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader * pShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY Topology);
                        void (WINAPI *VSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *VSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *Begin)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync);
                        void (WINAPI *End)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync);
                        HRESULT (WINAPI *GetData)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, void * pData, UINT DataSize, UINT GetDataFlags);
                        void (WINAPI *SetPredication)(ID3D11DeviceContext* self, ID3D11Predicate * pPredicate, BOOL PredicateValue);
                        void (WINAPI *GSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *GSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *OMSetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView);
                        void (WINAPI *OMSetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts);
                        void (WINAPI *OMSetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask);
                        void (WINAPI *OMSetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState * pDepthStencilState, UINT StencilRef);
                        void (WINAPI *SOSetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer *const * ppSOTargets, const UINT * pOffsets);
                        void (WINAPI *DrawAuto)(ID3D11DeviceContext* self);
                        void (WINAPI *DrawIndexedInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
                        void (WINAPI *DrawInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
                        void (WINAPI *Dispatch)(ID3D11DeviceContext* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ);
                        void (WINAPI *DispatchIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
                        void (WINAPI *RSSetState)(ID3D11DeviceContext* self, ID3D11RasterizerState * pRasterizerState);
                        void (WINAPI *RSSetViewports)(ID3D11DeviceContext* self, UINT NumViewports, const D3D11_VIEWPORT * pViewports);
                        void (WINAPI *RSSetScissorRects)(ID3D11DeviceContext* self, UINT NumRects, const D3D11_RECT * pRects);
                        void (WINAPI *CopySubresourceRegion)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox);
                        void (WINAPI *CopyResource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, ID3D11Resource * pSrcResource);
                        void (WINAPI *UpdateSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch);
                        void (WINAPI *CopyStructureCount)(ID3D11DeviceContext* self, ID3D11Buffer * pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView * pSrcView);
                        void (WINAPI *ClearRenderTargetView)(ID3D11DeviceContext* self, ID3D11RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4]);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const UINT  Values[4]);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const FLOAT  Values[4]);
                        void (WINAPI *ClearDepthStencilView)(ID3D11DeviceContext* self, ID3D11DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil);
                        void (WINAPI *GenerateMips)(ID3D11DeviceContext* self, ID3D11ShaderResourceView * pShaderResourceView);
                        void (WINAPI *SetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource, FLOAT MinLOD);
                        FLOAT (WINAPI *GetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource);
                        void (WINAPI *ResolveSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, ID3D11Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format);
                        void (WINAPI *ExecuteCommandList)(ID3D11DeviceContext* self, ID3D11CommandList * pCommandList, BOOL RestoreContextState);
                        void (WINAPI *HSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *HSSetShader)(ID3D11DeviceContext* self, ID3D11HullShader * pHullShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *HSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *HSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *DSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *DSSetShader)(ID3D11DeviceContext* self, ID3D11DomainShader * pDomainShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *DSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *DSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *CSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *CSSetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts);
                        void (WINAPI *CSSetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader * pComputeShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *CSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *CSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *VSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *PSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *PSGetShader)(ID3D11DeviceContext* self, ID3D11PixelShader ** ppPixelShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *PSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *VSGetShader)(ID3D11DeviceContext* self, ID3D11VertexShader ** ppVertexShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *PSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *IAGetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout ** ppInputLayout);
                        void (WINAPI *IAGetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets);
                        void (WINAPI *IAGetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset);
                        void (WINAPI *GSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *GSGetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader ** ppGeometryShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *IAGetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY * pTopology);
                        void (WINAPI *VSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *VSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *GetPredication)(ID3D11DeviceContext* self, ID3D11Predicate ** ppPredicate, BOOL * pPredicateValue);
                        void (WINAPI *GSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *GSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *OMGetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView);
                        void (WINAPI *OMGetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews);
                        void (WINAPI *OMGetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask);
                        void (WINAPI *OMGetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState ** ppDepthStencilState, UINT * pStencilRef);
                        void (WINAPI *SOGetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer ** ppSOTargets);
                        void (WINAPI *RSGetState)(ID3D11DeviceContext* self, ID3D11RasterizerState ** ppRasterizerState);
                        void (WINAPI *RSGetViewports)(ID3D11DeviceContext* self, UINT * pNumViewports, D3D11_VIEWPORT * pViewports);
                        void (WINAPI *RSGetScissorRects)(ID3D11DeviceContext* self, UINT * pNumRects, D3D11_RECT * pRects);
                        void (WINAPI *HSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *HSGetShader)(ID3D11DeviceContext* self, ID3D11HullShader ** ppHullShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *HSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *HSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *DSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *DSGetShader)(ID3D11DeviceContext* self, ID3D11DomainShader ** ppDomainShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *DSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *DSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *CSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *CSGetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews);
                        void (WINAPI *CSGetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader ** ppComputeShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *CSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *CSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *ClearState)(ID3D11DeviceContext* self);
                        void (WINAPI *Flush)(ID3D11DeviceContext* self);
                        D3D11_DEVICE_CONTEXT_TYPE (WINAPI *GetType)(ID3D11DeviceContext* self);
                        UINT (WINAPI *GetContextFlags)(ID3D11DeviceContext* self);
                        HRESULT (WINAPI *FinishCommandList)(ID3D11DeviceContext* self, BOOL RestoreDeferredContextState, ID3D11CommandList ** ppCommandList);
                        void (WINAPI *CopySubresourceRegion1)(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, UINT CopyFlags);
                        void (WINAPI *UpdateSubresource1)(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, UINT CopyFlags);
                        void (WINAPI *DiscardResource)(ID3D11DeviceContext1* self, ID3D11Resource * pResource);
                        void (WINAPI *DiscardView)(ID3D11DeviceContext1* self, ID3D11View * pResourceView);
                        void (WINAPI *VSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *HSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *DSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *GSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *PSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *CSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *VSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *HSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *DSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *GSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *PSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *CSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *SwapDeviceContextState)(ID3D11DeviceContext1* self, ID3DDeviceContextState * pState, ID3DDeviceContextState ** ppPreviousState);
                        void (WINAPI *ClearView)(ID3D11DeviceContext1* self, ID3D11View * pView, const FLOAT  Color[4], const D3D11_RECT * pRect, UINT NumRects);
                        void (WINAPI *DiscardView1)(ID3D11DeviceContext1* self, ID3D11View * pResourceView, const D3D11_RECT * pRects, UINT NumRects);
                        HRESULT (WINAPI *UpdateTileMappings)(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, UINT NumTiledResourceRegions, const D3D11_TILED_RESOURCE_COORDINATE * pTiledResourceRegionStartCoordinates, const D3D11_TILE_REGION_SIZE * pTiledResourceRegionSizes, ID3D11Buffer * pTilePool, UINT NumRanges, const UINT * pRangeFlags, const UINT * pTilePoolStartOffsets, const UINT * pRangeTileCounts, UINT Flags);
                        HRESULT (WINAPI *CopyTileMappings)(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestRegionStartCoordinate, ID3D11Resource * pSourceTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pSourceRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, UINT Flags);
                        void (WINAPI *CopyTiles)(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, ID3D11Buffer * pBuffer, UINT64 BufferStartOffsetInBytes, UINT Flags);
                        void (WINAPI *UpdateTiles)(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pDestTileRegionSize, const void * pSourceTileData, UINT Flags);
                        HRESULT (WINAPI *ResizeTilePool)(ID3D11DeviceContext2* self, ID3D11Buffer * pTilePool, UINT64 NewSizeInBytes);
                        void (WINAPI *TiledResourceBarrier)(ID3D11DeviceContext2* self, ID3D11DeviceChild * pTiledResourceOrViewAccessBeforeBarrier, ID3D11DeviceChild * pTiledResourceOrViewAccessAfterBarrier);
                        BOOL (WINAPI *IsAnnotationEnabled)(ID3D11DeviceContext2* self);
                        void (WINAPI *SetMarkerInt)(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data);
                        void (WINAPI *BeginEventInt)(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data);
                        void (WINAPI *EndEvent)(ID3D11DeviceContext2* self);
            
        } ID3D11DeviceContext2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *CreateBuffer)(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer);
                        HRESULT (WINAPI *CreateTexture1D)(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D);
                        HRESULT (WINAPI *CreateTexture2D)(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D);
                        HRESULT (WINAPI *CreateTexture3D)(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D);
                        HRESULT (WINAPI *CreateShaderResourceView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView);
                        HRESULT (WINAPI *CreateUnorderedAccessView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView);
                        HRESULT (WINAPI *CreateRenderTargetView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView);
                        HRESULT (WINAPI *CreateDepthStencilView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView);
                        HRESULT (WINAPI *CreateInputLayout)(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout);
                        HRESULT (WINAPI *CreateVertexShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader);
                        HRESULT (WINAPI *CreateGeometryShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader);
                        HRESULT (WINAPI *CreateGeometryShaderWithStreamOutput)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader);
                        HRESULT (WINAPI *CreatePixelShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader);
                        HRESULT (WINAPI *CreateHullShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader);
                        HRESULT (WINAPI *CreateDomainShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader);
                        HRESULT (WINAPI *CreateComputeShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader);
                        HRESULT (WINAPI *CreateClassLinkage)(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage);
                        HRESULT (WINAPI *CreateBlendState)(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState);
                        HRESULT (WINAPI *CreateDepthStencilState)(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState);
                        HRESULT (WINAPI *CreateRasterizerState)(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState);
                        HRESULT (WINAPI *CreateSamplerState)(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState);
                        HRESULT (WINAPI *CreateQuery)(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery);
                        HRESULT (WINAPI *CreatePredicate)(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate);
                        HRESULT (WINAPI *CreateCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter);
                        HRESULT (WINAPI *CreateDeferredContext)(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext);
                        HRESULT (WINAPI *OpenSharedResource)(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource);
                        HRESULT (WINAPI *CheckFormatSupport)(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels)(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels);
                        void (WINAPI *CheckCounterInfo)(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo);
                        HRESULT (WINAPI *CheckCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11Device* self, const GUID & guid, const IUnknown * pData);
                        D3D_FEATURE_LEVEL (WINAPI *GetFeatureLevel)(ID3D11Device* self);
                        UINT (WINAPI *GetCreationFlags)(ID3D11Device* self);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D11Device* self);
                        void (WINAPI *GetImmediateContext)(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext);
                        HRESULT (WINAPI *SetExceptionMode)(ID3D11Device* self, UINT RaiseFlags);
                        UINT (WINAPI *GetExceptionMode)(ID3D11Device* self);
                        void (WINAPI *GetImmediateContext1)(ID3D11Device1* self, ID3D11DeviceContext1 ** ppImmediateContext);
                        HRESULT (WINAPI *CreateDeferredContext1)(ID3D11Device1* self, UINT ContextFlags, ID3D11DeviceContext1 ** ppDeferredContext);
                        HRESULT (WINAPI *CreateBlendState1)(ID3D11Device1* self, const D3D11_BLEND_DESC1 * pBlendStateDesc, ID3D11BlendState1 ** ppBlendState);
                        HRESULT (WINAPI *CreateRasterizerState1)(ID3D11Device1* self, const D3D11_RASTERIZER_DESC1 * pRasterizerDesc, ID3D11RasterizerState1 ** ppRasterizerState);
                        HRESULT (WINAPI *CreateDeviceContextState)(ID3D11Device1* self, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const IID & EmulatedInterface, D3D_FEATURE_LEVEL * pChosenFeatureLevel, ID3DDeviceContextState ** ppContextState);
                        HRESULT (WINAPI *OpenSharedResource1)(ID3D11Device1* self, HANDLE hResource, const IID & returnedInterface, void ** ppResource);
                        HRESULT (WINAPI *OpenSharedResourceByName)(ID3D11Device1* self, LPCWSTR lpName, DWORD dwDesiredAccess, const IID & returnedInterface, void ** ppResource);
                        void (WINAPI *GetImmediateContext2)(ID3D11Device2* self, ID3D11DeviceContext2 ** ppImmediateContext);
                        HRESULT (WINAPI *CreateDeferredContext2)(ID3D11Device2* self, UINT ContextFlags, ID3D11DeviceContext2 ** ppDeferredContext);
                        void (WINAPI *GetResourceTiling)(ID3D11Device2* self, ID3D11Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D11_PACKED_MIP_DESC * pPackedMipDesc, D3D11_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D11_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels1)(ID3D11Device2* self, DXGI_FORMAT Format, UINT SampleCount, UINT Flags, UINT * pNumQualityLevels);
            
        } ID3D11Device2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetType)(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension);
                        void (WINAPI *SetEvictionPriority)(ID3D11Resource* self, UINT EvictionPriority);
                        UINT (WINAPI *GetEvictionPriority)(ID3D11Resource* self);
                        void (WINAPI *GetDesc)(ID3D11Texture2D* self, D3D11_TEXTURE2D_DESC * pDesc);
                        void (WINAPI *GetDesc1)(ID3D11Texture2D1* self, D3D11_TEXTURE2D_DESC1 * pDesc);
            
        } ID3D11Texture2D1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetType)(ID3D11Resource* self, D3D11_RESOURCE_DIMENSION * pResourceDimension);
                        void (WINAPI *SetEvictionPriority)(ID3D11Resource* self, UINT EvictionPriority);
                        UINT (WINAPI *GetEvictionPriority)(ID3D11Resource* self);
                        void (WINAPI *GetDesc)(ID3D11Texture3D* self, D3D11_TEXTURE3D_DESC * pDesc);
                        void (WINAPI *GetDesc1)(ID3D11Texture3D1* self, D3D11_TEXTURE3D_DESC1 * pDesc);
            
        } ID3D11Texture3D1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetDesc)(ID3D11RasterizerState* self, D3D11_RASTERIZER_DESC * pDesc);
                        void (WINAPI *GetDesc1)(ID3D11RasterizerState1* self, D3D11_RASTERIZER_DESC1 * pDesc);
                        void (WINAPI *GetDesc2)(ID3D11RasterizerState2* self, D3D11_RASTERIZER_DESC2 * pDesc);
            
        } ID3D11RasterizerState2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource);
                        void (WINAPI *GetDesc)(ID3D11ShaderResourceView* self, D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc);
                        void (WINAPI *GetDesc1)(ID3D11ShaderResourceView1* self, D3D11_SHADER_RESOURCE_VIEW_DESC1 * pDesc1);
            
        } ID3D11ShaderResourceView1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource);
                        void (WINAPI *GetDesc)(ID3D11RenderTargetView* self, D3D11_RENDER_TARGET_VIEW_DESC * pDesc);
                        void (WINAPI *GetDesc1)(ID3D11RenderTargetView1* self, D3D11_RENDER_TARGET_VIEW_DESC1 * pDesc1);
            
        } ID3D11RenderTargetView1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *GetResource)(ID3D11View* self, ID3D11Resource ** ppResource);
                        void (WINAPI *GetDesc)(ID3D11UnorderedAccessView* self, D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc);
                        void (WINAPI *GetDesc1)(ID3D11UnorderedAccessView1* self, D3D11_UNORDERED_ACCESS_VIEW_DESC1 * pDesc1);
            
        } ID3D11UnorderedAccessView1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        UINT (WINAPI *GetDataSize)(ID3D11Asynchronous* self);
                        void (WINAPI *GetDesc)(ID3D11Query* self, D3D11_QUERY_DESC * pDesc);
                        void (WINAPI *GetDesc1)(ID3D11Query1* self, D3D11_QUERY_DESC1 * pDesc1);
            
        } ID3D11Query1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *VSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *PSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *PSSetShader)(ID3D11DeviceContext* self, ID3D11PixelShader * pPixelShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *PSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *VSSetShader)(ID3D11DeviceContext* self, ID3D11VertexShader * pVertexShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *DrawIndexed)(ID3D11DeviceContext* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation);
                        void (WINAPI *Draw)(ID3D11DeviceContext* self, UINT VertexCount, UINT StartVertexLocation);
                        HRESULT (WINAPI *Map)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE * pMappedResource);
                        void (WINAPI *Unmap)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource);
                        void (WINAPI *PSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *IASetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout * pInputLayout);
                        void (WINAPI *IASetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets);
                        void (WINAPI *IASetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset);
                        void (WINAPI *DrawIndexedInstanced)(ID3D11DeviceContext* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *DrawInstanced)(ID3D11DeviceContext* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *GSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *GSSetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader * pShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY Topology);
                        void (WINAPI *VSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *VSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *Begin)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync);
                        void (WINAPI *End)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync);
                        HRESULT (WINAPI *GetData)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, void * pData, UINT DataSize, UINT GetDataFlags);
                        void (WINAPI *SetPredication)(ID3D11DeviceContext* self, ID3D11Predicate * pPredicate, BOOL PredicateValue);
                        void (WINAPI *GSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *GSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *OMSetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView);
                        void (WINAPI *OMSetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts);
                        void (WINAPI *OMSetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask);
                        void (WINAPI *OMSetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState * pDepthStencilState, UINT StencilRef);
                        void (WINAPI *SOSetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer *const * ppSOTargets, const UINT * pOffsets);
                        void (WINAPI *DrawAuto)(ID3D11DeviceContext* self);
                        void (WINAPI *DrawIndexedInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
                        void (WINAPI *DrawInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
                        void (WINAPI *Dispatch)(ID3D11DeviceContext* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ);
                        void (WINAPI *DispatchIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
                        void (WINAPI *RSSetState)(ID3D11DeviceContext* self, ID3D11RasterizerState * pRasterizerState);
                        void (WINAPI *RSSetViewports)(ID3D11DeviceContext* self, UINT NumViewports, const D3D11_VIEWPORT * pViewports);
                        void (WINAPI *RSSetScissorRects)(ID3D11DeviceContext* self, UINT NumRects, const D3D11_RECT * pRects);
                        void (WINAPI *CopySubresourceRegion)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox);
                        void (WINAPI *CopyResource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, ID3D11Resource * pSrcResource);
                        void (WINAPI *UpdateSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch);
                        void (WINAPI *CopyStructureCount)(ID3D11DeviceContext* self, ID3D11Buffer * pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView * pSrcView);
                        void (WINAPI *ClearRenderTargetView)(ID3D11DeviceContext* self, ID3D11RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4]);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const UINT  Values[4]);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const FLOAT  Values[4]);
                        void (WINAPI *ClearDepthStencilView)(ID3D11DeviceContext* self, ID3D11DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil);
                        void (WINAPI *GenerateMips)(ID3D11DeviceContext* self, ID3D11ShaderResourceView * pShaderResourceView);
                        void (WINAPI *SetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource, FLOAT MinLOD);
                        FLOAT (WINAPI *GetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource);
                        void (WINAPI *ResolveSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, ID3D11Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format);
                        void (WINAPI *ExecuteCommandList)(ID3D11DeviceContext* self, ID3D11CommandList * pCommandList, BOOL RestoreContextState);
                        void (WINAPI *HSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *HSSetShader)(ID3D11DeviceContext* self, ID3D11HullShader * pHullShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *HSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *HSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *DSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *DSSetShader)(ID3D11DeviceContext* self, ID3D11DomainShader * pDomainShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *DSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *DSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *CSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *CSSetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts);
                        void (WINAPI *CSSetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader * pComputeShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *CSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *CSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *VSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *PSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *PSGetShader)(ID3D11DeviceContext* self, ID3D11PixelShader ** ppPixelShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *PSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *VSGetShader)(ID3D11DeviceContext* self, ID3D11VertexShader ** ppVertexShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *PSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *IAGetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout ** ppInputLayout);
                        void (WINAPI *IAGetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets);
                        void (WINAPI *IAGetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset);
                        void (WINAPI *GSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *GSGetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader ** ppGeometryShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *IAGetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY * pTopology);
                        void (WINAPI *VSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *VSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *GetPredication)(ID3D11DeviceContext* self, ID3D11Predicate ** ppPredicate, BOOL * pPredicateValue);
                        void (WINAPI *GSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *GSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *OMGetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView);
                        void (WINAPI *OMGetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews);
                        void (WINAPI *OMGetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask);
                        void (WINAPI *OMGetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState ** ppDepthStencilState, UINT * pStencilRef);
                        void (WINAPI *SOGetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer ** ppSOTargets);
                        void (WINAPI *RSGetState)(ID3D11DeviceContext* self, ID3D11RasterizerState ** ppRasterizerState);
                        void (WINAPI *RSGetViewports)(ID3D11DeviceContext* self, UINT * pNumViewports, D3D11_VIEWPORT * pViewports);
                        void (WINAPI *RSGetScissorRects)(ID3D11DeviceContext* self, UINT * pNumRects, D3D11_RECT * pRects);
                        void (WINAPI *HSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *HSGetShader)(ID3D11DeviceContext* self, ID3D11HullShader ** ppHullShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *HSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *HSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *DSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *DSGetShader)(ID3D11DeviceContext* self, ID3D11DomainShader ** ppDomainShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *DSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *DSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *CSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *CSGetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews);
                        void (WINAPI *CSGetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader ** ppComputeShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *CSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *CSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *ClearState)(ID3D11DeviceContext* self);
                        void (WINAPI *Flush)(ID3D11DeviceContext* self);
                        D3D11_DEVICE_CONTEXT_TYPE (WINAPI *GetType)(ID3D11DeviceContext* self);
                        UINT (WINAPI *GetContextFlags)(ID3D11DeviceContext* self);
                        HRESULT (WINAPI *FinishCommandList)(ID3D11DeviceContext* self, BOOL RestoreDeferredContextState, ID3D11CommandList ** ppCommandList);
                        void (WINAPI *CopySubresourceRegion1)(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, UINT CopyFlags);
                        void (WINAPI *UpdateSubresource1)(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, UINT CopyFlags);
                        void (WINAPI *DiscardResource)(ID3D11DeviceContext1* self, ID3D11Resource * pResource);
                        void (WINAPI *DiscardView)(ID3D11DeviceContext1* self, ID3D11View * pResourceView);
                        void (WINAPI *VSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *HSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *DSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *GSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *PSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *CSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *VSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *HSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *DSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *GSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *PSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *CSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *SwapDeviceContextState)(ID3D11DeviceContext1* self, ID3DDeviceContextState * pState, ID3DDeviceContextState ** ppPreviousState);
                        void (WINAPI *ClearView)(ID3D11DeviceContext1* self, ID3D11View * pView, const FLOAT  Color[4], const D3D11_RECT * pRect, UINT NumRects);
                        void (WINAPI *DiscardView1)(ID3D11DeviceContext1* self, ID3D11View * pResourceView, const D3D11_RECT * pRects, UINT NumRects);
                        HRESULT (WINAPI *UpdateTileMappings)(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, UINT NumTiledResourceRegions, const D3D11_TILED_RESOURCE_COORDINATE * pTiledResourceRegionStartCoordinates, const D3D11_TILE_REGION_SIZE * pTiledResourceRegionSizes, ID3D11Buffer * pTilePool, UINT NumRanges, const UINT * pRangeFlags, const UINT * pTilePoolStartOffsets, const UINT * pRangeTileCounts, UINT Flags);
                        HRESULT (WINAPI *CopyTileMappings)(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestRegionStartCoordinate, ID3D11Resource * pSourceTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pSourceRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, UINT Flags);
                        void (WINAPI *CopyTiles)(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, ID3D11Buffer * pBuffer, UINT64 BufferStartOffsetInBytes, UINT Flags);
                        void (WINAPI *UpdateTiles)(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pDestTileRegionSize, const void * pSourceTileData, UINT Flags);
                        HRESULT (WINAPI *ResizeTilePool)(ID3D11DeviceContext2* self, ID3D11Buffer * pTilePool, UINT64 NewSizeInBytes);
                        void (WINAPI *TiledResourceBarrier)(ID3D11DeviceContext2* self, ID3D11DeviceChild * pTiledResourceOrViewAccessBeforeBarrier, ID3D11DeviceChild * pTiledResourceOrViewAccessAfterBarrier);
                        BOOL (WINAPI *IsAnnotationEnabled)(ID3D11DeviceContext2* self);
                        void (WINAPI *SetMarkerInt)(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data);
                        void (WINAPI *BeginEventInt)(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data);
                        void (WINAPI *EndEvent)(ID3D11DeviceContext2* self);
                        void (WINAPI *Flush1)(ID3D11DeviceContext3* self, D3D11_CONTEXT_TYPE ContextType, HANDLE hEvent);
                        void (WINAPI *SetHardwareProtectionState)(ID3D11DeviceContext3* self, BOOL HwProtectionEnable);
                        void (WINAPI *GetHardwareProtectionState)(ID3D11DeviceContext3* self, BOOL * pHwProtectionEnable);
            
        } ID3D11DeviceContext3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *CreateSharedHandle)(ID3D11Fence* self, const SECURITY_ATTRIBUTES * pAttributes, DWORD dwAccess, LPCWSTR lpName, HANDLE * pHandle);
                        UINT64 (WINAPI *GetCompletedValue)(ID3D11Fence* self);
                        HRESULT (WINAPI *SetEventOnCompletion)(ID3D11Fence* self, UINT64 Value, HANDLE hEvent);
            
        } ID3D11FenceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        void (WINAPI *VSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *PSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *PSSetShader)(ID3D11DeviceContext* self, ID3D11PixelShader * pPixelShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *PSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *VSSetShader)(ID3D11DeviceContext* self, ID3D11VertexShader * pVertexShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *DrawIndexed)(ID3D11DeviceContext* self, UINT IndexCount, UINT StartIndexLocation, INT BaseVertexLocation);
                        void (WINAPI *Draw)(ID3D11DeviceContext* self, UINT VertexCount, UINT StartVertexLocation);
                        HRESULT (WINAPI *Map)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource, D3D11_MAP MapType, UINT MapFlags, D3D11_MAPPED_SUBRESOURCE * pMappedResource);
                        void (WINAPI *Unmap)(ID3D11DeviceContext* self, ID3D11Resource * pResource, UINT Subresource);
                        void (WINAPI *PSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *IASetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout * pInputLayout);
                        void (WINAPI *IASetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppVertexBuffers, const UINT * pStrides, const UINT * pOffsets);
                        void (WINAPI *IASetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer * pIndexBuffer, DXGI_FORMAT Format, UINT Offset);
                        void (WINAPI *DrawIndexedInstanced)(ID3D11DeviceContext* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *DrawInstanced)(ID3D11DeviceContext* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *GSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *GSSetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader * pShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY Topology);
                        void (WINAPI *VSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *VSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *Begin)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync);
                        void (WINAPI *End)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync);
                        HRESULT (WINAPI *GetData)(ID3D11DeviceContext* self, ID3D11Asynchronous * pAsync, void * pData, UINT DataSize, UINT GetDataFlags);
                        void (WINAPI *SetPredication)(ID3D11DeviceContext* self, ID3D11Predicate * pPredicate, BOOL PredicateValue);
                        void (WINAPI *GSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *GSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *OMSetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView);
                        void (WINAPI *OMSetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView *const * ppRenderTargetViews, ID3D11DepthStencilView * pDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts);
                        void (WINAPI *OMSetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState * pBlendState, const FLOAT  BlendFactor[4], UINT SampleMask);
                        void (WINAPI *OMSetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState * pDepthStencilState, UINT StencilRef);
                        void (WINAPI *SOSetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer *const * ppSOTargets, const UINT * pOffsets);
                        void (WINAPI *DrawAuto)(ID3D11DeviceContext* self);
                        void (WINAPI *DrawIndexedInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
                        void (WINAPI *DrawInstancedIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
                        void (WINAPI *Dispatch)(ID3D11DeviceContext* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ);
                        void (WINAPI *DispatchIndirect)(ID3D11DeviceContext* self, ID3D11Buffer * pBufferForArgs, UINT AlignedByteOffsetForArgs);
                        void (WINAPI *RSSetState)(ID3D11DeviceContext* self, ID3D11RasterizerState * pRasterizerState);
                        void (WINAPI *RSSetViewports)(ID3D11DeviceContext* self, UINT NumViewports, const D3D11_VIEWPORT * pViewports);
                        void (WINAPI *RSSetScissorRects)(ID3D11DeviceContext* self, UINT NumRects, const D3D11_RECT * pRects);
                        void (WINAPI *CopySubresourceRegion)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox);
                        void (WINAPI *CopyResource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, ID3D11Resource * pSrcResource);
                        void (WINAPI *UpdateSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch);
                        void (WINAPI *CopyStructureCount)(ID3D11DeviceContext* self, ID3D11Buffer * pDstBuffer, UINT DstAlignedByteOffset, ID3D11UnorderedAccessView * pSrcView);
                        void (WINAPI *ClearRenderTargetView)(ID3D11DeviceContext* self, ID3D11RenderTargetView * pRenderTargetView, const FLOAT  ColorRGBA[4]);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const UINT  Values[4]);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D11DeviceContext* self, ID3D11UnorderedAccessView * pUnorderedAccessView, const FLOAT  Values[4]);
                        void (WINAPI *ClearDepthStencilView)(ID3D11DeviceContext* self, ID3D11DepthStencilView * pDepthStencilView, UINT ClearFlags, FLOAT Depth, UINT8 Stencil);
                        void (WINAPI *GenerateMips)(ID3D11DeviceContext* self, ID3D11ShaderResourceView * pShaderResourceView);
                        void (WINAPI *SetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource, FLOAT MinLOD);
                        FLOAT (WINAPI *GetResourceMinLOD)(ID3D11DeviceContext* self, ID3D11Resource * pResource);
                        void (WINAPI *ResolveSubresource)(ID3D11DeviceContext* self, ID3D11Resource * pDstResource, UINT DstSubresource, ID3D11Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format);
                        void (WINAPI *ExecuteCommandList)(ID3D11DeviceContext* self, ID3D11CommandList * pCommandList, BOOL RestoreContextState);
                        void (WINAPI *HSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *HSSetShader)(ID3D11DeviceContext* self, ID3D11HullShader * pHullShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *HSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *HSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *DSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *DSSetShader)(ID3D11DeviceContext* self, ID3D11DomainShader * pDomainShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *DSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *DSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *CSSetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView *const * ppShaderResourceViews);
                        void (WINAPI *CSSetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView *const * ppUnorderedAccessViews, const UINT * pUAVInitialCounts);
                        void (WINAPI *CSSetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader * pComputeShader, ID3D11ClassInstance *const * ppClassInstances, UINT NumClassInstances);
                        void (WINAPI *CSSetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState *const * ppSamplers);
                        void (WINAPI *CSSetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers);
                        void (WINAPI *VSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *PSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *PSGetShader)(ID3D11DeviceContext* self, ID3D11PixelShader ** ppPixelShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *PSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *VSGetShader)(ID3D11DeviceContext* self, ID3D11VertexShader ** ppVertexShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *PSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *IAGetInputLayout)(ID3D11DeviceContext* self, ID3D11InputLayout ** ppInputLayout);
                        void (WINAPI *IAGetVertexBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppVertexBuffers, UINT * pStrides, UINT * pOffsets);
                        void (WINAPI *IAGetIndexBuffer)(ID3D11DeviceContext* self, ID3D11Buffer ** pIndexBuffer, DXGI_FORMAT * Format, UINT * Offset);
                        void (WINAPI *GSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *GSGetShader)(ID3D11DeviceContext* self, ID3D11GeometryShader ** ppGeometryShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *IAGetPrimitiveTopology)(ID3D11DeviceContext* self, D3D11_PRIMITIVE_TOPOLOGY * pTopology);
                        void (WINAPI *VSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *VSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *GetPredication)(ID3D11DeviceContext* self, ID3D11Predicate ** ppPredicate, BOOL * pPredicateValue);
                        void (WINAPI *GSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *GSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *OMGetRenderTargets)(ID3D11DeviceContext* self, UINT NumViews, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView);
                        void (WINAPI *OMGetRenderTargetsAndUnorderedAccessViews)(ID3D11DeviceContext* self, UINT NumRTVs, ID3D11RenderTargetView ** ppRenderTargetViews, ID3D11DepthStencilView ** ppDepthStencilView, UINT UAVStartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews);
                        void (WINAPI *OMGetBlendState)(ID3D11DeviceContext* self, ID3D11BlendState ** ppBlendState, FLOAT  BlendFactor[4], UINT * pSampleMask);
                        void (WINAPI *OMGetDepthStencilState)(ID3D11DeviceContext* self, ID3D11DepthStencilState ** ppDepthStencilState, UINT * pStencilRef);
                        void (WINAPI *SOGetTargets)(ID3D11DeviceContext* self, UINT NumBuffers, ID3D11Buffer ** ppSOTargets);
                        void (WINAPI *RSGetState)(ID3D11DeviceContext* self, ID3D11RasterizerState ** ppRasterizerState);
                        void (WINAPI *RSGetViewports)(ID3D11DeviceContext* self, UINT * pNumViewports, D3D11_VIEWPORT * pViewports);
                        void (WINAPI *RSGetScissorRects)(ID3D11DeviceContext* self, UINT * pNumRects, D3D11_RECT * pRects);
                        void (WINAPI *HSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *HSGetShader)(ID3D11DeviceContext* self, ID3D11HullShader ** ppHullShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *HSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *HSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *DSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *DSGetShader)(ID3D11DeviceContext* self, ID3D11DomainShader ** ppDomainShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *DSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *DSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *CSGetShaderResources)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumViews, ID3D11ShaderResourceView ** ppShaderResourceViews);
                        void (WINAPI *CSGetUnorderedAccessViews)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumUAVs, ID3D11UnorderedAccessView ** ppUnorderedAccessViews);
                        void (WINAPI *CSGetShader)(ID3D11DeviceContext* self, ID3D11ComputeShader ** ppComputeShader, ID3D11ClassInstance ** ppClassInstances, UINT * pNumClassInstances);
                        void (WINAPI *CSGetSamplers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumSamplers, ID3D11SamplerState ** ppSamplers);
                        void (WINAPI *CSGetConstantBuffers)(ID3D11DeviceContext* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers);
                        void (WINAPI *ClearState)(ID3D11DeviceContext* self);
                        void (WINAPI *Flush)(ID3D11DeviceContext* self);
                        D3D11_DEVICE_CONTEXT_TYPE (WINAPI *GetType)(ID3D11DeviceContext* self);
                        UINT (WINAPI *GetContextFlags)(ID3D11DeviceContext* self);
                        HRESULT (WINAPI *FinishCommandList)(ID3D11DeviceContext* self, BOOL RestoreDeferredContextState, ID3D11CommandList ** ppCommandList);
                        void (WINAPI *CopySubresourceRegion1)(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, UINT DstZ, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox, UINT CopyFlags);
                        void (WINAPI *UpdateSubresource1)(ID3D11DeviceContext1* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch, UINT CopyFlags);
                        void (WINAPI *DiscardResource)(ID3D11DeviceContext1* self, ID3D11Resource * pResource);
                        void (WINAPI *DiscardView)(ID3D11DeviceContext1* self, ID3D11View * pResourceView);
                        void (WINAPI *VSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *HSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *DSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *GSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *PSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *CSSetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer *const * ppConstantBuffers, const UINT * pFirstConstant, const UINT * pNumConstants);
                        void (WINAPI *VSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *HSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *DSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *GSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *PSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *CSGetConstantBuffers1)(ID3D11DeviceContext1* self, UINT StartSlot, UINT NumBuffers, ID3D11Buffer ** ppConstantBuffers, UINT * pFirstConstant, UINT * pNumConstants);
                        void (WINAPI *SwapDeviceContextState)(ID3D11DeviceContext1* self, ID3DDeviceContextState * pState, ID3DDeviceContextState ** ppPreviousState);
                        void (WINAPI *ClearView)(ID3D11DeviceContext1* self, ID3D11View * pView, const FLOAT  Color[4], const D3D11_RECT * pRect, UINT NumRects);
                        void (WINAPI *DiscardView1)(ID3D11DeviceContext1* self, ID3D11View * pResourceView, const D3D11_RECT * pRects, UINT NumRects);
                        HRESULT (WINAPI *UpdateTileMappings)(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, UINT NumTiledResourceRegions, const D3D11_TILED_RESOURCE_COORDINATE * pTiledResourceRegionStartCoordinates, const D3D11_TILE_REGION_SIZE * pTiledResourceRegionSizes, ID3D11Buffer * pTilePool, UINT NumRanges, const UINT * pRangeFlags, const UINT * pTilePoolStartOffsets, const UINT * pRangeTileCounts, UINT Flags);
                        HRESULT (WINAPI *CopyTileMappings)(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestRegionStartCoordinate, ID3D11Resource * pSourceTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pSourceRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, UINT Flags);
                        void (WINAPI *CopyTiles)(ID3D11DeviceContext2* self, ID3D11Resource * pTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pTileRegionSize, ID3D11Buffer * pBuffer, UINT64 BufferStartOffsetInBytes, UINT Flags);
                        void (WINAPI *UpdateTiles)(ID3D11DeviceContext2* self, ID3D11Resource * pDestTiledResource, const D3D11_TILED_RESOURCE_COORDINATE * pDestTileRegionStartCoordinate, const D3D11_TILE_REGION_SIZE * pDestTileRegionSize, const void * pSourceTileData, UINT Flags);
                        HRESULT (WINAPI *ResizeTilePool)(ID3D11DeviceContext2* self, ID3D11Buffer * pTilePool, UINT64 NewSizeInBytes);
                        void (WINAPI *TiledResourceBarrier)(ID3D11DeviceContext2* self, ID3D11DeviceChild * pTiledResourceOrViewAccessBeforeBarrier, ID3D11DeviceChild * pTiledResourceOrViewAccessAfterBarrier);
                        BOOL (WINAPI *IsAnnotationEnabled)(ID3D11DeviceContext2* self);
                        void (WINAPI *SetMarkerInt)(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data);
                        void (WINAPI *BeginEventInt)(ID3D11DeviceContext2* self, LPCWSTR pLabel, INT Data);
                        void (WINAPI *EndEvent)(ID3D11DeviceContext2* self);
                        void (WINAPI *Flush1)(ID3D11DeviceContext3* self, D3D11_CONTEXT_TYPE ContextType, HANDLE hEvent);
                        void (WINAPI *SetHardwareProtectionState)(ID3D11DeviceContext3* self, BOOL HwProtectionEnable);
                        void (WINAPI *GetHardwareProtectionState)(ID3D11DeviceContext3* self, BOOL * pHwProtectionEnable);
                        HRESULT (WINAPI *Signal)(ID3D11DeviceContext4* self, ID3D11Fence * pFence, UINT64 Value);
                        HRESULT (WINAPI *Wait)(ID3D11DeviceContext4* self, ID3D11Fence * pFence, UINT64 Value);
            
        } ID3D11DeviceContext4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *CreateBuffer)(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer);
                        HRESULT (WINAPI *CreateTexture1D)(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D);
                        HRESULT (WINAPI *CreateTexture2D)(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D);
                        HRESULT (WINAPI *CreateTexture3D)(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D);
                        HRESULT (WINAPI *CreateShaderResourceView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView);
                        HRESULT (WINAPI *CreateUnorderedAccessView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView);
                        HRESULT (WINAPI *CreateRenderTargetView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView);
                        HRESULT (WINAPI *CreateDepthStencilView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView);
                        HRESULT (WINAPI *CreateInputLayout)(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout);
                        HRESULT (WINAPI *CreateVertexShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader);
                        HRESULT (WINAPI *CreateGeometryShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader);
                        HRESULT (WINAPI *CreateGeometryShaderWithStreamOutput)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader);
                        HRESULT (WINAPI *CreatePixelShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader);
                        HRESULT (WINAPI *CreateHullShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader);
                        HRESULT (WINAPI *CreateDomainShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader);
                        HRESULT (WINAPI *CreateComputeShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader);
                        HRESULT (WINAPI *CreateClassLinkage)(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage);
                        HRESULT (WINAPI *CreateBlendState)(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState);
                        HRESULT (WINAPI *CreateDepthStencilState)(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState);
                        HRESULT (WINAPI *CreateRasterizerState)(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState);
                        HRESULT (WINAPI *CreateSamplerState)(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState);
                        HRESULT (WINAPI *CreateQuery)(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery);
                        HRESULT (WINAPI *CreatePredicate)(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate);
                        HRESULT (WINAPI *CreateCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter);
                        HRESULT (WINAPI *CreateDeferredContext)(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext);
                        HRESULT (WINAPI *OpenSharedResource)(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource);
                        HRESULT (WINAPI *CheckFormatSupport)(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels)(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels);
                        void (WINAPI *CheckCounterInfo)(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo);
                        HRESULT (WINAPI *CheckCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11Device* self, const GUID & guid, const IUnknown * pData);
                        D3D_FEATURE_LEVEL (WINAPI *GetFeatureLevel)(ID3D11Device* self);
                        UINT (WINAPI *GetCreationFlags)(ID3D11Device* self);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D11Device* self);
                        void (WINAPI *GetImmediateContext)(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext);
                        HRESULT (WINAPI *SetExceptionMode)(ID3D11Device* self, UINT RaiseFlags);
                        UINT (WINAPI *GetExceptionMode)(ID3D11Device* self);
                        void (WINAPI *GetImmediateContext1)(ID3D11Device1* self, ID3D11DeviceContext1 ** ppImmediateContext);
                        HRESULT (WINAPI *CreateDeferredContext1)(ID3D11Device1* self, UINT ContextFlags, ID3D11DeviceContext1 ** ppDeferredContext);
                        HRESULT (WINAPI *CreateBlendState1)(ID3D11Device1* self, const D3D11_BLEND_DESC1 * pBlendStateDesc, ID3D11BlendState1 ** ppBlendState);
                        HRESULT (WINAPI *CreateRasterizerState1)(ID3D11Device1* self, const D3D11_RASTERIZER_DESC1 * pRasterizerDesc, ID3D11RasterizerState1 ** ppRasterizerState);
                        HRESULT (WINAPI *CreateDeviceContextState)(ID3D11Device1* self, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const IID & EmulatedInterface, D3D_FEATURE_LEVEL * pChosenFeatureLevel, ID3DDeviceContextState ** ppContextState);
                        HRESULT (WINAPI *OpenSharedResource1)(ID3D11Device1* self, HANDLE hResource, const IID & returnedInterface, void ** ppResource);
                        HRESULT (WINAPI *OpenSharedResourceByName)(ID3D11Device1* self, LPCWSTR lpName, DWORD dwDesiredAccess, const IID & returnedInterface, void ** ppResource);
                        void (WINAPI *GetImmediateContext2)(ID3D11Device2* self, ID3D11DeviceContext2 ** ppImmediateContext);
                        HRESULT (WINAPI *CreateDeferredContext2)(ID3D11Device2* self, UINT ContextFlags, ID3D11DeviceContext2 ** ppDeferredContext);
                        void (WINAPI *GetResourceTiling)(ID3D11Device2* self, ID3D11Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D11_PACKED_MIP_DESC * pPackedMipDesc, D3D11_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D11_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels1)(ID3D11Device2* self, DXGI_FORMAT Format, UINT SampleCount, UINT Flags, UINT * pNumQualityLevels);
                        HRESULT (WINAPI *CreateTexture2D1)(ID3D11Device3* self, const D3D11_TEXTURE2D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D1 ** ppTexture2D);
                        HRESULT (WINAPI *CreateTexture3D1)(ID3D11Device3* self, const D3D11_TEXTURE3D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D1 ** ppTexture3D);
                        HRESULT (WINAPI *CreateRasterizerState2)(ID3D11Device3* self, const D3D11_RASTERIZER_DESC2 * pRasterizerDesc, ID3D11RasterizerState2 ** ppRasterizerState);
                        HRESULT (WINAPI *CreateShaderResourceView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC1 * pDesc1, ID3D11ShaderResourceView1 ** ppSRView1);
                        HRESULT (WINAPI *CreateUnorderedAccessView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC1 * pDesc1, ID3D11UnorderedAccessView1 ** ppUAView1);
                        HRESULT (WINAPI *CreateRenderTargetView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC1 * pDesc1, ID3D11RenderTargetView1 ** ppRTView1);
                        HRESULT (WINAPI *CreateQuery1)(ID3D11Device3* self, const D3D11_QUERY_DESC1 * pQueryDesc1, ID3D11Query1 ** ppQuery1);
                        void (WINAPI *GetImmediateContext3)(ID3D11Device3* self, ID3D11DeviceContext3 ** ppImmediateContext);
                        HRESULT (WINAPI *CreateDeferredContext3)(ID3D11Device3* self, UINT ContextFlags, ID3D11DeviceContext3 ** ppDeferredContext);
                        void (WINAPI *WriteToSubresource)(ID3D11Device3* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch);
                        void (WINAPI *ReadFromSubresource)(ID3D11Device3* self, void * pDstData, UINT DstRowPitch, UINT DstDepthPitch, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox);
            
        } ID3D11Device3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *CreateBuffer)(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer);
                        HRESULT (WINAPI *CreateTexture1D)(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D);
                        HRESULT (WINAPI *CreateTexture2D)(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D);
                        HRESULT (WINAPI *CreateTexture3D)(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D);
                        HRESULT (WINAPI *CreateShaderResourceView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView);
                        HRESULT (WINAPI *CreateUnorderedAccessView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView);
                        HRESULT (WINAPI *CreateRenderTargetView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView);
                        HRESULT (WINAPI *CreateDepthStencilView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView);
                        HRESULT (WINAPI *CreateInputLayout)(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout);
                        HRESULT (WINAPI *CreateVertexShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader);
                        HRESULT (WINAPI *CreateGeometryShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader);
                        HRESULT (WINAPI *CreateGeometryShaderWithStreamOutput)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader);
                        HRESULT (WINAPI *CreatePixelShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader);
                        HRESULT (WINAPI *CreateHullShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader);
                        HRESULT (WINAPI *CreateDomainShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader);
                        HRESULT (WINAPI *CreateComputeShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader);
                        HRESULT (WINAPI *CreateClassLinkage)(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage);
                        HRESULT (WINAPI *CreateBlendState)(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState);
                        HRESULT (WINAPI *CreateDepthStencilState)(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState);
                        HRESULT (WINAPI *CreateRasterizerState)(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState);
                        HRESULT (WINAPI *CreateSamplerState)(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState);
                        HRESULT (WINAPI *CreateQuery)(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery);
                        HRESULT (WINAPI *CreatePredicate)(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate);
                        HRESULT (WINAPI *CreateCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter);
                        HRESULT (WINAPI *CreateDeferredContext)(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext);
                        HRESULT (WINAPI *OpenSharedResource)(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource);
                        HRESULT (WINAPI *CheckFormatSupport)(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels)(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels);
                        void (WINAPI *CheckCounterInfo)(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo);
                        HRESULT (WINAPI *CheckCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11Device* self, const GUID & guid, const IUnknown * pData);
                        D3D_FEATURE_LEVEL (WINAPI *GetFeatureLevel)(ID3D11Device* self);
                        UINT (WINAPI *GetCreationFlags)(ID3D11Device* self);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D11Device* self);
                        void (WINAPI *GetImmediateContext)(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext);
                        HRESULT (WINAPI *SetExceptionMode)(ID3D11Device* self, UINT RaiseFlags);
                        UINT (WINAPI *GetExceptionMode)(ID3D11Device* self);
                        void (WINAPI *GetImmediateContext1)(ID3D11Device1* self, ID3D11DeviceContext1 ** ppImmediateContext);
                        HRESULT (WINAPI *CreateDeferredContext1)(ID3D11Device1* self, UINT ContextFlags, ID3D11DeviceContext1 ** ppDeferredContext);
                        HRESULT (WINAPI *CreateBlendState1)(ID3D11Device1* self, const D3D11_BLEND_DESC1 * pBlendStateDesc, ID3D11BlendState1 ** ppBlendState);
                        HRESULT (WINAPI *CreateRasterizerState1)(ID3D11Device1* self, const D3D11_RASTERIZER_DESC1 * pRasterizerDesc, ID3D11RasterizerState1 ** ppRasterizerState);
                        HRESULT (WINAPI *CreateDeviceContextState)(ID3D11Device1* self, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const IID & EmulatedInterface, D3D_FEATURE_LEVEL * pChosenFeatureLevel, ID3DDeviceContextState ** ppContextState);
                        HRESULT (WINAPI *OpenSharedResource1)(ID3D11Device1* self, HANDLE hResource, const IID & returnedInterface, void ** ppResource);
                        HRESULT (WINAPI *OpenSharedResourceByName)(ID3D11Device1* self, LPCWSTR lpName, DWORD dwDesiredAccess, const IID & returnedInterface, void ** ppResource);
                        void (WINAPI *GetImmediateContext2)(ID3D11Device2* self, ID3D11DeviceContext2 ** ppImmediateContext);
                        HRESULT (WINAPI *CreateDeferredContext2)(ID3D11Device2* self, UINT ContextFlags, ID3D11DeviceContext2 ** ppDeferredContext);
                        void (WINAPI *GetResourceTiling)(ID3D11Device2* self, ID3D11Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D11_PACKED_MIP_DESC * pPackedMipDesc, D3D11_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D11_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels1)(ID3D11Device2* self, DXGI_FORMAT Format, UINT SampleCount, UINT Flags, UINT * pNumQualityLevels);
                        HRESULT (WINAPI *CreateTexture2D1)(ID3D11Device3* self, const D3D11_TEXTURE2D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D1 ** ppTexture2D);
                        HRESULT (WINAPI *CreateTexture3D1)(ID3D11Device3* self, const D3D11_TEXTURE3D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D1 ** ppTexture3D);
                        HRESULT (WINAPI *CreateRasterizerState2)(ID3D11Device3* self, const D3D11_RASTERIZER_DESC2 * pRasterizerDesc, ID3D11RasterizerState2 ** ppRasterizerState);
                        HRESULT (WINAPI *CreateShaderResourceView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC1 * pDesc1, ID3D11ShaderResourceView1 ** ppSRView1);
                        HRESULT (WINAPI *CreateUnorderedAccessView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC1 * pDesc1, ID3D11UnorderedAccessView1 ** ppUAView1);
                        HRESULT (WINAPI *CreateRenderTargetView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC1 * pDesc1, ID3D11RenderTargetView1 ** ppRTView1);
                        HRESULT (WINAPI *CreateQuery1)(ID3D11Device3* self, const D3D11_QUERY_DESC1 * pQueryDesc1, ID3D11Query1 ** ppQuery1);
                        void (WINAPI *GetImmediateContext3)(ID3D11Device3* self, ID3D11DeviceContext3 ** ppImmediateContext);
                        HRESULT (WINAPI *CreateDeferredContext3)(ID3D11Device3* self, UINT ContextFlags, ID3D11DeviceContext3 ** ppDeferredContext);
                        void (WINAPI *WriteToSubresource)(ID3D11Device3* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch);
                        void (WINAPI *ReadFromSubresource)(ID3D11Device3* self, void * pDstData, UINT DstRowPitch, UINT DstDepthPitch, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox);
                        HRESULT (WINAPI *RegisterDeviceRemovedEvent)(ID3D11Device4* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterDeviceRemoved)(ID3D11Device4* self, DWORD dwCookie);
            
        } ID3D11Device4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *CreateBuffer)(ID3D11Device* self, const D3D11_BUFFER_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Buffer ** ppBuffer);
                        HRESULT (WINAPI *CreateTexture1D)(ID3D11Device* self, const D3D11_TEXTURE1D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture1D ** ppTexture1D);
                        HRESULT (WINAPI *CreateTexture2D)(ID3D11Device* self, const D3D11_TEXTURE2D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D ** ppTexture2D);
                        HRESULT (WINAPI *CreateTexture3D)(ID3D11Device* self, const D3D11_TEXTURE3D_DESC * pDesc, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D ** ppTexture3D);
                        HRESULT (WINAPI *CreateShaderResourceView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC * pDesc, ID3D11ShaderResourceView ** ppSRView);
                        HRESULT (WINAPI *CreateUnorderedAccessView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC * pDesc, ID3D11UnorderedAccessView ** ppUAView);
                        HRESULT (WINAPI *CreateRenderTargetView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC * pDesc, ID3D11RenderTargetView ** ppRTView);
                        HRESULT (WINAPI *CreateDepthStencilView)(ID3D11Device* self, ID3D11Resource * pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC * pDesc, ID3D11DepthStencilView ** ppDepthStencilView);
                        HRESULT (WINAPI *CreateInputLayout)(ID3D11Device* self, const D3D11_INPUT_ELEMENT_DESC * pInputElementDescs, UINT NumElements, const void * pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout ** ppInputLayout);
                        HRESULT (WINAPI *CreateVertexShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11VertexShader ** ppVertexShader);
                        HRESULT (WINAPI *CreateGeometryShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader);
                        HRESULT (WINAPI *CreateGeometryShaderWithStreamOutput)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY * pSODeclaration, UINT NumEntries, const UINT * pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage * pClassLinkage, ID3D11GeometryShader ** ppGeometryShader);
                        HRESULT (WINAPI *CreatePixelShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11PixelShader ** ppPixelShader);
                        HRESULT (WINAPI *CreateHullShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11HullShader ** ppHullShader);
                        HRESULT (WINAPI *CreateDomainShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11DomainShader ** ppDomainShader);
                        HRESULT (WINAPI *CreateComputeShader)(ID3D11Device* self, const void * pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage * pClassLinkage, ID3D11ComputeShader ** ppComputeShader);
                        HRESULT (WINAPI *CreateClassLinkage)(ID3D11Device* self, ID3D11ClassLinkage ** ppLinkage);
                        HRESULT (WINAPI *CreateBlendState)(ID3D11Device* self, const D3D11_BLEND_DESC * pBlendStateDesc, ID3D11BlendState ** ppBlendState);
                        HRESULT (WINAPI *CreateDepthStencilState)(ID3D11Device* self, const D3D11_DEPTH_STENCIL_DESC * pDepthStencilDesc, ID3D11DepthStencilState ** ppDepthStencilState);
                        HRESULT (WINAPI *CreateRasterizerState)(ID3D11Device* self, const D3D11_RASTERIZER_DESC * pRasterizerDesc, ID3D11RasterizerState ** ppRasterizerState);
                        HRESULT (WINAPI *CreateSamplerState)(ID3D11Device* self, const D3D11_SAMPLER_DESC * pSamplerDesc, ID3D11SamplerState ** ppSamplerState);
                        HRESULT (WINAPI *CreateQuery)(ID3D11Device* self, const D3D11_QUERY_DESC * pQueryDesc, ID3D11Query ** ppQuery);
                        HRESULT (WINAPI *CreatePredicate)(ID3D11Device* self, const D3D11_QUERY_DESC * pPredicateDesc, ID3D11Predicate ** ppPredicate);
                        HRESULT (WINAPI *CreateCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pCounterDesc, ID3D11Counter ** ppCounter);
                        HRESULT (WINAPI *CreateDeferredContext)(ID3D11Device* self, UINT ContextFlags, ID3D11DeviceContext ** ppDeferredContext);
                        HRESULT (WINAPI *OpenSharedResource)(ID3D11Device* self, HANDLE hResource, const IID & ReturnedInterface, void ** ppResource);
                        HRESULT (WINAPI *CheckFormatSupport)(ID3D11Device* self, DXGI_FORMAT Format, UINT * pFormatSupport);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels)(ID3D11Device* self, DXGI_FORMAT Format, UINT SampleCount, UINT * pNumQualityLevels);
                        void (WINAPI *CheckCounterInfo)(ID3D11Device* self, D3D11_COUNTER_INFO * pCounterInfo);
                        HRESULT (WINAPI *CheckCounter)(ID3D11Device* self, const D3D11_COUNTER_DESC * pDesc, D3D11_COUNTER_TYPE * pType, UINT * pActiveCounters, LPSTR szName, UINT * pNameLength, LPSTR szUnits, UINT * pUnitsLength, LPSTR szDescription, UINT * pDescriptionLength);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D11Device* self, D3D11_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11Device* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11Device* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11Device* self, const GUID & guid, const IUnknown * pData);
                        D3D_FEATURE_LEVEL (WINAPI *GetFeatureLevel)(ID3D11Device* self);
                        UINT (WINAPI *GetCreationFlags)(ID3D11Device* self);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D11Device* self);
                        void (WINAPI *GetImmediateContext)(ID3D11Device* self, ID3D11DeviceContext ** ppImmediateContext);
                        HRESULT (WINAPI *SetExceptionMode)(ID3D11Device* self, UINT RaiseFlags);
                        UINT (WINAPI *GetExceptionMode)(ID3D11Device* self);
                        void (WINAPI *GetImmediateContext1)(ID3D11Device1* self, ID3D11DeviceContext1 ** ppImmediateContext);
                        HRESULT (WINAPI *CreateDeferredContext1)(ID3D11Device1* self, UINT ContextFlags, ID3D11DeviceContext1 ** ppDeferredContext);
                        HRESULT (WINAPI *CreateBlendState1)(ID3D11Device1* self, const D3D11_BLEND_DESC1 * pBlendStateDesc, ID3D11BlendState1 ** ppBlendState);
                        HRESULT (WINAPI *CreateRasterizerState1)(ID3D11Device1* self, const D3D11_RASTERIZER_DESC1 * pRasterizerDesc, ID3D11RasterizerState1 ** ppRasterizerState);
                        HRESULT (WINAPI *CreateDeviceContextState)(ID3D11Device1* self, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, const IID & EmulatedInterface, D3D_FEATURE_LEVEL * pChosenFeatureLevel, ID3DDeviceContextState ** ppContextState);
                        HRESULT (WINAPI *OpenSharedResource1)(ID3D11Device1* self, HANDLE hResource, const IID & returnedInterface, void ** ppResource);
                        HRESULT (WINAPI *OpenSharedResourceByName)(ID3D11Device1* self, LPCWSTR lpName, DWORD dwDesiredAccess, const IID & returnedInterface, void ** ppResource);
                        void (WINAPI *GetImmediateContext2)(ID3D11Device2* self, ID3D11DeviceContext2 ** ppImmediateContext);
                        HRESULT (WINAPI *CreateDeferredContext2)(ID3D11Device2* self, UINT ContextFlags, ID3D11DeviceContext2 ** ppDeferredContext);
                        void (WINAPI *GetResourceTiling)(ID3D11Device2* self, ID3D11Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D11_PACKED_MIP_DESC * pPackedMipDesc, D3D11_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D11_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips);
                        HRESULT (WINAPI *CheckMultisampleQualityLevels1)(ID3D11Device2* self, DXGI_FORMAT Format, UINT SampleCount, UINT Flags, UINT * pNumQualityLevels);
                        HRESULT (WINAPI *CreateTexture2D1)(ID3D11Device3* self, const D3D11_TEXTURE2D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture2D1 ** ppTexture2D);
                        HRESULT (WINAPI *CreateTexture3D1)(ID3D11Device3* self, const D3D11_TEXTURE3D_DESC1 * pDesc1, const D3D11_SUBRESOURCE_DATA * pInitialData, ID3D11Texture3D1 ** ppTexture3D);
                        HRESULT (WINAPI *CreateRasterizerState2)(ID3D11Device3* self, const D3D11_RASTERIZER_DESC2 * pRasterizerDesc, ID3D11RasterizerState2 ** ppRasterizerState);
                        HRESULT (WINAPI *CreateShaderResourceView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC1 * pDesc1, ID3D11ShaderResourceView1 ** ppSRView1);
                        HRESULT (WINAPI *CreateUnorderedAccessView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC1 * pDesc1, ID3D11UnorderedAccessView1 ** ppUAView1);
                        HRESULT (WINAPI *CreateRenderTargetView1)(ID3D11Device3* self, ID3D11Resource * pResource, const D3D11_RENDER_TARGET_VIEW_DESC1 * pDesc1, ID3D11RenderTargetView1 ** ppRTView1);
                        HRESULT (WINAPI *CreateQuery1)(ID3D11Device3* self, const D3D11_QUERY_DESC1 * pQueryDesc1, ID3D11Query1 ** ppQuery1);
                        void (WINAPI *GetImmediateContext3)(ID3D11Device3* self, ID3D11DeviceContext3 ** ppImmediateContext);
                        HRESULT (WINAPI *CreateDeferredContext3)(ID3D11Device3* self, UINT ContextFlags, ID3D11DeviceContext3 ** ppDeferredContext);
                        void (WINAPI *WriteToSubresource)(ID3D11Device3* self, ID3D11Resource * pDstResource, UINT DstSubresource, const D3D11_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch);
                        void (WINAPI *ReadFromSubresource)(ID3D11Device3* self, void * pDstData, UINT DstRowPitch, UINT DstDepthPitch, ID3D11Resource * pSrcResource, UINT SrcSubresource, const D3D11_BOX * pSrcBox);
                        HRESULT (WINAPI *RegisterDeviceRemovedEvent)(ID3D11Device4* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterDeviceRemoved)(ID3D11Device4* self, DWORD dwCookie);
                        HRESULT (WINAPI *OpenSharedFence)(ID3D11Device5* self, HANDLE hFence, const IID & ReturnedInterface, void ** ppFence);
                        HRESULT (WINAPI *CreateFence)(ID3D11Device5* self, UINT64 InitialValue, D3D11_FENCE_FLAG Flags, const IID & ReturnedInterface, void ** ppFence);
            
        } ID3D11Device5Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *Enter)(ID3D11Multithread* self);
                        void (WINAPI *Leave)(ID3D11Multithread* self);
                        BOOL (WINAPI *SetMultithreadProtected)(ID3D11Multithread* self, BOOL bMTProtect);
                        BOOL (WINAPI *GetMultithreadProtected)(ID3D11Multithread* self);
            
        } ID3D11MultithreadTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *GetDecoderBuffer)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, UINT * pBufferSize, void ** ppBuffer);
                        HRESULT (WINAPI *ReleaseDecoderBuffer)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type);
                        HRESULT (WINAPI *DecoderBeginFrame)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, ID3D11VideoDecoderOutputView * pView, UINT ContentKeySize, const void * pContentKey);
                        HRESULT (WINAPI *DecoderEndFrame)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder);
                        HRESULT (WINAPI *SubmitDecoderBuffers)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC * pBufferDesc);
                        APP_DEPRECATED_HRESULT (WINAPI *DecoderExtension)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_DECODER_EXTENSION * pExtensionData);
                        void (WINAPI *VideoProcessorSetOutputTargetRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, const RECT * pRect);
                        void (WINAPI *VideoProcessorSetOutputBackgroundColor)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL YCbCr, const D3D11_VIDEO_COLOR * pColor);
                        void (WINAPI *VideoProcessorSetOutputColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace);
                        void (WINAPI *VideoProcessorSetOutputAlphaFillMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode, UINT StreamIndex);
                        void (WINAPI *VideoProcessorSetOutputConstriction)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, SIZE Size);
                        void (WINAPI *VideoProcessorSetOutputStereoMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorSetOutputExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData);
                        void (WINAPI *VideoProcessorGetOutputTargetRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * Enabled, RECT * pRect);
                        void (WINAPI *VideoProcessorGetOutputBackgroundColor)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pYCbCr, D3D11_VIDEO_COLOR * pColor);
                        void (WINAPI *VideoProcessorGetOutputColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace);
                        void (WINAPI *VideoProcessorGetOutputAlphaFillMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE * pAlphaFillMode, UINT * pStreamIndex);
                        void (WINAPI *VideoProcessorGetOutputConstriction)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, SIZE * pSize);
                        void (WINAPI *VideoProcessorGetOutputStereoMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorGetOutputExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData);
                        void (WINAPI *VideoProcessorSetStreamFrameFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT FrameFormat);
                        void (WINAPI *VideoProcessorSetStreamColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace);
                        void (WINAPI *VideoProcessorSetStreamOutputRate)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate, BOOL RepeatFrame, const DXGI_RATIONAL * pCustomRate);
                        void (WINAPI *VideoProcessorSetStreamSourceRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect);
                        void (WINAPI *VideoProcessorSetStreamDestRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect);
                        void (WINAPI *VideoProcessorSetStreamAlpha)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Alpha);
                        void (WINAPI *VideoProcessorSetStreamPalette)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, const UINT * pEntries);
                        void (WINAPI *VideoProcessorSetStreamPixelAspectRatio)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const DXGI_RATIONAL * pSourceAspectRatio, const DXGI_RATIONAL * pDestinationAspectRatio);
                        void (WINAPI *VideoProcessorSetStreamLumaKey)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Lower, FLOAT Upper);
                        void (WINAPI *VideoProcessorSetStreamStereoFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format, BOOL LeftViewFrame0, BOOL BaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode, int MonoOffset);
                        void (WINAPI *VideoProcessorSetStreamAutoProcessingMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable);
                        void (WINAPI *VideoProcessorSetStreamFilter)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL Enable, int Level);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorSetStreamExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData);
                        void (WINAPI *VideoProcessorGetStreamFrameFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT * pFrameFormat);
                        void (WINAPI *VideoProcessorGetStreamColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace);
                        void (WINAPI *VideoProcessorGetStreamOutputRate)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE * pOutputRate, BOOL * pRepeatFrame, DXGI_RATIONAL * pCustomRate);
                        void (WINAPI *VideoProcessorGetStreamSourceRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect);
                        void (WINAPI *VideoProcessorGetStreamDestRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect);
                        void (WINAPI *VideoProcessorGetStreamAlpha)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pAlpha);
                        void (WINAPI *VideoProcessorGetStreamPalette)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, UINT * pEntries);
                        void (WINAPI *VideoProcessorGetStreamPixelAspectRatio)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, DXGI_RATIONAL * pSourceAspectRatio, DXGI_RATIONAL * pDestinationAspectRatio);
                        void (WINAPI *VideoProcessorGetStreamLumaKey)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pLower, FLOAT * pUpper);
                        void (WINAPI *VideoProcessorGetStreamStereoFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT * pFormat, BOOL * pLeftViewFrame0, BOOL * pBaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE * pFlipMode, int * MonoOffset);
                        void (WINAPI *VideoProcessorGetStreamAutoProcessingMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled);
                        void (WINAPI *VideoProcessorGetStreamFilter)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL * pEnabled, int * pLevel);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorGetStreamExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData);
                        HRESULT (WINAPI *VideoProcessorBlt)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, ID3D11VideoProcessorOutputView * pView, UINT OutputFrame, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM * pStreams);
                        HRESULT (WINAPI *NegotiateCryptoSessionKeyExchange)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT DataSize, void * pData);
                        void (WINAPI *EncryptionBlt)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, UINT IVSize, void * pIV);
                        void (WINAPI *DecryptionBlt)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, D3D11_ENCRYPTED_BLOCK_INFO * pEncryptedBlockInfo, UINT ContentKeySize, const void * pContentKey, UINT IVSize, void * pIV);
                        void (WINAPI *StartSessionKeyRefresh)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT RandomNumberSize, void * pRandomNumber);
                        void (WINAPI *FinishSessionKeyRefresh)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession);
                        HRESULT (WINAPI *GetEncryptionBltKey)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT KeySize, void * pReadbackKey);
                        HRESULT (WINAPI *NegotiateAuthenticatedChannelKeyExchange)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT DataSize, void * pData);
                        HRESULT (WINAPI *QueryAuthenticatedChannel)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, UINT OutputSize, void * pOutput);
                        HRESULT (WINAPI *ConfigureAuthenticatedChannel)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, D3D11_AUTHENTICATED_CONFIGURE_OUTPUT * pOutput);
                        void (WINAPI *VideoProcessorSetStreamRotation)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_ROTATION Rotation);
                        void (WINAPI *VideoProcessorGetStreamRotation)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_ROTATION * pRotation);
                        HRESULT (WINAPI *SubmitDecoderBuffers1)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC1 * pBufferDesc);
                        HRESULT (WINAPI *GetDataForNewHardwareKey)(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, UINT PrivateInputSize, const void * pPrivatInputData, UINT64 * pPrivateOutputData);
                        HRESULT (WINAPI *CheckCryptoSessionStatus)(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, D3D11_CRYPTO_SESSION_STATUS * pStatus);
                        HRESULT (WINAPI *DecoderEnableDownsampling)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, UINT ReferenceFrameCount);
                        HRESULT (WINAPI *DecoderUpdateDownsampling)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc);
                        void (WINAPI *VideoProcessorSetOutputColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE ColorSpace);
                        void (WINAPI *VideoProcessorSetOutputShaderUsage)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL ShaderUsage);
                        void (WINAPI *VideoProcessorGetOutputColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE * pColorSpace);
                        void (WINAPI *VideoProcessorGetOutputShaderUsage)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pShaderUsage);
                        void (WINAPI *VideoProcessorSetStreamColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE ColorSpace);
                        void (WINAPI *VideoProcessorSetStreamMirror)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, BOOL FlipHorizontal, BOOL FlipVertical);
                        void (WINAPI *VideoProcessorGetStreamColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE * pColorSpace);
                        void (WINAPI *VideoProcessorGetStreamMirror)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, BOOL * pFlipHorizontal, BOOL * pFlipVertical);
                        HRESULT (WINAPI *VideoProcessorGetBehaviorHints)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT OutputWidth, UINT OutputHeight, DXGI_FORMAT OutputFormat, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT * pStreams, UINT * pBehaviorHints);
                        void (WINAPI *VideoProcessorSetOutputHDRMetaData)(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_HDR_METADATA_TYPE Type, UINT Size, const void * pHDRMetaData);
                        void (WINAPI *VideoProcessorGetOutputHDRMetaData)(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_HDR_METADATA_TYPE * pType, UINT Size, void * pMetaData);
                        void (WINAPI *VideoProcessorSetStreamHDRMetaData)(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_HDR_METADATA_TYPE Type, UINT Size, const void * pHDRMetaData);
                        void (WINAPI *VideoProcessorGetStreamHDRMetaData)(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_HDR_METADATA_TYPE * pType, UINT Size, void * pMetaData);
            
        } ID3D11VideoContext2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *CreateVideoDecoder)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pVideoDesc, const D3D11_VIDEO_DECODER_CONFIG * pConfig, ID3D11VideoDecoder ** ppDecoder);
                        HRESULT (WINAPI *CreateVideoProcessor)(ID3D11VideoDevice* self, ID3D11VideoProcessorEnumerator * pEnum, UINT RateConversionIndex, ID3D11VideoProcessor ** ppVideoProcessor);
                        HRESULT (WINAPI *CreateAuthenticatedChannel)(ID3D11VideoDevice* self, D3D11_AUTHENTICATED_CHANNEL_TYPE ChannelType, ID3D11AuthenticatedChannel ** ppAuthenticatedChannel);
                        HRESULT (WINAPI *CreateCryptoSession)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, const GUID * pKeyExchangeType, ID3D11CryptoSession ** ppCryptoSession);
                        HRESULT (WINAPI *CreateVideoDecoderOutputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, const D3D11_VIDEO_DECODER_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoDecoderOutputView ** ppVDOVView);
                        HRESULT (WINAPI *CreateVideoProcessorInputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_INPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorInputView ** ppVPIView);
                        HRESULT (WINAPI *CreateVideoProcessorOutputView)(ID3D11VideoDevice* self, ID3D11Resource * pResource, ID3D11VideoProcessorEnumerator * pEnum, const D3D11_VIDEO_PROCESSOR_OUTPUT_VIEW_DESC * pDesc, ID3D11VideoProcessorOutputView ** ppVPOView);
                        HRESULT (WINAPI *CreateVideoProcessorEnumerator)(ID3D11VideoDevice* self, const D3D11_VIDEO_PROCESSOR_CONTENT_DESC * pDesc, ID3D11VideoProcessorEnumerator ** ppEnum);
                        UINT (WINAPI *GetVideoDecoderProfileCount)(ID3D11VideoDevice* self);
                        HRESULT (WINAPI *GetVideoDecoderProfile)(ID3D11VideoDevice* self, UINT Index, GUID * pDecoderProfile);
                        HRESULT (WINAPI *CheckVideoDecoderFormat)(ID3D11VideoDevice* self, const GUID * pDecoderProfile, DXGI_FORMAT Format, BOOL * pSupported);
                        HRESULT (WINAPI *GetVideoDecoderConfigCount)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT * pCount);
                        HRESULT (WINAPI *GetVideoDecoderConfig)(ID3D11VideoDevice* self, const D3D11_VIDEO_DECODER_DESC * pDesc, UINT Index, D3D11_VIDEO_DECODER_CONFIG * pConfig);
                        HRESULT (WINAPI *GetContentProtectionCaps)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, D3D11_VIDEO_CONTENT_PROTECTION_CAPS * pCaps);
                        HRESULT (WINAPI *CheckCryptoKeyExchange)(ID3D11VideoDevice* self, const GUID * pCryptoType, const GUID * pDecoderProfile, UINT Index, GUID * pKeyExchangeType);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11VideoDevice* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11VideoDevice* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *GetCryptoSessionPrivateDataSize)(ID3D11VideoDevice1* self, const GUID * pCryptoType, const GUID * pDecoderProfile, const GUID * pKeyExchangeType, UINT * pPrivateInputSize, UINT * pPrivateOutputSize);
                        HRESULT (WINAPI *GetVideoDecoderCaps)(ID3D11VideoDevice1* self, const GUID * pDecoderProfile, UINT SampleWidth, UINT SampleHeight, const DXGI_RATIONAL * pFrameRate, UINT BitRate, const GUID * pCryptoType, UINT * pDecoderCaps);
                        HRESULT (WINAPI *CheckVideoDecoderDownsampling)(ID3D11VideoDevice1* self, const D3D11_VIDEO_DECODER_DESC * pInputDesc, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_DECODER_CONFIG * pInputConfig, const DXGI_RATIONAL * pFrameRate, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, BOOL * pSupported, BOOL * pRealTimeHint);
                        HRESULT (WINAPI *RecommendVideoDecoderDownsampleParameters)(ID3D11VideoDevice1* self, const D3D11_VIDEO_DECODER_DESC * pInputDesc, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_DECODER_CONFIG * pInputConfig, const DXGI_RATIONAL * pFrameRate, D3D11_VIDEO_SAMPLE_DESC * pRecommendedOutputDesc);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D11VideoDevice2* self, D3D11_FEATURE_VIDEO Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize);
                        HRESULT (WINAPI *NegotiateCryptoSessionKeyExchangeMT)(ID3D11VideoDevice2* self, ID3D11CryptoSession * pCryptoSession, D3D11_CRYPTO_SESSION_KEY_EXCHANGE_FLAGS flags, UINT DataSize, void * pData);
            
        } ID3D11VideoDevice2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *GetDevice)(ID3D11DeviceChild* self, ID3D11Device ** ppDevice);
                        HRESULT (WINAPI *GetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D11DeviceChild* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D11DeviceChild* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *GetDecoderBuffer)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type, UINT * pBufferSize, void ** ppBuffer);
                        HRESULT (WINAPI *ReleaseDecoderBuffer)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, D3D11_VIDEO_DECODER_BUFFER_TYPE Type);
                        HRESULT (WINAPI *DecoderBeginFrame)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, ID3D11VideoDecoderOutputView * pView, UINT ContentKeySize, const void * pContentKey);
                        HRESULT (WINAPI *DecoderEndFrame)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder);
                        HRESULT (WINAPI *SubmitDecoderBuffers)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC * pBufferDesc);
                        APP_DEPRECATED_HRESULT (WINAPI *DecoderExtension)(ID3D11VideoContext* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_DECODER_EXTENSION * pExtensionData);
                        void (WINAPI *VideoProcessorSetOutputTargetRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, const RECT * pRect);
                        void (WINAPI *VideoProcessorSetOutputBackgroundColor)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL YCbCr, const D3D11_VIDEO_COLOR * pColor);
                        void (WINAPI *VideoProcessorSetOutputColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace);
                        void (WINAPI *VideoProcessorSetOutputAlphaFillMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE AlphaFillMode, UINT StreamIndex);
                        void (WINAPI *VideoProcessorSetOutputConstriction)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable, SIZE Size);
                        void (WINAPI *VideoProcessorSetOutputStereoMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL Enable);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorSetOutputExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData);
                        void (WINAPI *VideoProcessorGetOutputTargetRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * Enabled, RECT * pRect);
                        void (WINAPI *VideoProcessorGetOutputBackgroundColor)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pYCbCr, D3D11_VIDEO_COLOR * pColor);
                        void (WINAPI *VideoProcessorGetOutputColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace);
                        void (WINAPI *VideoProcessorGetOutputAlphaFillMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, D3D11_VIDEO_PROCESSOR_ALPHA_FILL_MODE * pAlphaFillMode, UINT * pStreamIndex);
                        void (WINAPI *VideoProcessorGetOutputConstriction)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled, SIZE * pSize);
                        void (WINAPI *VideoProcessorGetOutputStereoMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pEnabled);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorGetOutputExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, const GUID * pExtensionGuid, UINT DataSize, void * pData);
                        void (WINAPI *VideoProcessorSetStreamFrameFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT FrameFormat);
                        void (WINAPI *VideoProcessorSetStreamColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace);
                        void (WINAPI *VideoProcessorSetStreamOutputRate)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE OutputRate, BOOL RepeatFrame, const DXGI_RATIONAL * pCustomRate);
                        void (WINAPI *VideoProcessorSetStreamSourceRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect);
                        void (WINAPI *VideoProcessorSetStreamDestRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const RECT * pRect);
                        void (WINAPI *VideoProcessorSetStreamAlpha)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Alpha);
                        void (WINAPI *VideoProcessorSetStreamPalette)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, const UINT * pEntries);
                        void (WINAPI *VideoProcessorSetStreamPixelAspectRatio)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, const DXGI_RATIONAL * pSourceAspectRatio, const DXGI_RATIONAL * pDestinationAspectRatio);
                        void (WINAPI *VideoProcessorSetStreamLumaKey)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, FLOAT Lower, FLOAT Upper);
                        void (WINAPI *VideoProcessorSetStreamStereoFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT Format, BOOL LeftViewFrame0, BOOL BaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE FlipMode, int MonoOffset);
                        void (WINAPI *VideoProcessorSetStreamAutoProcessingMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable);
                        void (WINAPI *VideoProcessorSetStreamFilter)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL Enable, int Level);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorSetStreamExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData);
                        void (WINAPI *VideoProcessorGetStreamFrameFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_FRAME_FORMAT * pFrameFormat);
                        void (WINAPI *VideoProcessorGetStreamColorSpace)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_COLOR_SPACE * pColorSpace);
                        void (WINAPI *VideoProcessorGetStreamOutputRate)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_OUTPUT_RATE * pOutputRate, BOOL * pRepeatFrame, DXGI_RATIONAL * pCustomRate);
                        void (WINAPI *VideoProcessorGetStreamSourceRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect);
                        void (WINAPI *VideoProcessorGetStreamDestRect)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, RECT * pRect);
                        void (WINAPI *VideoProcessorGetStreamAlpha)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pAlpha);
                        void (WINAPI *VideoProcessorGetStreamPalette)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, UINT Count, UINT * pEntries);
                        void (WINAPI *VideoProcessorGetStreamPixelAspectRatio)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, DXGI_RATIONAL * pSourceAspectRatio, DXGI_RATIONAL * pDestinationAspectRatio);
                        void (WINAPI *VideoProcessorGetStreamLumaKey)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled, FLOAT * pLower, FLOAT * pUpper);
                        void (WINAPI *VideoProcessorGetStreamStereoFormat)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_STEREO_FORMAT * pFormat, BOOL * pLeftViewFrame0, BOOL * pBaseViewFrame0, D3D11_VIDEO_PROCESSOR_STEREO_FLIP_MODE * pFlipMode, int * MonoOffset);
                        void (WINAPI *VideoProcessorGetStreamAutoProcessingMode)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnabled);
                        void (WINAPI *VideoProcessorGetStreamFilter)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, D3D11_VIDEO_PROCESSOR_FILTER Filter, BOOL * pEnabled, int * pLevel);
                        APP_DEPRECATED_HRESULT (WINAPI *VideoProcessorGetStreamExtension)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, const GUID * pExtensionGuid, UINT DataSize, void * pData);
                        HRESULT (WINAPI *VideoProcessorBlt)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, ID3D11VideoProcessorOutputView * pView, UINT OutputFrame, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM * pStreams);
                        HRESULT (WINAPI *NegotiateCryptoSessionKeyExchange)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT DataSize, void * pData);
                        void (WINAPI *EncryptionBlt)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, UINT IVSize, void * pIV);
                        void (WINAPI *DecryptionBlt)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, ID3D11Texture2D * pSrcSurface, ID3D11Texture2D * pDstSurface, D3D11_ENCRYPTED_BLOCK_INFO * pEncryptedBlockInfo, UINT ContentKeySize, const void * pContentKey, UINT IVSize, void * pIV);
                        void (WINAPI *StartSessionKeyRefresh)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT RandomNumberSize, void * pRandomNumber);
                        void (WINAPI *FinishSessionKeyRefresh)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession);
                        HRESULT (WINAPI *GetEncryptionBltKey)(ID3D11VideoContext* self, ID3D11CryptoSession * pCryptoSession, UINT KeySize, void * pReadbackKey);
                        HRESULT (WINAPI *NegotiateAuthenticatedChannelKeyExchange)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT DataSize, void * pData);
                        HRESULT (WINAPI *QueryAuthenticatedChannel)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, UINT OutputSize, void * pOutput);
                        HRESULT (WINAPI *ConfigureAuthenticatedChannel)(ID3D11VideoContext* self, ID3D11AuthenticatedChannel * pChannel, UINT InputSize, const void * pInput, D3D11_AUTHENTICATED_CONFIGURE_OUTPUT * pOutput);
                        void (WINAPI *VideoProcessorSetStreamRotation)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, D3D11_VIDEO_PROCESSOR_ROTATION Rotation);
                        void (WINAPI *VideoProcessorGetStreamRotation)(ID3D11VideoContext* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, D3D11_VIDEO_PROCESSOR_ROTATION * pRotation);
                        HRESULT (WINAPI *SubmitDecoderBuffers1)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC1 * pBufferDesc);
                        HRESULT (WINAPI *GetDataForNewHardwareKey)(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, UINT PrivateInputSize, const void * pPrivatInputData, UINT64 * pPrivateOutputData);
                        HRESULT (WINAPI *CheckCryptoSessionStatus)(ID3D11VideoContext1* self, ID3D11CryptoSession * pCryptoSession, D3D11_CRYPTO_SESSION_STATUS * pStatus);
                        HRESULT (WINAPI *DecoderEnableDownsampling)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, DXGI_COLOR_SPACE_TYPE InputColorSpace, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc, UINT ReferenceFrameCount);
                        HRESULT (WINAPI *DecoderUpdateDownsampling)(ID3D11VideoContext1* self, ID3D11VideoDecoder * pDecoder, const D3D11_VIDEO_SAMPLE_DESC * pOutputDesc);
                        void (WINAPI *VideoProcessorSetOutputColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE ColorSpace);
                        void (WINAPI *VideoProcessorSetOutputShaderUsage)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL ShaderUsage);
                        void (WINAPI *VideoProcessorGetOutputColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_COLOR_SPACE_TYPE * pColorSpace);
                        void (WINAPI *VideoProcessorGetOutputShaderUsage)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, BOOL * pShaderUsage);
                        void (WINAPI *VideoProcessorSetStreamColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE ColorSpace);
                        void (WINAPI *VideoProcessorSetStreamMirror)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL Enable, BOOL FlipHorizontal, BOOL FlipVertical);
                        void (WINAPI *VideoProcessorGetStreamColorSpace1)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_COLOR_SPACE_TYPE * pColorSpace);
                        void (WINAPI *VideoProcessorGetStreamMirror)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, BOOL * pEnable, BOOL * pFlipHorizontal, BOOL * pFlipVertical);
                        HRESULT (WINAPI *VideoProcessorGetBehaviorHints)(ID3D11VideoContext1* self, ID3D11VideoProcessor * pVideoProcessor, UINT OutputWidth, UINT OutputHeight, DXGI_FORMAT OutputFormat, UINT StreamCount, const D3D11_VIDEO_PROCESSOR_STREAM_BEHAVIOR_HINT * pStreams, UINT * pBehaviorHints);
                        void (WINAPI *VideoProcessorSetOutputHDRMetaData)(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_HDR_METADATA_TYPE Type, UINT Size, const void * pHDRMetaData);
                        void (WINAPI *VideoProcessorGetOutputHDRMetaData)(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, DXGI_HDR_METADATA_TYPE * pType, UINT Size, void * pMetaData);
                        void (WINAPI *VideoProcessorSetStreamHDRMetaData)(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_HDR_METADATA_TYPE Type, UINT Size, const void * pHDRMetaData);
                        void (WINAPI *VideoProcessorGetStreamHDRMetaData)(ID3D11VideoContext2* self, ID3D11VideoProcessor * pVideoProcessor, UINT StreamIndex, DXGI_HDR_METADATA_TYPE * pType, UINT Size, void * pMetaData);
                        HRESULT (WINAPI *DecoderBeginFrame1)(ID3D11VideoContext3* self, ID3D11VideoDecoder * pDecoder, ID3D11VideoDecoderOutputView * pView, UINT ContentKeySize, const void * pContentKey, UINT NumComponentHistograms, const UINT * pHistogramOffsets, ID3D11Buffer *const * ppHistogramBuffers);
                        HRESULT (WINAPI *SubmitDecoderBuffers2)(ID3D11VideoContext3* self, ID3D11VideoDecoder * pDecoder, UINT NumBuffers, const D3D11_VIDEO_DECODER_BUFFER_DESC2 * pBufferDesc);
            
        } ID3D11VideoContext3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
            
        } ID3D12ObjectTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
            
        } ID3D12DeviceChildTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
            
        } ID3D12RootSignatureTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        const D3D12_ROOT_SIGNATURE_DESC * (WINAPI *GetRootSignatureDesc)(ID3D12RootSignatureDeserializer* self);
            
        } ID3D12RootSignatureDeserializerTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetRootSignatureDescAtVersion)(ID3D12VersionedRootSignatureDeserializer* self, D3D_ROOT_SIGNATURE_VERSION convertToVersion, const D3D12_VERSIONED_ROOT_SIGNATURE_DESC ** ppDesc);
                        const D3D12_VERSIONED_ROOT_SIGNATURE_DESC * (WINAPI *GetUnconvertedRootSignatureDesc)(ID3D12VersionedRootSignatureDeserializer* self);
            
        } ID3D12VersionedRootSignatureDeserializerTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
            
        } ID3D12PageableTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        D3D12_HEAP_DESC* (WINAPI *GetDesc)(ID3D12Heap* self, D3D12_HEAP_DESC* outReturnValue);
            
        } ID3D12HeapTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        HRESULT (WINAPI *Map)(ID3D12Resource* self, UINT Subresource, const D3D12_RANGE * pReadRange, void ** ppData);
                        void (WINAPI *Unmap)(ID3D12Resource* self, UINT Subresource, const D3D12_RANGE * pWrittenRange);
                        D3D12_RESOURCE_DESC* (WINAPI *GetDesc)(ID3D12Resource* self, D3D12_RESOURCE_DESC* outReturnValue);
                        D3D12_GPU_VIRTUAL_ADDRESS (WINAPI *GetGPUVirtualAddress)(ID3D12Resource* self);
                        HRESULT (WINAPI *WriteToSubresource)(ID3D12Resource* self, UINT DstSubresource, const D3D12_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch);
                        HRESULT (WINAPI *ReadFromSubresource)(ID3D12Resource* self, void * pDstData, UINT DstRowPitch, UINT DstDepthPitch, UINT SrcSubresource, const D3D12_BOX * pSrcBox);
                        HRESULT (WINAPI *GetHeapProperties)(ID3D12Resource* self, D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS * pHeapFlags);
            
        } ID3D12ResourceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        HRESULT (WINAPI *Reset)(ID3D12CommandAllocator* self);
            
        } ID3D12CommandAllocatorTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        UINT64 (WINAPI *GetCompletedValue)(ID3D12Fence* self);
                        HRESULT (WINAPI *SetEventOnCompletion)(ID3D12Fence* self, UINT64 Value, HANDLE hEvent);
                        HRESULT (WINAPI *Signal)(ID3D12Fence* self, UINT64 Value);
            
        } ID3D12FenceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        UINT64 (WINAPI *GetCompletedValue)(ID3D12Fence* self);
                        HRESULT (WINAPI *SetEventOnCompletion)(ID3D12Fence* self, UINT64 Value, HANDLE hEvent);
                        HRESULT (WINAPI *Signal)(ID3D12Fence* self, UINT64 Value);
                        D3D12_FENCE_FLAGS (WINAPI *GetCreationFlags)(ID3D12Fence1* self);
            
        } ID3D12Fence1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        HRESULT (WINAPI *GetCachedBlob)(ID3D12PipelineState* self, ID3DBlob ** ppBlob);
            
        } ID3D12PipelineStateTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        D3D12_DESCRIPTOR_HEAP_DESC* (WINAPI *GetDesc)(ID3D12DescriptorHeap* self, D3D12_DESCRIPTOR_HEAP_DESC* outReturnValue);
                        D3D12_CPU_DESCRIPTOR_HANDLE* (WINAPI *GetCPUDescriptorHandleForHeapStart)(ID3D12DescriptorHeap* self, D3D12_CPU_DESCRIPTOR_HANDLE* outReturnValue);
                        D3D12_GPU_DESCRIPTOR_HANDLE* (WINAPI *GetGPUDescriptorHandleForHeapStart)(ID3D12DescriptorHeap* self, D3D12_GPU_DESCRIPTOR_HANDLE* outReturnValue);
            
        } ID3D12DescriptorHeapTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
            
        } ID3D12QueryHeapTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
            
        } ID3D12CommandSignatureTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        D3D12_COMMAND_LIST_TYPE (WINAPI *GetType)(ID3D12CommandList* self);
            
        } ID3D12CommandListTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        D3D12_COMMAND_LIST_TYPE (WINAPI *GetType)(ID3D12CommandList* self);
                        HRESULT (WINAPI *Close)(ID3D12GraphicsCommandList* self);
                        HRESULT (WINAPI *Reset)(ID3D12GraphicsCommandList* self, ID3D12CommandAllocator * pAllocator, ID3D12PipelineState * pInitialState);
                        void (WINAPI *ClearState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState);
                        void (WINAPI *DrawInstanced)(ID3D12GraphicsCommandList* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *DrawIndexedInstanced)(ID3D12GraphicsCommandList* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *Dispatch)(ID3D12GraphicsCommandList* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ);
                        void (WINAPI *CopyBufferRegion)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT64 NumBytes);
                        void (WINAPI *CopyTextureRegion)(ID3D12GraphicsCommandList* self, const D3D12_TEXTURE_COPY_LOCATION * pDst, UINT DstX, UINT DstY, UINT DstZ, const D3D12_TEXTURE_COPY_LOCATION * pSrc, const D3D12_BOX * pSrcBox);
                        void (WINAPI *CopyResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, ID3D12Resource * pSrcResource);
                        void (WINAPI *CopyTiles)(ID3D12GraphicsCommandList* self, ID3D12Resource * pTiledResource, const D3D12_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pTileRegionSize, ID3D12Resource * pBuffer, UINT64 BufferStartOffsetInBytes, D3D12_TILE_COPY_FLAGS Flags);
                        void (WINAPI *ResolveSubresource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, UINT DstSubresource, ID3D12Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D12GraphicsCommandList* self, D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology);
                        void (WINAPI *RSSetViewports)(ID3D12GraphicsCommandList* self, UINT NumViewports, const D3D12_VIEWPORT * pViewports);
                        void (WINAPI *RSSetScissorRects)(ID3D12GraphicsCommandList* self, UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *OMSetBlendFactor)(ID3D12GraphicsCommandList* self, const FLOAT  BlendFactor[4]);
                        void (WINAPI *OMSetStencilRef)(ID3D12GraphicsCommandList* self, UINT StencilRef);
                        void (WINAPI *SetPipelineState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState);
                        void (WINAPI *ResourceBarrier)(ID3D12GraphicsCommandList* self, UINT NumBarriers, const D3D12_RESOURCE_BARRIER * pBarriers);
                        void (WINAPI *ExecuteBundle)(ID3D12GraphicsCommandList* self, ID3D12GraphicsCommandList * pCommandList);
                        void (WINAPI *SetDescriptorHeaps)(ID3D12GraphicsCommandList* self, UINT NumDescriptorHeaps, ID3D12DescriptorHeap *const * ppDescriptorHeaps);
                        void (WINAPI *SetComputeRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature);
                        void (WINAPI *SetGraphicsRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature);
                        void (WINAPI *SetComputeRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
                        void (WINAPI *SetGraphicsRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
                        void (WINAPI *SetComputeRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetGraphicsRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetComputeRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetGraphicsRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetComputeRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetGraphicsRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetComputeRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetGraphicsRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetComputeRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetGraphicsRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *IASetIndexBuffer)(ID3D12GraphicsCommandList* self, const D3D12_INDEX_BUFFER_VIEW * pView);
                        void (WINAPI *IASetVertexBuffers)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_VERTEX_BUFFER_VIEW * pViews);
                        void (WINAPI *SOSetTargets)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_STREAM_OUTPUT_BUFFER_VIEW * pViews);
                        void (WINAPI *OMSetRenderTargets)(ID3D12GraphicsCommandList* self, UINT NumRenderTargetDescriptors, const D3D12_CPU_DESCRIPTOR_HANDLE * pRenderTargetDescriptors, BOOL RTsSingleHandleToDescriptorRange, const D3D12_CPU_DESCRIPTOR_HANDLE * pDepthStencilDescriptor);
                        void (WINAPI *ClearDepthStencilView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView, D3D12_CLEAR_FLAGS ClearFlags, FLOAT Depth, UINT8 Stencil, UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *ClearRenderTargetView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView, const FLOAT  ColorRGBA[4], UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const UINT  Values[4], UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const FLOAT  Values[4], UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *DiscardResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pResource, const D3D12_DISCARD_REGION * pRegion);
                        void (WINAPI *BeginQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index);
                        void (WINAPI *EndQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index);
                        void (WINAPI *ResolveQueryData)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT StartIndex, UINT NumQueries, ID3D12Resource * pDestinationBuffer, UINT64 AlignedDestinationBufferOffset);
                        void (WINAPI *SetPredication)(ID3D12GraphicsCommandList* self, ID3D12Resource * pBuffer, UINT64 AlignedBufferOffset, D3D12_PREDICATION_OP Operation);
                        void (WINAPI *SetMarker)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size);
                        void (WINAPI *BeginEvent)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size);
                        void (WINAPI *EndEvent)(ID3D12GraphicsCommandList* self);
                        void (WINAPI *ExecuteIndirect)(ID3D12GraphicsCommandList* self, ID3D12CommandSignature * pCommandSignature, UINT MaxCommandCount, ID3D12Resource * pArgumentBuffer, UINT64 ArgumentBufferOffset, ID3D12Resource * pCountBuffer, UINT64 CountBufferOffset);
            
        } ID3D12GraphicsCommandListTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        D3D12_COMMAND_LIST_TYPE (WINAPI *GetType)(ID3D12CommandList* self);
                        HRESULT (WINAPI *Close)(ID3D12GraphicsCommandList* self);
                        HRESULT (WINAPI *Reset)(ID3D12GraphicsCommandList* self, ID3D12CommandAllocator * pAllocator, ID3D12PipelineState * pInitialState);
                        void (WINAPI *ClearState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState);
                        void (WINAPI *DrawInstanced)(ID3D12GraphicsCommandList* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *DrawIndexedInstanced)(ID3D12GraphicsCommandList* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *Dispatch)(ID3D12GraphicsCommandList* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ);
                        void (WINAPI *CopyBufferRegion)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT64 NumBytes);
                        void (WINAPI *CopyTextureRegion)(ID3D12GraphicsCommandList* self, const D3D12_TEXTURE_COPY_LOCATION * pDst, UINT DstX, UINT DstY, UINT DstZ, const D3D12_TEXTURE_COPY_LOCATION * pSrc, const D3D12_BOX * pSrcBox);
                        void (WINAPI *CopyResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, ID3D12Resource * pSrcResource);
                        void (WINAPI *CopyTiles)(ID3D12GraphicsCommandList* self, ID3D12Resource * pTiledResource, const D3D12_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pTileRegionSize, ID3D12Resource * pBuffer, UINT64 BufferStartOffsetInBytes, D3D12_TILE_COPY_FLAGS Flags);
                        void (WINAPI *ResolveSubresource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, UINT DstSubresource, ID3D12Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D12GraphicsCommandList* self, D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology);
                        void (WINAPI *RSSetViewports)(ID3D12GraphicsCommandList* self, UINT NumViewports, const D3D12_VIEWPORT * pViewports);
                        void (WINAPI *RSSetScissorRects)(ID3D12GraphicsCommandList* self, UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *OMSetBlendFactor)(ID3D12GraphicsCommandList* self, const FLOAT  BlendFactor[4]);
                        void (WINAPI *OMSetStencilRef)(ID3D12GraphicsCommandList* self, UINT StencilRef);
                        void (WINAPI *SetPipelineState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState);
                        void (WINAPI *ResourceBarrier)(ID3D12GraphicsCommandList* self, UINT NumBarriers, const D3D12_RESOURCE_BARRIER * pBarriers);
                        void (WINAPI *ExecuteBundle)(ID3D12GraphicsCommandList* self, ID3D12GraphicsCommandList * pCommandList);
                        void (WINAPI *SetDescriptorHeaps)(ID3D12GraphicsCommandList* self, UINT NumDescriptorHeaps, ID3D12DescriptorHeap *const * ppDescriptorHeaps);
                        void (WINAPI *SetComputeRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature);
                        void (WINAPI *SetGraphicsRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature);
                        void (WINAPI *SetComputeRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
                        void (WINAPI *SetGraphicsRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
                        void (WINAPI *SetComputeRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetGraphicsRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetComputeRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetGraphicsRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetComputeRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetGraphicsRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetComputeRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetGraphicsRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetComputeRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetGraphicsRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *IASetIndexBuffer)(ID3D12GraphicsCommandList* self, const D3D12_INDEX_BUFFER_VIEW * pView);
                        void (WINAPI *IASetVertexBuffers)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_VERTEX_BUFFER_VIEW * pViews);
                        void (WINAPI *SOSetTargets)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_STREAM_OUTPUT_BUFFER_VIEW * pViews);
                        void (WINAPI *OMSetRenderTargets)(ID3D12GraphicsCommandList* self, UINT NumRenderTargetDescriptors, const D3D12_CPU_DESCRIPTOR_HANDLE * pRenderTargetDescriptors, BOOL RTsSingleHandleToDescriptorRange, const D3D12_CPU_DESCRIPTOR_HANDLE * pDepthStencilDescriptor);
                        void (WINAPI *ClearDepthStencilView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView, D3D12_CLEAR_FLAGS ClearFlags, FLOAT Depth, UINT8 Stencil, UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *ClearRenderTargetView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView, const FLOAT  ColorRGBA[4], UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const UINT  Values[4], UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const FLOAT  Values[4], UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *DiscardResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pResource, const D3D12_DISCARD_REGION * pRegion);
                        void (WINAPI *BeginQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index);
                        void (WINAPI *EndQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index);
                        void (WINAPI *ResolveQueryData)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT StartIndex, UINT NumQueries, ID3D12Resource * pDestinationBuffer, UINT64 AlignedDestinationBufferOffset);
                        void (WINAPI *SetPredication)(ID3D12GraphicsCommandList* self, ID3D12Resource * pBuffer, UINT64 AlignedBufferOffset, D3D12_PREDICATION_OP Operation);
                        void (WINAPI *SetMarker)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size);
                        void (WINAPI *BeginEvent)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size);
                        void (WINAPI *EndEvent)(ID3D12GraphicsCommandList* self);
                        void (WINAPI *ExecuteIndirect)(ID3D12GraphicsCommandList* self, ID3D12CommandSignature * pCommandSignature, UINT MaxCommandCount, ID3D12Resource * pArgumentBuffer, UINT64 ArgumentBufferOffset, ID3D12Resource * pCountBuffer, UINT64 CountBufferOffset);
                        void (WINAPI *AtomicCopyBufferUINT)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges);
                        void (WINAPI *AtomicCopyBufferUINT64)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges);
                        void (WINAPI *OMSetDepthBounds)(ID3D12GraphicsCommandList1* self, FLOAT Min, FLOAT Max);
                        void (WINAPI *SetSamplePositions)(ID3D12GraphicsCommandList1* self, UINT NumSamplesPerPixel, UINT NumPixels, D3D12_SAMPLE_POSITION * pSamplePositions);
                        void (WINAPI *ResolveSubresourceRegion)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, ID3D12Resource * pSrcResource, UINT SrcSubresource, D3D12_RECT * pSrcRect, DXGI_FORMAT Format, D3D12_RESOLVE_MODE ResolveMode);
                        void (WINAPI *SetViewInstanceMask)(ID3D12GraphicsCommandList1* self, UINT Mask);
            
        } ID3D12GraphicsCommandList1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        D3D12_COMMAND_LIST_TYPE (WINAPI *GetType)(ID3D12CommandList* self);
                        HRESULT (WINAPI *Close)(ID3D12GraphicsCommandList* self);
                        HRESULT (WINAPI *Reset)(ID3D12GraphicsCommandList* self, ID3D12CommandAllocator * pAllocator, ID3D12PipelineState * pInitialState);
                        void (WINAPI *ClearState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState);
                        void (WINAPI *DrawInstanced)(ID3D12GraphicsCommandList* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *DrawIndexedInstanced)(ID3D12GraphicsCommandList* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *Dispatch)(ID3D12GraphicsCommandList* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ);
                        void (WINAPI *CopyBufferRegion)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT64 NumBytes);
                        void (WINAPI *CopyTextureRegion)(ID3D12GraphicsCommandList* self, const D3D12_TEXTURE_COPY_LOCATION * pDst, UINT DstX, UINT DstY, UINT DstZ, const D3D12_TEXTURE_COPY_LOCATION * pSrc, const D3D12_BOX * pSrcBox);
                        void (WINAPI *CopyResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, ID3D12Resource * pSrcResource);
                        void (WINAPI *CopyTiles)(ID3D12GraphicsCommandList* self, ID3D12Resource * pTiledResource, const D3D12_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pTileRegionSize, ID3D12Resource * pBuffer, UINT64 BufferStartOffsetInBytes, D3D12_TILE_COPY_FLAGS Flags);
                        void (WINAPI *ResolveSubresource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, UINT DstSubresource, ID3D12Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D12GraphicsCommandList* self, D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology);
                        void (WINAPI *RSSetViewports)(ID3D12GraphicsCommandList* self, UINT NumViewports, const D3D12_VIEWPORT * pViewports);
                        void (WINAPI *RSSetScissorRects)(ID3D12GraphicsCommandList* self, UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *OMSetBlendFactor)(ID3D12GraphicsCommandList* self, const FLOAT  BlendFactor[4]);
                        void (WINAPI *OMSetStencilRef)(ID3D12GraphicsCommandList* self, UINT StencilRef);
                        void (WINAPI *SetPipelineState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState);
                        void (WINAPI *ResourceBarrier)(ID3D12GraphicsCommandList* self, UINT NumBarriers, const D3D12_RESOURCE_BARRIER * pBarriers);
                        void (WINAPI *ExecuteBundle)(ID3D12GraphicsCommandList* self, ID3D12GraphicsCommandList * pCommandList);
                        void (WINAPI *SetDescriptorHeaps)(ID3D12GraphicsCommandList* self, UINT NumDescriptorHeaps, ID3D12DescriptorHeap *const * ppDescriptorHeaps);
                        void (WINAPI *SetComputeRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature);
                        void (WINAPI *SetGraphicsRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature);
                        void (WINAPI *SetComputeRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
                        void (WINAPI *SetGraphicsRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
                        void (WINAPI *SetComputeRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetGraphicsRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetComputeRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetGraphicsRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetComputeRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetGraphicsRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetComputeRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetGraphicsRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetComputeRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetGraphicsRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *IASetIndexBuffer)(ID3D12GraphicsCommandList* self, const D3D12_INDEX_BUFFER_VIEW * pView);
                        void (WINAPI *IASetVertexBuffers)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_VERTEX_BUFFER_VIEW * pViews);
                        void (WINAPI *SOSetTargets)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_STREAM_OUTPUT_BUFFER_VIEW * pViews);
                        void (WINAPI *OMSetRenderTargets)(ID3D12GraphicsCommandList* self, UINT NumRenderTargetDescriptors, const D3D12_CPU_DESCRIPTOR_HANDLE * pRenderTargetDescriptors, BOOL RTsSingleHandleToDescriptorRange, const D3D12_CPU_DESCRIPTOR_HANDLE * pDepthStencilDescriptor);
                        void (WINAPI *ClearDepthStencilView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView, D3D12_CLEAR_FLAGS ClearFlags, FLOAT Depth, UINT8 Stencil, UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *ClearRenderTargetView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView, const FLOAT  ColorRGBA[4], UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const UINT  Values[4], UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const FLOAT  Values[4], UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *DiscardResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pResource, const D3D12_DISCARD_REGION * pRegion);
                        void (WINAPI *BeginQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index);
                        void (WINAPI *EndQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index);
                        void (WINAPI *ResolveQueryData)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT StartIndex, UINT NumQueries, ID3D12Resource * pDestinationBuffer, UINT64 AlignedDestinationBufferOffset);
                        void (WINAPI *SetPredication)(ID3D12GraphicsCommandList* self, ID3D12Resource * pBuffer, UINT64 AlignedBufferOffset, D3D12_PREDICATION_OP Operation);
                        void (WINAPI *SetMarker)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size);
                        void (WINAPI *BeginEvent)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size);
                        void (WINAPI *EndEvent)(ID3D12GraphicsCommandList* self);
                        void (WINAPI *ExecuteIndirect)(ID3D12GraphicsCommandList* self, ID3D12CommandSignature * pCommandSignature, UINT MaxCommandCount, ID3D12Resource * pArgumentBuffer, UINT64 ArgumentBufferOffset, ID3D12Resource * pCountBuffer, UINT64 CountBufferOffset);
                        void (WINAPI *AtomicCopyBufferUINT)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges);
                        void (WINAPI *AtomicCopyBufferUINT64)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges);
                        void (WINAPI *OMSetDepthBounds)(ID3D12GraphicsCommandList1* self, FLOAT Min, FLOAT Max);
                        void (WINAPI *SetSamplePositions)(ID3D12GraphicsCommandList1* self, UINT NumSamplesPerPixel, UINT NumPixels, D3D12_SAMPLE_POSITION * pSamplePositions);
                        void (WINAPI *ResolveSubresourceRegion)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, ID3D12Resource * pSrcResource, UINT SrcSubresource, D3D12_RECT * pSrcRect, DXGI_FORMAT Format, D3D12_RESOLVE_MODE ResolveMode);
                        void (WINAPI *SetViewInstanceMask)(ID3D12GraphicsCommandList1* self, UINT Mask);
                        void (WINAPI *WriteBufferImmediate)(ID3D12GraphicsCommandList2* self, UINT Count, const D3D12_WRITEBUFFERIMMEDIATE_PARAMETER * pParams, const D3D12_WRITEBUFFERIMMEDIATE_MODE * pModes);
            
        } ID3D12GraphicsCommandList2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        void (WINAPI *UpdateTileMappings)(ID3D12CommandQueue* self, ID3D12Resource * pResource, UINT NumResourceRegions, const D3D12_TILED_RESOURCE_COORDINATE * pResourceRegionStartCoordinates, const D3D12_TILE_REGION_SIZE * pResourceRegionSizes, ID3D12Heap * pHeap, UINT NumRanges, const D3D12_TILE_RANGE_FLAGS * pRangeFlags, const UINT * pHeapRangeStartOffsets, const UINT * pRangeTileCounts, D3D12_TILE_MAPPING_FLAGS Flags);
                        void (WINAPI *CopyTileMappings)(ID3D12CommandQueue* self, ID3D12Resource * pDstResource, const D3D12_TILED_RESOURCE_COORDINATE * pDstRegionStartCoordinate, ID3D12Resource * pSrcResource, const D3D12_TILED_RESOURCE_COORDINATE * pSrcRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pRegionSize, D3D12_TILE_MAPPING_FLAGS Flags);
                        void (WINAPI *ExecuteCommandLists)(ID3D12CommandQueue* self, UINT NumCommandLists, ID3D12CommandList *const * ppCommandLists);
                        void (WINAPI *SetMarker)(ID3D12CommandQueue* self, UINT Metadata, const void * pData, UINT Size);
                        void (WINAPI *BeginEvent)(ID3D12CommandQueue* self, UINT Metadata, const void * pData, UINT Size);
                        void (WINAPI *EndEvent)(ID3D12CommandQueue* self);
                        HRESULT (WINAPI *Signal)(ID3D12CommandQueue* self, ID3D12Fence * pFence, UINT64 Value);
                        HRESULT (WINAPI *Wait)(ID3D12CommandQueue* self, ID3D12Fence * pFence, UINT64 Value);
                        HRESULT (WINAPI *GetTimestampFrequency)(ID3D12CommandQueue* self, UINT64 * pFrequency);
                        HRESULT (WINAPI *GetClockCalibration)(ID3D12CommandQueue* self, UINT64 * pGpuTimestamp, UINT64 * pCpuTimestamp);
                        D3D12_COMMAND_QUEUE_DESC* (WINAPI *GetDesc)(ID3D12CommandQueue* self, D3D12_COMMAND_QUEUE_DESC* outReturnValue);
            
        } ID3D12CommandQueueTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        UINT (WINAPI *GetNodeCount)(ID3D12Device* self);
                        HRESULT (WINAPI *CreateCommandQueue)(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue);
                        HRESULT (WINAPI *CreateCommandAllocator)(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator);
                        HRESULT (WINAPI *CreateGraphicsPipelineState)(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        HRESULT (WINAPI *CreateComputePipelineState)(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        HRESULT (WINAPI *CreateCommandList)(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize);
                        HRESULT (WINAPI *CreateDescriptorHeap)(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap);
                        UINT (WINAPI *GetDescriptorHandleIncrementSize)(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType);
                        HRESULT (WINAPI *CreateRootSignature)(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature);
                        void (WINAPI *CreateConstantBufferView)(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateShaderResourceView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateUnorderedAccessView)(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateRenderTargetView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateDepthStencilView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateSampler)(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CopyDescriptors)(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
                        void (WINAPI *CopyDescriptorsSimple)(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
                        D3D12_RESOURCE_ALLOCATION_INFO* (WINAPI *GetResourceAllocationInfo)(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs);
                        D3D12_HEAP_PROPERTIES* (WINAPI *GetCustomHeapProperties)(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType);
                        HRESULT (WINAPI *CreateCommittedResource)(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource);
                        HRESULT (WINAPI *CreateHeap)(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *CreatePlacedResource)(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource);
                        HRESULT (WINAPI *CreateReservedResource)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource);
                        HRESULT (WINAPI *CreateSharedHandle)(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle);
                        HRESULT (WINAPI *OpenSharedHandle)(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj);
                        HRESULT (WINAPI *OpenSharedHandleByName)(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle);
                        HRESULT (WINAPI *MakeResident)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects);
                        HRESULT (WINAPI *Evict)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects);
                        HRESULT (WINAPI *CreateFence)(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D12Device* self);
                        void (WINAPI *GetCopyableFootprints)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes);
                        HRESULT (WINAPI *CreateQueryHeap)(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *SetStablePowerState)(ID3D12Device* self, BOOL Enable);
                        HRESULT (WINAPI *CreateCommandSignature)(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature);
                        void (WINAPI *GetResourceTiling)(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips);
                        LUID* (WINAPI *GetAdapterLuid)(ID3D12Device* self, LUID* outReturnValue);
            
        } ID3D12DeviceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        HRESULT (WINAPI *StorePipeline)(ID3D12PipelineLibrary* self, LPCWSTR pName, ID3D12PipelineState * pPipeline);
                        HRESULT (WINAPI *LoadGraphicsPipeline)(ID3D12PipelineLibrary* self, LPCWSTR pName, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        HRESULT (WINAPI *LoadComputePipeline)(ID3D12PipelineLibrary* self, LPCWSTR pName, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        SIZE_T (WINAPI *GetSerializedSize)(ID3D12PipelineLibrary* self);
                        HRESULT (WINAPI *Serialize)(ID3D12PipelineLibrary* self, void * pData, SIZE_T DataSizeInBytes);
            
        } ID3D12PipelineLibraryTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        HRESULT (WINAPI *StorePipeline)(ID3D12PipelineLibrary* self, LPCWSTR pName, ID3D12PipelineState * pPipeline);
                        HRESULT (WINAPI *LoadGraphicsPipeline)(ID3D12PipelineLibrary* self, LPCWSTR pName, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        HRESULT (WINAPI *LoadComputePipeline)(ID3D12PipelineLibrary* self, LPCWSTR pName, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        SIZE_T (WINAPI *GetSerializedSize)(ID3D12PipelineLibrary* self);
                        HRESULT (WINAPI *Serialize)(ID3D12PipelineLibrary* self, void * pData, SIZE_T DataSizeInBytes);
                        HRESULT (WINAPI *LoadPipeline)(ID3D12PipelineLibrary1* self, LPCWSTR pName, const D3D12_PIPELINE_STATE_STREAM_DESC * pDesc, const IID & riid, void ** ppPipelineState);
            
        } ID3D12PipelineLibrary1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        UINT (WINAPI *GetNodeCount)(ID3D12Device* self);
                        HRESULT (WINAPI *CreateCommandQueue)(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue);
                        HRESULT (WINAPI *CreateCommandAllocator)(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator);
                        HRESULT (WINAPI *CreateGraphicsPipelineState)(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        HRESULT (WINAPI *CreateComputePipelineState)(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        HRESULT (WINAPI *CreateCommandList)(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize);
                        HRESULT (WINAPI *CreateDescriptorHeap)(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap);
                        UINT (WINAPI *GetDescriptorHandleIncrementSize)(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType);
                        HRESULT (WINAPI *CreateRootSignature)(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature);
                        void (WINAPI *CreateConstantBufferView)(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateShaderResourceView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateUnorderedAccessView)(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateRenderTargetView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateDepthStencilView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateSampler)(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CopyDescriptors)(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
                        void (WINAPI *CopyDescriptorsSimple)(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
                        D3D12_RESOURCE_ALLOCATION_INFO* (WINAPI *GetResourceAllocationInfo)(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs);
                        D3D12_HEAP_PROPERTIES* (WINAPI *GetCustomHeapProperties)(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType);
                        HRESULT (WINAPI *CreateCommittedResource)(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource);
                        HRESULT (WINAPI *CreateHeap)(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *CreatePlacedResource)(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource);
                        HRESULT (WINAPI *CreateReservedResource)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource);
                        HRESULT (WINAPI *CreateSharedHandle)(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle);
                        HRESULT (WINAPI *OpenSharedHandle)(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj);
                        HRESULT (WINAPI *OpenSharedHandleByName)(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle);
                        HRESULT (WINAPI *MakeResident)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects);
                        HRESULT (WINAPI *Evict)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects);
                        HRESULT (WINAPI *CreateFence)(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D12Device* self);
                        void (WINAPI *GetCopyableFootprints)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes);
                        HRESULT (WINAPI *CreateQueryHeap)(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *SetStablePowerState)(ID3D12Device* self, BOOL Enable);
                        HRESULT (WINAPI *CreateCommandSignature)(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature);
                        void (WINAPI *GetResourceTiling)(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips);
                        LUID* (WINAPI *GetAdapterLuid)(ID3D12Device* self, LUID* outReturnValue);
                        HRESULT (WINAPI *CreatePipelineLibrary)(ID3D12Device1* self, const void * pLibraryBlob, SIZE_T BlobLength, const IID & riid, void ** ppPipelineLibrary);
                        HRESULT (WINAPI *SetEventOnMultipleFenceCompletion)(ID3D12Device1* self, ID3D12Fence *const * ppFences, const UINT64 * pFenceValues, UINT NumFences, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags, HANDLE hEvent);
                        HRESULT (WINAPI *SetResidencyPriority)(ID3D12Device1* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, const D3D12_RESIDENCY_PRIORITY * pPriorities);
            
        } ID3D12Device1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        UINT (WINAPI *GetNodeCount)(ID3D12Device* self);
                        HRESULT (WINAPI *CreateCommandQueue)(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue);
                        HRESULT (WINAPI *CreateCommandAllocator)(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator);
                        HRESULT (WINAPI *CreateGraphicsPipelineState)(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        HRESULT (WINAPI *CreateComputePipelineState)(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        HRESULT (WINAPI *CreateCommandList)(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize);
                        HRESULT (WINAPI *CreateDescriptorHeap)(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap);
                        UINT (WINAPI *GetDescriptorHandleIncrementSize)(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType);
                        HRESULT (WINAPI *CreateRootSignature)(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature);
                        void (WINAPI *CreateConstantBufferView)(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateShaderResourceView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateUnorderedAccessView)(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateRenderTargetView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateDepthStencilView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateSampler)(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CopyDescriptors)(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
                        void (WINAPI *CopyDescriptorsSimple)(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
                        D3D12_RESOURCE_ALLOCATION_INFO* (WINAPI *GetResourceAllocationInfo)(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs);
                        D3D12_HEAP_PROPERTIES* (WINAPI *GetCustomHeapProperties)(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType);
                        HRESULT (WINAPI *CreateCommittedResource)(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource);
                        HRESULT (WINAPI *CreateHeap)(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *CreatePlacedResource)(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource);
                        HRESULT (WINAPI *CreateReservedResource)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource);
                        HRESULT (WINAPI *CreateSharedHandle)(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle);
                        HRESULT (WINAPI *OpenSharedHandle)(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj);
                        HRESULT (WINAPI *OpenSharedHandleByName)(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle);
                        HRESULT (WINAPI *MakeResident)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects);
                        HRESULT (WINAPI *Evict)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects);
                        HRESULT (WINAPI *CreateFence)(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D12Device* self);
                        void (WINAPI *GetCopyableFootprints)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes);
                        HRESULT (WINAPI *CreateQueryHeap)(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *SetStablePowerState)(ID3D12Device* self, BOOL Enable);
                        HRESULT (WINAPI *CreateCommandSignature)(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature);
                        void (WINAPI *GetResourceTiling)(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips);
                        LUID* (WINAPI *GetAdapterLuid)(ID3D12Device* self, LUID* outReturnValue);
                        HRESULT (WINAPI *CreatePipelineLibrary)(ID3D12Device1* self, const void * pLibraryBlob, SIZE_T BlobLength, const IID & riid, void ** ppPipelineLibrary);
                        HRESULT (WINAPI *SetEventOnMultipleFenceCompletion)(ID3D12Device1* self, ID3D12Fence *const * ppFences, const UINT64 * pFenceValues, UINT NumFences, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags, HANDLE hEvent);
                        HRESULT (WINAPI *SetResidencyPriority)(ID3D12Device1* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, const D3D12_RESIDENCY_PRIORITY * pPriorities);
                        HRESULT (WINAPI *CreatePipelineState)(ID3D12Device2* self, const D3D12_PIPELINE_STATE_STREAM_DESC * pDesc, const IID & riid, void ** ppPipelineState);
            
        } ID3D12Device2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        UINT (WINAPI *GetNodeCount)(ID3D12Device* self);
                        HRESULT (WINAPI *CreateCommandQueue)(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue);
                        HRESULT (WINAPI *CreateCommandAllocator)(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator);
                        HRESULT (WINAPI *CreateGraphicsPipelineState)(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        HRESULT (WINAPI *CreateComputePipelineState)(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        HRESULT (WINAPI *CreateCommandList)(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize);
                        HRESULT (WINAPI *CreateDescriptorHeap)(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap);
                        UINT (WINAPI *GetDescriptorHandleIncrementSize)(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType);
                        HRESULT (WINAPI *CreateRootSignature)(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature);
                        void (WINAPI *CreateConstantBufferView)(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateShaderResourceView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateUnorderedAccessView)(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateRenderTargetView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateDepthStencilView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateSampler)(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CopyDescriptors)(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
                        void (WINAPI *CopyDescriptorsSimple)(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
                        D3D12_RESOURCE_ALLOCATION_INFO* (WINAPI *GetResourceAllocationInfo)(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs);
                        D3D12_HEAP_PROPERTIES* (WINAPI *GetCustomHeapProperties)(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType);
                        HRESULT (WINAPI *CreateCommittedResource)(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource);
                        HRESULT (WINAPI *CreateHeap)(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *CreatePlacedResource)(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource);
                        HRESULT (WINAPI *CreateReservedResource)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource);
                        HRESULT (WINAPI *CreateSharedHandle)(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle);
                        HRESULT (WINAPI *OpenSharedHandle)(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj);
                        HRESULT (WINAPI *OpenSharedHandleByName)(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle);
                        HRESULT (WINAPI *MakeResident)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects);
                        HRESULT (WINAPI *Evict)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects);
                        HRESULT (WINAPI *CreateFence)(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D12Device* self);
                        void (WINAPI *GetCopyableFootprints)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes);
                        HRESULT (WINAPI *CreateQueryHeap)(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *SetStablePowerState)(ID3D12Device* self, BOOL Enable);
                        HRESULT (WINAPI *CreateCommandSignature)(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature);
                        void (WINAPI *GetResourceTiling)(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips);
                        LUID* (WINAPI *GetAdapterLuid)(ID3D12Device* self, LUID* outReturnValue);
                        HRESULT (WINAPI *CreatePipelineLibrary)(ID3D12Device1* self, const void * pLibraryBlob, SIZE_T BlobLength, const IID & riid, void ** ppPipelineLibrary);
                        HRESULT (WINAPI *SetEventOnMultipleFenceCompletion)(ID3D12Device1* self, ID3D12Fence *const * ppFences, const UINT64 * pFenceValues, UINT NumFences, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags, HANDLE hEvent);
                        HRESULT (WINAPI *SetResidencyPriority)(ID3D12Device1* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, const D3D12_RESIDENCY_PRIORITY * pPriorities);
                        HRESULT (WINAPI *CreatePipelineState)(ID3D12Device2* self, const D3D12_PIPELINE_STATE_STREAM_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        HRESULT (WINAPI *OpenExistingHeapFromAddress)(ID3D12Device3* self, const void * pAddress, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *OpenExistingHeapFromFileMapping)(ID3D12Device3* self, HANDLE hFileMapping, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *EnqueueMakeResident)(ID3D12Device3* self, D3D12_RESIDENCY_FLAGS Flags, UINT NumObjects, ID3D12Pageable *const * ppObjects, ID3D12Fence * pFenceToSignal, UINT64 FenceValueToSignal);
            
        } ID3D12Device3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        HRESULT (WINAPI *GetStatusFence)(ID3D12ProtectedSession* self, const IID & riid, void ** ppFence);
                        D3D12_PROTECTED_SESSION_STATUS (WINAPI *GetSessionStatus)(ID3D12ProtectedSession* self);
            
        } ID3D12ProtectedSessionTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        HRESULT (WINAPI *GetStatusFence)(ID3D12ProtectedSession* self, const IID & riid, void ** ppFence);
                        D3D12_PROTECTED_SESSION_STATUS (WINAPI *GetSessionStatus)(ID3D12ProtectedSession* self);
                        D3D12_PROTECTED_RESOURCE_SESSION_DESC* (WINAPI *GetDesc)(ID3D12ProtectedResourceSession* self, D3D12_PROTECTED_RESOURCE_SESSION_DESC* outReturnValue);
            
        } ID3D12ProtectedResourceSessionTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        UINT (WINAPI *GetNodeCount)(ID3D12Device* self);
                        HRESULT (WINAPI *CreateCommandQueue)(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue);
                        HRESULT (WINAPI *CreateCommandAllocator)(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator);
                        HRESULT (WINAPI *CreateGraphicsPipelineState)(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        HRESULT (WINAPI *CreateComputePipelineState)(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        HRESULT (WINAPI *CreateCommandList)(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize);
                        HRESULT (WINAPI *CreateDescriptorHeap)(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap);
                        UINT (WINAPI *GetDescriptorHandleIncrementSize)(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType);
                        HRESULT (WINAPI *CreateRootSignature)(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature);
                        void (WINAPI *CreateConstantBufferView)(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateShaderResourceView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateUnorderedAccessView)(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateRenderTargetView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateDepthStencilView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateSampler)(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CopyDescriptors)(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
                        void (WINAPI *CopyDescriptorsSimple)(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
                        D3D12_RESOURCE_ALLOCATION_INFO* (WINAPI *GetResourceAllocationInfo)(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs);
                        D3D12_HEAP_PROPERTIES* (WINAPI *GetCustomHeapProperties)(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType);
                        HRESULT (WINAPI *CreateCommittedResource)(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource);
                        HRESULT (WINAPI *CreateHeap)(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *CreatePlacedResource)(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource);
                        HRESULT (WINAPI *CreateReservedResource)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource);
                        HRESULT (WINAPI *CreateSharedHandle)(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle);
                        HRESULT (WINAPI *OpenSharedHandle)(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj);
                        HRESULT (WINAPI *OpenSharedHandleByName)(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle);
                        HRESULT (WINAPI *MakeResident)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects);
                        HRESULT (WINAPI *Evict)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects);
                        HRESULT (WINAPI *CreateFence)(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D12Device* self);
                        void (WINAPI *GetCopyableFootprints)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes);
                        HRESULT (WINAPI *CreateQueryHeap)(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *SetStablePowerState)(ID3D12Device* self, BOOL Enable);
                        HRESULT (WINAPI *CreateCommandSignature)(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature);
                        void (WINAPI *GetResourceTiling)(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips);
                        LUID* (WINAPI *GetAdapterLuid)(ID3D12Device* self, LUID* outReturnValue);
                        HRESULT (WINAPI *CreatePipelineLibrary)(ID3D12Device1* self, const void * pLibraryBlob, SIZE_T BlobLength, const IID & riid, void ** ppPipelineLibrary);
                        HRESULT (WINAPI *SetEventOnMultipleFenceCompletion)(ID3D12Device1* self, ID3D12Fence *const * ppFences, const UINT64 * pFenceValues, UINT NumFences, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags, HANDLE hEvent);
                        HRESULT (WINAPI *SetResidencyPriority)(ID3D12Device1* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, const D3D12_RESIDENCY_PRIORITY * pPriorities);
                        HRESULT (WINAPI *CreatePipelineState)(ID3D12Device2* self, const D3D12_PIPELINE_STATE_STREAM_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        HRESULT (WINAPI *OpenExistingHeapFromAddress)(ID3D12Device3* self, const void * pAddress, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *OpenExistingHeapFromFileMapping)(ID3D12Device3* self, HANDLE hFileMapping, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *EnqueueMakeResident)(ID3D12Device3* self, D3D12_RESIDENCY_FLAGS Flags, UINT NumObjects, ID3D12Pageable *const * ppObjects, ID3D12Fence * pFenceToSignal, UINT64 FenceValueToSignal);
                        HRESULT (WINAPI *CreateCommandList1)(ID3D12Device4* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, D3D12_COMMAND_LIST_FLAGS flags, const IID & riid, void ** ppCommandList);
                        HRESULT (WINAPI *CreateProtectedResourceSession)(ID3D12Device4* self, const D3D12_PROTECTED_RESOURCE_SESSION_DESC * pDesc, const IID & riid, void ** ppSession);
                        HRESULT (WINAPI *CreateCommittedResource1)(ID3D12Device4* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riidResource, void ** ppvResource);
                        HRESULT (WINAPI *CreateHeap1)(ID3D12Device4* self, const D3D12_HEAP_DESC * pDesc, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *CreateReservedResource1)(ID3D12Device4* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riid, void ** ppvResource);
                        D3D12_RESOURCE_ALLOCATION_INFO* (WINAPI *GetResourceAllocationInfo1)(ID3D12Device4* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, D3D12_RESOURCE_ALLOCATION_INFO1 * pResourceAllocationInfo1);
            
        } ID3D12Device4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *LifetimeStateUpdated)(ID3D12LifetimeOwner* self, D3D12_LIFETIME_STATE NewState);
            
        } ID3D12LifetimeOwnerTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        LUID* (WINAPI *GetLUID)(ID3D12SwapChainAssistant* self, LUID* outReturnValue);
                        HRESULT (WINAPI *GetSwapChainObject)(ID3D12SwapChainAssistant* self, const IID & riid, void ** ppv);
                        HRESULT (WINAPI *GetCurrentResourceAndCommandQueue)(ID3D12SwapChainAssistant* self, const IID & riidResource, void ** ppvResource, const IID & riidQueue, void ** ppvQueue);
                        HRESULT (WINAPI *InsertImplicitSync)(ID3D12SwapChainAssistant* self);
            
        } ID3D12SwapChainAssistantTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        HRESULT (WINAPI *DestroyOwnedObject)(ID3D12LifetimeTracker* self, ID3D12DeviceChild * pObject);
            
        } ID3D12LifetimeTrackerTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
            
        } ID3D12StateObjectTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void * (WINAPI *GetShaderIdentifier)(ID3D12StateObjectProperties* self, LPCWSTR pExportName);
                        UINT64 (WINAPI *GetShaderStackSize)(ID3D12StateObjectProperties* self, LPCWSTR pExportName);
                        UINT64 (WINAPI *GetPipelineStackSize)(ID3D12StateObjectProperties* self);
                        void (WINAPI *SetPipelineStackSize)(ID3D12StateObjectProperties* self, UINT64 PipelineStackSizeInBytes);
            
        } ID3D12StateObjectPropertiesTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        UINT (WINAPI *GetNodeCount)(ID3D12Device* self);
                        HRESULT (WINAPI *CreateCommandQueue)(ID3D12Device* self, const D3D12_COMMAND_QUEUE_DESC * pDesc, const IID & riid, void ** ppCommandQueue);
                        HRESULT (WINAPI *CreateCommandAllocator)(ID3D12Device* self, D3D12_COMMAND_LIST_TYPE type, const IID & riid, void ** ppCommandAllocator);
                        HRESULT (WINAPI *CreateGraphicsPipelineState)(ID3D12Device* self, const D3D12_GRAPHICS_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        HRESULT (WINAPI *CreateComputePipelineState)(ID3D12Device* self, const D3D12_COMPUTE_PIPELINE_STATE_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        HRESULT (WINAPI *CreateCommandList)(ID3D12Device* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, ID3D12CommandAllocator * pCommandAllocator, ID3D12PipelineState * pInitialState, const IID & riid, void ** ppCommandList);
                        HRESULT (WINAPI *CheckFeatureSupport)(ID3D12Device* self, D3D12_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize);
                        HRESULT (WINAPI *CreateDescriptorHeap)(ID3D12Device* self, const D3D12_DESCRIPTOR_HEAP_DESC * pDescriptorHeapDesc, const IID & riid, void ** ppvHeap);
                        UINT (WINAPI *GetDescriptorHandleIncrementSize)(ID3D12Device* self, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapType);
                        HRESULT (WINAPI *CreateRootSignature)(ID3D12Device* self, UINT nodeMask, const void * pBlobWithRootSignature, SIZE_T blobLengthInBytes, const IID & riid, void ** ppvRootSignature);
                        void (WINAPI *CreateConstantBufferView)(ID3D12Device* self, const D3D12_CONSTANT_BUFFER_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateShaderResourceView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_SHADER_RESOURCE_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateUnorderedAccessView)(ID3D12Device* self, ID3D12Resource * pResource, ID3D12Resource * pCounterResource, const D3D12_UNORDERED_ACCESS_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateRenderTargetView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_RENDER_TARGET_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateDepthStencilView)(ID3D12Device* self, ID3D12Resource * pResource, const D3D12_DEPTH_STENCIL_VIEW_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CreateSampler)(ID3D12Device* self, const D3D12_SAMPLER_DESC * pDesc, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptor);
                        void (WINAPI *CopyDescriptors)(ID3D12Device* self, UINT NumDestDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pDestDescriptorRangeStarts, const UINT * pDestDescriptorRangeSizes, UINT NumSrcDescriptorRanges, const D3D12_CPU_DESCRIPTOR_HANDLE * pSrcDescriptorRangeStarts, const UINT * pSrcDescriptorRangeSizes, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
                        void (WINAPI *CopyDescriptorsSimple)(ID3D12Device* self, UINT NumDescriptors, D3D12_CPU_DESCRIPTOR_HANDLE DestDescriptorRangeStart, D3D12_CPU_DESCRIPTOR_HANDLE SrcDescriptorRangeStart, D3D12_DESCRIPTOR_HEAP_TYPE DescriptorHeapsType);
                        D3D12_RESOURCE_ALLOCATION_INFO* (WINAPI *GetResourceAllocationInfo)(ID3D12Device* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs);
                        D3D12_HEAP_PROPERTIES* (WINAPI *GetCustomHeapProperties)(ID3D12Device* self, D3D12_HEAP_PROPERTIES* outReturnValue, UINT nodeMask, D3D12_HEAP_TYPE heapType);
                        HRESULT (WINAPI *CreateCommittedResource)(ID3D12Device* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riidResource, void ** ppvResource);
                        HRESULT (WINAPI *CreateHeap)(ID3D12Device* self, const D3D12_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *CreatePlacedResource)(ID3D12Device* self, ID3D12Heap * pHeap, UINT64 HeapOffset, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource);
                        HRESULT (WINAPI *CreateReservedResource)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, const IID & riid, void ** ppvResource);
                        HRESULT (WINAPI *CreateSharedHandle)(ID3D12Device* self, ID3D12DeviceChild * pObject, const SECURITY_ATTRIBUTES * pAttributes, DWORD Access, LPCWSTR Name, HANDLE * pHandle);
                        HRESULT (WINAPI *OpenSharedHandle)(ID3D12Device* self, HANDLE NTHandle, const IID & riid, void ** ppvObj);
                        HRESULT (WINAPI *OpenSharedHandleByName)(ID3D12Device* self, LPCWSTR Name, DWORD Access, HANDLE * pNTHandle);
                        HRESULT (WINAPI *MakeResident)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects);
                        HRESULT (WINAPI *Evict)(ID3D12Device* self, UINT NumObjects, ID3D12Pageable *const * ppObjects);
                        HRESULT (WINAPI *CreateFence)(ID3D12Device* self, UINT64 InitialValue, D3D12_FENCE_FLAGS Flags, const IID & riid, void ** ppFence);
                        HRESULT (WINAPI *GetDeviceRemovedReason)(ID3D12Device* self);
                        void (WINAPI *GetCopyableFootprints)(ID3D12Device* self, const D3D12_RESOURCE_DESC * pResourceDesc, UINT FirstSubresource, UINT NumSubresources, UINT64 BaseOffset, D3D12_PLACED_SUBRESOURCE_FOOTPRINT * pLayouts, UINT * pNumRows, UINT64 * pRowSizeInBytes, UINT64 * pTotalBytes);
                        HRESULT (WINAPI *CreateQueryHeap)(ID3D12Device* self, const D3D12_QUERY_HEAP_DESC * pDesc, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *SetStablePowerState)(ID3D12Device* self, BOOL Enable);
                        HRESULT (WINAPI *CreateCommandSignature)(ID3D12Device* self, const D3D12_COMMAND_SIGNATURE_DESC * pDesc, ID3D12RootSignature * pRootSignature, const IID & riid, void ** ppvCommandSignature);
                        void (WINAPI *GetResourceTiling)(ID3D12Device* self, ID3D12Resource * pTiledResource, UINT * pNumTilesForEntireResource, D3D12_PACKED_MIP_INFO * pPackedMipDesc, D3D12_TILE_SHAPE * pStandardTileShapeForNonPackedMips, UINT * pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D12_SUBRESOURCE_TILING * pSubresourceTilingsForNonPackedMips);
                        LUID* (WINAPI *GetAdapterLuid)(ID3D12Device* self, LUID* outReturnValue);
                        HRESULT (WINAPI *CreatePipelineLibrary)(ID3D12Device1* self, const void * pLibraryBlob, SIZE_T BlobLength, const IID & riid, void ** ppPipelineLibrary);
                        HRESULT (WINAPI *SetEventOnMultipleFenceCompletion)(ID3D12Device1* self, ID3D12Fence *const * ppFences, const UINT64 * pFenceValues, UINT NumFences, D3D12_MULTIPLE_FENCE_WAIT_FLAGS Flags, HANDLE hEvent);
                        HRESULT (WINAPI *SetResidencyPriority)(ID3D12Device1* self, UINT NumObjects, ID3D12Pageable *const * ppObjects, const D3D12_RESIDENCY_PRIORITY * pPriorities);
                        HRESULT (WINAPI *CreatePipelineState)(ID3D12Device2* self, const D3D12_PIPELINE_STATE_STREAM_DESC * pDesc, const IID & riid, void ** ppPipelineState);
                        HRESULT (WINAPI *OpenExistingHeapFromAddress)(ID3D12Device3* self, const void * pAddress, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *OpenExistingHeapFromFileMapping)(ID3D12Device3* self, HANDLE hFileMapping, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *EnqueueMakeResident)(ID3D12Device3* self, D3D12_RESIDENCY_FLAGS Flags, UINT NumObjects, ID3D12Pageable *const * ppObjects, ID3D12Fence * pFenceToSignal, UINT64 FenceValueToSignal);
                        HRESULT (WINAPI *CreateCommandList1)(ID3D12Device4* self, UINT nodeMask, D3D12_COMMAND_LIST_TYPE type, D3D12_COMMAND_LIST_FLAGS flags, const IID & riid, void ** ppCommandList);
                        HRESULT (WINAPI *CreateProtectedResourceSession)(ID3D12Device4* self, const D3D12_PROTECTED_RESOURCE_SESSION_DESC * pDesc, const IID & riid, void ** ppSession);
                        HRESULT (WINAPI *CreateCommittedResource1)(ID3D12Device4* self, const D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS HeapFlags, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialResourceState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riidResource, void ** ppvResource);
                        HRESULT (WINAPI *CreateHeap1)(ID3D12Device4* self, const D3D12_HEAP_DESC * pDesc, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riid, void ** ppvHeap);
                        HRESULT (WINAPI *CreateReservedResource1)(ID3D12Device4* self, const D3D12_RESOURCE_DESC * pDesc, D3D12_RESOURCE_STATES InitialState, const D3D12_CLEAR_VALUE * pOptimizedClearValue, ID3D12ProtectedResourceSession * pProtectedSession, const IID & riid, void ** ppvResource);
                        D3D12_RESOURCE_ALLOCATION_INFO* (WINAPI *GetResourceAllocationInfo1)(ID3D12Device4* self, D3D12_RESOURCE_ALLOCATION_INFO* outReturnValue, UINT visibleMask, UINT numResourceDescs, const D3D12_RESOURCE_DESC * pResourceDescs, D3D12_RESOURCE_ALLOCATION_INFO1 * pResourceAllocationInfo1);
                        HRESULT (WINAPI *CreateLifetimeTracker)(ID3D12Device5* self, ID3D12LifetimeOwner * pOwner, const IID & riid, void ** ppvTracker);
                        void (WINAPI *RemoveDevice)(ID3D12Device5* self);
                        HRESULT (WINAPI *EnumerateMetaCommands)(ID3D12Device5* self, UINT * pNumMetaCommands, D3D12_META_COMMAND_DESC * pDescs);
                        HRESULT (WINAPI *EnumerateMetaCommandParameters)(ID3D12Device5* self, const GUID & CommandId, D3D12_META_COMMAND_PARAMETER_STAGE Stage, UINT * pTotalStructureSizeInBytes, UINT * pParameterCount, D3D12_META_COMMAND_PARAMETER_DESC * pParameterDescs);
                        HRESULT (WINAPI *CreateMetaCommand)(ID3D12Device5* self, const GUID & CommandId, UINT NodeMask, const void * pCreationParametersData, SIZE_T CreationParametersDataSizeInBytes, const IID & riid, void ** ppMetaCommand);
                        HRESULT (WINAPI *CreateStateObject)(ID3D12Device5* self, const D3D12_STATE_OBJECT_DESC * pDesc, const IID & riid, void ** ppStateObject);
                        void (WINAPI *GetRaytracingAccelerationStructurePrebuildInfo)(ID3D12Device5* self, const D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_INPUTS * pDesc, D3D12_RAYTRACING_ACCELERATION_STRUCTURE_PREBUILD_INFO * pInfo);
                        D3D12_DRIVER_MATCHING_IDENTIFIER_STATUS (WINAPI *CheckDriverMatchingIdentifier)(ID3D12Device5* self, D3D12_SERIALIZED_DATA_TYPE SerializedDataType, const D3D12_SERIALIZED_DATA_DRIVER_MATCHING_IDENTIFIER * pIdentifierToCheck);
            
        } ID3D12Device5Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        HRESULT (WINAPI *Map)(ID3D12Resource* self, UINT Subresource, const D3D12_RANGE * pReadRange, void ** ppData);
                        void (WINAPI *Unmap)(ID3D12Resource* self, UINT Subresource, const D3D12_RANGE * pWrittenRange);
                        D3D12_RESOURCE_DESC* (WINAPI *GetDesc)(ID3D12Resource* self, D3D12_RESOURCE_DESC* outReturnValue);
                        D3D12_GPU_VIRTUAL_ADDRESS (WINAPI *GetGPUVirtualAddress)(ID3D12Resource* self);
                        HRESULT (WINAPI *WriteToSubresource)(ID3D12Resource* self, UINT DstSubresource, const D3D12_BOX * pDstBox, const void * pSrcData, UINT SrcRowPitch, UINT SrcDepthPitch);
                        HRESULT (WINAPI *ReadFromSubresource)(ID3D12Resource* self, void * pDstData, UINT DstRowPitch, UINT DstDepthPitch, UINT SrcSubresource, const D3D12_BOX * pSrcBox);
                        HRESULT (WINAPI *GetHeapProperties)(ID3D12Resource* self, D3D12_HEAP_PROPERTIES * pHeapProperties, D3D12_HEAP_FLAGS * pHeapFlags);
                        HRESULT (WINAPI *GetProtectedResourceSession)(ID3D12Resource1* self, const IID & riid, void ** ppProtectedSession);
            
        } ID3D12Resource1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        D3D12_HEAP_DESC* (WINAPI *GetDesc)(ID3D12Heap* self, D3D12_HEAP_DESC* outReturnValue);
                        HRESULT (WINAPI *GetProtectedResourceSession)(ID3D12Heap1* self, const IID & riid, void ** ppProtectedSession);
            
        } ID3D12Heap1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        D3D12_COMMAND_LIST_TYPE (WINAPI *GetType)(ID3D12CommandList* self);
                        HRESULT (WINAPI *Close)(ID3D12GraphicsCommandList* self);
                        HRESULT (WINAPI *Reset)(ID3D12GraphicsCommandList* self, ID3D12CommandAllocator * pAllocator, ID3D12PipelineState * pInitialState);
                        void (WINAPI *ClearState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState);
                        void (WINAPI *DrawInstanced)(ID3D12GraphicsCommandList* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *DrawIndexedInstanced)(ID3D12GraphicsCommandList* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *Dispatch)(ID3D12GraphicsCommandList* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ);
                        void (WINAPI *CopyBufferRegion)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT64 NumBytes);
                        void (WINAPI *CopyTextureRegion)(ID3D12GraphicsCommandList* self, const D3D12_TEXTURE_COPY_LOCATION * pDst, UINT DstX, UINT DstY, UINT DstZ, const D3D12_TEXTURE_COPY_LOCATION * pSrc, const D3D12_BOX * pSrcBox);
                        void (WINAPI *CopyResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, ID3D12Resource * pSrcResource);
                        void (WINAPI *CopyTiles)(ID3D12GraphicsCommandList* self, ID3D12Resource * pTiledResource, const D3D12_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pTileRegionSize, ID3D12Resource * pBuffer, UINT64 BufferStartOffsetInBytes, D3D12_TILE_COPY_FLAGS Flags);
                        void (WINAPI *ResolveSubresource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, UINT DstSubresource, ID3D12Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D12GraphicsCommandList* self, D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology);
                        void (WINAPI *RSSetViewports)(ID3D12GraphicsCommandList* self, UINT NumViewports, const D3D12_VIEWPORT * pViewports);
                        void (WINAPI *RSSetScissorRects)(ID3D12GraphicsCommandList* self, UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *OMSetBlendFactor)(ID3D12GraphicsCommandList* self, const FLOAT  BlendFactor[4]);
                        void (WINAPI *OMSetStencilRef)(ID3D12GraphicsCommandList* self, UINT StencilRef);
                        void (WINAPI *SetPipelineState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState);
                        void (WINAPI *ResourceBarrier)(ID3D12GraphicsCommandList* self, UINT NumBarriers, const D3D12_RESOURCE_BARRIER * pBarriers);
                        void (WINAPI *ExecuteBundle)(ID3D12GraphicsCommandList* self, ID3D12GraphicsCommandList * pCommandList);
                        void (WINAPI *SetDescriptorHeaps)(ID3D12GraphicsCommandList* self, UINT NumDescriptorHeaps, ID3D12DescriptorHeap *const * ppDescriptorHeaps);
                        void (WINAPI *SetComputeRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature);
                        void (WINAPI *SetGraphicsRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature);
                        void (WINAPI *SetComputeRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
                        void (WINAPI *SetGraphicsRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
                        void (WINAPI *SetComputeRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetGraphicsRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetComputeRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetGraphicsRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetComputeRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetGraphicsRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetComputeRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetGraphicsRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetComputeRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetGraphicsRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *IASetIndexBuffer)(ID3D12GraphicsCommandList* self, const D3D12_INDEX_BUFFER_VIEW * pView);
                        void (WINAPI *IASetVertexBuffers)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_VERTEX_BUFFER_VIEW * pViews);
                        void (WINAPI *SOSetTargets)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_STREAM_OUTPUT_BUFFER_VIEW * pViews);
                        void (WINAPI *OMSetRenderTargets)(ID3D12GraphicsCommandList* self, UINT NumRenderTargetDescriptors, const D3D12_CPU_DESCRIPTOR_HANDLE * pRenderTargetDescriptors, BOOL RTsSingleHandleToDescriptorRange, const D3D12_CPU_DESCRIPTOR_HANDLE * pDepthStencilDescriptor);
                        void (WINAPI *ClearDepthStencilView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView, D3D12_CLEAR_FLAGS ClearFlags, FLOAT Depth, UINT8 Stencil, UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *ClearRenderTargetView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView, const FLOAT  ColorRGBA[4], UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const UINT  Values[4], UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const FLOAT  Values[4], UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *DiscardResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pResource, const D3D12_DISCARD_REGION * pRegion);
                        void (WINAPI *BeginQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index);
                        void (WINAPI *EndQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index);
                        void (WINAPI *ResolveQueryData)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT StartIndex, UINT NumQueries, ID3D12Resource * pDestinationBuffer, UINT64 AlignedDestinationBufferOffset);
                        void (WINAPI *SetPredication)(ID3D12GraphicsCommandList* self, ID3D12Resource * pBuffer, UINT64 AlignedBufferOffset, D3D12_PREDICATION_OP Operation);
                        void (WINAPI *SetMarker)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size);
                        void (WINAPI *BeginEvent)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size);
                        void (WINAPI *EndEvent)(ID3D12GraphicsCommandList* self);
                        void (WINAPI *ExecuteIndirect)(ID3D12GraphicsCommandList* self, ID3D12CommandSignature * pCommandSignature, UINT MaxCommandCount, ID3D12Resource * pArgumentBuffer, UINT64 ArgumentBufferOffset, ID3D12Resource * pCountBuffer, UINT64 CountBufferOffset);
                        void (WINAPI *AtomicCopyBufferUINT)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges);
                        void (WINAPI *AtomicCopyBufferUINT64)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges);
                        void (WINAPI *OMSetDepthBounds)(ID3D12GraphicsCommandList1* self, FLOAT Min, FLOAT Max);
                        void (WINAPI *SetSamplePositions)(ID3D12GraphicsCommandList1* self, UINT NumSamplesPerPixel, UINT NumPixels, D3D12_SAMPLE_POSITION * pSamplePositions);
                        void (WINAPI *ResolveSubresourceRegion)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, ID3D12Resource * pSrcResource, UINT SrcSubresource, D3D12_RECT * pSrcRect, DXGI_FORMAT Format, D3D12_RESOLVE_MODE ResolveMode);
                        void (WINAPI *SetViewInstanceMask)(ID3D12GraphicsCommandList1* self, UINT Mask);
                        void (WINAPI *WriteBufferImmediate)(ID3D12GraphicsCommandList2* self, UINT Count, const D3D12_WRITEBUFFERIMMEDIATE_PARAMETER * pParams, const D3D12_WRITEBUFFERIMMEDIATE_MODE * pModes);
                        void (WINAPI *SetProtectedResourceSession)(ID3D12GraphicsCommandList3* self, ID3D12ProtectedResourceSession * pProtectedResourceSession);
            
        } ID3D12GraphicsCommandList3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        UINT64 (WINAPI *GetRequiredParameterResourceSize)(ID3D12MetaCommand* self, D3D12_META_COMMAND_PARAMETER_STAGE Stage, UINT ParameterIndex);
            
        } ID3D12MetaCommandTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetPrivateData)(ID3D12Object* self, const GUID & guid, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *SetPrivateData)(ID3D12Object* self, const GUID & guid, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(ID3D12Object* self, const GUID & guid, const IUnknown * pData);
                        HRESULT (WINAPI *SetName)(ID3D12Object* self, LPCWSTR Name);
                        HRESULT (WINAPI *GetDevice)(ID3D12DeviceChild* self, const IID & riid, void ** ppvDevice);
                        D3D12_COMMAND_LIST_TYPE (WINAPI *GetType)(ID3D12CommandList* self);
                        HRESULT (WINAPI *Close)(ID3D12GraphicsCommandList* self);
                        HRESULT (WINAPI *Reset)(ID3D12GraphicsCommandList* self, ID3D12CommandAllocator * pAllocator, ID3D12PipelineState * pInitialState);
                        void (WINAPI *ClearState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState);
                        void (WINAPI *DrawInstanced)(ID3D12GraphicsCommandList* self, UINT VertexCountPerInstance, UINT InstanceCount, UINT StartVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *DrawIndexedInstanced)(ID3D12GraphicsCommandList* self, UINT IndexCountPerInstance, UINT InstanceCount, UINT StartIndexLocation, INT BaseVertexLocation, UINT StartInstanceLocation);
                        void (WINAPI *Dispatch)(ID3D12GraphicsCommandList* self, UINT ThreadGroupCountX, UINT ThreadGroupCountY, UINT ThreadGroupCountZ);
                        void (WINAPI *CopyBufferRegion)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT64 NumBytes);
                        void (WINAPI *CopyTextureRegion)(ID3D12GraphicsCommandList* self, const D3D12_TEXTURE_COPY_LOCATION * pDst, UINT DstX, UINT DstY, UINT DstZ, const D3D12_TEXTURE_COPY_LOCATION * pSrc, const D3D12_BOX * pSrcBox);
                        void (WINAPI *CopyResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, ID3D12Resource * pSrcResource);
                        void (WINAPI *CopyTiles)(ID3D12GraphicsCommandList* self, ID3D12Resource * pTiledResource, const D3D12_TILED_RESOURCE_COORDINATE * pTileRegionStartCoordinate, const D3D12_TILE_REGION_SIZE * pTileRegionSize, ID3D12Resource * pBuffer, UINT64 BufferStartOffsetInBytes, D3D12_TILE_COPY_FLAGS Flags);
                        void (WINAPI *ResolveSubresource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pDstResource, UINT DstSubresource, ID3D12Resource * pSrcResource, UINT SrcSubresource, DXGI_FORMAT Format);
                        void (WINAPI *IASetPrimitiveTopology)(ID3D12GraphicsCommandList* self, D3D12_PRIMITIVE_TOPOLOGY PrimitiveTopology);
                        void (WINAPI *RSSetViewports)(ID3D12GraphicsCommandList* self, UINT NumViewports, const D3D12_VIEWPORT * pViewports);
                        void (WINAPI *RSSetScissorRects)(ID3D12GraphicsCommandList* self, UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *OMSetBlendFactor)(ID3D12GraphicsCommandList* self, const FLOAT  BlendFactor[4]);
                        void (WINAPI *OMSetStencilRef)(ID3D12GraphicsCommandList* self, UINT StencilRef);
                        void (WINAPI *SetPipelineState)(ID3D12GraphicsCommandList* self, ID3D12PipelineState * pPipelineState);
                        void (WINAPI *ResourceBarrier)(ID3D12GraphicsCommandList* self, UINT NumBarriers, const D3D12_RESOURCE_BARRIER * pBarriers);
                        void (WINAPI *ExecuteBundle)(ID3D12GraphicsCommandList* self, ID3D12GraphicsCommandList * pCommandList);
                        void (WINAPI *SetDescriptorHeaps)(ID3D12GraphicsCommandList* self, UINT NumDescriptorHeaps, ID3D12DescriptorHeap *const * ppDescriptorHeaps);
                        void (WINAPI *SetComputeRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature);
                        void (WINAPI *SetGraphicsRootSignature)(ID3D12GraphicsCommandList* self, ID3D12RootSignature * pRootSignature);
                        void (WINAPI *SetComputeRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
                        void (WINAPI *SetGraphicsRootDescriptorTable)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_DESCRIPTOR_HANDLE BaseDescriptor);
                        void (WINAPI *SetComputeRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetGraphicsRoot32BitConstant)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT SrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetComputeRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetGraphicsRoot32BitConstants)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, UINT Num32BitValuesToSet, const void * pSrcData, UINT DestOffsetIn32BitValues);
                        void (WINAPI *SetComputeRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetGraphicsRootConstantBufferView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetComputeRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetGraphicsRootShaderResourceView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetComputeRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *SetGraphicsRootUnorderedAccessView)(ID3D12GraphicsCommandList* self, UINT RootParameterIndex, D3D12_GPU_VIRTUAL_ADDRESS BufferLocation);
                        void (WINAPI *IASetIndexBuffer)(ID3D12GraphicsCommandList* self, const D3D12_INDEX_BUFFER_VIEW * pView);
                        void (WINAPI *IASetVertexBuffers)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_VERTEX_BUFFER_VIEW * pViews);
                        void (WINAPI *SOSetTargets)(ID3D12GraphicsCommandList* self, UINT StartSlot, UINT NumViews, const D3D12_STREAM_OUTPUT_BUFFER_VIEW * pViews);
                        void (WINAPI *OMSetRenderTargets)(ID3D12GraphicsCommandList* self, UINT NumRenderTargetDescriptors, const D3D12_CPU_DESCRIPTOR_HANDLE * pRenderTargetDescriptors, BOOL RTsSingleHandleToDescriptorRange, const D3D12_CPU_DESCRIPTOR_HANDLE * pDepthStencilDescriptor);
                        void (WINAPI *ClearDepthStencilView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE DepthStencilView, D3D12_CLEAR_FLAGS ClearFlags, FLOAT Depth, UINT8 Stencil, UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *ClearRenderTargetView)(ID3D12GraphicsCommandList* self, D3D12_CPU_DESCRIPTOR_HANDLE RenderTargetView, const FLOAT  ColorRGBA[4], UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *ClearUnorderedAccessViewUint)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const UINT  Values[4], UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *ClearUnorderedAccessViewFloat)(ID3D12GraphicsCommandList* self, D3D12_GPU_DESCRIPTOR_HANDLE ViewGPUHandleInCurrentHeap, D3D12_CPU_DESCRIPTOR_HANDLE ViewCPUHandle, ID3D12Resource * pResource, const FLOAT  Values[4], UINT NumRects, const D3D12_RECT * pRects);
                        void (WINAPI *DiscardResource)(ID3D12GraphicsCommandList* self, ID3D12Resource * pResource, const D3D12_DISCARD_REGION * pRegion);
                        void (WINAPI *BeginQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index);
                        void (WINAPI *EndQuery)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT Index);
                        void (WINAPI *ResolveQueryData)(ID3D12GraphicsCommandList* self, ID3D12QueryHeap * pQueryHeap, D3D12_QUERY_TYPE Type, UINT StartIndex, UINT NumQueries, ID3D12Resource * pDestinationBuffer, UINT64 AlignedDestinationBufferOffset);
                        void (WINAPI *SetPredication)(ID3D12GraphicsCommandList* self, ID3D12Resource * pBuffer, UINT64 AlignedBufferOffset, D3D12_PREDICATION_OP Operation);
                        void (WINAPI *SetMarker)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size);
                        void (WINAPI *BeginEvent)(ID3D12GraphicsCommandList* self, UINT Metadata, const void * pData, UINT Size);
                        void (WINAPI *EndEvent)(ID3D12GraphicsCommandList* self);
                        void (WINAPI *ExecuteIndirect)(ID3D12GraphicsCommandList* self, ID3D12CommandSignature * pCommandSignature, UINT MaxCommandCount, ID3D12Resource * pArgumentBuffer, UINT64 ArgumentBufferOffset, ID3D12Resource * pCountBuffer, UINT64 CountBufferOffset);
                        void (WINAPI *AtomicCopyBufferUINT)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges);
                        void (WINAPI *AtomicCopyBufferUINT64)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstBuffer, UINT64 DstOffset, ID3D12Resource * pSrcBuffer, UINT64 SrcOffset, UINT Dependencies, ID3D12Resource *const * ppDependentResources, const D3D12_SUBRESOURCE_RANGE_UINT64 * pDependentSubresourceRanges);
                        void (WINAPI *OMSetDepthBounds)(ID3D12GraphicsCommandList1* self, FLOAT Min, FLOAT Max);
                        void (WINAPI *SetSamplePositions)(ID3D12GraphicsCommandList1* self, UINT NumSamplesPerPixel, UINT NumPixels, D3D12_SAMPLE_POSITION * pSamplePositions);
                        void (WINAPI *ResolveSubresourceRegion)(ID3D12GraphicsCommandList1* self, ID3D12Resource * pDstResource, UINT DstSubresource, UINT DstX, UINT DstY, ID3D12Resource * pSrcResource, UINT SrcSubresource, D3D12_RECT * pSrcRect, DXGI_FORMAT Format, D3D12_RESOLVE_MODE ResolveMode);
                        void (WINAPI *SetViewInstanceMask)(ID3D12GraphicsCommandList1* self, UINT Mask);
                        void (WINAPI *WriteBufferImmediate)(ID3D12GraphicsCommandList2* self, UINT Count, const D3D12_WRITEBUFFERIMMEDIATE_PARAMETER * pParams, const D3D12_WRITEBUFFERIMMEDIATE_MODE * pModes);
                        void (WINAPI *SetProtectedResourceSession)(ID3D12GraphicsCommandList3* self, ID3D12ProtectedResourceSession * pProtectedResourceSession);
                        void (WINAPI *BeginRenderPass)(ID3D12GraphicsCommandList4* self, UINT NumRenderTargets, const D3D12_RENDER_PASS_RENDER_TARGET_DESC * pRenderTargets, const D3D12_RENDER_PASS_DEPTH_STENCIL_DESC * pDepthStencil, D3D12_RENDER_PASS_FLAGS Flags);
                        void (WINAPI *EndRenderPass)(ID3D12GraphicsCommandList4* self);
                        void (WINAPI *InitializeMetaCommand)(ID3D12GraphicsCommandList4* self, ID3D12MetaCommand * pMetaCommand, const void * pInitializationParametersData, SIZE_T InitializationParametersDataSizeInBytes);
                        void (WINAPI *ExecuteMetaCommand)(ID3D12GraphicsCommandList4* self, ID3D12MetaCommand * pMetaCommand, const void * pExecutionParametersData, SIZE_T ExecutionParametersDataSizeInBytes);
                        void (WINAPI *BuildRaytracingAccelerationStructure)(ID3D12GraphicsCommandList4* self, const D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC * pDesc, UINT NumPostbuildInfoDescs, const D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC * pPostbuildInfoDescs);
                        void (WINAPI *EmitRaytracingAccelerationStructurePostbuildInfo)(ID3D12GraphicsCommandList4* self, const D3D12_RAYTRACING_ACCELERATION_STRUCTURE_POSTBUILD_INFO_DESC * pDesc, UINT NumSourceAccelerationStructures, const D3D12_GPU_VIRTUAL_ADDRESS * pSourceAccelerationStructureData);
                        void (WINAPI *CopyRaytracingAccelerationStructure)(ID3D12GraphicsCommandList4* self, D3D12_GPU_VIRTUAL_ADDRESS DestAccelerationStructureData, D3D12_GPU_VIRTUAL_ADDRESS SourceAccelerationStructureData, D3D12_RAYTRACING_ACCELERATION_STRUCTURE_COPY_MODE Mode);
                        void (WINAPI *SetPipelineState1)(ID3D12GraphicsCommandList4* self, ID3D12StateObject * pStateObject);
                        void (WINAPI *DispatchRays)(ID3D12GraphicsCommandList4* self, const D3D12_DISPATCH_RAYS_DESC * pDesc);
            
        } ID3D12GraphicsCommandList4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        void (WINAPI *EnableShaderInstrumentation)(ID3D12Tools* self, BOOL bEnable);
                        BOOL (WINAPI *ShaderInstrumentationEnabled)(ID3D12Tools* self);
            
        } ID3D12ToolsTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
            
        } IDXGIObjectTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice);
            
        } IDXGIDeviceSubObjectTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice);
                        HRESULT (WINAPI *GetSharedHandle)(IDXGIResource* self, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *GetUsage)(IDXGIResource* self, DXGI_USAGE * pUsage);
                        HRESULT (WINAPI *SetEvictionPriority)(IDXGIResource* self, UINT EvictionPriority);
                        HRESULT (WINAPI *GetEvictionPriority)(IDXGIResource* self, UINT * pEvictionPriority);
            
        } IDXGIResourceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice);
                        HRESULT (WINAPI *AcquireSync)(IDXGIKeyedMutex* self, UINT64 Key, DWORD dwMilliseconds);
                        HRESULT (WINAPI *ReleaseSync)(IDXGIKeyedMutex* self, UINT64 Key);
            
        } IDXGIKeyedMutexTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice);
                        HRESULT (WINAPI *GetDesc)(IDXGISurface* self, DXGI_SURFACE_DESC * pDesc);
                        HRESULT (WINAPI *Map)(IDXGISurface* self, DXGI_MAPPED_RECT * pLockedRect, UINT MapFlags);
                        HRESULT (WINAPI *Unmap)(IDXGISurface* self);
            
        } IDXGISurfaceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice);
                        HRESULT (WINAPI *GetDesc)(IDXGISurface* self, DXGI_SURFACE_DESC * pDesc);
                        HRESULT (WINAPI *Map)(IDXGISurface* self, DXGI_MAPPED_RECT * pLockedRect, UINT MapFlags);
                        HRESULT (WINAPI *Unmap)(IDXGISurface* self);
                        HRESULT (WINAPI *GetDC)(IDXGISurface1* self, BOOL Discard, HDC * phdc);
                        HRESULT (WINAPI *ReleaseDC)(IDXGISurface1* self, RECT * pDirtyRect);
            
        } IDXGISurface1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *EnumOutputs)(IDXGIAdapter* self, UINT Output, IDXGIOutput ** ppOutput);
                        HRESULT (WINAPI *GetDesc)(IDXGIAdapter* self, DXGI_ADAPTER_DESC * pDesc);
                        HRESULT (WINAPI *CheckInterfaceSupport)(IDXGIAdapter* self, const GUID & InterfaceName, LARGE_INTEGER * pUMDVersion);
            
        } IDXGIAdapterTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDesc)(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc);
                        HRESULT (WINAPI *GetDisplayModeList)(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc);
                        HRESULT (WINAPI *FindClosestMatchingMode)(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice);
                        HRESULT (WINAPI *WaitForVBlank)(IDXGIOutput* self);
                        HRESULT (WINAPI *TakeOwnership)(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive);
                        void (WINAPI *ReleaseOwnership)(IDXGIOutput* self);
                        HRESULT (WINAPI *GetGammaControlCapabilities)(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps);
                        HRESULT (WINAPI *SetGammaControl)(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray);
                        HRESULT (WINAPI *GetGammaControl)(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray);
                        HRESULT (WINAPI *SetDisplaySurface)(IDXGIOutput* self, IDXGISurface * pScanoutSurface);
                        HRESULT (WINAPI *GetDisplaySurfaceData)(IDXGIOutput* self, IDXGISurface * pDestination);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats);
            
        } IDXGIOutputTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice);
                        HRESULT (WINAPI *Present)(IDXGISwapChain* self, UINT SyncInterval, UINT Flags);
                        HRESULT (WINAPI *GetBuffer)(IDXGISwapChain* self, UINT Buffer, const IID & riid, void ** ppSurface);
                        HRESULT (WINAPI *SetFullscreenState)(IDXGISwapChain* self, BOOL Fullscreen, IDXGIOutput * pTarget);
                        HRESULT (WINAPI *GetFullscreenState)(IDXGISwapChain* self, BOOL * pFullscreen, IDXGIOutput ** ppTarget);
                        HRESULT (WINAPI *GetDesc)(IDXGISwapChain* self, DXGI_SWAP_CHAIN_DESC * pDesc);
                        HRESULT (WINAPI *ResizeBuffers)(IDXGISwapChain* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
                        HRESULT (WINAPI *ResizeTarget)(IDXGISwapChain* self, const DXGI_MODE_DESC * pNewTargetParameters);
                        HRESULT (WINAPI *GetContainingOutput)(IDXGISwapChain* self, IDXGIOutput ** ppOutput);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGISwapChain* self, DXGI_FRAME_STATISTICS * pStats);
                        HRESULT (WINAPI *GetLastPresentCount)(IDXGISwapChain* self, UINT * pLastPresentCount);
            
        } IDXGISwapChainTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *EnumAdapters)(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter);
                        HRESULT (WINAPI *MakeWindowAssociation)(IDXGIFactory* self, HWND WindowHandle, UINT Flags);
                        HRESULT (WINAPI *GetWindowAssociation)(IDXGIFactory* self, HWND * pWindowHandle);
                        HRESULT (WINAPI *CreateSwapChain)(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain);
                        HRESULT (WINAPI *CreateSoftwareAdapter)(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter);
            
        } IDXGIFactoryTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetAdapter)(IDXGIDevice* self, IDXGIAdapter ** pAdapter);
                        HRESULT (WINAPI *CreateSurface)(IDXGIDevice* self, const DXGI_SURFACE_DESC * pDesc, UINT NumSurfaces, DXGI_USAGE Usage, const DXGI_SHARED_RESOURCE * pSharedResource, IDXGISurface ** ppSurface);
                        HRESULT (WINAPI *QueryResourceResidency)(IDXGIDevice* self, IUnknown *const * ppResources, DXGI_RESIDENCY * pResidencyStatus, UINT NumResources);
                        HRESULT (WINAPI *SetGPUThreadPriority)(IDXGIDevice* self, INT Priority);
                        HRESULT (WINAPI *GetGPUThreadPriority)(IDXGIDevice* self, INT * pPriority);
            
        } IDXGIDeviceTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *EnumAdapters)(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter);
                        HRESULT (WINAPI *MakeWindowAssociation)(IDXGIFactory* self, HWND WindowHandle, UINT Flags);
                        HRESULT (WINAPI *GetWindowAssociation)(IDXGIFactory* self, HWND * pWindowHandle);
                        HRESULT (WINAPI *CreateSwapChain)(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain);
                        HRESULT (WINAPI *CreateSoftwareAdapter)(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter);
                        HRESULT (WINAPI *EnumAdapters1)(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter);
                        BOOL (WINAPI *IsCurrent)(IDXGIFactory1* self);
            
        } IDXGIFactory1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *EnumOutputs)(IDXGIAdapter* self, UINT Output, IDXGIOutput ** ppOutput);
                        HRESULT (WINAPI *GetDesc)(IDXGIAdapter* self, DXGI_ADAPTER_DESC * pDesc);
                        HRESULT (WINAPI *CheckInterfaceSupport)(IDXGIAdapter* self, const GUID & InterfaceName, LARGE_INTEGER * pUMDVersion);
                        HRESULT (WINAPI *GetDesc1)(IDXGIAdapter1* self, DXGI_ADAPTER_DESC1 * pDesc);
            
        } IDXGIAdapter1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetAdapter)(IDXGIDevice* self, IDXGIAdapter ** pAdapter);
                        HRESULT (WINAPI *CreateSurface)(IDXGIDevice* self, const DXGI_SURFACE_DESC * pDesc, UINT NumSurfaces, DXGI_USAGE Usage, const DXGI_SHARED_RESOURCE * pSharedResource, IDXGISurface ** ppSurface);
                        HRESULT (WINAPI *QueryResourceResidency)(IDXGIDevice* self, IUnknown *const * ppResources, DXGI_RESIDENCY * pResidencyStatus, UINT NumResources);
                        HRESULT (WINAPI *SetGPUThreadPriority)(IDXGIDevice* self, INT Priority);
                        HRESULT (WINAPI *GetGPUThreadPriority)(IDXGIDevice* self, INT * pPriority);
                        HRESULT (WINAPI *SetMaximumFrameLatency)(IDXGIDevice1* self, UINT MaxLatency);
                        HRESULT (WINAPI *GetMaximumFrameLatency)(IDXGIDevice1* self, UINT * pMaxLatency);
            
        } IDXGIDevice1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        BOOL (WINAPI *IsStereoEnabled)(IDXGIDisplayControl* self);
                        void (WINAPI *SetStereoEnabled)(IDXGIDisplayControl* self, BOOL enabled);
            
        } IDXGIDisplayControlTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        void (WINAPI *GetDesc)(IDXGIOutputDuplication* self, DXGI_OUTDUPL_DESC * pDesc);
                        HRESULT (WINAPI *AcquireNextFrame)(IDXGIOutputDuplication* self, UINT TimeoutInMilliseconds, DXGI_OUTDUPL_FRAME_INFO * pFrameInfo, IDXGIResource ** ppDesktopResource);
                        HRESULT (WINAPI *GetFrameDirtyRects)(IDXGIOutputDuplication* self, UINT DirtyRectsBufferSize, RECT * pDirtyRectsBuffer, UINT * pDirtyRectsBufferSizeRequired);
                        HRESULT (WINAPI *GetFrameMoveRects)(IDXGIOutputDuplication* self, UINT MoveRectsBufferSize, DXGI_OUTDUPL_MOVE_RECT * pMoveRectBuffer, UINT * pMoveRectsBufferSizeRequired);
                        HRESULT (WINAPI *GetFramePointerShape)(IDXGIOutputDuplication* self, UINT PointerShapeBufferSize, void * pPointerShapeBuffer, UINT * pPointerShapeBufferSizeRequired, DXGI_OUTDUPL_POINTER_SHAPE_INFO * pPointerShapeInfo);
                        HRESULT (WINAPI *MapDesktopSurface)(IDXGIOutputDuplication* self, DXGI_MAPPED_RECT * pLockedRect);
                        HRESULT (WINAPI *UnMapDesktopSurface)(IDXGIOutputDuplication* self);
                        HRESULT (WINAPI *ReleaseFrame)(IDXGIOutputDuplication* self);
            
        } IDXGIOutputDuplicationTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice);
                        HRESULT (WINAPI *GetDesc)(IDXGISurface* self, DXGI_SURFACE_DESC * pDesc);
                        HRESULT (WINAPI *Map)(IDXGISurface* self, DXGI_MAPPED_RECT * pLockedRect, UINT MapFlags);
                        HRESULT (WINAPI *Unmap)(IDXGISurface* self);
                        HRESULT (WINAPI *GetDC)(IDXGISurface1* self, BOOL Discard, HDC * phdc);
                        HRESULT (WINAPI *ReleaseDC)(IDXGISurface1* self, RECT * pDirtyRect);
                        HRESULT (WINAPI *GetResource)(IDXGISurface2* self, const IID & riid, void ** ppParentResource, UINT * pSubresourceIndex);
            
        } IDXGISurface2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice);
                        HRESULT (WINAPI *GetSharedHandle)(IDXGIResource* self, HANDLE * pSharedHandle);
                        HRESULT (WINAPI *GetUsage)(IDXGIResource* self, DXGI_USAGE * pUsage);
                        HRESULT (WINAPI *SetEvictionPriority)(IDXGIResource* self, UINT EvictionPriority);
                        HRESULT (WINAPI *GetEvictionPriority)(IDXGIResource* self, UINT * pEvictionPriority);
                        HRESULT (WINAPI *CreateSubresourceSurface)(IDXGIResource1* self, UINT index, IDXGISurface2 ** ppSurface);
                        HRESULT (WINAPI *CreateSharedHandle)(IDXGIResource1* self, const SECURITY_ATTRIBUTES * pAttributes, DWORD dwAccess, LPCWSTR lpName, HANDLE * pHandle);
            
        } IDXGIResource1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetAdapter)(IDXGIDevice* self, IDXGIAdapter ** pAdapter);
                        HRESULT (WINAPI *CreateSurface)(IDXGIDevice* self, const DXGI_SURFACE_DESC * pDesc, UINT NumSurfaces, DXGI_USAGE Usage, const DXGI_SHARED_RESOURCE * pSharedResource, IDXGISurface ** ppSurface);
                        HRESULT (WINAPI *QueryResourceResidency)(IDXGIDevice* self, IUnknown *const * ppResources, DXGI_RESIDENCY * pResidencyStatus, UINT NumResources);
                        HRESULT (WINAPI *SetGPUThreadPriority)(IDXGIDevice* self, INT Priority);
                        HRESULT (WINAPI *GetGPUThreadPriority)(IDXGIDevice* self, INT * pPriority);
                        HRESULT (WINAPI *SetMaximumFrameLatency)(IDXGIDevice1* self, UINT MaxLatency);
                        HRESULT (WINAPI *GetMaximumFrameLatency)(IDXGIDevice1* self, UINT * pMaxLatency);
                        HRESULT (WINAPI *OfferResources)(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, DXGI_OFFER_RESOURCE_PRIORITY Priority);
                        HRESULT (WINAPI *ReclaimResources)(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, BOOL * pDiscarded);
                        HRESULT (WINAPI *EnqueueSetEvent)(IDXGIDevice2* self, HANDLE hEvent);
            
        } IDXGIDevice2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice);
                        HRESULT (WINAPI *Present)(IDXGISwapChain* self, UINT SyncInterval, UINT Flags);
                        HRESULT (WINAPI *GetBuffer)(IDXGISwapChain* self, UINT Buffer, const IID & riid, void ** ppSurface);
                        HRESULT (WINAPI *SetFullscreenState)(IDXGISwapChain* self, BOOL Fullscreen, IDXGIOutput * pTarget);
                        HRESULT (WINAPI *GetFullscreenState)(IDXGISwapChain* self, BOOL * pFullscreen, IDXGIOutput ** ppTarget);
                        HRESULT (WINAPI *GetDesc)(IDXGISwapChain* self, DXGI_SWAP_CHAIN_DESC * pDesc);
                        HRESULT (WINAPI *ResizeBuffers)(IDXGISwapChain* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
                        HRESULT (WINAPI *ResizeTarget)(IDXGISwapChain* self, const DXGI_MODE_DESC * pNewTargetParameters);
                        HRESULT (WINAPI *GetContainingOutput)(IDXGISwapChain* self, IDXGIOutput ** ppOutput);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGISwapChain* self, DXGI_FRAME_STATISTICS * pStats);
                        HRESULT (WINAPI *GetLastPresentCount)(IDXGISwapChain* self, UINT * pLastPresentCount);
                        HRESULT (WINAPI *GetDesc1)(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_DESC1 * pDesc);
                        HRESULT (WINAPI *GetFullscreenDesc)(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pDesc);
                        HRESULT (WINAPI *GetHwnd)(IDXGISwapChain1* self, HWND * pHwnd);
                        HRESULT (WINAPI *GetCoreWindow)(IDXGISwapChain1* self, const IID & refiid, void ** ppUnk);
                        HRESULT (WINAPI *Present1)(IDXGISwapChain1* self, UINT SyncInterval, UINT PresentFlags, const DXGI_PRESENT_PARAMETERS * pPresentParameters);
                        BOOL (WINAPI *IsTemporaryMonoSupported)(IDXGISwapChain1* self);
                        HRESULT (WINAPI *GetRestrictToOutput)(IDXGISwapChain1* self, IDXGIOutput ** ppRestrictToOutput);
                        HRESULT (WINAPI *SetBackgroundColor)(IDXGISwapChain1* self, const DXGI_RGBA * pColor);
                        HRESULT (WINAPI *GetBackgroundColor)(IDXGISwapChain1* self, DXGI_RGBA * pColor);
                        HRESULT (WINAPI *SetRotation)(IDXGISwapChain1* self, DXGI_MODE_ROTATION Rotation);
                        HRESULT (WINAPI *GetRotation)(IDXGISwapChain1* self, DXGI_MODE_ROTATION * pRotation);
            
        } IDXGISwapChain1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *EnumAdapters)(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter);
                        HRESULT (WINAPI *MakeWindowAssociation)(IDXGIFactory* self, HWND WindowHandle, UINT Flags);
                        HRESULT (WINAPI *GetWindowAssociation)(IDXGIFactory* self, HWND * pWindowHandle);
                        HRESULT (WINAPI *CreateSwapChain)(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain);
                        HRESULT (WINAPI *CreateSoftwareAdapter)(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter);
                        HRESULT (WINAPI *EnumAdapters1)(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter);
                        BOOL (WINAPI *IsCurrent)(IDXGIFactory1* self);
                        BOOL (WINAPI *IsWindowedStereoEnabled)(IDXGIFactory2* self);
                        HRESULT (WINAPI *CreateSwapChainForHwnd)(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        HRESULT (WINAPI *CreateSwapChainForCoreWindow)(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        HRESULT (WINAPI *GetSharedResourceAdapterLuid)(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid);
                        HRESULT (WINAPI *RegisterStereoStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie);
                        HRESULT (WINAPI *RegisterStereoStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterStereoStatus)(IDXGIFactory2* self, DWORD dwCookie);
                        HRESULT (WINAPI *RegisterOcclusionStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie);
                        HRESULT (WINAPI *RegisterOcclusionStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterOcclusionStatus)(IDXGIFactory2* self, DWORD dwCookie);
                        HRESULT (WINAPI *CreateSwapChainForComposition)(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
            
        } IDXGIFactory2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *EnumOutputs)(IDXGIAdapter* self, UINT Output, IDXGIOutput ** ppOutput);
                        HRESULT (WINAPI *GetDesc)(IDXGIAdapter* self, DXGI_ADAPTER_DESC * pDesc);
                        HRESULT (WINAPI *CheckInterfaceSupport)(IDXGIAdapter* self, const GUID & InterfaceName, LARGE_INTEGER * pUMDVersion);
                        HRESULT (WINAPI *GetDesc1)(IDXGIAdapter1* self, DXGI_ADAPTER_DESC1 * pDesc);
                        HRESULT (WINAPI *GetDesc2)(IDXGIAdapter2* self, DXGI_ADAPTER_DESC2 * pDesc);
            
        } IDXGIAdapter2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDesc)(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc);
                        HRESULT (WINAPI *GetDisplayModeList)(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc);
                        HRESULT (WINAPI *FindClosestMatchingMode)(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice);
                        HRESULT (WINAPI *WaitForVBlank)(IDXGIOutput* self);
                        HRESULT (WINAPI *TakeOwnership)(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive);
                        void (WINAPI *ReleaseOwnership)(IDXGIOutput* self);
                        HRESULT (WINAPI *GetGammaControlCapabilities)(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps);
                        HRESULT (WINAPI *SetGammaControl)(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray);
                        HRESULT (WINAPI *GetGammaControl)(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray);
                        HRESULT (WINAPI *SetDisplaySurface)(IDXGIOutput* self, IDXGISurface * pScanoutSurface);
                        HRESULT (WINAPI *GetDisplaySurfaceData)(IDXGIOutput* self, IDXGISurface * pDestination);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats);
                        HRESULT (WINAPI *GetDisplayModeList1)(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc);
                        HRESULT (WINAPI *FindClosestMatchingMode1)(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice);
                        HRESULT (WINAPI *GetDisplaySurfaceData1)(IDXGIOutput1* self, IDXGIResource * pDestination);
                        HRESULT (WINAPI *DuplicateOutput)(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication);
            
        } IDXGIOutput1Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetAdapter)(IDXGIDevice* self, IDXGIAdapter ** pAdapter);
                        HRESULT (WINAPI *CreateSurface)(IDXGIDevice* self, const DXGI_SURFACE_DESC * pDesc, UINT NumSurfaces, DXGI_USAGE Usage, const DXGI_SHARED_RESOURCE * pSharedResource, IDXGISurface ** ppSurface);
                        HRESULT (WINAPI *QueryResourceResidency)(IDXGIDevice* self, IUnknown *const * ppResources, DXGI_RESIDENCY * pResidencyStatus, UINT NumResources);
                        HRESULT (WINAPI *SetGPUThreadPriority)(IDXGIDevice* self, INT Priority);
                        HRESULT (WINAPI *GetGPUThreadPriority)(IDXGIDevice* self, INT * pPriority);
                        HRESULT (WINAPI *SetMaximumFrameLatency)(IDXGIDevice1* self, UINT MaxLatency);
                        HRESULT (WINAPI *GetMaximumFrameLatency)(IDXGIDevice1* self, UINT * pMaxLatency);
                        HRESULT (WINAPI *OfferResources)(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, DXGI_OFFER_RESOURCE_PRIORITY Priority);
                        HRESULT (WINAPI *ReclaimResources)(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, BOOL * pDiscarded);
                        HRESULT (WINAPI *EnqueueSetEvent)(IDXGIDevice2* self, HANDLE hEvent);
                        void (WINAPI *Trim)(IDXGIDevice3* self);
            
        } IDXGIDevice3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice);
                        HRESULT (WINAPI *Present)(IDXGISwapChain* self, UINT SyncInterval, UINT Flags);
                        HRESULT (WINAPI *GetBuffer)(IDXGISwapChain* self, UINT Buffer, const IID & riid, void ** ppSurface);
                        HRESULT (WINAPI *SetFullscreenState)(IDXGISwapChain* self, BOOL Fullscreen, IDXGIOutput * pTarget);
                        HRESULT (WINAPI *GetFullscreenState)(IDXGISwapChain* self, BOOL * pFullscreen, IDXGIOutput ** ppTarget);
                        HRESULT (WINAPI *GetDesc)(IDXGISwapChain* self, DXGI_SWAP_CHAIN_DESC * pDesc);
                        HRESULT (WINAPI *ResizeBuffers)(IDXGISwapChain* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
                        HRESULT (WINAPI *ResizeTarget)(IDXGISwapChain* self, const DXGI_MODE_DESC * pNewTargetParameters);
                        HRESULT (WINAPI *GetContainingOutput)(IDXGISwapChain* self, IDXGIOutput ** ppOutput);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGISwapChain* self, DXGI_FRAME_STATISTICS * pStats);
                        HRESULT (WINAPI *GetLastPresentCount)(IDXGISwapChain* self, UINT * pLastPresentCount);
                        HRESULT (WINAPI *GetDesc1)(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_DESC1 * pDesc);
                        HRESULT (WINAPI *GetFullscreenDesc)(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pDesc);
                        HRESULT (WINAPI *GetHwnd)(IDXGISwapChain1* self, HWND * pHwnd);
                        HRESULT (WINAPI *GetCoreWindow)(IDXGISwapChain1* self, const IID & refiid, void ** ppUnk);
                        HRESULT (WINAPI *Present1)(IDXGISwapChain1* self, UINT SyncInterval, UINT PresentFlags, const DXGI_PRESENT_PARAMETERS * pPresentParameters);
                        BOOL (WINAPI *IsTemporaryMonoSupported)(IDXGISwapChain1* self);
                        HRESULT (WINAPI *GetRestrictToOutput)(IDXGISwapChain1* self, IDXGIOutput ** ppRestrictToOutput);
                        HRESULT (WINAPI *SetBackgroundColor)(IDXGISwapChain1* self, const DXGI_RGBA * pColor);
                        HRESULT (WINAPI *GetBackgroundColor)(IDXGISwapChain1* self, DXGI_RGBA * pColor);
                        HRESULT (WINAPI *SetRotation)(IDXGISwapChain1* self, DXGI_MODE_ROTATION Rotation);
                        HRESULT (WINAPI *GetRotation)(IDXGISwapChain1* self, DXGI_MODE_ROTATION * pRotation);
                        HRESULT (WINAPI *SetSourceSize)(IDXGISwapChain2* self, UINT Width, UINT Height);
                        HRESULT (WINAPI *GetSourceSize)(IDXGISwapChain2* self, UINT * pWidth, UINT * pHeight);
                        HRESULT (WINAPI *SetMaximumFrameLatency)(IDXGISwapChain2* self, UINT MaxLatency);
                        HRESULT (WINAPI *GetMaximumFrameLatency)(IDXGISwapChain2* self, UINT * pMaxLatency);
                        HANDLE (WINAPI *GetFrameLatencyWaitableObject)(IDXGISwapChain2* self);
                        HRESULT (WINAPI *SetMatrixTransform)(IDXGISwapChain2* self, const DXGI_MATRIX_3X2_F * pMatrix);
                        HRESULT (WINAPI *GetMatrixTransform)(IDXGISwapChain2* self, DXGI_MATRIX_3X2_F * pMatrix);
            
        } IDXGISwapChain2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDesc)(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc);
                        HRESULT (WINAPI *GetDisplayModeList)(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc);
                        HRESULT (WINAPI *FindClosestMatchingMode)(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice);
                        HRESULT (WINAPI *WaitForVBlank)(IDXGIOutput* self);
                        HRESULT (WINAPI *TakeOwnership)(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive);
                        void (WINAPI *ReleaseOwnership)(IDXGIOutput* self);
                        HRESULT (WINAPI *GetGammaControlCapabilities)(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps);
                        HRESULT (WINAPI *SetGammaControl)(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray);
                        HRESULT (WINAPI *GetGammaControl)(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray);
                        HRESULT (WINAPI *SetDisplaySurface)(IDXGIOutput* self, IDXGISurface * pScanoutSurface);
                        HRESULT (WINAPI *GetDisplaySurfaceData)(IDXGIOutput* self, IDXGISurface * pDestination);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats);
                        HRESULT (WINAPI *GetDisplayModeList1)(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc);
                        HRESULT (WINAPI *FindClosestMatchingMode1)(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice);
                        HRESULT (WINAPI *GetDisplaySurfaceData1)(IDXGIOutput1* self, IDXGIResource * pDestination);
                        HRESULT (WINAPI *DuplicateOutput)(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication);
                        BOOL (WINAPI *SupportsOverlays)(IDXGIOutput2* self);
            
        } IDXGIOutput2Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *EnumAdapters)(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter);
                        HRESULT (WINAPI *MakeWindowAssociation)(IDXGIFactory* self, HWND WindowHandle, UINT Flags);
                        HRESULT (WINAPI *GetWindowAssociation)(IDXGIFactory* self, HWND * pWindowHandle);
                        HRESULT (WINAPI *CreateSwapChain)(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain);
                        HRESULT (WINAPI *CreateSoftwareAdapter)(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter);
                        HRESULT (WINAPI *EnumAdapters1)(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter);
                        BOOL (WINAPI *IsCurrent)(IDXGIFactory1* self);
                        BOOL (WINAPI *IsWindowedStereoEnabled)(IDXGIFactory2* self);
                        HRESULT (WINAPI *CreateSwapChainForHwnd)(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        HRESULT (WINAPI *CreateSwapChainForCoreWindow)(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        HRESULT (WINAPI *GetSharedResourceAdapterLuid)(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid);
                        HRESULT (WINAPI *RegisterStereoStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie);
                        HRESULT (WINAPI *RegisterStereoStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterStereoStatus)(IDXGIFactory2* self, DWORD dwCookie);
                        HRESULT (WINAPI *RegisterOcclusionStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie);
                        HRESULT (WINAPI *RegisterOcclusionStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterOcclusionStatus)(IDXGIFactory2* self, DWORD dwCookie);
                        HRESULT (WINAPI *CreateSwapChainForComposition)(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        UINT (WINAPI *GetCreationFlags)(IDXGIFactory3* self);
            
        } IDXGIFactory3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *PresentBuffer)(IDXGIDecodeSwapChain* self, UINT BufferToPresent, UINT SyncInterval, UINT Flags);
                        HRESULT (WINAPI *SetSourceRect)(IDXGIDecodeSwapChain* self, const RECT * pRect);
                        HRESULT (WINAPI *SetTargetRect)(IDXGIDecodeSwapChain* self, const RECT * pRect);
                        HRESULT (WINAPI *SetDestSize)(IDXGIDecodeSwapChain* self, UINT Width, UINT Height);
                        HRESULT (WINAPI *GetSourceRect)(IDXGIDecodeSwapChain* self, RECT * pRect);
                        HRESULT (WINAPI *GetTargetRect)(IDXGIDecodeSwapChain* self, RECT * pRect);
                        HRESULT (WINAPI *GetDestSize)(IDXGIDecodeSwapChain* self, UINT * pWidth, UINT * pHeight);
                        HRESULT (WINAPI *SetColorSpace)(IDXGIDecodeSwapChain* self, DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS ColorSpace);
                        DXGI_MULTIPLANE_OVERLAY_YCbCr_FLAGS (WINAPI *GetColorSpace)(IDXGIDecodeSwapChain* self);
            
        } IDXGIDecodeSwapChainTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *CreateSwapChainForCompositionSurfaceHandle)(IDXGIFactoryMedia* self, IUnknown * pDevice, HANDLE hSurface, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        HRESULT (WINAPI *CreateDecodeSwapChainForCompositionSurfaceHandle)(IDXGIFactoryMedia* self, IUnknown * pDevice, HANDLE hSurface, DXGI_DECODE_SWAP_CHAIN_DESC * pDesc, IDXGIResource * pYuvDecodeBuffers, IDXGIOutput * pRestrictToOutput, IDXGIDecodeSwapChain ** ppSwapChain);
            
        } IDXGIFactoryMediaTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *GetFrameStatisticsMedia)(IDXGISwapChainMedia* self, DXGI_FRAME_STATISTICS_MEDIA * pStats);
                        HRESULT (WINAPI *SetPresentDuration)(IDXGISwapChainMedia* self, UINT Duration);
                        HRESULT (WINAPI *CheckPresentDurationSupport)(IDXGISwapChainMedia* self, UINT DesiredPresentDuration, UINT * pClosestSmallerPresentDuration, UINT * pClosestLargerPresentDuration);
            
        } IDXGISwapChainMediaTable;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDesc)(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc);
                        HRESULT (WINAPI *GetDisplayModeList)(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc);
                        HRESULT (WINAPI *FindClosestMatchingMode)(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice);
                        HRESULT (WINAPI *WaitForVBlank)(IDXGIOutput* self);
                        HRESULT (WINAPI *TakeOwnership)(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive);
                        void (WINAPI *ReleaseOwnership)(IDXGIOutput* self);
                        HRESULT (WINAPI *GetGammaControlCapabilities)(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps);
                        HRESULT (WINAPI *SetGammaControl)(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray);
                        HRESULT (WINAPI *GetGammaControl)(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray);
                        HRESULT (WINAPI *SetDisplaySurface)(IDXGIOutput* self, IDXGISurface * pScanoutSurface);
                        HRESULT (WINAPI *GetDisplaySurfaceData)(IDXGIOutput* self, IDXGISurface * pDestination);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats);
                        HRESULT (WINAPI *GetDisplayModeList1)(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc);
                        HRESULT (WINAPI *FindClosestMatchingMode1)(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice);
                        HRESULT (WINAPI *GetDisplaySurfaceData1)(IDXGIOutput1* self, IDXGIResource * pDestination);
                        HRESULT (WINAPI *DuplicateOutput)(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication);
                        BOOL (WINAPI *SupportsOverlays)(IDXGIOutput2* self);
                        HRESULT (WINAPI *CheckOverlaySupport)(IDXGIOutput3* self, DXGI_FORMAT EnumFormat, IUnknown * pConcernedDevice, UINT * pFlags);
            
        } IDXGIOutput3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice);
                        HRESULT (WINAPI *Present)(IDXGISwapChain* self, UINT SyncInterval, UINT Flags);
                        HRESULT (WINAPI *GetBuffer)(IDXGISwapChain* self, UINT Buffer, const IID & riid, void ** ppSurface);
                        HRESULT (WINAPI *SetFullscreenState)(IDXGISwapChain* self, BOOL Fullscreen, IDXGIOutput * pTarget);
                        HRESULT (WINAPI *GetFullscreenState)(IDXGISwapChain* self, BOOL * pFullscreen, IDXGIOutput ** ppTarget);
                        HRESULT (WINAPI *GetDesc)(IDXGISwapChain* self, DXGI_SWAP_CHAIN_DESC * pDesc);
                        HRESULT (WINAPI *ResizeBuffers)(IDXGISwapChain* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
                        HRESULT (WINAPI *ResizeTarget)(IDXGISwapChain* self, const DXGI_MODE_DESC * pNewTargetParameters);
                        HRESULT (WINAPI *GetContainingOutput)(IDXGISwapChain* self, IDXGIOutput ** ppOutput);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGISwapChain* self, DXGI_FRAME_STATISTICS * pStats);
                        HRESULT (WINAPI *GetLastPresentCount)(IDXGISwapChain* self, UINT * pLastPresentCount);
                        HRESULT (WINAPI *GetDesc1)(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_DESC1 * pDesc);
                        HRESULT (WINAPI *GetFullscreenDesc)(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pDesc);
                        HRESULT (WINAPI *GetHwnd)(IDXGISwapChain1* self, HWND * pHwnd);
                        HRESULT (WINAPI *GetCoreWindow)(IDXGISwapChain1* self, const IID & refiid, void ** ppUnk);
                        HRESULT (WINAPI *Present1)(IDXGISwapChain1* self, UINT SyncInterval, UINT PresentFlags, const DXGI_PRESENT_PARAMETERS * pPresentParameters);
                        BOOL (WINAPI *IsTemporaryMonoSupported)(IDXGISwapChain1* self);
                        HRESULT (WINAPI *GetRestrictToOutput)(IDXGISwapChain1* self, IDXGIOutput ** ppRestrictToOutput);
                        HRESULT (WINAPI *SetBackgroundColor)(IDXGISwapChain1* self, const DXGI_RGBA * pColor);
                        HRESULT (WINAPI *GetBackgroundColor)(IDXGISwapChain1* self, DXGI_RGBA * pColor);
                        HRESULT (WINAPI *SetRotation)(IDXGISwapChain1* self, DXGI_MODE_ROTATION Rotation);
                        HRESULT (WINAPI *GetRotation)(IDXGISwapChain1* self, DXGI_MODE_ROTATION * pRotation);
                        HRESULT (WINAPI *SetSourceSize)(IDXGISwapChain2* self, UINT Width, UINT Height);
                        HRESULT (WINAPI *GetSourceSize)(IDXGISwapChain2* self, UINT * pWidth, UINT * pHeight);
                        HRESULT (WINAPI *SetMaximumFrameLatency)(IDXGISwapChain2* self, UINT MaxLatency);
                        HRESULT (WINAPI *GetMaximumFrameLatency)(IDXGISwapChain2* self, UINT * pMaxLatency);
                        HANDLE (WINAPI *GetFrameLatencyWaitableObject)(IDXGISwapChain2* self);
                        HRESULT (WINAPI *SetMatrixTransform)(IDXGISwapChain2* self, const DXGI_MATRIX_3X2_F * pMatrix);
                        HRESULT (WINAPI *GetMatrixTransform)(IDXGISwapChain2* self, DXGI_MATRIX_3X2_F * pMatrix);
                        UINT (WINAPI *GetCurrentBackBufferIndex)(IDXGISwapChain3* self);
                        HRESULT (WINAPI *CheckColorSpaceSupport)(IDXGISwapChain3* self, DXGI_COLOR_SPACE_TYPE ColorSpace, UINT * pColorSpaceSupport);
                        HRESULT (WINAPI *SetColorSpace1)(IDXGISwapChain3* self, DXGI_COLOR_SPACE_TYPE ColorSpace);
                        HRESULT (WINAPI *ResizeBuffers1)(IDXGISwapChain3* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT Format, UINT SwapChainFlags, const UINT * pCreationNodeMask, IUnknown *const * ppPresentQueue);
            
        } IDXGISwapChain3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDesc)(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc);
                        HRESULT (WINAPI *GetDisplayModeList)(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc);
                        HRESULT (WINAPI *FindClosestMatchingMode)(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice);
                        HRESULT (WINAPI *WaitForVBlank)(IDXGIOutput* self);
                        HRESULT (WINAPI *TakeOwnership)(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive);
                        void (WINAPI *ReleaseOwnership)(IDXGIOutput* self);
                        HRESULT (WINAPI *GetGammaControlCapabilities)(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps);
                        HRESULT (WINAPI *SetGammaControl)(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray);
                        HRESULT (WINAPI *GetGammaControl)(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray);
                        HRESULT (WINAPI *SetDisplaySurface)(IDXGIOutput* self, IDXGISurface * pScanoutSurface);
                        HRESULT (WINAPI *GetDisplaySurfaceData)(IDXGIOutput* self, IDXGISurface * pDestination);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats);
                        HRESULT (WINAPI *GetDisplayModeList1)(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc);
                        HRESULT (WINAPI *FindClosestMatchingMode1)(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice);
                        HRESULT (WINAPI *GetDisplaySurfaceData1)(IDXGIOutput1* self, IDXGIResource * pDestination);
                        HRESULT (WINAPI *DuplicateOutput)(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication);
                        BOOL (WINAPI *SupportsOverlays)(IDXGIOutput2* self);
                        HRESULT (WINAPI *CheckOverlaySupport)(IDXGIOutput3* self, DXGI_FORMAT EnumFormat, IUnknown * pConcernedDevice, UINT * pFlags);
                        HRESULT (WINAPI *CheckOverlayColorSpaceSupport)(IDXGIOutput4* self, DXGI_FORMAT Format, DXGI_COLOR_SPACE_TYPE ColorSpace, IUnknown * pConcernedDevice, UINT * pFlags);
            
        } IDXGIOutput4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *EnumAdapters)(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter);
                        HRESULT (WINAPI *MakeWindowAssociation)(IDXGIFactory* self, HWND WindowHandle, UINT Flags);
                        HRESULT (WINAPI *GetWindowAssociation)(IDXGIFactory* self, HWND * pWindowHandle);
                        HRESULT (WINAPI *CreateSwapChain)(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain);
                        HRESULT (WINAPI *CreateSoftwareAdapter)(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter);
                        HRESULT (WINAPI *EnumAdapters1)(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter);
                        BOOL (WINAPI *IsCurrent)(IDXGIFactory1* self);
                        BOOL (WINAPI *IsWindowedStereoEnabled)(IDXGIFactory2* self);
                        HRESULT (WINAPI *CreateSwapChainForHwnd)(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        HRESULT (WINAPI *CreateSwapChainForCoreWindow)(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        HRESULT (WINAPI *GetSharedResourceAdapterLuid)(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid);
                        HRESULT (WINAPI *RegisterStereoStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie);
                        HRESULT (WINAPI *RegisterStereoStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterStereoStatus)(IDXGIFactory2* self, DWORD dwCookie);
                        HRESULT (WINAPI *RegisterOcclusionStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie);
                        HRESULT (WINAPI *RegisterOcclusionStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterOcclusionStatus)(IDXGIFactory2* self, DWORD dwCookie);
                        HRESULT (WINAPI *CreateSwapChainForComposition)(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        UINT (WINAPI *GetCreationFlags)(IDXGIFactory3* self);
                        HRESULT (WINAPI *EnumAdapterByLuid)(IDXGIFactory4* self, LUID AdapterLuid, const IID & riid, void ** ppvAdapter);
                        HRESULT (WINAPI *EnumWarpAdapter)(IDXGIFactory4* self, const IID & riid, void ** ppvAdapter);
            
        } IDXGIFactory4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *EnumOutputs)(IDXGIAdapter* self, UINT Output, IDXGIOutput ** ppOutput);
                        HRESULT (WINAPI *GetDesc)(IDXGIAdapter* self, DXGI_ADAPTER_DESC * pDesc);
                        HRESULT (WINAPI *CheckInterfaceSupport)(IDXGIAdapter* self, const GUID & InterfaceName, LARGE_INTEGER * pUMDVersion);
                        HRESULT (WINAPI *GetDesc1)(IDXGIAdapter1* self, DXGI_ADAPTER_DESC1 * pDesc);
                        HRESULT (WINAPI *GetDesc2)(IDXGIAdapter2* self, DXGI_ADAPTER_DESC2 * pDesc);
                        HRESULT (WINAPI *RegisterHardwareContentProtectionTeardownStatusEvent)(IDXGIAdapter3* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterHardwareContentProtectionTeardownStatus)(IDXGIAdapter3* self, DWORD dwCookie);
                        HRESULT (WINAPI *QueryVideoMemoryInfo)(IDXGIAdapter3* self, UINT NodeIndex, DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup, DXGI_QUERY_VIDEO_MEMORY_INFO * pVideoMemoryInfo);
                        HRESULT (WINAPI *SetVideoMemoryReservation)(IDXGIAdapter3* self, UINT NodeIndex, DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup, UINT64 Reservation);
                        HRESULT (WINAPI *RegisterVideoMemoryBudgetChangeNotificationEvent)(IDXGIAdapter3* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterVideoMemoryBudgetChangeNotification)(IDXGIAdapter3* self, DWORD dwCookie);
            
        } IDXGIAdapter3Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDesc)(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc);
                        HRESULT (WINAPI *GetDisplayModeList)(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc);
                        HRESULT (WINAPI *FindClosestMatchingMode)(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice);
                        HRESULT (WINAPI *WaitForVBlank)(IDXGIOutput* self);
                        HRESULT (WINAPI *TakeOwnership)(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive);
                        void (WINAPI *ReleaseOwnership)(IDXGIOutput* self);
                        HRESULT (WINAPI *GetGammaControlCapabilities)(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps);
                        HRESULT (WINAPI *SetGammaControl)(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray);
                        HRESULT (WINAPI *GetGammaControl)(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray);
                        HRESULT (WINAPI *SetDisplaySurface)(IDXGIOutput* self, IDXGISurface * pScanoutSurface);
                        HRESULT (WINAPI *GetDisplaySurfaceData)(IDXGIOutput* self, IDXGISurface * pDestination);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats);
                        HRESULT (WINAPI *GetDisplayModeList1)(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc);
                        HRESULT (WINAPI *FindClosestMatchingMode1)(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice);
                        HRESULT (WINAPI *GetDisplaySurfaceData1)(IDXGIOutput1* self, IDXGIResource * pDestination);
                        HRESULT (WINAPI *DuplicateOutput)(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication);
                        BOOL (WINAPI *SupportsOverlays)(IDXGIOutput2* self);
                        HRESULT (WINAPI *CheckOverlaySupport)(IDXGIOutput3* self, DXGI_FORMAT EnumFormat, IUnknown * pConcernedDevice, UINT * pFlags);
                        HRESULT (WINAPI *CheckOverlayColorSpaceSupport)(IDXGIOutput4* self, DXGI_FORMAT Format, DXGI_COLOR_SPACE_TYPE ColorSpace, IUnknown * pConcernedDevice, UINT * pFlags);
                        HRESULT (WINAPI *DuplicateOutput1)(IDXGIOutput5* self, IUnknown * pDevice, UINT Flags, UINT SupportedFormatsCount, const DXGI_FORMAT * pSupportedFormats, IDXGIOutputDuplication ** ppOutputDuplication);
            
        } IDXGIOutput5Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDevice)(IDXGIDeviceSubObject* self, const IID & riid, void ** ppDevice);
                        HRESULT (WINAPI *Present)(IDXGISwapChain* self, UINT SyncInterval, UINT Flags);
                        HRESULT (WINAPI *GetBuffer)(IDXGISwapChain* self, UINT Buffer, const IID & riid, void ** ppSurface);
                        HRESULT (WINAPI *SetFullscreenState)(IDXGISwapChain* self, BOOL Fullscreen, IDXGIOutput * pTarget);
                        HRESULT (WINAPI *GetFullscreenState)(IDXGISwapChain* self, BOOL * pFullscreen, IDXGIOutput ** ppTarget);
                        HRESULT (WINAPI *GetDesc)(IDXGISwapChain* self, DXGI_SWAP_CHAIN_DESC * pDesc);
                        HRESULT (WINAPI *ResizeBuffers)(IDXGISwapChain* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
                        HRESULT (WINAPI *ResizeTarget)(IDXGISwapChain* self, const DXGI_MODE_DESC * pNewTargetParameters);
                        HRESULT (WINAPI *GetContainingOutput)(IDXGISwapChain* self, IDXGIOutput ** ppOutput);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGISwapChain* self, DXGI_FRAME_STATISTICS * pStats);
                        HRESULT (WINAPI *GetLastPresentCount)(IDXGISwapChain* self, UINT * pLastPresentCount);
                        HRESULT (WINAPI *GetDesc1)(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_DESC1 * pDesc);
                        HRESULT (WINAPI *GetFullscreenDesc)(IDXGISwapChain1* self, DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pDesc);
                        HRESULT (WINAPI *GetHwnd)(IDXGISwapChain1* self, HWND * pHwnd);
                        HRESULT (WINAPI *GetCoreWindow)(IDXGISwapChain1* self, const IID & refiid, void ** ppUnk);
                        HRESULT (WINAPI *Present1)(IDXGISwapChain1* self, UINT SyncInterval, UINT PresentFlags, const DXGI_PRESENT_PARAMETERS * pPresentParameters);
                        BOOL (WINAPI *IsTemporaryMonoSupported)(IDXGISwapChain1* self);
                        HRESULT (WINAPI *GetRestrictToOutput)(IDXGISwapChain1* self, IDXGIOutput ** ppRestrictToOutput);
                        HRESULT (WINAPI *SetBackgroundColor)(IDXGISwapChain1* self, const DXGI_RGBA * pColor);
                        HRESULT (WINAPI *GetBackgroundColor)(IDXGISwapChain1* self, DXGI_RGBA * pColor);
                        HRESULT (WINAPI *SetRotation)(IDXGISwapChain1* self, DXGI_MODE_ROTATION Rotation);
                        HRESULT (WINAPI *GetRotation)(IDXGISwapChain1* self, DXGI_MODE_ROTATION * pRotation);
                        HRESULT (WINAPI *SetSourceSize)(IDXGISwapChain2* self, UINT Width, UINT Height);
                        HRESULT (WINAPI *GetSourceSize)(IDXGISwapChain2* self, UINT * pWidth, UINT * pHeight);
                        HRESULT (WINAPI *SetMaximumFrameLatency)(IDXGISwapChain2* self, UINT MaxLatency);
                        HRESULT (WINAPI *GetMaximumFrameLatency)(IDXGISwapChain2* self, UINT * pMaxLatency);
                        HANDLE (WINAPI *GetFrameLatencyWaitableObject)(IDXGISwapChain2* self);
                        HRESULT (WINAPI *SetMatrixTransform)(IDXGISwapChain2* self, const DXGI_MATRIX_3X2_F * pMatrix);
                        HRESULT (WINAPI *GetMatrixTransform)(IDXGISwapChain2* self, DXGI_MATRIX_3X2_F * pMatrix);
                        UINT (WINAPI *GetCurrentBackBufferIndex)(IDXGISwapChain3* self);
                        HRESULT (WINAPI *CheckColorSpaceSupport)(IDXGISwapChain3* self, DXGI_COLOR_SPACE_TYPE ColorSpace, UINT * pColorSpaceSupport);
                        HRESULT (WINAPI *SetColorSpace1)(IDXGISwapChain3* self, DXGI_COLOR_SPACE_TYPE ColorSpace);
                        HRESULT (WINAPI *ResizeBuffers1)(IDXGISwapChain3* self, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT Format, UINT SwapChainFlags, const UINT * pCreationNodeMask, IUnknown *const * ppPresentQueue);
                        HRESULT (WINAPI *SetHDRMetaData)(IDXGISwapChain4* self, DXGI_HDR_METADATA_TYPE Type, UINT Size, void * pMetaData);
            
        } IDXGISwapChain4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetAdapter)(IDXGIDevice* self, IDXGIAdapter ** pAdapter);
                        HRESULT (WINAPI *CreateSurface)(IDXGIDevice* self, const DXGI_SURFACE_DESC * pDesc, UINT NumSurfaces, DXGI_USAGE Usage, const DXGI_SHARED_RESOURCE * pSharedResource, IDXGISurface ** ppSurface);
                        HRESULT (WINAPI *QueryResourceResidency)(IDXGIDevice* self, IUnknown *const * ppResources, DXGI_RESIDENCY * pResidencyStatus, UINT NumResources);
                        HRESULT (WINAPI *SetGPUThreadPriority)(IDXGIDevice* self, INT Priority);
                        HRESULT (WINAPI *GetGPUThreadPriority)(IDXGIDevice* self, INT * pPriority);
                        HRESULT (WINAPI *SetMaximumFrameLatency)(IDXGIDevice1* self, UINT MaxLatency);
                        HRESULT (WINAPI *GetMaximumFrameLatency)(IDXGIDevice1* self, UINT * pMaxLatency);
                        HRESULT (WINAPI *OfferResources)(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, DXGI_OFFER_RESOURCE_PRIORITY Priority);
                        HRESULT (WINAPI *ReclaimResources)(IDXGIDevice2* self, UINT NumResources, IDXGIResource *const * ppResources, BOOL * pDiscarded);
                        HRESULT (WINAPI *EnqueueSetEvent)(IDXGIDevice2* self, HANDLE hEvent);
                        void (WINAPI *Trim)(IDXGIDevice3* self);
                        HRESULT (WINAPI *OfferResources1)(IDXGIDevice4* self, UINT NumResources, IDXGIResource *const * ppResources, DXGI_OFFER_RESOURCE_PRIORITY Priority, UINT Flags);
                        HRESULT (WINAPI *ReclaimResources1)(IDXGIDevice4* self, UINT NumResources, IDXGIResource *const * ppResources, DXGI_RECLAIM_RESOURCE_RESULTS * pResults);
            
        } IDXGIDevice4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *EnumAdapters)(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter);
                        HRESULT (WINAPI *MakeWindowAssociation)(IDXGIFactory* self, HWND WindowHandle, UINT Flags);
                        HRESULT (WINAPI *GetWindowAssociation)(IDXGIFactory* self, HWND * pWindowHandle);
                        HRESULT (WINAPI *CreateSwapChain)(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain);
                        HRESULT (WINAPI *CreateSoftwareAdapter)(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter);
                        HRESULT (WINAPI *EnumAdapters1)(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter);
                        BOOL (WINAPI *IsCurrent)(IDXGIFactory1* self);
                        BOOL (WINAPI *IsWindowedStereoEnabled)(IDXGIFactory2* self);
                        HRESULT (WINAPI *CreateSwapChainForHwnd)(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        HRESULT (WINAPI *CreateSwapChainForCoreWindow)(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        HRESULT (WINAPI *GetSharedResourceAdapterLuid)(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid);
                        HRESULT (WINAPI *RegisterStereoStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie);
                        HRESULT (WINAPI *RegisterStereoStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterStereoStatus)(IDXGIFactory2* self, DWORD dwCookie);
                        HRESULT (WINAPI *RegisterOcclusionStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie);
                        HRESULT (WINAPI *RegisterOcclusionStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterOcclusionStatus)(IDXGIFactory2* self, DWORD dwCookie);
                        HRESULT (WINAPI *CreateSwapChainForComposition)(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        UINT (WINAPI *GetCreationFlags)(IDXGIFactory3* self);
                        HRESULT (WINAPI *EnumAdapterByLuid)(IDXGIFactory4* self, LUID AdapterLuid, const IID & riid, void ** ppvAdapter);
                        HRESULT (WINAPI *EnumWarpAdapter)(IDXGIFactory4* self, const IID & riid, void ** ppvAdapter);
                        HRESULT (WINAPI *CheckFeatureSupport)(IDXGIFactory5* self, DXGI_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize);
            
        } IDXGIFactory5Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *EnumOutputs)(IDXGIAdapter* self, UINT Output, IDXGIOutput ** ppOutput);
                        HRESULT (WINAPI *GetDesc)(IDXGIAdapter* self, DXGI_ADAPTER_DESC * pDesc);
                        HRESULT (WINAPI *CheckInterfaceSupport)(IDXGIAdapter* self, const GUID & InterfaceName, LARGE_INTEGER * pUMDVersion);
                        HRESULT (WINAPI *GetDesc1)(IDXGIAdapter1* self, DXGI_ADAPTER_DESC1 * pDesc);
                        HRESULT (WINAPI *GetDesc2)(IDXGIAdapter2* self, DXGI_ADAPTER_DESC2 * pDesc);
                        HRESULT (WINAPI *RegisterHardwareContentProtectionTeardownStatusEvent)(IDXGIAdapter3* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterHardwareContentProtectionTeardownStatus)(IDXGIAdapter3* self, DWORD dwCookie);
                        HRESULT (WINAPI *QueryVideoMemoryInfo)(IDXGIAdapter3* self, UINT NodeIndex, DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup, DXGI_QUERY_VIDEO_MEMORY_INFO * pVideoMemoryInfo);
                        HRESULT (WINAPI *SetVideoMemoryReservation)(IDXGIAdapter3* self, UINT NodeIndex, DXGI_MEMORY_SEGMENT_GROUP MemorySegmentGroup, UINT64 Reservation);
                        HRESULT (WINAPI *RegisterVideoMemoryBudgetChangeNotificationEvent)(IDXGIAdapter3* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterVideoMemoryBudgetChangeNotification)(IDXGIAdapter3* self, DWORD dwCookie);
                        HRESULT (WINAPI *GetDesc3)(IDXGIAdapter4* self, DXGI_ADAPTER_DESC3 * pDesc);
            
        } IDXGIAdapter4Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *GetDesc)(IDXGIOutput* self, DXGI_OUTPUT_DESC * pDesc);
                        HRESULT (WINAPI *GetDisplayModeList)(IDXGIOutput* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC * pDesc);
                        HRESULT (WINAPI *FindClosestMatchingMode)(IDXGIOutput* self, const DXGI_MODE_DESC * pModeToMatch, DXGI_MODE_DESC * pClosestMatch, IUnknown * pConcernedDevice);
                        HRESULT (WINAPI *WaitForVBlank)(IDXGIOutput* self);
                        HRESULT (WINAPI *TakeOwnership)(IDXGIOutput* self, IUnknown * pDevice, BOOL Exclusive);
                        void (WINAPI *ReleaseOwnership)(IDXGIOutput* self);
                        HRESULT (WINAPI *GetGammaControlCapabilities)(IDXGIOutput* self, DXGI_GAMMA_CONTROL_CAPABILITIES * pGammaCaps);
                        HRESULT (WINAPI *SetGammaControl)(IDXGIOutput* self, const DXGI_GAMMA_CONTROL * pArray);
                        HRESULT (WINAPI *GetGammaControl)(IDXGIOutput* self, DXGI_GAMMA_CONTROL * pArray);
                        HRESULT (WINAPI *SetDisplaySurface)(IDXGIOutput* self, IDXGISurface * pScanoutSurface);
                        HRESULT (WINAPI *GetDisplaySurfaceData)(IDXGIOutput* self, IDXGISurface * pDestination);
                        HRESULT (WINAPI *GetFrameStatistics)(IDXGIOutput* self, DXGI_FRAME_STATISTICS * pStats);
                        HRESULT (WINAPI *GetDisplayModeList1)(IDXGIOutput1* self, DXGI_FORMAT EnumFormat, UINT Flags, UINT * pNumModes, DXGI_MODE_DESC1 * pDesc);
                        HRESULT (WINAPI *FindClosestMatchingMode1)(IDXGIOutput1* self, const DXGI_MODE_DESC1 * pModeToMatch, DXGI_MODE_DESC1 * pClosestMatch, IUnknown * pConcernedDevice);
                        HRESULT (WINAPI *GetDisplaySurfaceData1)(IDXGIOutput1* self, IDXGIResource * pDestination);
                        HRESULT (WINAPI *DuplicateOutput)(IDXGIOutput1* self, IUnknown * pDevice, IDXGIOutputDuplication ** ppOutputDuplication);
                        BOOL (WINAPI *SupportsOverlays)(IDXGIOutput2* self);
                        HRESULT (WINAPI *CheckOverlaySupport)(IDXGIOutput3* self, DXGI_FORMAT EnumFormat, IUnknown * pConcernedDevice, UINT * pFlags);
                        HRESULT (WINAPI *CheckOverlayColorSpaceSupport)(IDXGIOutput4* self, DXGI_FORMAT Format, DXGI_COLOR_SPACE_TYPE ColorSpace, IUnknown * pConcernedDevice, UINT * pFlags);
                        HRESULT (WINAPI *DuplicateOutput1)(IDXGIOutput5* self, IUnknown * pDevice, UINT Flags, UINT SupportedFormatsCount, const DXGI_FORMAT * pSupportedFormats, IDXGIOutputDuplication ** ppOutputDuplication);
                        HRESULT (WINAPI *GetDesc1)(IDXGIOutput6* self, DXGI_OUTPUT_DESC1 * pDesc);
                        HRESULT (WINAPI *CheckHardwareCompositionSupport)(IDXGIOutput6* self, UINT * pFlags);
            
        } IDXGIOutput6Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *EnumAdapters)(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter);
                        HRESULT (WINAPI *MakeWindowAssociation)(IDXGIFactory* self, HWND WindowHandle, UINT Flags);
                        HRESULT (WINAPI *GetWindowAssociation)(IDXGIFactory* self, HWND * pWindowHandle);
                        HRESULT (WINAPI *CreateSwapChain)(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain);
                        HRESULT (WINAPI *CreateSoftwareAdapter)(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter);
                        HRESULT (WINAPI *EnumAdapters1)(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter);
                        BOOL (WINAPI *IsCurrent)(IDXGIFactory1* self);
                        BOOL (WINAPI *IsWindowedStereoEnabled)(IDXGIFactory2* self);
                        HRESULT (WINAPI *CreateSwapChainForHwnd)(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        HRESULT (WINAPI *CreateSwapChainForCoreWindow)(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        HRESULT (WINAPI *GetSharedResourceAdapterLuid)(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid);
                        HRESULT (WINAPI *RegisterStereoStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie);
                        HRESULT (WINAPI *RegisterStereoStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterStereoStatus)(IDXGIFactory2* self, DWORD dwCookie);
                        HRESULT (WINAPI *RegisterOcclusionStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie);
                        HRESULT (WINAPI *RegisterOcclusionStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterOcclusionStatus)(IDXGIFactory2* self, DWORD dwCookie);
                        HRESULT (WINAPI *CreateSwapChainForComposition)(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        UINT (WINAPI *GetCreationFlags)(IDXGIFactory3* self);
                        HRESULT (WINAPI *EnumAdapterByLuid)(IDXGIFactory4* self, LUID AdapterLuid, const IID & riid, void ** ppvAdapter);
                        HRESULT (WINAPI *EnumWarpAdapter)(IDXGIFactory4* self, const IID & riid, void ** ppvAdapter);
                        HRESULT (WINAPI *CheckFeatureSupport)(IDXGIFactory5* self, DXGI_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize);
                        HRESULT (WINAPI *EnumAdapterByGpuPreference)(IDXGIFactory6* self, UINT Adapter, DXGI_GPU_PREFERENCE GpuPreference, const IID & riid, void ** ppvAdapter);
            
        } IDXGIFactory6Table;
            struct
        {
            
            HRESULT (WINAPI *QueryInterface)(IUnknown* self, const IID & riid, void ** ppvObject);
                        ULONG (WINAPI *AddRef)(IUnknown* self);
                        ULONG (WINAPI *Release)(IUnknown* self);
                        HRESULT (WINAPI *SetPrivateData)(IDXGIObject* self, const GUID & Name, UINT DataSize, const void * pData);
                        HRESULT (WINAPI *SetPrivateDataInterface)(IDXGIObject* self, const GUID & Name, const IUnknown * pUnknown);
                        HRESULT (WINAPI *GetPrivateData)(IDXGIObject* self, const GUID & Name, UINT * pDataSize, void * pData);
                        HRESULT (WINAPI *GetParent)(IDXGIObject* self, const IID & riid, void ** ppParent);
                        HRESULT (WINAPI *EnumAdapters)(IDXGIFactory* self, UINT Adapter, IDXGIAdapter ** ppAdapter);
                        HRESULT (WINAPI *MakeWindowAssociation)(IDXGIFactory* self, HWND WindowHandle, UINT Flags);
                        HRESULT (WINAPI *GetWindowAssociation)(IDXGIFactory* self, HWND * pWindowHandle);
                        HRESULT (WINAPI *CreateSwapChain)(IDXGIFactory* self, IUnknown * pDevice, DXGI_SWAP_CHAIN_DESC * pDesc, IDXGISwapChain ** ppSwapChain);
                        HRESULT (WINAPI *CreateSoftwareAdapter)(IDXGIFactory* self, HMODULE Module, IDXGIAdapter ** ppAdapter);
                        HRESULT (WINAPI *EnumAdapters1)(IDXGIFactory1* self, UINT Adapter, IDXGIAdapter1 ** ppAdapter);
                        BOOL (WINAPI *IsCurrent)(IDXGIFactory1* self);
                        BOOL (WINAPI *IsWindowedStereoEnabled)(IDXGIFactory2* self);
                        HRESULT (WINAPI *CreateSwapChainForHwnd)(IDXGIFactory2* self, IUnknown * pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1 * pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC * pFullscreenDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        HRESULT (WINAPI *CreateSwapChainForCoreWindow)(IDXGIFactory2* self, IUnknown * pDevice, IUnknown * pWindow, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        HRESULT (WINAPI *GetSharedResourceAdapterLuid)(IDXGIFactory2* self, HANDLE hResource, LUID * pLuid);
                        HRESULT (WINAPI *RegisterStereoStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie);
                        HRESULT (WINAPI *RegisterStereoStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterStereoStatus)(IDXGIFactory2* self, DWORD dwCookie);
                        HRESULT (WINAPI *RegisterOcclusionStatusWindow)(IDXGIFactory2* self, HWND WindowHandle, UINT wMsg, DWORD * pdwCookie);
                        HRESULT (WINAPI *RegisterOcclusionStatusEvent)(IDXGIFactory2* self, HANDLE hEvent, DWORD * pdwCookie);
                        void (WINAPI *UnregisterOcclusionStatus)(IDXGIFactory2* self, DWORD dwCookie);
                        HRESULT (WINAPI *CreateSwapChainForComposition)(IDXGIFactory2* self, IUnknown * pDevice, const DXGI_SWAP_CHAIN_DESC1 * pDesc, IDXGIOutput * pRestrictToOutput, IDXGISwapChain1 ** ppSwapChain);
                        UINT (WINAPI *GetCreationFlags)(IDXGIFactory3* self);
                        HRESULT (WINAPI *EnumAdapterByLuid)(IDXGIFactory4* self, LUID AdapterLuid, const IID & riid, void ** ppvAdapter);
                        HRESULT (WINAPI *EnumWarpAdapter)(IDXGIFactory4* self, const IID & riid, void ** ppvAdapter);
                        HRESULT (WINAPI *CheckFeatureSupport)(IDXGIFactory5* self, DXGI_FEATURE Feature, void * pFeatureSupportData, UINT FeatureSupportDataSize);
                        HRESULT (WINAPI *EnumAdapterByGpuPreference)(IDXGIFactory6* self, UINT Adapter, DXGI_GPU_PREFERENCE GpuPreference, const IID & riid, void ** ppvAdapter);
                        HRESULT (WINAPI *RegisterAdaptersChangedEvent)(IDXGIFactory7* self, HANDLE hEvent, DWORD * pdwCookie);
                        HRESULT (WINAPI *UnregisterAdaptersChangedEvent)(IDXGIFactory7* self, DWORD dwCookie);
            
        } IDXGIFactory7Table;
    
} DirectX;
