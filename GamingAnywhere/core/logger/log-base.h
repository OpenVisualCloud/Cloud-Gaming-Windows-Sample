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

#include "logger/logger.h"
#include "concurrent/lock.h"

#include <vector>

namespace gpa {
namespace logger {
namespace internal {

class LogBase
{
public:
    LogBase(Options const& options);
    ~LogBase();

    void AddAppender(LogAppender* appender);
    void RemoveAppender(LogAppender* appender);
    void ClearAppenders();
    void LogMessage(Severity level, uint32_t moduleMask, MessageState state, char const* message);
    Severity Level() const;

protected:
    Options mOptions;
    std::vector<LogAppender*> mAppenders;

    RWLock mLock;

    void PlatformInit();
};

}  // namespace internal
}  // namespace logger
}  // namespace gpa
