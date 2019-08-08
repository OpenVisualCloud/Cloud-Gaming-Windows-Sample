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

#include "logger/stream-appender.h"

#include <cassert>
#include <ostream>

#include "system/system.h"

namespace {

char sLevelCodes[] = {
    'T',  // kTrace
    'D',  // kDebug
    'I',  // kInfo
    'W',  // kWarn
    'E',  // kError
    'F',  // kFatal
};

char const* sEmpty = "";

}  // namespace

namespace gpa {
namespace logger {

StreamAppender::StreamAppender() {}

StreamAppender::~StreamAppender() {}

void StreamAppender::AppendMessage(const Options& options, Severity level, const char* message,
                                   MessageState state)
{
    std::ostream& out = *GetStream();

    if (options.useColors) {
        out << GetOutputColorModifier(level);
    }

    if (state == kMessageBegin || state == kMessageComplete) {
        out << '[' << options.name << ']';

        if (options.showLevel) {
            out << ' ' << sLevelCodes[level];
        }

        if (options.showPid) {
            uint32_t pid = system::GetPid();
            out << ' ' << pid;
        }

        // TODO: timestamp bits

        out << ' ';
    }

    out << message;

    if (options.useColors) {
        out << GetOutputColorResetModifier();
    }

    if (state == kMessageComplete || state == kMessageEnd) {
        out << std::endl;
    } else {
        out.flush();
    }
}

char const* StreamAppender::GetOutputColorModifier(Severity /*level*/)
{
    return sEmpty;
}

char const* StreamAppender::GetOutputColorResetModifier()
{
    return sEmpty;
}

}  // namespace logger
}  // namespace gpa
