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

#include "concurrent/lock.h"

namespace gpa {
namespace concurrent {

//! @class ReferenceWrapper
//! @brief Wraps a reference so that it can be used in a
//! thread-safe manner.
template<typename ValueType>
class ReferenceWrapper {
public:
    ReferenceWrapper(ValueType& val, ScopedReadLock&& lock)
    : mValue(val)
    , mLock(std::move(lock))
    {}

    ValueType& Get()             { return mValue; }
    ValueType const& Get() const { return mValue; }
    operator ValueType const& () const { return Get(); }
    operator ValueType & () { return Get(); }
private:
    ValueType&     mValue;
    ScopedReadLock mLock;
};

} // namespace concurrent
} // namespace gpa
