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
#pragma once

#include <d3d9.h>
#include <d3d10_1.h>
#include <d3d11_4.h>
#include <d3d12.h>
#include <dxgi1_5.h>
#include <cstdint>
#include <type_traits>

namespace gpa {
namespace utility {
namespace directx {

// {374D3F62-2ACE-4DF6-B605-9A62B2EA793A}
static const GUID sAssociatedCaptureKeyGUID = { 0x374d3f62, 0x2ace, 0x4df6,{ 0xb6, 0x5, 0x9a, 0x62, 0xb2, 0xea, 0x79, 0x3a } };

template <class Type>
constexpr bool has_private_data = 
    std::is_convertible<Type, ID3D10Device*>::value ||
    std::is_convertible<Type, ID3D10DeviceChild*>::value ||
    std::is_convertible<Type, ID3D11Device*>::value ||
    std::is_convertible<Type, ID3D11DeviceChild*>::value ||
    std::is_convertible<Type, IDXGIObject*>::value ||
    std::is_convertible<Type, ID3D12Object*>::value;

struct D3D11ResourceDesc
{
    D3D11_RESOURCE_DIMENSION Dimension;

    uint32_t Width;
    uint32_t Height;
    uint32_t Depth;
    uint32_t MipLevels;
    uint32_t ArraySize;
    DXGI_FORMAT Format;
    DXGI_SAMPLE_DESC SampleDesc;
    D3D11_USAGE Usage;
    uint32_t BindFlags;
    uint32_t CPUAccessFlags;
    uint32_t MiscFlags;

    uint32_t CompressedWidth;
    uint32_t CompressedHeight;
    uint32_t FormatStride;
};

void GetD3D11SubresourceDesc(ID3D11Resource * resource, uint32_t subresource, D3D11ResourceDesc * desc);
size_t GetD3D11SubresourceDataSize(ID3D11Resource * resource, uint32_t subresource, uint32_t rowPitch, uint32_t depthPitch);

uint32_t CalculateMipLevels(uint32_t const width, uint32_t const height, uint32_t const depth);
uint32_t GetFormatBitCount(DXGI_FORMAT const format);
uint32_t GetFormatStride(DXGI_FORMAT const format, uint32_t const width);
bool IsFormatCompressed(DXGI_FORMAT const format);
void GetCompressedSize(uint32_t * width, uint32_t * height);

template<typename DescType> inline uint32_t GetArraySize(DescType const * desc) { return desc->ArraySize; }
template<> inline uint32_t GetArraySize(D3D10_BUFFER_DESC const * /*desc*/) { return 1; }
template<> inline uint32_t GetArraySize(D3D11_BUFFER_DESC const * /*desc*/) { return 1; }
template<> inline uint32_t GetArraySize(D3D10_TEXTURE3D_DESC const * /*desc*/) { return 1; }
template<> inline uint32_t GetArraySize(D3D11_TEXTURE3D_DESC const * /*desc*/) { return 1; }
template<> inline uint32_t GetArraySize(D3D11_TEXTURE3D_DESC1 const * /*desc*/) { return 1; }

template<typename DescType> inline uint32_t GetMipLevels(DescType const * desc) { return desc->MipLevels; }
template<> inline uint32_t GetMipLevels(D3D10_BUFFER_DESC const * /*desc*/) { return 1; }
template<> inline uint32_t GetMipLevels(D3D11_BUFFER_DESC const * /*desc*/) { return 1; }

template<typename DescType> inline uint32_t GetWidth(DescType const * desc) { return desc->Width; }
template<> inline uint32_t GetWidth(D3D10_BUFFER_DESC const * desc) { return desc->ByteWidth; }
template<> inline uint32_t GetWidth(D3D11_BUFFER_DESC const * desc) { return desc->ByteWidth; }

template<typename DescType> inline uint32_t GetHeight(DescType const * desc) { return desc->Height; }
template<> inline uint32_t GetHeight(D3D10_BUFFER_DESC const * /*desc*/) { return 1; }
template<> inline uint32_t GetHeight(D3D11_BUFFER_DESC const * /*desc*/) { return 1; }
template<> inline uint32_t GetHeight(D3D10_TEXTURE1D_DESC const * /*desc*/) { return 1; }
template<> inline uint32_t GetHeight(D3D11_TEXTURE1D_DESC const * /*desc*/) { return 1; }

template<typename DescType> inline uint32_t GetDepth(DescType const * /*desc*/) { return 1; }
template<> inline uint32_t GetDepth(D3D10_TEXTURE3D_DESC const * desc) { return desc->Depth; }
template<> inline uint32_t GetDepth(D3D11_TEXTURE3D_DESC const * desc) { return desc->Depth; }
template<> inline uint32_t GetDepth(D3D11_TEXTURE3D_DESC1 const * desc) { return desc->Depth; }

template<typename DescType> inline DXGI_FORMAT GetFormat(DescType const * desc) { return desc->Format; }
template<> inline DXGI_FORMAT GetFormat(D3D10_BUFFER_DESC const * /*desc*/) { return DXGI_FORMAT_R8_TYPELESS; }
template<> inline DXGI_FORMAT GetFormat(D3D11_BUFFER_DESC const * /*desc*/) { return DXGI_FORMAT_R8_TYPELESS; }

}  // namespace directx
}  // namespace utility
}  // namespace gpa
