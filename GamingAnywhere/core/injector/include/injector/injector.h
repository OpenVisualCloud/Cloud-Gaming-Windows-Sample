/*
 Copyright (2017) Intel Corporation

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
#include "utility/common.h"
#include <stdio.h>
#include <cstdint>
#include <string>

namespace gpa {

enum class InjectionResult {
    kSuccess,
    kInvalidParameter,  ///< Invalid NULL parameter passed in
    kTargetNotFound,    ///< Target appliction does not exist
    kInvalidDirectory,  ///< Working directory is invalid
    kInjectionFailed,   ///< DLL injection into target app failed
    kUnsupported,       ///< Injection configuration is unsupported. This can
                        ///     occur when attempting to inject a 64-bit app
                        ///     from a 32-bit.
};

constexpr char kSharedMemoryEnvVar[] = "GPA_SHARED_MEMORY";

using namespace gpa::utility;
/// @brief Holds properties required for injection.
struct InjectionProperties
{
    char logLevel[kLogLevelLength]{};                 ///< log level defined by user
    TCHAR logFilename[kLogFilenameLength]{};          ///< log output file defined by user
    char layerNames[kMaxLayers][kLayerNameLength]{};  ///< names of the layers to inject
    uint64_t layerKeyValueCount[kMaxLayerArgs]{};
    uint32_t numLayers = 0;         ///< The number of layers
    uint32_t enableKeyframing = 0;  ///< True if capture should keyframe, false otherwise
    int32_t deviceIndex = -1;       ///< Index of the device that capture should use; this is the index
                                    ///  into the array of available devices on the machine.
    uint32_t pageTrackerMode =
        0;                                   ///< Integer indicating how the shadow buffer should track memory (see gpa-capture for
                                             ///< options) (see gpa-capture for options) (see gpa-capture for options)
    gpa::logger::Options logOptions;         ///< Copy of log options for log init
    volatile uint32_t processCounter = 0;    ///< Counter of alive processes the shim is attached to
    volatile int32_t pids[kMaxProcesses]{};  ///< Array of PIDs representing processes the shim has
                                             ///< been attached to been attached to been attached to
    KeyValPair keyValuePairsForLayers[kMaxLayers][kMaxLayerArgs];
};

/// @brief Injects shim into suspended process
/// @param[in] pid pid of process to inject into
/// @return The result of injection
InjectionResult InjectSuspendedApplication(uint32_t pid);

/// @brief Launches application and injects dynamicLibrary into it
/// @param[in] application The application to launch (can be .app bundle on macOS)
/// @param[in] dynamicLibrary The shim to inject into application
/// @param[in] workingDirectory The directory from which to run application
/// @return The result of injection
InjectionResult LaunchAndInjectApplication(char const* application, char const* workingDirectory,
                                           int argc, char const* const* argv,
                                           InjectionProperties const& injectionProperties = {});

/// @brief Returns a unique shared memory name.
/// @details Name is uniquely created from the PID given
/// and the current timestamp.
std::string GetSharedMemoryName(int32_t pid);

}  // namespace gpa
