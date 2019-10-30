/******************************************************************************
Copyright (C) 2019 Intel Corporation

SPDX-License-Identifier: MIT

******************************************************************************/

#include "gpa-hook.h"
#include "dispatch-table/dispatch-table.h"
#include "dynamic-functions/directx-dynamic.h"
#include "logger/logger.h"

#include "ga-hook-common.h"
#include "ga-hook-coreaudio.h"
#include "ga-hook-xinput.h"
#include "ga-common.h"
#include "vsource.h"
#include "ctrl-msg.h"
#include "ctrl-sdl.h"

#include "PixelShader.h"
#include "VertexShader.h"
#include <SDL2/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <vector>
#include <atomic>
#include <DirectXMath.h>

using namespace gpa;

namespace gpa_hook {

	static IDirect3DSurface9 *resolvedSurface = NULL;
	static IDirect3DSurface9 *offscreenSurface = NULL;

	typedef struct _VERTEX
	{
		DirectX::XMFLOAT3 Pos;
		DirectX::XMFLOAT2 TexCoord;
	} VERTEX;

	IDXGIOutput1* pDxgiOutput1 = nullptr;
	IDXGIOutput* pDxgiOutput = nullptr;
	DXGI_OUTPUT_DESC gOutputDesc;
	IDXGIOutputDuplication* pDeskDupl = nullptr;
	IDXGIDevice* pDxgiDevice = nullptr;
	IDXGIAdapter* pDxgiAdapter = nullptr;

	UINT *pPointerShapeBufferSizeRequired = new UINT;
	DXGI_OUTDUPL_POINTER_SHAPE_INFO *pPointerShapeInfo = new DXGI_OUTDUPL_POINTER_SHAPE_INFO;
	IDXGIResource* pDesktopResource = nullptr;
	DXGI_OUTDUPL_FRAME_INFO gFrameInfo;
	BYTE *pPointerShapeBuffer = NULL;

	bool gFirstFrame = true;
	bool gIsPossibleToCaptureMouse = false;

	enum DX_VERSION
	{
		dx_none = 0,
		dx_9,
		dx_10,
		dx_10_1,
		dx_11
	};

	DXGI_FORMAT pDXGI_FORMAT = DXGI_FORMAT_UNKNOWN;

	enum class SPECIAL_FRAME_STATE
	{
		READY = 0,
		SKIP = 1,
		EMIT = 2,
	};

	static uint8_t special_frame_line[4 * SPECIAL_FRAME_BLOCK_SIZE * SPECIAL_FRAME_BLOCK_COUNT];

	std::atomic<SPECIAL_FRAME_STATE> special_frame_state;

	void MouseCapturePrepare(ID3D11Device*	pDevice)
	{

		HRESULT hr = pDevice->QueryInterface(__uuidof(IDXGIDevice), reinterpret_cast<void**>(&pDxgiDevice));

		// Get DXGI adapter
		hr = pDxgiDevice->GetParent(__uuidof(IDXGIAdapter), reinterpret_cast<void**>(&pDxgiAdapter));
		pDxgiDevice->Release();
		pDxgiDevice = nullptr;
		if (FAILED(hr)) {
			ga_error("Cannot get DXGI Adapter properly");
		}

		// Get output
		hr = pDxgiAdapter->EnumOutputs(0, &pDxgiOutput);
		pDxgiAdapter->Release();
		pDxgiAdapter = nullptr;
		if (FAILED(hr)) {
			ga_error("Cannot get DXGI output properly");
		}

		pDxgiOutput->GetDesc(&gOutputDesc);

		// QI for Output 1
		hr = pDxgiOutput->QueryInterface(__uuidof(pDxgiOutput1), reinterpret_cast<void**>(&pDxgiOutput1));
		pDxgiOutput->Release();
		pDxgiOutput = nullptr;
		if (FAILED(hr)) {
			ga_error("Cannot get Query interface properly");
		}

		// Create desktop duplication
		hr = pDxgiOutput1->DuplicateOutput(pDevice, &pDeskDupl);
		pDxgiOutput1->Release();
		pDxgiOutput1 = nullptr;
		if (FAILED(hr)) {
			ga_error("Cannot create desktop duplication properly");
		}

		if (SUCCEEDED(hr) && pDeskDupl != nullptr) {
			gIsPossibleToCaptureMouse = true;
		}

		gFirstFrame = false;
	}

	bool MouseCapture(ID3D11Device*	pDevice, ID3D11DeviceContext *pContext, D3D11_TEXTURE2D_DESC desc, ID3D11RenderTargetView *pRTV)
	{

		CURSORINFO info = { 0 };
		info.cbSize = sizeof(info);
		GetCursorInfo(&info);

		if (info.flags == CURSOR_SHOWING) {

			HRESULT hr = pDeskDupl->AcquireNextFrame(500, &gFrameInfo, &pDesktopResource);

			pPointerShapeBuffer = new (std::nothrow) BYTE[gFrameInfo.PointerShapeBufferSize];

			hr = pDeskDupl->GetFramePointerShape(gFrameInfo.PointerShapeBufferSize, reinterpret_cast<void*>(pPointerShapeBuffer), pPointerShapeBufferSizeRequired, pPointerShapeInfo);

			ID3D11SamplerState* pSamplerLinear;

			D3D11_SAMPLER_DESC sampDesc;
			RtlZeroMemory(&sampDesc, sizeof(sampDesc));
			sampDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
			sampDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;
			sampDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;
			sampDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;
			sampDesc.ComparisonFunc = D3D11_COMPARISON_NEVER;
			sampDesc.MinLOD = 0;
			sampDesc.MaxLOD = D3D11_FLOAT32_MAX;
			hr = pDevice->CreateSamplerState(&sampDesc, &pSamplerLinear);

			//#############################################

			ID3D11BlendState* pBlendState;

			// Create the blend state
			D3D11_BLEND_DESC blendStateDesc;
			blendStateDesc.AlphaToCoverageEnable = FALSE;
			blendStateDesc.IndependentBlendEnable = FALSE;
			blendStateDesc.RenderTarget[0].BlendEnable = TRUE;
			blendStateDesc.RenderTarget[0].SrcBlend = D3D11_BLEND_SRC_ALPHA;
			blendStateDesc.RenderTarget[0].DestBlend = D3D11_BLEND_INV_SRC_ALPHA;
			blendStateDesc.RenderTarget[0].BlendOp = D3D11_BLEND_OP_ADD;
			blendStateDesc.RenderTarget[0].SrcBlendAlpha = D3D11_BLEND_ONE;
			blendStateDesc.RenderTarget[0].DestBlendAlpha = D3D11_BLEND_ZERO;
			blendStateDesc.RenderTarget[0].BlendOpAlpha = D3D11_BLEND_OP_ADD;
			blendStateDesc.RenderTarget[0].RenderTargetWriteMask = D3D11_COLOR_WRITE_ENABLE_ALL;
			hr = pDevice->CreateBlendState(&blendStateDesc, &pBlendState);

			//#############################################

			ID3D11VertexShader* pVertexShader;
			ID3D11PixelShader* pPixelShader;
			ID3D11InputLayout* pInputLayout;

			UINT Size = ARRAYSIZE(g_VS);
			hr = pDevice->CreateVertexShader(g_VS, Size, nullptr, &pVertexShader);

			D3D11_INPUT_ELEMENT_DESC Layout[] =
			{
				{"POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0, D3D11_INPUT_PER_VERTEX_DATA, 0},
				{"TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT, 0, 12, D3D11_INPUT_PER_VERTEX_DATA, 0}
			};
			UINT NumElements = ARRAYSIZE(Layout);
			hr = pDevice->CreateInputLayout(Layout, NumElements, g_VS, Size, &pInputLayout);

			pContext->IASetInputLayout(pInputLayout);

			Size = ARRAYSIZE(g_PS);
			hr = pDevice->CreatePixelShader(g_PS, Size, nullptr, &pPixelShader);

			//#############################################
			// Vars to be used
			ID3D11Texture2D* MouseTex = nullptr;
			ID3D11ShaderResourceView* ShaderRes = nullptr;
			ID3D11Buffer* VertexBufferMouse = nullptr;
			D3D11_SUBRESOURCE_DATA InitData;
			D3D11_TEXTURE2D_DESC Desc;
			D3D11_SHADER_RESOURCE_VIEW_DESC SDesc;
			ID3D11Texture2D* m_SharedSurf = NULL;

			// Position will be changed based on mouse position
			VERTEX Vertices[NUMVERTICES] =
			{
				{DirectX::XMFLOAT3(-1.0f, -1.0f, 0), DirectX::XMFLOAT2(0.0f, 1.0f)},
				{DirectX::XMFLOAT3(-1.0f, 1.0f, 0), DirectX::XMFLOAT2(0.0f, 0.0f)},
				{DirectX::XMFLOAT3(1.0f, -1.0f, 0), DirectX::XMFLOAT2(1.0f, 1.0f)},
				{DirectX::XMFLOAT3(1.0f, -1.0f, 0), DirectX::XMFLOAT2(1.0f, 1.0f)},
				{DirectX::XMFLOAT3(-1.0f, 1.0f, 0), DirectX::XMFLOAT2(0.0f, 0.0f)},
				{DirectX::XMFLOAT3(1.0f, 1.0f, 0), DirectX::XMFLOAT2(1.0f, 0.0f)},
			};

			INT DesktopWidth = desc.Width;
			INT DesktopHeight = desc.Height;

			// Center of desktop dimensions
			INT CenterX = (DesktopWidth / 2);
			INT CenterY = (DesktopHeight / 2);

			RECT screenResolution;
			const HWND hDesktop = GetDesktopWindow();
			GetWindowRect(hDesktop, &screenResolution);

			INT diffX = screenResolution.right - DesktopWidth;
			INT diffY = screenResolution.bottom - DesktopHeight;

			// Clipping adjusted coordinates / dimensions
			INT PtrWidth = 0;
			INT PtrHeight = 0;
			INT PtrLeft = 0;
			INT PtrTop = 0;

			// Buffer used if necessary (in case of monochrome or masked pointer)
			BYTE* InitBuffer = nullptr;

			// Used for copying pixels
			D3D11_BOX Box;
			Box.front = 0;
			Box.back = 1;

			Desc.MipLevels = 1;
			Desc.ArraySize = 1;
			Desc.Format = DXGI_FORMAT_B8G8R8A8_UNORM;
			Desc.SampleDesc.Count = 1;
			Desc.SampleDesc.Quality = 0;
			Desc.Usage = D3D11_USAGE_DEFAULT;
			Desc.BindFlags = D3D11_BIND_SHADER_RESOURCE;
			Desc.CPUAccessFlags = 0;
			Desc.MiscFlags = 0;

			// Set shader resource properties
			SDesc.Format = Desc.Format;
			SDesc.ViewDimension = D3D11_SRV_DIMENSION_TEXTURE2D;
			SDesc.Texture2D.MostDetailedMip = Desc.MipLevels - 1;
			SDesc.Texture2D.MipLevels = Desc.MipLevels;

			POINT pointerPos;
			GetCursorPos(&pointerPos);

			PtrLeft = pointerPos.x - diffX / 2;
			PtrTop = pointerPos.y - diffY / 2;

			PtrWidth = 32;	//TODO: need to be change to dynamic changing value
			PtrHeight = 32;	//TODO: need to be change to dynamic changing value

			// VERTEX creation
			Vertices[0].Pos.x = (PtrLeft - CenterX) / (FLOAT)CenterX;
			Vertices[0].Pos.y = -1 * ((PtrTop + PtrHeight) - CenterY) / (FLOAT)CenterY;
			Vertices[1].Pos.x = (PtrLeft - CenterX) / (FLOAT)CenterX;
			Vertices[1].Pos.y = -1 * (PtrTop - CenterY) / (FLOAT)CenterY;
			Vertices[2].Pos.x = ((PtrLeft + PtrWidth) - CenterX) / (FLOAT)CenterX;
			Vertices[2].Pos.y = -1 * ((PtrTop + PtrHeight) - CenterY) / (FLOAT)CenterY;
			Vertices[3].Pos.x = Vertices[2].Pos.x;
			Vertices[3].Pos.y = Vertices[2].Pos.y;
			Vertices[4].Pos.x = Vertices[1].Pos.x;
			Vertices[4].Pos.y = Vertices[1].Pos.y;
			Vertices[5].Pos.x = ((PtrLeft + PtrWidth) - CenterX) / (FLOAT)CenterX;
			Vertices[5].Pos.y = -1 * (PtrTop - CenterY) / (FLOAT)CenterY;

			// Set texture properties
			Desc.Width = PtrWidth;
			Desc.Height = PtrHeight;

			// Set up init data
			InitData.pSysMem = pPointerShapeBuffer;
			InitData.SysMemPitch = PtrWidth * COLOR_PER_PIXEL;
			InitData.SysMemSlicePitch = 0;

			// Create mouseshape as texture
			hr = pDevice->CreateTexture2D(&Desc, &InitData, &MouseTex);
			if (FAILED(hr))
			{
				return false;
			}

			// Create shader resource from texture
			hr = pDevice->CreateShaderResourceView(MouseTex, &SDesc, &ShaderRes);
			if (FAILED(hr))
			{
				MouseTex->Release();
				MouseTex = nullptr;
				return false;
			}

			D3D11_BUFFER_DESC BDesc;
			ZeroMemory(&BDesc, sizeof(D3D11_BUFFER_DESC));
			BDesc.Usage = D3D11_USAGE_DEFAULT;
			BDesc.ByteWidth = sizeof(VERTEX) * NUMVERTICES;
			BDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;
			BDesc.CPUAccessFlags = 0;

			ZeroMemory(&InitData, sizeof(D3D11_SUBRESOURCE_DATA));
			InitData.pSysMem = Vertices;

			// Create vertex buffer
			hr = pDevice->CreateBuffer(&BDesc, &InitData, &VertexBufferMouse);
			if (FAILED(hr))
			{
				ShaderRes->Release();
				ShaderRes = nullptr;
				MouseTex->Release();
				MouseTex = nullptr;
				return false;
			}

			// Set resources
			FLOAT BlendFactor[4] = { 0.f, 0.f, 0.f, 0.f };
			UINT Stride = sizeof(VERTEX);
			UINT Offset = 0;
			pContext->IASetVertexBuffers(0, 1, &VertexBufferMouse, &Stride, &Offset);
			pContext->OMSetBlendState(pBlendState, BlendFactor, 0xFFFFFFFF);
			pContext->OMSetRenderTargets(1, &pRTV, nullptr);
			pContext->VSSetShader(pVertexShader, nullptr, 0);
			pContext->PSSetShader(pPixelShader, nullptr, 0);
			pContext->PSSetShaderResources(0, 1, &ShaderRes);
			pContext->PSSetSamplers(0, 1, &pSamplerLinear);

			// Draw
			pContext->Draw(NUMVERTICES, 0);

			// Clean
			if (VertexBufferMouse)
			{
				VertexBufferMouse->Release();
				VertexBufferMouse = nullptr;
			}
			if (ShaderRes)
			{
				ShaderRes->Release();
				ShaderRes = nullptr;
			}
			if (MouseTex)
			{
				MouseTex->Release();
				MouseTex = nullptr;
			}
			if (InitBuffer)
			{
				delete[] InitBuffer;
				InitBuffer = nullptr;
			}
			pPointerShapeBuffer = nullptr;
		}

		return true;
	}

	unsigned char* MouseSDLCapture(D3D11_MAPPED_SUBRESOURCE mappedScreen, D3D11_TEXTURE2D_DESC desc)
	{

		SDL_Rect dest;
		std::vector <SDL_Cursor_Data *>pCursorData;
		SDL_Cursor_Data *pCursorDataTmp = nullptr;
		SDL_Surface *pCursorSurface = nullptr;
		int mouseX, mouseY, i = 0;

		void *pSrcVoid = (void *)mappedScreen.pData;

		HCURSOR CursorSDL = (HCURSOR)SDL_GetCursor()->driverdata;

		SDL_Surface *pDestSurface = SDL_CreateRGBSurfaceWithFormatFrom(pSrcVoid, desc.Width, desc.Height, 0, desc.Width*COLOR_PER_PIXEL, SDL_PIXELFORMAT_ABGR8888);
		if (!pDestSurface) {
			ga_error("%s", "Cannot create surface from game window");
		}

		// Get cursor position
		SDL_GetMouseState(&mouseX, &mouseY);
		dest.x = mouseX;
		dest.y = mouseY;

		// Get all prepared cursor masks
		while (SDL_GetCursorData(i)->cursorData.driverdata != NULL) {
			pCursorData.push_back(SDL_GetCursorData(i));
			pCursorDataTmp = SDL_GetCursorData(i);
			i++;
		}
		if (pCursorDataTmp) {
			// Check if cursor is changed
			if (pCursorDataTmp->cursorData.driverdata != CursorSDL) {
				for (std::vector<SDL_Cursor_Data *>::iterator it = pCursorData.begin(); it != pCursorData.end(); ++it) {
					if ((*it)->cursorData.driverdata == CursorSDL) {
						pCursorDataTmp = (*it);
						pCursorSurface = &(*it)->cursorMask;
					}
				}
			}
			if (pCursorSurface) {
				SDL_Surface *pConvertedSurface = SDL_ConvertSurfaceFormat(pCursorSurface, SDL_PIXELFORMAT_ABGR8888, 0);
				if (!pConvertedSurface) {
					ga_error("%s", "Cannot convert surface");
				}

				if (SDL_BlitSurface(pConvertedSurface, NULL, pDestSurface, &dest) != NULL) {
					ga_error("%s", "Cannot map mouse cursor to screen!");
				}

				// Clean
				pCursorData.clear();
				pCursorDataTmp = nullptr;
				pSrcVoid = nullptr;

				return (unsigned char*)pDestSurface->pixels;
			}
		}
		return 0;
	}

	static int DXGI_get_resolution(IDXGISwapChain *pSwapChain)
	{
		DXGI_SWAP_CHAIN_DESC pDESC;
		static int initialized = 0;
		//
		if (initialized > 0) {
			return 0;
		}
		// get current resolution
		pSwapChain->GetDesc(&pDESC);
		//
		if (ga_hook_get_resolution(pDESC.BufferDesc.Width, pDESC.BufferDesc.Height) < 0)
			return -1;
		initialized = 1;
		return 0;
	}

	static int D3D9_get_resolution(IDirect3DDevice9 *pDevice)
	{
		HRESULT hr;
		D3DSURFACE_DESC desc;
		IDirect3DSurface9 *renderSurface;
		static int initialized = 0;
		//
		if (initialized > 0) {
			return 0;
		}
		// get current resolution
		hr = pDevice->GetRenderTarget(0, &renderSurface);
		if (!renderSurface || FAILED(hr))
			return -1;
		renderSurface->GetDesc(&desc);
		renderSurface->Release();
		//
		if (ga_hook_get_resolution(desc.Width, desc.Height) < 0)
			return -1;
		initialized = 1;
		return 0;
	}

	static bool D3D9_screen_capture(IDirect3DDevice9 * pDevice)
	{
		static int frame_interval;
		static LARGE_INTEGER initialTv, captureTv, freq;
		static int capture_initialized = 0;
		//
		HRESULT hr;
		D3DSURFACE_DESC desc;
		IDirect3DSurface9 *renderSurface, *oldRenderSurface;
		D3DLOCKED_RECT lockedRect;
		int i;
		dpipe_buffer_t *data;
		vsource_frame_t *frame;
		//
		if (vsource_initialized == 0)
			return false;
		//
		renderSurface = oldRenderSurface = NULL;
		//
		hr = pDevice->GetRenderTarget(0, &renderSurface);
		if (FAILED(hr)) {
			if (hr == D3DERR_INVALIDCALL) {
				ga_error("GetRenderTarget failed (INVALIDCALL)\n");
			}
			else if (hr == D3DERR_NOTFOUND) {
				ga_error("GetRenderTarget failed (D3DERR_NOTFOUND)\n");
			}
			else {
				ga_error("GetRenderTarget failed. (other)\n");
			}
		}
		if (renderSurface == NULL) {
			ga_error("renderSurface == NULL.\n");
			return false;
		}

		renderSurface->GetDesc(&desc);

		if (desc.Width != game_width
			|| desc.Height != game_height) {
			return false;
		}

		if (capture_initialized == 0) {
			frame_interval = 1000000 / video_fps; // in the unif of us
			frame_interval++;
			QueryPerformanceFrequency(&freq);
			QueryPerformanceCounter(&initialTv);
			capture_initialized = 1;
		}
		else {
			QueryPerformanceCounter(&captureTv);
		}
		// check if the surface of local game enable multisampling,
		// multisampling enabled will avoid locking in the surface
		// if yes, create a no-multisampling surface and copy frame into it
		if (desc.MultiSampleType != D3DMULTISAMPLE_NONE) {
			if (resolvedSurface == NULL) {
				hr = pDevice->CreateRenderTarget(game_width, game_height,
					desc.Format,
					D3DMULTISAMPLE_NONE,
					0,			// non multisampleQuality
					FALSE,			// lockable
					&resolvedSurface, NULL);
				if (FAILED(hr)) {
					ga_error("CreateRenderTarget(resolvedSurface) failed.\n");
					return false;
				}
			}

			hr = pDevice->StretchRect(renderSurface, NULL,
				resolvedSurface, NULL, D3DTEXF_NONE);
			if (FAILED(hr)) {
				ga_error("StretchRect failed.\n");
				return false;
			}

			oldRenderSurface = renderSurface;
			renderSurface = resolvedSurface;
		}

		// create offline surface in system memory
		if (offscreenSurface == NULL) {
			hr = pDevice->CreateOffscreenPlainSurface(game_width, game_height,
				desc.Format,
				D3DPOOL_SYSTEMMEM,
				&offscreenSurface, NULL);
			if (FAILED(hr)) {
				ga_error("Create offscreen surface failed.\n");
				return false;
			}
		}

		// copy the render-target data from device memory to system memory
		hr = pDevice->GetRenderTargetData(renderSurface, offscreenSurface);

		if (FAILED(hr)) {
			ga_error("GetRenderTargetData failed.\n");
			if (oldRenderSurface)
				oldRenderSurface->Release();
			else
				renderSurface->Release();
			return false;
		}

		if (oldRenderSurface)
			oldRenderSurface->Release();
		else
			renderSurface->Release();

		// start to lock screen from offline surface
		hr = offscreenSurface->LockRect(&lockedRect, NULL, NULL);
		if (FAILED(hr)) {
			ga_error("LockRect failed.\n");
			return false;
		}
		// copy image
		do {
			unsigned char *src, *dst;
			data = dpipe_get(g_pipe[0]);
			frame = (vsource_frame_t*)data->pointer;
			frame->pixelformat = AV_PIX_FMT_BGRA;
			frame->realwidth = desc.Width;
			frame->realheight = desc.Height;
			frame->realstride = desc.Width << 2;
			frame->realsize = frame->realwidth * frame->realstride;
			frame->linesize[0] = frame->realstride;//frame->stride;
			//
			src = (unsigned char*)lockedRect.pBits;
			dst = (unsigned char*)frame->imgbuf;
			for (i = 0; i < /*encoder_height*/frame->realheight; i++) {
				CopyMemory(dst, src, frame->realstride/*frame->stride*/);
				src += lockedRect.Pitch;
				dst += frame->realstride;//frame->stride;
			}
			frame->imgpts = pcdiff_us(captureTv, initialTv, freq) / frame_interval;
			gettimeofday(&frame->timestamp, NULL);
		} while (0);

		// duplicate from channel 0 to other channels
		for (i = 1; i < SOURCES; i++) {
			int j;
			dpipe_buffer_t *dupdata;
			vsource_frame_t *dupframe;
			dupdata = dpipe_get(g_pipe[i]);
			dupframe = (vsource_frame_t*)dupdata->pointer;
			//
			vsource_dup_frame(frame, dupframe);
			//
			dpipe_store(g_pipe[i], dupdata);
		}
		dpipe_store(g_pipe[0], data);

		offscreenSurface->UnlockRect();
#if 1	// XXX: disable until we have found a good place to safely Release()
		if (hook_boost == 0) {
			if (offscreenSurface != NULL) {
				offscreenSurface->Release();
				offscreenSurface = NULL;
			}
			if (resolvedSurface != NULL) {
				resolvedSurface->Release();
				resolvedSurface = NULL;
			}
		}
#endif
		return true;
	}

	static void special_frame_request_handler(ctrlmsg_system_t *)
	{
		special_frame_state = SPECIAL_FRAME_STATE::SKIP;
	}

	static void prepare_special_frame_request_handling()
	{
		ga_error("special frame handler setup\n");
		ctrlsys_set_handler(CTRL_MSGSYS_SUBTYPE_SPECIAL_FRAME, special_frame_request_handler);

		for (int i = 0; i < SPECIAL_FRAME_BLOCK_COUNT; ++i) {
			uint8_t color = special_frame_sequence[i] ? 255 : 0;
			for (int x = i * SPECIAL_FRAME_BLOCK_SIZE; x < (i + 1)*SPECIAL_FRAME_BLOCK_SIZE; ++x) {
				int m = 4 * x;
				special_frame_line[m + 0] = color;
				special_frame_line[m + 1] = color;
				special_frame_line[m + 2] = color;
				special_frame_line[m + 3] = 0xFF;
			}
		}
	}

	static int hook_audio(const char *type)
	{
	if (type == NULL)
		return 0;
	if (*type == '\0')
		return 0;
	if (strcmp(type, "coreaudio") == 0)
		return hook_coreaudio();
#ifdef ENABLE_WINMM
	if (strcmp(type, "winmm") == 0)
		return hook_winmm();
#endif
	return 0;
	}

	void InitializeDirectX()
	{
		dynamic_directx::LoadDirectXFunctions();

		pthread_t ga_server_thread;

		if (ga_hook_init() < 0) {
			ga_error("Failed to initialize hooking\n");
			exit(EXIT_FAILURE);
		}

		if (hook_audio(g_SharedParams->audio_type) < 0) {
			ga_error("Failed to initialize audio\n");
			exit(EXIT_FAILURE);
		}

		if (g_SharedParams->enable_controller) {
			hook_xinput();
			set_post_new_xinput_state(post_new_xinput_state);
		}

		if (pthread_create(&ga_server_thread, NULL, ga_server, NULL) != 0) {
			ga_error("cannot create GA server thread\n");
		}
		pthread_detach(ga_server_thread);

		prepare_special_frame_request_handling();
	}

	////////////////////////////////////
	////////		DX9			////////
	////////////////////////////////////
	//Prepared for future implementation
	//HRESULT WINAPI D3D9CreateDevice(IDirect3D9* self, UINT Adapter, D3DDEVTYPE DeviceType, HWND hFocusWindow, DWORD BehaviorFlags, D3DPRESENT_PARAMETERS * pPresentationParameters, IDirect3DDevice9 ** ppReturnedDeviceInterface)
	//{
	//	GPA_LOG_DEBUG("%s", "Workload uses D3D9CreateDevice()");
	//	HRESULT hr = self->CreateDevice(Adapter, DeviceType, hFocusWindow, BehaviorFlags, pPresentationParameters, ppReturnedDeviceInterface);
	//
	//	return hr;
	//}
	HRESULT WINAPI D3D9Present(IDirect3DDevice9* self, const RECT * pSourceRect, const RECT * pDestRect, HWND hDestWindowOverride, const RGNDATA * pDirtyRegion)
	{
		GPA_LOG_INFO("%s", "Workload uses D3D9Present");

		static int present_hooked = 0;

		if (present_hooked == 0) {
			present_hooked = 1;
		}

		HRESULT hr = self->Present(pSourceRect, pDestRect, hDestWindowOverride, pDirtyRegion);

		if (resolution_retrieved == 0) {
			if (D3D9_get_resolution(self) >= 0) {
				resolution_retrieved = 1;
			}
			return hr;
		}

		// rate controller
		if (enable_server_rate_control) {
			if (ga_hook_video_rate_control() > 0)
				D3D9_screen_capture(self);
		}
		else {
			D3D9_screen_capture(self);
		}

		return hr;
	}

	////////////////////////////////////
	////////		DX11		////////
	////////////////////////////////////
	HRESULT WINAPI DXGIPresent(IDXGISwapChain* self, UINT SyncInterval, UINT Flags)
	{
		GPA_LOG_DEBUG("%s", "Workload uses IDXGISwapChainTable.Present()");

		static int frame_interval;
		static LARGE_INTEGER initialTv, captureTv, freq;
		static int capture_initialized = 0;

		int i;
		dpipe_buffer_t *data;
		vsource_frame_t *frame;
		//
		DXGI_SWAP_CHAIN_DESC pDESC;
		HRESULT hr = 0;

		if (g_SharedParams->server_view) {
			hr = self->Present(SyncInterval, Flags);
		}

		if (resolution_retrieved == 0) {
			if (DXGI_get_resolution(self) >= 0) {
				resolution_retrieved = 1;
			}
			return hr;
		}

		if (vsource_initialized == 0) {
			ga_error("video source not initialized.\n");
			return hr;
		}

		self->GetDesc(&pDESC);
		pDXGI_FORMAT = pDESC.BufferDesc.Format;   // extract screen format for sws_scale

		if (pDESC.BufferDesc.Width != game_width
			|| pDESC.BufferDesc.Height != game_height) {
			ga_error("game width/height mismatched (%dx%d) != (%dx%d)\n",
				pDESC.BufferDesc.Width, pDESC.BufferDesc.Height,
				game_width, game_height);
			return hr;
		}

		//
		if (enable_server_rate_control && ga_hook_video_rate_control() < 0)
			return hr;

		static enum DX_VERSION dx_version = dx_11;

		if (capture_initialized == 0) {
			frame_interval = 1000000 / video_fps; // in the unif of us
			frame_interval++;
			QueryPerformanceFrequency(&freq);
			QueryPerformanceCounter(&initialTv);
			capture_initialized = 1;
		}
		else {
			QueryPerformanceCounter(&captureTv);
		}

		hr = 0;

		if (dx_version == dx_11) {

			ID3D11Device *pDevice = NULL;
			ID3D11DeviceContext *pContext = NULL;
			//get device and context

			self->GetDevice(__uuidof(ID3D11Device), (void **)&pDevice);
			{
				self->GetDevice(__uuidof(pDevice), (void**)&pDevice);
				pDevice->GetImmediateContext(&pContext);
			}
			ID3D11RenderTargetView *pRTV = NULL;
			ID3D11Resource *pSrcResource = NULL;
			pContext->OMGetRenderTargets(1, &pRTV, NULL);
			if (pRTV == NULL) {
				self->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pSrcResource);
			}
			else {
				pRTV->GetResource(&pSrcResource);
			}

			ID3D11Texture2D *pSrcBuffer = (ID3D11Texture2D *)pSrcResource;
			ID3D11Texture2D *pDstBuffer = NULL;

			D3D11_TEXTURE2D_DESC desc;
			pSrcBuffer->GetDesc(&desc);
			desc.BindFlags = 0;
			desc.CPUAccessFlags = D3D11_CPU_ACCESS_READ;
			desc.Usage = D3D11_USAGE_STAGING;

			hr = pDevice->CreateTexture2D(&desc, NULL, &pDstBuffer);
			if (FAILED(hr)) {
				ga_error("Failed to create buffer");
			}

			Uint32 subsystem_init = SDL_WasInit(SDL_INIT_EVERYTHING);

			//no sdl mouse capturing
			if (gFirstFrame) {
				MouseCapturePrepare(pDevice);
			}
			if (!subsystem_init && gIsPossibleToCaptureMouse) {
				MouseCapture(pDevice, pContext, desc, pRTV);
			}

			pContext->CopyResource(pDstBuffer, pSrcBuffer);

			D3D11_MAPPED_SUBRESOURCE mapped_screen;
			hr = pContext->Map(pDstBuffer, 0, D3D11_MAP_READ, 0, &mapped_screen);
			if (FAILED(hr)) {
				ga_error("Failed to map from DeviceContext");
			}
			if (mapped_screen.pData == NULL) {
				ga_error("Failed to be mapped, need to be solved\r\n");
				return 0;
			}

			// copy image
			do {
				if (special_frame_state == SPECIAL_FRAME_STATE::SKIP) {
					special_frame_state = SPECIAL_FRAME_STATE::EMIT;
				}
				else if (special_frame_state == SPECIAL_FRAME_STATE::EMIT) {
					auto special_block_width = SPECIAL_FRAME_BLOCK_SIZE * SPECIAL_FRAME_BLOCK_COUNT;
					auto special_block_height = SPECIAL_FRAME_BLOCK_SIZE;
					if (desc.Width < special_block_width || desc.Height < special_block_height)
					{
						ga_error("frame too small to emit latency measurement frame");
					}
					else {
						dpipe_buffer_t *special_frame_data;
						vsource_frame_t *special_frame;

						special_frame_data = dpipe_get(g_pipe[0]);
						special_frame = (vsource_frame_t*)special_frame_data->pointer;

						special_frame->pixelformat = AV_PIX_FMT_RGBA;
						special_frame->realwidth = desc.Width;
						special_frame->realheight = desc.Height;
						special_frame->realstride = desc.Width << 2;
						special_frame->realsize = special_frame->realwidth * special_frame->realstride;
						special_frame->linesize[0] = special_frame->realstride;

						unsigned char* lines = special_frame->imgbuf;

						for (int y = 0; y < SPECIAL_FRAME_BLOCK_SIZE; ++y)
							CopyMemory(&lines[y * special_frame->realstride], special_frame_line, sizeof(special_frame_line));

						dpipe_store(g_pipe[0], special_frame_data);
						special_frame_state = SPECIAL_FRAME_STATE::READY;
					}
				}

				unsigned char *src, *dst;
				data = dpipe_get(g_pipe[0]);
				if (nullptr == data) {
					ga_error("dpipe_get failed\r\n");
					return 0;
				}
				frame = (vsource_frame_t*)data->pointer;

				frame->isunknownformat = false;
				switch (desc.Format) {
				case DXGI_FORMAT_R8G8B8A8_TYPELESS:
				case DXGI_FORMAT_R8G8B8A8_UNORM:
				case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
					frame->pixelformat = AV_PIX_FMT_RGBA;
					break;
				case DXGI_FORMAT_B8G8R8A8_UNORM:
					frame->pixelformat = AV_PIX_FMT_BGRA;
					break;
				case DXGI_FORMAT_R10G10B10A2_UNORM:
					frame->pixelformat = AV_PIX_FMT_RGBA;
					frame->isunknownformat = true;
					break;
				default:
					ga_error("unknown frame format\n");
					// guess it is this one
					frame->pixelformat = AV_PIX_FMT_RGBA;
				}
				frame->realwidth = desc.Width;
				frame->realheight = desc.Height;
				frame->realstride = desc.Width << 2;
				frame->realsize = frame->realwidth * frame->realstride;
				frame->linesize[0] = frame->realstride;//frame->stride;

				//sdl mouse capturing
				if (subsystem_init && SDL_INIT_VIDEO) {
					src = MouseSDLCapture(mapped_screen, desc);
				}
				else {
					src = (unsigned char*)mapped_screen.pData;
				}

				dst = (unsigned char*)frame->imgbuf;
				for (i = 0; i < /*encoder_height*/frame->realheight; i++) {
					CopyMemory(dst, src, frame->realstride);
					src += mapped_screen.RowPitch;
					dst += frame->realstride;//frame->stride;
				}

				frame->imgpts = pcdiff_us(captureTv, initialTv, freq) / frame_interval;
				gettimeofday(&frame->timestamp, NULL);
			} while (0);
			// duplicate from channel 0 to other channels
			for (i = 1; i < SOURCES; i++) {
				int j;
				dpipe_buffer_t *dupdata;
				vsource_frame_t *dupframe;
				dupdata = dpipe_get(g_pipe[i]);
				dupframe = (vsource_frame_t*)dupdata->pointer;
				//
				vsource_dup_frame(frame, dupframe);
				//
				dpipe_store(g_pipe[i], dupdata);
			}
			dpipe_store(g_pipe[0], data);

			pContext->Unmap(pDstBuffer, 0);

			pDevice->Release();
			pContext->Release();
			pSrcResource->Release();
			if (pRTV) {
				pRTV->Release();
			}
			pDstBuffer->Release();
		}
		///////////////////////
		// Must call the method on the dispatch table; if you call the API method
		// directly, no following layers will receive the API call
		return hr;
	}

	HRESULT WINAPI D3D11CreateDevice(IDXGIAdapter * pAdapter, D3D_DRIVER_TYPE DriverType, HMODULE Software, UINT Flags, const D3D_FEATURE_LEVEL * pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, ID3D11Device ** ppDevice, D3D_FEATURE_LEVEL * pFeatureLevel, ID3D11DeviceContext ** ppImmediateContext)
	{
		HRESULT hRes = sDispatchTable.DirectX.D3D11CreateDevice(pAdapter, DriverType, Software, Flags, pFeatureLevels, FeatureLevels, SDKVersion, ppDevice, pFeatureLevel, ppImmediateContext);

		return hRes;
	}
}  // namespace gpa_hook