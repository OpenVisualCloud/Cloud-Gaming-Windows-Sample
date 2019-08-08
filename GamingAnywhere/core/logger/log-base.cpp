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

#include "log-base.h"

#include <algorithm>
#include <cassert>
#include <iostream>

namespace gpa {
namespace logger {

LogAppender::~LogAppender() {}

namespace internal {

LogBase::LogBase(Options const &options)
    : mOptions(options)
{
    PlatformInit();
}

LogBase::~LogBase() {}

void LogBase::AddAppender(LogAppender *appender)
{
    assert(appender && "NULL log appender in AddAppender");
    if (!appender) {
        return;
    }

    ScopedWriteLock lock(&mLock);

    mAppenders.push_back(appender);
}

void LogBase::RemoveAppender(LogAppender *appender)
{
    ScopedWriteLock lock(&mLock);

    auto iter = mAppenders.begin();
    while (iter != mAppenders.end()) {
        if (*iter == appender) {
            mAppenders.erase(iter);
            break;
        }
    }
}

void LogBase::ClearAppenders()
{
    ScopedWriteLock lock(&mLock);
    mAppenders.clear();
}

void LogBase::LogMessage(Severity level, uint32_t moduleMask, MessageState state,
                         const char *message)
{
    if (!(moduleMask & mOptions.mask)) {
        return;
    }

    ScopedWriteLock lock(&mLock);

    for (LogAppender *appender : mAppenders) {
        appender->AppendMessage(mOptions, level, message, state);
    }
}

Severity LogBase::Level() const
{
    return mOptions.logLevel;
}

}  // namespace internal
}  // namespace logger
}  // namespace gpa
