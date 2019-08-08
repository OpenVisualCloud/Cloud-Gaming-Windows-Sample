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
#include <string>
#include <stdio.h>
#include <vector>
#include <algorithm>

#include "igpa-config.h"


namespace {
// Windows APIs can handle paths longer than MAX_PATH with specific syntax.
// https://msdn.microsoft.com/en-us/library/930f87yf.aspx
constexpr size_t kMaxPathLength = 16384; // Lowered from 32k because of Dota2 lower stack size 

// The actual limit is a lot higher (can be obtained by winapi call)
// however we don't need more than 64 chars for now
constexpr size_t kMaxWindowTitleLength = 64;
}

namespace gpa {
namespace utility{

enum {
    kNameAndArgsSep = ':', 
    kEntryDelimiter = ',', 
    kKeyValueSeparator = '='
};

static constexpr int kMaxLayers = 16;
static constexpr int kLayerNameLength = 64;
static constexpr int kLogLevelLength = 16;
static constexpr int kLogFilenameLength = 2 * 1024;
static constexpr int kMaxProcesses = 128;
static constexpr int kMaxLayerArgs = 16;
static constexpr int kMaxLayerArgLength = 4096; 

struct KeyValPair
{
    char key[utility::kMaxLayerArgLength];
    char value[utility::kMaxLayerArgLength];
    KeyValPair() {}
    KeyValPair(char const inKey[utility::kMaxLayerArgLength],
               char const inValue[utility::kMaxLayerArgLength])
    {
        STRCPY(key, inKey, utility::kMaxLayerArgLength);
        STRCPY(value, inValue, utility::kMaxLayerArgLength);
    }
};


size_t ParseKeyValuePairsString(std::string stringToParse, std::vector<KeyValPair> &keyValPairs, size_t maxPairs);
void SplitRawLayerString(std::string rawLayerString, std::string &layerName, std::string &layerArgsString);
void CopyKeyValuePair(char *keyDest, char const*keySrc, char *valueDest, char const * valueSrc, size_t maxSize);




}  // namespace utility
}  // namespace gpa
