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

#include "gpa_hook.h"
#include "logger/logger.h"

#import <Metal/Metal.h>

namespace gpa_hook {

void MetalPresent(id<MTLDrawable> self, SEL /*_cmd*/, struct GPADispatchTable const*& /*tlsRef*/)
{
    GPA_LOG_DEBUG("%s", "MetalPresent was called");
    [self present];
}

void  MetalPresentDrawable_(id<MTLCommandBuffer> self, SEL /*_cmd*/, id<MTLDrawable> drawable, struct GPADispatchTable const*& /*tlsRef*/)
{
    GPA_LOG_DEBUG("%s", "MetalPresentDrawable was called");
    return [self presentDrawable:drawable];
}

} // namespace gpa_hook
