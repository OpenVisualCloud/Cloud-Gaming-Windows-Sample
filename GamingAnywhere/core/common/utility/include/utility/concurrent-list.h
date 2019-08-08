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

#include <list>
#include <functional>

#include "concurrent/lock.h"

namespace gpa {
namespace utility {

//! @class ConcurrentList
//! @brief Abstraction for a thread-safe list implementation.
//! @details A limited number of operations are currently supported; only what we've needed so far.
//! Current implementation is really simple: using a STL list with a reader-writer lock around the
//! operations.
template <typename Element>
class ConcurrentList
{
public:
    ConcurrentList() {};

    //! @brief Appends an element to the end of the list.
    void PushBack(Element const& element)
    {
        ScopedWriteLock lock(&mRWLock);
        mList.push_back(element);
    }

    //! @brief Removes all elements with the given value from the list.
    void Remove(Element const& element)
    {
        ScopedWriteLock lock(&mRWLock);
        mList.remove(element);
    }

    //! @brief Iterates over the list, calling the given user-callback with
    //! each iteration.
    void Iterate(std::function<void(Element)> const& callback)
    {
        ScopedReadLock lock(&mRWLock);
        for (auto& element : mList) {
            callback(element);
        }
    }

    //! @brief Returns the size (number of elements) of the list.
    size_t Size()
    {
        ScopedReadLock lock(&mRWLock);
        return mList.size();
    }

    //! @brief Removes all elements from the list.
    void Clear()
    {
        ScopedWriteLock lock(&mRWLock);
        mList.clear();
    }

private:
    RWLock mRWLock;
    std::list<Element> mList;
};

}  // namespace utility
}  // namespace gpa
