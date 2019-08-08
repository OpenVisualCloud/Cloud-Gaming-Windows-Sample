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

#include "gpa-hook.h"
#include "dispatch-table/dispatch-table.h"
#include "dynamic-functions/vulkan-dynamic.h"
#include "logger/logger.h"

namespace gpa_hook {

using namespace gpa::dynamic_vulkan;

void InitializeVulkan()
{
    gpa::dynamic_vulkan::LoadVulkanFunctions();
}

VkResult VKAPI_CALL vkQueuePresentKHR(VkQueue queue, const VkPresentInfoKHR* pPresentInfo, struct GPADispatchTable const*& tlsRef)
{
    GPA_LOG_DEBUG("%s", "vkQueuePresentKHR was called");
    return sDispatchTable.Vulkan.vkQueuePresentKHR(queue, pPresentInfo, tlsRef);
}

}  // namespace gpa_hook
