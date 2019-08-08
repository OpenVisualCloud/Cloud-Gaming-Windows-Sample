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
#import <Metal/Metal.h>

namespace gpa {
namespace utility {
namespace metal{

int BytesPerPixelForFormat(MTLPixelFormat const format);
    
//! @brief Returns number of slices for a given texture.
//!  typically number of slices is the arrayLength of the texture.
//! For cube textures it is 6 and for cube array textures it is 6 * arrayLength.
size_t GetSliceCount(id<MTLTexture> texture);

//! @brief Returns the compressed width and height of the given width and height.
void GetCompressedSize(NSUInteger* width, NSUInteger* height);

//! @brief Returns true if the format is a compressed format.
bool IsCompressedFormat(MTLPixelFormat const format);

} //! metal
} //! utility
} //! gpa
