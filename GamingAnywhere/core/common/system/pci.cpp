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

namespace gpa {
namespace system {

void GetDeviceInfoFromID(uint16_t vendorId, char const** vendor, uint16_t deviceId, char const** device)
{
    // include generated lookup code; this will set two variables declared in the
    // generated code -- "vendorName" and "deviceName" -- to char const*, if they
    // are found (and those variables will be nullptr if not).
    #include "pci-ids.inl"

    // if the user asked for a vendor name, fill it in now
    if (vendor) {
        *vendor = vendorName;
    }

    // likewise, for the device name
    if (device) {
        *device = deviceName;
    }
}

} // namespace system
} // namespace gpa
