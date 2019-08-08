/*
 Copyright (2018) Intel Corporation

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

#include <cstdint>
#include <cstddef>

namespace gpa {

enum DataChangeType {
    kDefaultUpdate,
    kD3D11TextureUpdate,
    kD3D11ResourceInitialData
};

//! @struct DataChangeDesc
//! @brief Structure holding detailed information about modified memory range
struct DataChangeDesc {
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

} // namespace gpa
