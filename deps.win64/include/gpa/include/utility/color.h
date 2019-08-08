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

#include <stdint.h>

namespace gpa {
namespace color {

typedef struct Color
{
    uint8_t color[4];

    bool operator==(Color const& other)
    {
        return color[0] == other.color[0] &&
               color[1] == other.color[1] &&
               color[2] == other.color[2] &&
               color[3] == other.color[3];
    }
} Color;

static Color constexpr kTransparentBlack = {{0, 0, 0, 0}};
static Color constexpr kTransparentWhite = {{255, 255, 255, 0}};
static Color constexpr kAliceBlue = {{240, 248, 255, 255}};
static Color constexpr kAntiqueWhite = {{250, 235, 215, 255}};
static Color constexpr kAqua = {{0, 255, 255, 255}};
static Color constexpr kAquamarine = {{127, 255, 212, 255}};
static Color constexpr kAzure = {{240, 255, 255, 255}};
static Color constexpr kBeige = {{245, 245, 220, 255}};
static Color constexpr kBisque = {{255, 228, 196, 255}};
static Color constexpr kBlack = {{0, 0, 0, 255}};
static Color constexpr kBlanchedAlmond = {{255, 235, 205, 255}};
static Color constexpr kBlue = {{0, 0, 255, 255}};
static Color constexpr kBlueViolet = {{138, 43, 226, 255}};
static Color constexpr kBrown = {{165, 42, 42, 255}};
static Color constexpr kBurlyWood = {{222, 184, 135, 255}};
static Color constexpr kCadetBlue = {{95, 158, 160, 255}};
static Color constexpr kChartreuse = {{127, 255, 0, 255}};
static Color constexpr kChocolate = {{210, 105, 30, 255}};
static Color constexpr kCoral = {{255, 127, 80, 255}};
static Color constexpr kCornflowerBlue = {{100, 149, 237, 255}};
static Color constexpr kCornsilk = {{255, 248, 220, 255}};
static Color constexpr kCrimson = {{220, 20, 60, 255}};
static Color constexpr kCyan = {{0, 255, 255, 255}};
static Color constexpr kDarkBlue = {{0, 0, 139, 255}};
static Color constexpr kDarkCyan = {{0, 139, 139, 255}};
static Color constexpr kDarkGoldenrod = {{184, 134, 11, 255}};
static Color constexpr kDarkGray = {{169, 169, 169, 255}};
static Color constexpr kDarkGreen = {{0, 100, 0, 255}};
static Color constexpr kDarkKhaki = {{189, 183, 107, 255}};
static Color constexpr kDarkMagenta = {{139, 0, 139, 255}};
static Color constexpr kDarkOliveGreen = {{85, 107, 47, 255}};
static Color constexpr kDarkOrange = {{255, 140, 0, 255}};
static Color constexpr kDarkOrchid = {{153, 50, 204, 255}};
static Color constexpr kDarkRed = {{139, 0, 0, 255}};
static Color constexpr kDarkSalmon = {{233, 150, 122, 255}};
static Color constexpr kDarkSeaGreen = {{143, 188, 139, 255}};
static Color constexpr kDarkSlateBlue = {{72, 61, 139, 255}};
static Color constexpr kDarkSlateGray = {{47, 79, 79, 255}};
static Color constexpr kDarkTurquoise = {{0, 206, 209, 255}};
static Color constexpr kDarkViolet = {{148, 0, 211, 255}};
static Color constexpr kDeepPink = {{255, 20, 147, 255}};
static Color constexpr kDeepSkyBlue = {{0, 191, 255, 255}};
static Color constexpr kDimGray = {{105, 105, 105, 255}};
static Color constexpr kDodgerBlue = {{30, 144, 255, 255}};
static Color constexpr kFirebrick = {{178, 34, 34, 255}};
static Color constexpr kFloralWhite = {{255, 250, 240, 255}};
static Color constexpr kForestGreen = {{34, 139, 34, 255}};
static Color constexpr kFuchsia = {{255, 0, 255, 255}};
static Color constexpr kGainsboro = {{220, 220, 220, 255}};
static Color constexpr kGhostWhite = {{248, 248, 255, 255}};
static Color constexpr kGold = {{255, 215, 0, 255}};
static Color constexpr kGoldenrod = {{218, 165, 32, 255}};
static Color constexpr kGray = {{128, 128, 128, 255}};
static Color constexpr kGreen = {{0, 128, 0, 255}};
static Color constexpr kGreenYellow = {{173, 255, 47, 255}};
static Color constexpr kHoneydew = {{240, 255, 240, 255}};
static Color constexpr kHotPink = {{255, 105, 180, 255}};
static Color constexpr kIndianRed = {{205, 92, 92, 255}};
static Color constexpr kIndigo = {{75, 0, 130, 255}};
static Color constexpr kIvory = {{255, 255, 240, 255}};
static Color constexpr kKhaki = {{240, 230, 140, 255}};
static Color constexpr kLavender = {{230, 230, 250, 255}};
static Color constexpr kLavenderBlush = {{255, 240, 245, 255}};
static Color constexpr kLawnGreen = {{124, 252, 0, 255}};
static Color constexpr kLemonChiffon = {{255, 250, 205, 255}};
static Color constexpr kLightBlue = {{173, 216, 230, 255}};
static Color constexpr kLightCoral = {{240, 128, 128, 255}};
static Color constexpr kLightCyan = {{224, 255, 255, 255}};
static Color constexpr kLightGoldenrodYellow = {{250, 250, 210, 255}};
static Color constexpr kLightGreen = {{144, 238, 144, 255}};
static Color constexpr kLightGray = {{211, 211, 211, 255}};
static Color constexpr kLightPink = {{255, 182, 193, 255}};
static Color constexpr kLightSalmon = {{255, 160, 122, 255}};
static Color constexpr kLightSeaGreen = {{32, 178, 170, 255}};
static Color constexpr kLightSkyBlue = {{135, 206, 250, 255}};
static Color constexpr kLightSlateGray = {{119, 136, 153, 255}};
static Color constexpr kLightSteelBlue = {{176, 196, 222, 255}};
static Color constexpr kLightYellow = {{255, 255, 224, 255}};
static Color constexpr kLime = {{0, 255, 0, 255}};
static Color constexpr kLimeGreen = {{50, 205, 50, 255}};
static Color constexpr kLinen = {{250, 240, 230, 255}};
static Color constexpr kMagenta = {{255, 0, 255, 255}};
static Color constexpr kMaroon = {{128, 0, 0, 255}};
static Color constexpr kMediumAquamarine = {{102, 205, 170, 255}};
static Color constexpr kMediumBlue = {{0, 0, 205, 255}};
static Color constexpr kMediumOrchid = {{186, 85, 211, 255}};
static Color constexpr kMediumPurple = {{147, 112, 219, 255}};
static Color constexpr kMediumSeaGreen = {{60, 179, 113, 255}};
static Color constexpr kMediumSlateBlue = {{123, 104, 238, 255}};
static Color constexpr kMediumSpringGreen = {{0, 250, 154, 255}};
static Color constexpr kMediumTurquoise = {{72, 209, 204, 255}};
static Color constexpr kMediumVioletRed = {{199, 21, 133, 255}};
static Color constexpr kMidnightBlue = {{25, 25, 112, 255}};
static Color constexpr kMintCream = {{245, 255, 250, 255}};
static Color constexpr kMistyRose = {{255, 228, 225, 255}};
static Color constexpr kMoccasin = {{255, 228, 181, 255}};
static Color constexpr kNavajoWhite = {{255, 222, 173, 255}};
static Color constexpr kNavy = {{0, 0, 128, 255}};
static Color constexpr kOldLace = {{253, 245, 230, 255}};
static Color constexpr kOlive = {{128, 128, 0, 255}};
static Color constexpr kOliveDrab = {{107, 142, 35, 255}};
static Color constexpr kOrange = {{255, 165, 0, 255}};
static Color constexpr kOrangeRed = {{255, 69, 0, 255}};
static Color constexpr kOrchid = {{218, 112, 214, 255}};
static Color constexpr kPaleGoldenrod = {{238, 232, 170, 255}};
static Color constexpr kPaleGreen = {{152, 251, 152, 255}};
static Color constexpr kPaleTurquoise = {{175, 238, 238, 255}};
static Color constexpr kPaleVioletRed = {{219, 112, 147, 255}};
static Color constexpr kPapayaWhip = {{255, 239, 213, 255}};
static Color constexpr kPeachPuff = {{255, 218, 185, 255}};
static Color constexpr kPeru = {{205, 133, 63, 255}};
static Color constexpr kPink = {{255, 192, 203, 255}};
static Color constexpr kPlum = {{221, 160, 221, 255}};
static Color constexpr kPowderBlue = {{176, 224, 230, 255}};
static Color constexpr kPurple = {{128, 0, 128, 255}};
static Color constexpr kRed = {{255, 0, 0, 255}};
static Color constexpr kRosyBrown = {{188, 143, 143, 255}};
static Color constexpr kRoyalBlue = {{65, 105, 225, 255}};
static Color constexpr kSaddleBrown = {{139, 69, 19, 255}};
static Color constexpr kSalmon = {{250, 128, 114, 255}};
static Color constexpr kSandyBrown = {{244, 164, 96, 255}};
static Color constexpr kSeaGreen = {{46, 139, 87, 255}};
static Color constexpr kSeaShell = {{255, 245, 238, 255}};
static Color constexpr kSienna = {{160, 82, 45, 255}};
static Color constexpr kSilver = {{192, 192, 192, 255}};
static Color constexpr kSkyBlue = {{135, 206, 235, 255}};
static Color constexpr kSlateBlue = {{106, 90, 205, 255}};
static Color constexpr kSlateGray = {{112, 128, 144, 255}};
static Color constexpr kSnow = {{255, 250, 250, 255}};
static Color constexpr kSpringGreen = {{0, 255, 127, 255}};
static Color constexpr kSteelBlue = {{70, 130, 180, 255}};
static Color constexpr kTan = {{210, 180, 140, 255}};
static Color constexpr kTeal = {{0, 128, 128, 255}};
static Color constexpr kThistle = {{216, 191, 216, 255}};
static Color constexpr kTomato = {{255, 99, 71, 255}};
static Color constexpr kTurquoise = {{64, 224, 208, 255}};
static Color constexpr kViolet = {{238, 130, 238, 255}};
static Color constexpr kWheat = {{245, 222, 179, 255}};
static Color constexpr kWhite = {{255, 255, 255, 255}};
static Color constexpr kWhiteSmoke = {{245, 245, 245, 255}};
static Color constexpr kYellow = {{255, 255, 0, 255}};
static Color constexpr kYellowGreen = {{154, 205, 50, 255}};

}  // namespace color
}  // namespace gpa
