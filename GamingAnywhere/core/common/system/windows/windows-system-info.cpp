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

#include <Windows.h>
#include <VersionHelpers.h>

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

    osInfo->type = OSInfo::OSType::Windows;
    osInfo->name = "Windows";

    constexpr int kBufLen = 64;
    DWORD nameLen = kBufLen;
    char name[kBufLen] = {};
    GetComputerNameA(name, &nameLen);
    osInfo->computerName = name;

    HKEY hKey;
    RegOpenKeyExA(HKEY_LOCAL_MACHINE, R"(SOFTWARE\Microsoft\Windows NT\CurrentVersion)", 0, KEY_QUERY_VALUE, &hKey);
    if (hKey != INVALID_HANDLE_VALUE) {
        DWORD dwValue = 0;
        LPCSTR szValue = nullptr;
        DWORD size = sizeof(dwValue);

        if (ERROR_SUCCESS == RegGetValueA(hKey, nullptr, "CurrentMajorVersionNumber", 0, nullptr, &dwValue, &size)) {
            osInfo->major = dwValue;
        }

        if (ERROR_SUCCESS == RegGetValueA(hKey, nullptr, "CurrentMinorVersionNumber", 0, nullptr, &dwValue, &size)) {
            osInfo->minor = dwValue;
        }

        size = sizeof(szValue);
        if (ERROR_SUCCESS == RegGetValueA(hKey, nullptr, "CurrentBuildNumber", 0, nullptr, &szValue, &size)) {
            osInfo->buildNumber = szValue;
        }

        if (ERROR_SUCCESS == RegGetValueA(hKey, nullptr, "ProductName", 0, nullptr, &szValue, &size)) {
            osInfo->name = szValue;
        }

        RegCloseKey(hKey);
    }
}

void GetCPUInfo(CPUInfo* const cpuInfo)
{
    if (!cpuInfo) {
        return;
    }

    SYSTEM_INFO sysInfo = {};
    GetSystemInfo(&sysInfo);

    cpuInfo->architecture = sizeof(void*) == 8 ? CPUInfo::ArchitectureType::x64 : CPUInfo::ArchitectureType::x86;
    cpuInfo->coresCount = sysInfo.dwNumberOfProcessors;
}

void GetMemoryInfo(MemoryInfo* const memoryInfo)
{
    if (!memoryInfo) {
        return;
    }

    ULONGLONG kBytes = 0;
    GetPhysicallyInstalledSystemMemory(&kBytes);
    memoryInfo->dramMemory = kBytes * 1024;
}

}  // system
}  // gpa
