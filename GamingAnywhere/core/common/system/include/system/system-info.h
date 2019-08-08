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
#include <cstdlib>
#include <string>

namespace gpa {
namespace system {

struct OSInfo
{
    enum class OSType {
        Windows,
        Linux,
        macOS,
        Android
    };

    OSType      type;
    std::string name;
    uint64_t    major = 0;
    uint64_t    minor = 0;
    std::string buildNumber;
    std::string computerName;
    std::string locale;
};

struct GPUInfo
{
    std::string name;
    std::string provider;
    std::string sku;

    enum API {
        kMetal,
        kDirectX,
        kVulkan,
        kOther,
    };

    API api =  kOther;
    uint32_t apiVersionMajor = 0;
    uint32_t apiVersionMinor = 0;
    uint32_t apiVersionPatch = 0;
};

struct CPUInfo
{
    enum class ArchitectureType {
        x86,
        x64,
        Unknown,
    };
    uint64_t         coresCount   = 0;
    ArchitectureType architecture = ArchitectureType::Unknown;
};

struct MemoryInfo
{
    uint64_t dramMemory = 0;
};

std::string GetGPUVendor(std::string const& vendor);
std::string GetGPUSku(std::string const& sku);
void GetOSInfo(OSInfo* const osInfo);
void GetCPUInfo(CPUInfo* const cpuInfo);
void GetMemoryInfo(MemoryInfo* const memoryInfo);

// retrieve PCI device/vendor information, given PCI IDs
void GetDeviceInfoFromID(uint16_t vendorId, char const** vendorName, uint16_t deviceId = 0, char const** deviceName = nullptr);

}  // system
}  // gpa
