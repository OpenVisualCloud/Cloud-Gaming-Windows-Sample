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

#include "system/system-info.h"

#include <sys/utsname.h>
#include <unistd.h>

#include <cinttypes>

namespace gpa {
namespace system {

std::string GetGPUVendor(std::string const& /*vendor*/)
{
    //! @todo Unimplemented
    return std::string();
}

std::string GetGPUSku(std::string const& /*sku*/)
{
    //! @todo Unimplemented
    return std::string();
}

void GetOSInfo(OSInfo* const osInfo)
{
    if (!osInfo) {
        return;
    }

    utsname info = {};
    uname(&info);

    osInfo->computerName = info.nodename;
    osInfo->name = info.sysname;
    osInfo->type = OSInfo::OSType::Linux;
    osInfo->buildNumber = info.version;

    int tmp;
    sscanf(info.release, "%" PRIu64 ".%" PRIu64 ".%d", &osInfo->major, &osInfo->minor, &tmp);
}

void GetCPUInfo(CPUInfo* const cpuInfo)
{
    if (!cpuInfo) {
        return;
    }

    cpuInfo->coresCount = (uint64_t)sysconf(_SC_NPROCESSORS_CONF);
    cpuInfo->architecture = sizeof(void*) == 8 ? CPUInfo::ArchitectureType::x64 : CPUInfo::ArchitectureType::x86;
}

void GetMemoryInfo(MemoryInfo* const memoryInfo)
{
    if (!memoryInfo) {
        return;
    }

    long numPhysicalPages = sysconf(_SC_PHYS_PAGES);
    long bytesPerPage = sysconf(_SC_PAGESIZE);
    long memSize = numPhysicalPages * bytesPerPage;
    memoryInfo->dramMemory = (uint64_t)memSize;
}

}  // system
}  // gpa
