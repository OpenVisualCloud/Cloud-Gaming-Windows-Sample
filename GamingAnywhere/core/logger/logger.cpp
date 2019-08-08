/*
 Copyright (2016) Intel Corporation

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

#include "logger/logger.h"
#include "log-base.h"

#include <algorithm>  // std::transform
#include <cassert>
#include <cstdarg>  // varargs
#include <string>

#if defined(_WIN32)
#define SPRINTF_S(dst, count, fmt, ...) sprintf_s(dst, count, fmt, __VA_ARGS__)
#else
#define SPRINTF_S(dst, count, fmt, ...) snprintf(dst, count, fmt, __VA_ARGS__)
#endif

namespace {

using namespace gpa::logger;

struct InternalDefaultOptions : public Options
{
    InternalDefaultOptions()
        : Options("GPA")
    {
        showLevel = 1;
        showPid = 1;
        timestampFormat = kNoTimestamp;
        useColors = 0;
        mask = gpa::logger::Module::kGeneric;
    }
};

Options& GetLogOptions()
{
    static InternalDefaultOptions options;
    return options;
}

internal::LogBase* GetLogBase(Options const* options)
{
    static internal::LogBase sLog(options ? *options : GetLogOptions());
    return &sLog;
}

enum {
    kMaxLogMessageLength = 1024  // lowered from 64k because of Dota2 lower stack size
};

char ToLower(char c)
{
    return (char)::tolower((int)c);
}

}  // namespace

namespace gpa {
namespace logger {

Options::Options() {}

Options::Options(const char* appName)
{
    if (appName) {
        SPRINTF_S(name, kMaxNameLength, "%s", appName);
    }
}

Options::~Options() {}

Severity SeverityFromString(char const* logLevelStr)
{
    gpa::logger::Severity level = gpa::logger::kInfo;

    if (logLevelStr) {
        std::string logLevel(logLevelStr);
        std::transform(logLevel.begin(), logLevel.end(), logLevel.begin(), ToLower);

        if (logLevel == "trace") {
            level = gpa::logger::kTrace;
        }
        if (logLevel == "debug") {
            level = gpa::logger::kDebug;
        }
        if (logLevel == "warn") {
            level = gpa::logger::kWarn;
        }
        if (logLevel == "error") {
            level = gpa::logger::kError;
        }
        if (logLevel == "fatal") {
            level = gpa::logger::kFatal;
        }
    }

    return level;
}

uint32_t ModuleMaskFromString(char const* moduleStr)
{
    uint32_t mask = 0x0;

    if (moduleStr) {
        std::string moduleList(moduleStr);
        std::transform(moduleList.begin(), moduleList.end(), moduleList.begin(), ToLower);

        if (moduleList.find("generic") != std::string::npos) {
            mask |= gpa::logger::Module::kGeneric;
        }

        if (moduleList.find("page-tracker") != std::string::npos) {
            mask |= gpa::logger::Module::kPageTracker;
        }
    }

    return mask;
}

void Init(Options const& options)
{
    GetLogBase(&options);
}

void AddLogAppender(LogAppender* appender)
{
    GetLogBase(nullptr)->AddAppender(appender);
}

void RemoveLogAppender(LogAppender* appender)
{
    GetLogBase(nullptr)->RemoveAppender(appender);
}

void Shutdown()
{
    GetLogBase(nullptr)->ClearAppenders();
}

void LogMessage(Severity level, uint32_t module, MessageState state, char const* fmt, ...)
{
    internal::LogBase* logBase = GetLogBase(nullptr);

    if (level < logBase->Level()) {
        return;
    }

    char msgBuf[kMaxLogMessageLength];
    msgBuf[0] = '\0';

    va_list args;
    va_start(args, fmt);
    vsnprintf(msgBuf, kMaxLogMessageLength, fmt, args);
    va_end(args);

    logBase->LogMessage(level, module, state, msgBuf);
}

}  // namespace logger
}  // namespace gpa
