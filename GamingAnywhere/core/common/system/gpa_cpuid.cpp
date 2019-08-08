/******************************************************************************

           Copyright (C) 2015-2018 Intel Corporation All Rights Reserved.

 The source code, information and material ("Material") contained herein is
 owned by Intel Corporation or its suppliers or licensors, and title to such
 Material remains with Intel Corporation or its suppliers or licensors. The
 Material contains proprietary information of Intel or its suppliers and
 licensors. The Material is protected by worldwide copyright laws and treaty
 provisions. No part of the Material may be used, copied, reproduced, modified,
 published, uploaded, posted, transmitted, distributed or disclosed in any way
 without Intel's prior express written permission. No license under any patent,
 copyright or other intellectual property rights in the Material is granted to
 or conferred upon you, either expressly, by implication, inducement, estoppel
 or otherwise. Any license under such intellectual property rights must be
 express and approved by Intel in writing.

 Unless otherwise agreed by Intel in writing, you may not remove or alter this
 notice or any other notice embedded in Materials by Intel or Intel's suppliers
 or licensors in any way.

******************************************************************************/

#include <string.h>

#include "MoreSecureCRuntimeFunctions.h"
#include "system/gpa_cpuid.h"

#if defined(_WIN32)
    #include <windows.h>
#elif defined(__APPLE__)
    #include <sys/param.h>
    #include <sys/sysctl.h>
#elif defined(__ghs__)
    #include <INTEGRITY.h>
#endif

//#define _DUMP_VERBOSE_INFO
#if defined(_DUMP_VERBOSE_INFO)
#include <iostream>
#endif

union CPUIdInfo
{
    int data[4];
    struct
    {
        int eax, ebx, ecx, edx;
    } reg;
};

static const int s_kMaxCharsFromCpuIdInfo = 12;

#if defined(_WIN32)
    #include <intrin.h>
#else
#if defined(__x86_64__)
static inline void __cpuid(int* data, int selector )
{
    __asm__ __volatile__(
        "cpuid"
        : "=a" (data[0]),
          "=b" (data[1]),
          "=c" (data[2]),
          "=d" (data[3])
        : "a" (selector)
    );
}
#else
static inline void __cpuid(int* data, int selector )
{
    // EBX is reserved for PIC code for 32-code
    __asm__ __volatile__(
        "pushl %%ebx \n\t"
        "cpuid \n\t"
        "movl %%ebx, %%esi \n\t"
        "popl %%ebx \n\t"
        : "=a" (data[0]),
          "=S" (data[1]),
          "=c" (data[2]),
          "=d" (data[3])
        : "a" (selector)
        );
}
#endif
#endif

// Check if the CPU is running as a guest in a hypervisor (such as Hyper-V or Xen).
bool IsHypervisorPresent()
{
    CPUIdInfo info;
    __cpuid(info.data, 1);

    // Detect for hypervisor: kb.vmware.com/selfservice/microsites/search.do?language=en_US&cmd=displayKC&externalId=1009458
    unsigned int hypervisorPresent = ((unsigned int) info.reg.ecx & 0xF0000000) >> 31;
    #if defined(_DUMP_VERBOSE_INFO)
    std::cout << "Hypervisor present: " << hypervisorPresent << std::endl;
    #endif
    if (!hypervisorPresent)
    {
        return false;
    }

    // Get the vendor from the CPUID hypervisor leaf 0x40000000.
    char vendor[s_kMaxCharsFromCpuIdInfo + 1];
    __cpuid(info.data, 0x40000000);
    GM_MEMCPY_S(vendor, sizeof(vendor), &info.data[1], s_kMaxCharsFromCpuIdInfo);
    vendor[s_kMaxCharsFromCpuIdInfo] = '\0';

    // Check if running in Hyper-V guest OS: https://blogs.msdn.microsoft.com/sqlosteam/2010/10/30/is-this-real-the-metaphysics-of-hardware-virtualization/
    if (!strncmp(vendor, "Microsoft Hv", s_kMaxCharsFromCpuIdInfo))
    {
        __cpuid(info.data, 0x40000003);
        if (info.reg.ebx & 1)
        {
            #if defined(_DUMP_VERBOSE_INFO)
            std::cout << "\tIn Hyper-V root partition (not guest OS)" << std::endl;
            #endif
            return false;
        }

        #if defined(_DUMP_VERBOSE_INFO)
        std::cout << "\tIn Hyper-V child partition (guest OS)" << std::endl;
        #endif
    }
    else
    {
        #if defined(_DUMP_VERBOSE_INFO)
        std::cout << "\tIn " << vendor << " hypervisor" << std::endl;
        #endif
    }

    return true;
}

// Information regarding the implementation below was referenced from
// "Intel(R) 64 and IA-32 Architectures Software Developer's Manual",
// Chapter 15, "CHAPTER 15 PROCESSOR IDENTIFICATION AND FEATURE DETERMINATION"
ProcessorFamily GetProcessorFamily()
{
    CPUIdInfo info;

    __cpuid(info.data, 0);

    char vendor[s_kMaxCharsFromCpuIdInfo + 1];
    GM_MEMCPY_S(vendor, sizeof(vendor), &info.data[1], s_kMaxCharsFromCpuIdInfo);
    vendor[s_kMaxCharsFromCpuIdInfo] = '\0';

    #if defined(_DUMP_VERBOSE_INFO)
    std::cout << "CPUIdInfo.reg.eax: 0x" << std::hex << info.reg.eax << std::endl;
    std::cout << "Vendor: " << vendor << std::endl;
    #endif

    if ((info.reg.eax <= 0) && (0 != strncmp(vendor, "GenuineIntel", s_kMaxCharsFromCpuIdInfo)))
        return PROCESSOR_OTHER;

    __cpuid(info.data, 1);

    int Model = (info.reg.eax & 0x000000F0) >> 4;
    int FamilyID = (info.reg.eax & 0x00000F00) >> 8;
    int ExtendedModel = (info.reg.eax & 0x000F0000) >> 16;
    int ExtendedFamilyID = (info.reg.eax & 0x0FF00000) >> 20;

    // Check if the CPU is running as a guest in a hypervisor.
    if (IsHypervisorPresent())
    {
        return PROCESSOR_OTHER;
    }

    if ( (FamilyID == 0x6) || (FamilyID == 0xF) )
        Model = (ExtendedModel << 4) + Model;

    if ( FamilyID == 0xF )
        FamilyID = ExtendedFamilyID + FamilyID;

    #if defined(_DUMP_VERBOSE_INFO)
    std::cout << "Model: 0x" << std::hex << Model << std::endl;
    std::cout << "FamilyID: 0x" << std::hex << FamilyID << std::endl;
    #endif

    if( FamilyID != 6 )
        return PROCESSOR_OTHER;

    switch( Model )
    {
        case 0x2A: // Sandy Bridge
            return PROCESSOR_SANDYBRIDGE;

        case 0x3A: // Ivy Bridge
            return PROCESSOR_IVYBRIDGE;

        case 0x37: // Silvermont
        case 0x5D: // Silvermont
            return PROCESSOR_SILVERMONT;

        case 0x3C: // Haswell
        case 0x45: // Hawell ULT
        case 0x46: // Haswell CRW
            return PROCESSOR_HASWELL;

        case 0x3D: // Broadwell ULT/ULX
        case 0x47: // Broadwell desktop
            return PROCESSOR_BROADWELL;

        case 0x4E: // Skylake
        case 0x5E: // Skylake
            return PROCESSOR_SKYLAKE;

        case 0x4C: // Cherrytrail
            return PROCESSOR_AIRMONT;

        case 0x5C:
            return PROCESSOR_GOLDMONT;

        case 0x66:
            return PROCESSOR_CANNONLAKE;

        case 0x7E:
            return PROCESSOR_ICELAKE;

        case 0x8E: // Kabylake
        case 0x9E: // Kabylake (also Coffee Lake)
            return PROCESSOR_KABYLAKE;

        default:
            return PROCESSOR_OTHER;
    };
}
