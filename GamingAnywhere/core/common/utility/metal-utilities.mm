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
#include "utility/metal-utilities.h"

namespace gpa {
namespace utility {
namespace metal{

int BytesPerPixelForFormat(MTLPixelFormat const format)
{
    if (format >= MTLPixelFormatA8Unorm && format <= MTLPixelFormatR8Sint) {
        return 1;
    }
    if (format >= MTLPixelFormatR16Unorm && format <= MTLPixelFormatRG8Sint) {
        return 2;
    }
    if (format >= MTLPixelFormatR32Uint && format <= MTLPixelFormatBGRA8Unorm_sRGB) {
        return 4;
    }
    if (format >= MTLPixelFormatRGB10A2Unorm && format <= MTLPixelFormatRGB9E5Float) {
        return 4;
    }
    if (format >= MTLPixelFormatRG32Uint && format <= MTLPixelFormatRGBA16Float) {
        return 8;
    }
    if (format >= MTLPixelFormatRGBA32Uint && format <= MTLPixelFormatRGBA32Float) {
        return 16;
    }
    // Depth formats
    if (format == MTLPixelFormatDepth16Unorm) {
        return 2;
    }
    if (format == MTLPixelFormatDepth32Float || format == MTLPixelFormatDepth24Unorm_Stencil8) {
        return 4;
    }
    if (format == MTLPixelFormatDepth32Float_Stencil8) {
        return 8;
    }
    
    //! Compressed formats
    //! S3TC/DXT 
    if(format == MTLPixelFormatBC1_RGBA || format == MTLPixelFormatBC1_RGBA_sRGB)
    {
        return 8; 
    }
    if(format == MTLPixelFormatBC2_RGBA || format == MTLPixelFormatBC2_RGBA_sRGB)
    {
        return 16; 
    }
    if(format == MTLPixelFormatBC3_RGBA || format == MTLPixelFormatBC3_RGBA_sRGB)
    {
        return 16; 
    }

    //! RGTC
    if(format == MTLPixelFormatBC4_RUnorm || format == MTLPixelFormatBC4_RSnorm)
    {
        return 8; 
    }
    if(format == MTLPixelFormatBC5_RGUnorm || format == MTLPixelFormatBC5_RGSnorm)
    {
        return 16; 
    }

    //! BPTC
    if(format == MTLPixelFormatBC6H_RGBFloat || format == MTLPixelFormatBC6H_RGBUfloat)
    {
        return 16; 
    }
    if(format == MTLPixelFormatBC7_RGBAUnorm || format == MTLPixelFormatBC7_RGBAUnorm_sRGB)
    {
        return 16; 
    }
    assert(0 && "Unsupported format.");
    return 0;
}
    
size_t GetSliceCount(id<MTLTexture> texture)
{
    if(!texture){
        return 0;
    }
    NSUInteger slices = texture.arrayLength;
    if(texture.textureType == MTLTextureTypeCubeArray){
        //! Each cube texture has six faces which
        //! makes them a single element in the array
        slices *= 6;
    }
    // Handle cube texture types.
    if (texture.textureType == MTLTextureTypeCube) {
        slices = 6;
    }
    return slices;
}

void GetCompressedSize(NSUInteger* width, NSUInteger* height)
{
    if (!width || !height) {
        return;
    }
    *width = (*width + 3) >> 2;
    *height = (*height + 3) >> 2;
}

bool IsCompressedFormat(MTLPixelFormat const format)
{
    return (format >= MTLPixelFormatBC1_RGBA && format <= MTLPixelFormatBC7_RGBAUnorm_sRGB);
}

} //! metal
} //! utility
} //! gpa
