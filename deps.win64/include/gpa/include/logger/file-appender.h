/******************************************************************************
        Copyright 2019 Intel Corporation.
 
This software and the related documents are Intel copyrighted materials,
and your use of them is governed by the express license under which they
were provided to you ("License"). Unless the License provides otherwise,
you may not use, modify, copy, publish, distribute, disclose or transmit
this software or the related documents without Intel's prior written
permission.


 This software and the related documents are provided as is, with no express
or implied warranties, other than those that are expressly stated in the
License.

******************************************************************************/

#pragma once

#include "igpa-config.h"
#include "logger/stream-appender.h"

namespace gpa {
namespace logger {

class FileStream;

class GPA_CLASS_EXPORT FileAppender : public StreamAppender
{
public:
    FileAppender(TCHAR const* logFilePathname);
    ~FileAppender();

    bool IsOpen() const;

protected:
    // StreamAppender implementation
    std::ostream* GetStream() override;

private:
    FileStream* mStream;
};

}  // namespace logger
}  // namespace gpa
