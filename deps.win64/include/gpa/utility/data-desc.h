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

#include <cstdint>
#include <cstddef>

namespace gpa {

enum DataChangeType {
    kDefaultUpdate,
    kD3D11TextureUpdate,
    kD3D12TextureUpdate,
    kD3D11ResourceInitialData,
    kD3D11VideoDecoderData
};

//! @struct DataChangeDesc
//! @brief Structure holding detailed information about modified memory range
struct DataChangeDesc
{
    //! @brief Type of modified object being updated
    DataChangeType type;
    //! @brief Modified subresource index. Value used only for DirectX textures
    uint32_t subresource;
    //! @brief Offset in bytes between depth slices. Value used only for DirectX 3D textures
    uint32_t depthPitch;
    //! @brief Offset in bytes between rows of pixels. Value used only for DirectX 2D/3D textures
    uint32_t rowPitch;
    //! @brief Offset of modified memory range from the start of the tracked buffer
    uint64_t offset;
    //! @brief Size of modified memory range
    uint64_t size;
};

//! @struct ResourceDataDescriptor
//! @brief Holds information about resource data updates as well as how
//! to locate the data payload.
struct ResourceDataDescriptor
{
    enum : int64_t {
        kInvalidOffset = INT64_MAX,
    };
    //! @brief Unique key that represents the API buffer which the data will be copied to.
    uint64_t key;
    //! @brief Unique key that represents the secondary object necessary for proper data update (i.e. deferred context key in DX11)
    uint64_t secondaryKey;
    //! @brief Description about the resource update.
    DataChangeDesc dataChangeDesc;
    //! @brief Offset to the resource data from the start of the resource buffer.
    int64_t dataOffset = kInvalidOffset;
};

}  // namespace gpa
