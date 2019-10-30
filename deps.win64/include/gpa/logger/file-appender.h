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

/**
 * @brief Implementation of StreamAppender that directs log output to a file on disk storage.
 */
class GPA_CLASS_EXPORT FileAppender : public StreamAppender
{
public:
    /**
     * @brief FileAppender constructor
     * @param logFilePathname Full pathname to log file. Path will be created if it does not already
     *        exist, including intermediate path elements. Path can contain a single instance each of
     *        the following wildcards:
     *          #PROC - replaced with the name of the process (spaces in the name replaced by dashes)
     */
    FileAppender(TCHAR const* logFilePathname);
    ~FileAppender();

    /**
     * @brief Determine if the underlying file is currently open.
     * @return True if underlying file is open and writable, false otherwise.
     */
    bool IsOpen() const;

protected:
    // StreamAppender implementation
    std::ostream* GetStream() override;

private:
    FileStream* mStream;
};

}  // namespace logger
}  // namespace gpa
