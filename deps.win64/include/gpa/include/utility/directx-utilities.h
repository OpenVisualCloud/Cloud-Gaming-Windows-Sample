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
#pragma once

#include <d3d9.h>
#include <d3d10_1.h>
#include <d3d11_4.h>
#include <d3d12.h>
#include <dxgi1_6.h>
#include <cstdint>
#include <type_traits>

namespace gpa {
namespace utility {
namespace directx {

// {374D3F62-2ACE-4DF6-B605-9A62B2EA793A}
static const GUID sAssociatedCaptureKeyGUID = {0x374d3f62, 0x2ace, 0x4df6, {0xb6, 0x5, 0x9a, 0x62, 0xb2, 0xea, 0x79, 0x3a}};

template<class Type>
constexpr bool has_private_data =
    std::is_convertible<Type, ID3D11Device*>::value ||
    std::is_convertible<Type, ID3D11DeviceChild*>::value ||
    std::is_convertible<Type, IDXGIObject*>::value ||
    std::is_convertible<Type, ID3D12Object*>::value;

struct D3DResourceDesc
{
    uint32_t Width;
    uint32_t Height;
    uint32_t Depth;
    uint32_t MipLevels;
    uint32_t ArraySize;
    DXGI_FORMAT Format;
    DXGI_SAMPLE_DESC SampleDesc;

    uint32_t CompressedWidth;
    uint32_t CompressedHeight;
    uint32_t FormatStride;
};

struct D3D10ResourceDesc : public D3DResourceDesc
{
    D3D10_RESOURCE_DIMENSION Dimension;
    D3D10_USAGE Usage;
    uint32_t BindFlags;
    uint32_t CPUAccessFlags;
    uint32_t MiscFlags;
};

struct D3D11ResourceDesc : public D3DResourceDesc
{
    D3D11_RESOURCE_DIMENSION Dimension;
    D3D11_USAGE Usage;
    uint32_t BindFlags;
    uint32_t CPUAccessFlags;
    uint32_t MiscFlags;
};

struct D3D12ResourceDesc : public D3DResourceDesc
{
    D3D12_RESOURCE_DIMENSION Dimension;
    UINT64 Alignment;
    D3D12_TEXTURE_LAYOUT Layout;
    D3D12_RESOURCE_FLAGS Flags;
};

void GetSubresourceDesc(ID3D10Resource* resource, uint32_t subresource, D3D10ResourceDesc* desc);
void GetSubresourceDesc(ID3D11Resource* resource, uint32_t subresource, D3D11ResourceDesc* desc);
void GetSubresourceDesc(ID3D12Resource* resource, uint32_t subresource, D3D12ResourceDesc* desc);
size_t GetD3D11SubresourceDataSize(ID3D11Resource* resource, uint32_t subresource, uint32_t rowPitch, uint32_t depthPitch);

uint32_t CalculateMipLevels(uint32_t const width, uint32_t const height, uint32_t const depth);
uint32_t GetFormatBitCount(DXGI_FORMAT const format);
uint32_t GetFormatStride(DXGI_FORMAT const format, uint32_t const width);
bool IsFormatCompressed(DXGI_FORMAT const format);
void GetCompressedSize(uint32_t* width, uint32_t* height);
bool IsSRGBFormat(DXGI_FORMAT const format);

template<typename DescType>
inline uint32_t GetArraySize(DescType const* desc)
{
    return desc->ArraySize;
}
template<>
inline uint32_t GetArraySize(D3D10_BUFFER_DESC const* /*desc*/)
{
    return 1;
}
template<>
inline uint32_t GetArraySize(D3D11_BUFFER_DESC const* /*desc*/)
{
    return 1;
}
template<>
inline uint32_t GetArraySize(D3D10_TEXTURE3D_DESC const* /*desc*/)
{
    return 1;
}
template<>
inline uint32_t GetArraySize(D3D11_TEXTURE3D_DESC const* /*desc*/)
{
    return 1;
}
template<>
inline uint32_t GetArraySize(D3D11_TEXTURE3D_DESC1 const* /*desc*/)
{
    return 1;
}

template<typename DescType>
inline uint32_t GetMipLevels(DescType const* desc)
{
    return desc->MipLevels;
}
template<>
inline uint32_t GetMipLevels(D3D10_BUFFER_DESC const* /*desc*/)
{
    return 1;
}
template<>
inline uint32_t GetMipLevels(D3D11_BUFFER_DESC const* /*desc*/)
{
    return 1;
}

template<typename DescType>
inline uint32_t GetWidth(DescType const* desc)
{
    return desc->Width;
}
template<>
inline uint32_t GetWidth(D3D10_BUFFER_DESC const* desc)
{
    return desc->ByteWidth;
}
template<>
inline uint32_t GetWidth(D3D11_BUFFER_DESC const* desc)
{
    return desc->ByteWidth;
}

template<typename DescType>
inline uint32_t GetHeight(DescType const* desc)
{
    return desc->Height;
}
template<>
inline uint32_t GetHeight(D3D10_BUFFER_DESC const* /*desc*/)
{
    return 1;
}
template<>
inline uint32_t GetHeight(D3D11_BUFFER_DESC const* /*desc*/)
{
    return 1;
}
template<>
inline uint32_t GetHeight(D3D10_TEXTURE1D_DESC const* /*desc*/)
{
    return 1;
}
template<>
inline uint32_t GetHeight(D3D11_TEXTURE1D_DESC const* /*desc*/)
{
    return 1;
}

template<typename DescType>
inline uint32_t GetDepth(DescType const* /*desc*/)
{
    return 1;
}
template<>
inline uint32_t GetDepth(D3D10_TEXTURE3D_DESC const* desc)
{
    return desc->Depth;
}
template<>
inline uint32_t GetDepth(D3D11_TEXTURE3D_DESC const* desc)
{
    return desc->Depth;
}
template<>
inline uint32_t GetDepth(D3D11_TEXTURE3D_DESC1 const* desc)
{
    return desc->Depth;
}

template<typename DescType>
inline DXGI_FORMAT GetFormat(DescType const* desc)
{
    return desc->Format;
}
template<>
inline DXGI_FORMAT GetFormat(D3D10_BUFFER_DESC const* /*desc*/)
{
    return DXGI_FORMAT_R8_TYPELESS;
}
template<>
inline DXGI_FORMAT GetFormat(D3D11_BUFFER_DESC const* /*desc*/)
{
    return DXGI_FORMAT_R8_TYPELESS;
}

}  // namespace directx
}  // namespace utility
}  // namespace gpa
