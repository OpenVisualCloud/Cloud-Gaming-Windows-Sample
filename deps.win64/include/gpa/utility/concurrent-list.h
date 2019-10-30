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
template<typename Element>
class ConcurrentList
{
public:
    ConcurrentList(){};

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
