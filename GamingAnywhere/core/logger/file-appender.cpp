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

#include "logger/file-appender.h"

// we need to deal with the std::ofstream a bit oddly in this file; MSVC will complain
// that std::ofstream needs a DLL interface if we export the FileAppender class on Windows
// (which we do), so we need to hide the internals in this file. Not interested in fully
// wrapping std::ofstream; fortunately, we don't need to, just need to inherit it as the
// superclass of the FileStream class name we introduced in the header.
#include <fstream>

namespace gpa {
namespace logger {

class FileStream : public std::ofstream
{
};

FileAppender::FileAppender(TCHAR const* logFilePathname)
    : mStream(new FileStream)
{
    mStream->open(logFilePathname);
}

FileAppender::~FileAppender()
{
    mStream->close();
    delete mStream;
}

bool FileAppender::IsOpen() const
{
    return mStream->is_open();
}

std::ostream* FileAppender::GetStream()
{
    return mStream;
}

}  // namespace logger
}  // namespace gpa
