/*
 Copyright (2017) Intel Corporation

  The source code contained or described herein and all documents related to
 the source code ("Material") are owned by Intel Corporation or its suppliers
 or licensors. Title to the Material remains with Intel Corporation or its
 suppliers and licensors. The Material contains trade secrets and proprietary
 and confidential information of Intel or its suppliers and licensors. The
 Material is protected by worldwide copyright and trade secret laws and treaty
 provisions. No part of the Material may be used, copied, reproduced, modified,
 published, uploaded, posted, transmitted, distributed, or disclosed in any way
 without Intel's prior express written permission.

  No license under any patent, copyright, trade secret or other intellectual
 property right is granted to or conferred upon you by disclosure or delivery
 of the Materials, either expressly, by implication, inducement, estoppel or
 otherwise. Any license under such intellectual property rights must be express
 and approved by Intel in writing.
 */

#include "utility/directx-utilities.h"

#include <algorithm>
#include <assert.h>
#include <atlbase.h>

namespace gpa {
namespace utility {
namespace directx {

template <typename DescType>
void FillResourceDescFromApiDesc(DescType & apiDesc, D3D11ResourceDesc * desc) {
    DescType const * descPtr = &apiDesc;
    desc->Width = GetWidth(descPtr);
    desc->Height = GetHeight(descPtr);
    desc->Depth = GetDepth(descPtr);
    desc->ArraySize = GetArraySize(descPtr);
    desc->Format = GetFormat(descPtr);
    desc->MipLevels = GetMipLevels(descPtr);
    desc->BindFlags = apiDesc.BindFlags;
    desc->CPUAccessFlags = apiDesc.CPUAccessFlags;
    desc->MiscFlags = apiDesc.MiscFlags;
    desc->Usage = apiDesc.Usage;
    desc->SampleDesc = { 0,0 }; // needs to be updated only for 2D textures
}

void GetD3D11SubresourceDesc(ID3D11Resource * resource, uint32_t subresource, D3D11ResourceDesc * desc)
{
    if (resource == nullptr || desc == nullptr) {
        assert(false && "Invalid null parameter!");
        return;
    }

    D3D11_RESOURCE_DIMENSION dim = D3D11_RESOURCE_DIMENSION_UNKNOWN;
    resource->GetType(&dim);
    desc->Dimension = dim;

    // Used casting in this function instead of QueryInterface to prevent from
    // unnecessary calls going through the layer system and hooking the output
    // interface in tails

    assert(dim != D3D11_RESOURCE_DIMENSION_UNKNOWN && "Unexpected unknown resource dimension");
    if (dim == D3D11_RESOURCE_DIMENSION_BUFFER) {
        D3D11_BUFFER_DESC bufferDesc = {};
        ID3D11Buffer * buffer = (ID3D11Buffer*)resource;
        assert(buffer && "Could not obtain ID3D11Buffer interface");
        buffer->GetDesc(&bufferDesc);

        FillResourceDescFromApiDesc(bufferDesc, desc);
    }
    else if (dim == D3D11_RESOURCE_DIMENSION_TEXTURE1D) {
        D3D11_TEXTURE1D_DESC textureDesc = {};
        ID3D11Texture1D * texture = (ID3D11Texture1D*)resource;
        assert(texture && "Could not obtain ID3D11Texture1D interface");
        texture->GetDesc(&textureDesc);

        FillResourceDescFromApiDesc(textureDesc, desc);
    }
    else if (dim == D3D11_RESOURCE_DIMENSION_TEXTURE2D) {
        D3D11_TEXTURE2D_DESC textureDesc = {};
        ID3D11Texture2D * texture = (ID3D11Texture2D*)resource;
        assert(texture && "Could not obtain ID3D11Texture2D interface");
        texture->GetDesc(&textureDesc);

        FillResourceDescFromApiDesc(textureDesc, desc);
        desc->SampleDesc = textureDesc.SampleDesc;
    }
    else if (dim == D3D11_RESOURCE_DIMENSION_TEXTURE3D) {
        D3D11_TEXTURE3D_DESC textureDesc = {};
        ID3D11Texture3D * texture = (ID3D11Texture3D*)resource;
        assert(texture && "Could not obtain ID3D11Texture3D interface");
        texture->GetDesc(&textureDesc);

        FillResourceDescFromApiDesc(textureDesc, desc);
    }

    uint32_t subresourceMipLevel = subresource % desc->MipLevels;

    desc->Width = std::max(1u, desc->Width >> subresourceMipLevel);
    desc->Height = std::max(1u, desc->Height >> subresourceMipLevel);
    desc->Depth = std::max(1u, desc->Depth >> subresourceMipLevel);

    desc->CompressedWidth = desc->Width;
    desc->CompressedHeight = desc->Height;
    if (IsFormatCompressed(desc->Format)) {
        GetCompressedSize(&desc->CompressedWidth, &desc->CompressedHeight);
    }
    desc->FormatStride = GetFormatStride(desc->Format, desc->CompressedWidth);
}

size_t GetD3D11SubresourceDataSize(ID3D11Resource * resource, uint32_t subresource, uint32_t rowPitch, uint32_t depthPitch)
{
    D3D11ResourceDesc desc = {};
    GetD3D11SubresourceDesc(resource, subresource, &desc);
    size_t subresourceSize = 0;

    if (desc.Height > 1)
    {
        if (desc.Depth > 1)
        {
            // memory after the last slice can be outside of the texture
            subresourceSize = (depthPitch * desc.Depth) - (depthPitch - rowPitch * desc.Height);
        }
        else
        {
            subresourceSize = rowPitch * desc.Height;
        }

        // memory after the last row can be outside of the texture
        subresourceSize -= (rowPitch - desc.FormatStride);
    }
    else
    {
        subresourceSize = desc.FormatStride;
    }
    return subresourceSize;
}

uint32_t CalculateMipLevels(uint32_t const width, uint32_t const height, uint32_t const depth)
{
    uint32_t dimension = std::max(std::max(width, height), depth);
    uint32_t mipLevels = 0;
    for (; dimension > 0; dimension >>= 1) {
        ++mipLevels;
    }
    return mipLevels;
}

bool IsFormatCompressed(DXGI_FORMAT const format)
{
    switch (format)
    {
    case DXGI_FORMAT_BC1_TYPELESS:
    case DXGI_FORMAT_BC1_UNORM:
    case DXGI_FORMAT_BC1_UNORM_SRGB:
    case DXGI_FORMAT_BC2_TYPELESS:
    case DXGI_FORMAT_BC2_UNORM:
    case DXGI_FORMAT_BC2_UNORM_SRGB:
    case DXGI_FORMAT_BC3_TYPELESS:
    case DXGI_FORMAT_BC3_UNORM:
    case DXGI_FORMAT_BC3_UNORM_SRGB:
    case DXGI_FORMAT_BC4_TYPELESS:
    case DXGI_FORMAT_BC4_UNORM:
    case DXGI_FORMAT_BC4_SNORM:
    case DXGI_FORMAT_BC5_TYPELESS:
    case DXGI_FORMAT_BC5_UNORM:
    case DXGI_FORMAT_BC5_SNORM:
    case DXGI_FORMAT_BC6H_TYPELESS:
    case DXGI_FORMAT_BC6H_UF16:
    case DXGI_FORMAT_BC6H_SF16:
    case DXGI_FORMAT_BC7_TYPELESS:
    case DXGI_FORMAT_BC7_UNORM:
    case DXGI_FORMAT_BC7_UNORM_SRGB:
        return true;
    }

    return false;
}

uint32_t GetFormatBitCount(DXGI_FORMAT const format)
{
    uint32_t bitCount = 0;
    switch (format)
    {
    case DXGI_FORMAT_R32G32B32A32_TYPELESS:
    case DXGI_FORMAT_R32G32B32A32_FLOAT:
    case DXGI_FORMAT_R32G32B32A32_UINT:
    case DXGI_FORMAT_R32G32B32A32_SINT:
        bitCount = 128;
        break;

    case DXGI_FORMAT_R32G32B32_TYPELESS:
    case DXGI_FORMAT_R32G32B32_FLOAT:
    case DXGI_FORMAT_R32G32B32_UINT:
    case DXGI_FORMAT_R32G32B32_SINT:
        bitCount = 96;
        break;

    case DXGI_FORMAT_R16G16B16A16_TYPELESS:
    case DXGI_FORMAT_R16G16B16A16_FLOAT:
    case DXGI_FORMAT_R16G16B16A16_UNORM:
    case DXGI_FORMAT_R16G16B16A16_UINT:
    case DXGI_FORMAT_R16G16B16A16_SNORM:
    case DXGI_FORMAT_R16G16B16A16_SINT:
    case DXGI_FORMAT_R32G32_TYPELESS:
    case DXGI_FORMAT_R32G32_FLOAT:
    case DXGI_FORMAT_R32G32_UINT:
    case DXGI_FORMAT_R32G32_SINT:
    case DXGI_FORMAT_R32G8X24_TYPELESS:
    case DXGI_FORMAT_D32_FLOAT_S8X24_UINT:
    case DXGI_FORMAT_R32_FLOAT_X8X24_TYPELESS:
    case DXGI_FORMAT_X32_TYPELESS_G8X24_UINT:
        bitCount = 64;
        break;

    case DXGI_FORMAT_R10G10B10A2_TYPELESS:
    case DXGI_FORMAT_R10G10B10A2_UNORM:
    case DXGI_FORMAT_R10G10B10A2_UINT:
    case DXGI_FORMAT_R11G11B10_FLOAT:
    case DXGI_FORMAT_R8G8B8A8_TYPELESS:
    case DXGI_FORMAT_R8G8B8A8_UNORM:
    case DXGI_FORMAT_R8G8B8A8_UNORM_SRGB:
    case DXGI_FORMAT_R8G8B8A8_SNORM:
    case DXGI_FORMAT_R8G8B8A8_SINT:
    case DXGI_FORMAT_R8G8B8A8_UINT:
    case DXGI_FORMAT_R16G16_TYPELESS:
    case DXGI_FORMAT_R16G16_FLOAT:
    case DXGI_FORMAT_R16G16_UNORM:
    case DXGI_FORMAT_R16G16_UINT:
    case DXGI_FORMAT_R16G16_SNORM:
    case DXGI_FORMAT_R16G16_SINT:
    case DXGI_FORMAT_R32_TYPELESS:
    case DXGI_FORMAT_D32_FLOAT:
    case DXGI_FORMAT_R32_FLOAT:
    case DXGI_FORMAT_R32_UINT:
    case DXGI_FORMAT_R32_SINT:
    case DXGI_FORMAT_R24G8_TYPELESS:
    case DXGI_FORMAT_D24_UNORM_S8_UINT:
    case DXGI_FORMAT_R24_UNORM_X8_TYPELESS:
    case DXGI_FORMAT_X24_TYPELESS_G8_UINT:
        bitCount = 32;
        break;

    case DXGI_FORMAT_R8G8_TYPELESS:
    case DXGI_FORMAT_R8G8_UNORM:
    case DXGI_FORMAT_R8G8_UINT:
    case DXGI_FORMAT_R8G8_SNORM:
    case DXGI_FORMAT_R8G8_SINT:
    case DXGI_FORMAT_R16_TYPELESS:
    case DXGI_FORMAT_R16_FLOAT:
    case DXGI_FORMAT_D16_UNORM:
    case DXGI_FORMAT_R16_UNORM:
    case DXGI_FORMAT_R16_UINT:
    case DXGI_FORMAT_R16_SNORM:
    case DXGI_FORMAT_R16_SINT:
    case DXGI_FORMAT_R8G8_B8G8_UNORM:
    case DXGI_FORMAT_G8R8_G8B8_UNORM:
        bitCount = 16;
        break;

    case DXGI_FORMAT_R8_TYPELESS:
    case DXGI_FORMAT_R8_UNORM:
    case DXGI_FORMAT_R8_UINT:
    case DXGI_FORMAT_R8_SNORM:
    case DXGI_FORMAT_R8_SINT:
    case DXGI_FORMAT_A8_UNORM:
        bitCount = 8;
        break;

    case DXGI_FORMAT_R1_UNORM:
        bitCount = 1;
        break;

    case DXGI_FORMAT_BC1_TYPELESS:
    case DXGI_FORMAT_BC1_UNORM:
    case DXGI_FORMAT_BC1_UNORM_SRGB:
        bitCount = 64;
        break;

    case DXGI_FORMAT_BC2_TYPELESS:
    case DXGI_FORMAT_BC2_UNORM:
    case DXGI_FORMAT_BC2_UNORM_SRGB:
        bitCount = 128;
        break;

    case DXGI_FORMAT_BC3_TYPELESS:
    case DXGI_FORMAT_BC3_UNORM:
    case DXGI_FORMAT_BC3_UNORM_SRGB:
        bitCount = 128;
        break;

    case DXGI_FORMAT_BC4_TYPELESS:
    case DXGI_FORMAT_BC4_UNORM:
    case DXGI_FORMAT_BC4_SNORM:
        bitCount = 64;
        break;

    case DXGI_FORMAT_BC5_TYPELESS:
    case DXGI_FORMAT_BC5_UNORM:
    case DXGI_FORMAT_BC5_SNORM:
        bitCount = 128;
        break;

    case DXGI_FORMAT_BC6H_TYPELESS:
    case DXGI_FORMAT_BC6H_UF16:
    case DXGI_FORMAT_BC6H_SF16:
        bitCount = 128;
        break;

    case DXGI_FORMAT_BC7_TYPELESS:
    case DXGI_FORMAT_BC7_UNORM:
    case DXGI_FORMAT_BC7_UNORM_SRGB:
        bitCount = 128;
        break;

    case DXGI_FORMAT_B5G6R5_UNORM:
    case DXGI_FORMAT_B5G5R5A1_UNORM:
    case DXGI_FORMAT_B4G4R4A4_UNORM:
        bitCount = 16;
        break;

    case DXGI_FORMAT_B8G8R8A8_UNORM:
    case DXGI_FORMAT_B8G8R8X8_UNORM:
    case DXGI_FORMAT_R10G10B10_XR_BIAS_A2_UNORM:
    case DXGI_FORMAT_B8G8R8A8_TYPELESS:
    case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
    case DXGI_FORMAT_B8G8R8X8_TYPELESS:
    case DXGI_FORMAT_B8G8R8X8_UNORM_SRGB:
    case DXGI_FORMAT_R9G9B9E5_SHAREDEXP:
        bitCount = 32;
        break;

        //YUV formats

    case DXGI_FORMAT_AYUV:
        bitCount = 32;
        break;

    case DXGI_FORMAT_YUY2:
    case DXGI_FORMAT_Y416:
    case DXGI_FORMAT_P016:
    case DXGI_FORMAT_Y216:
        bitCount = 16;
        break;

    case DXGI_FORMAT_NV12:
    case DXGI_FORMAT_NV11:
        // Y samples are stored separately from U and V
        bitCount = 8;
        break;

    case DXGI_FORMAT_Y410:
    case DXGI_FORMAT_P010:
    case DXGI_FORMAT_Y210:
        bitCount = 10;
        break;

    case DXGI_FORMAT_420_OPAQUE:
    case DXGI_FORMAT_P8:
    case DXGI_FORMAT_UNKNOWN:
        bitCount = 8;
        break;

    case DXGI_FORMAT_AI44:
    case DXGI_FORMAT_IA44:
        bitCount = 4;
        break;

    default:
        bitCount = 0;
        break;
    }

    return bitCount;
}

uint32_t GetFormatStride(DXGI_FORMAT const format, uint32_t const width)
{
    return (GetFormatBitCount(format) * width + 7) >> 3;
}

void GetCompressedSize(uint32_t * width, uint32_t * height)
{
    if (!width || !height) {
        return;
    }
    *width = (*width + 3) >> 2;
    *height = (*height + 3) >> 2;
}

}  // namespace directx
}  // namespace utility
}  // namespace gpa
