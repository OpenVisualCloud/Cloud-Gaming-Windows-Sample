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

#include "logger/console-appender.h"

#include <iostream>

namespace {

char const* sColors[] = {
    "\033[34m",  // kTrace: blue
    "\033[32m",  // kDebug: green
    "\033[36m",  // kInfo: cyan
    "\033[33m",  // kWarn: yellow/orange
    "\033[31m",  // kError: red
    "\033[35m",  // kFatal: magenta
};

char const* sResetColor = "\033[0m";

}  // namespace

namespace gpa {
namespace logger {

ConsoleAppender::ConsoleAppender() {}

ConsoleAppender::~ConsoleAppender() {}

std::ostream* ConsoleAppender::GetStream()
{
    return &std::cout;
}

char const* ConsoleAppender::GetOutputColorModifier(Severity level)
{
    return sColors[level];
}

char const* ConsoleAppender::GetOutputColorResetModifier()
{
    return sResetColor;
}

}  // namespace logger
}  // namespace gpa
