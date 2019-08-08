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

#include "gtest/gtest.h"

#include "igpa-config.h"
#include "system/gpa_cpuid.h"

namespace {

using namespace testing;

TEST(CpuId, GetProcessorInfo)
{
    ProcessorFamily processorFamily = GetProcessorFamily();

    const char *pProcessorFamilyString = nullptr;

#define _MAKE_PROCESSOR_FAMILY_CASE(aFamily) \
    case aFamily:                            \
        pProcessorFamilyString = #aFamily;   \
        break
    switch (processorFamily) {
        _MAKE_PROCESSOR_FAMILY_CASE(PROCESSOR_OTHER);
        _MAKE_PROCESSOR_FAMILY_CASE(PROCESSOR_SANDYBRIDGE);
        _MAKE_PROCESSOR_FAMILY_CASE(PROCESSOR_IVYBRIDGE);
        _MAKE_PROCESSOR_FAMILY_CASE(PROCESSOR_HASWELL);
        _MAKE_PROCESSOR_FAMILY_CASE(PROCESSOR_SILVERMONT);
        _MAKE_PROCESSOR_FAMILY_CASE(PROCESSOR_BROADWELL);
        _MAKE_PROCESSOR_FAMILY_CASE(PROCESSOR_AIRMONT);
        _MAKE_PROCESSOR_FAMILY_CASE(PROCESSOR_GOLDMONT);
        _MAKE_PROCESSOR_FAMILY_CASE(PROCESSOR_SKYLAKE);
        _MAKE_PROCESSOR_FAMILY_CASE(PROCESSOR_KABYLAKE);
        _MAKE_PROCESSOR_FAMILY_CASE(PROCESSOR_CANNONLAKE);
        _MAKE_PROCESSOR_FAMILY_CASE(PROCESSOR_ICELAKE);
    }
#undef _MAKE_PROCESSOR_FAMILY_CASE

    printf("FamilyName: %s\n", pProcessorFamilyString ? pProcessorFamilyString : "<Unrecognized>");
}

TEST(CpuId, CheckIfRunningInHypervisorGuestOS)
{
    bool inHypervisorGuestOS = IsHypervisorPresent();

    printf("inHypervisorGuestOS = %s\n", inHypervisorGuestOS ? "true" : "false");
}

}  // namespace
