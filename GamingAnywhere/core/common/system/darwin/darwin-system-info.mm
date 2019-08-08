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

#include <sys/sysctl.h>
#include <sys/utsname.h>
#include <sstream>
#include "system/system-info.h"

#import <AppKit/AppKit.h>
#import <ApplicationServices/ApplicationServices.h>
#import <Foundation/Foundation.h>
#import <IOKit/IOKitLib.h>
#import <Metal/Metal.h>
#include <locale.h>
#include <cstdlib>

namespace gpa {
namespace system {
    
std::string GetGPUVendor(std::string const& vendor)
{
    std::string            oVendor = vendor;
    std::string::size_type n       = oVendor.find("(R)");
    
    if (n != std::string::npos) {
        oVendor = oVendor.substr(0, n);
    }
    return oVendor;
}
    
std::string GetGPUSku(std::string const& sku)
{
    std::string            oSku = sku;
    std::string::size_type n1   = oSku.find("(TM)");
    std::string::size_type n2   = oSku.find("(tm)");
    
    if (n1 != std::string::npos) {
        oSku.erase(n1, strlen("(TM)"));
    } else if (n2 != std::string::npos) {
        oSku.erase(n2, strlen("(tm)"));
    }
    return oSku;
}

void GetOSInfo(OSInfo* const osInfo)
{
    if (osInfo == nullptr) {
        return;
    }
    osInfo->type                     = OSInfo::OSType::macOS;
    NSOperatingSystemVersion version = [[NSProcessInfo processInfo] operatingSystemVersion];
    osInfo->major                    = (uint64_t)version.majorVersion;
    osInfo->minor                    = (uint64_t)version.minorVersion;

    std::stringstream nameString;
    nameString << "macOS " << version.majorVersion << "." << version.minorVersion << "." << version.patchVersion;
    osInfo->name = nameString.str();

    std::string const versionString  = [[[NSProcessInfo processInfo] operatingSystemVersionString] UTF8String];
    std::string::size_type const end = versionString.find_last_of(')');
    if (end != std::string::npos) {
        std::string::size_type const start = versionString.find_last_of(' ', end);
        if (start != std::string::npos) {
            osInfo->buildNumber = versionString.substr(start, end - start);
        }
    }
    osInfo->locale = [[[NSLocale currentLocale] localeIdentifier] UTF8String];

    osInfo->computerName = [[[NSHost currentHost] localizedName] UTF8String];
}

void GetCPUInfo(CPUInfo* const cpuInfo)
{
    if (cpuInfo == nullptr) {
        return;
    }
    size_t    len            = 0;
    int const kMachineLength = 32;
    sysctlbyname("hw.machine", nullptr, &len, nullptr, 0);
    char* machine = (char*)malloc(len * sizeof(char));
    sysctlbyname("hw.machine", machine, &len, nullptr, 0);
    if ((strncmp(machine, "x86_64", kMachineLength) == 0) || (strncmp(machine, "amd64", kMachineLength))) {
        cpuInfo->architecture = CPUInfo::ArchitectureType::x64;
    } else if (strncmp(machine, "i386", kMachineLength) == 0) {
        cpuInfo->architecture = CPUInfo::ArchitectureType::x86;
    } else {
        cpuInfo->architecture = CPUInfo::ArchitectureType::Unknown;
    }
    cpuInfo->coresCount = [[NSProcessInfo processInfo] processorCount];
    free(machine);
}

void GetMemoryInfo(MemoryInfo* const memoryInfo)
{
    if (memoryInfo == nullptr) {
        return;
    }
    memoryInfo->dramMemory = [[NSProcessInfo processInfo] physicalMemory];
}

}  // system
}  // gpa
