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
#import <Metal/Metal.h>

namespace gpa {
namespace utility {
namespace metal {

int BytesPerPixelForFormat(MTLPixelFormat const format);

//! @brief Returns number of slices for a given texture.
//!  typically number of slices is the arrayLength of the texture.
//! For cube textures it is 6 and for cube array textures it is 6 * arrayLength.
size_t GetSliceCount(id<MTLTexture> texture);

//! @brief Returns the compressed width and height of the given width and height.
void GetCompressedSize(NSUInteger* width, NSUInteger* height);

//! @brief Returns true if the format is a compressed format.
bool IsCompressedFormat(MTLPixelFormat const format);

}  //! metal
}  //! utility
}  //! gpa
