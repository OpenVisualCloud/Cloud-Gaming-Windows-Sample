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

#include <unordered_map>

#include "concurrent/lock.h"
#include "reference-wrapper.h"

namespace gpa {
namespace concurrent {

//! @class Map
//! @brief Abstraction for a thread-safe map implementation.
//! @details A limited number of operations are currently supported; only what we've needed so far.
//! Current implementation is really simple: using a STL unordered_map with a reader-writer lock around the
//! operations.
template <typename KeyType, typename ValueType>
class Map
{
public:
    //! @brief Insert an element into the map, overwriting
    //! any previously set elements for that key.
    void Insert(KeyType const& key, ValueType const& value)
    {
        ScopedWriteLock lock(&mRWLock);
        mMap[key] = value;
    }

    //! @brief Check if an element exists in the map for
    //! the current key.
    bool Exists(KeyType const& key)
    {
        ScopedReadLock lock(&mRWLock);
        return (mMap.count(key) != 0);
    }

    //! @brief Returns a reference to an existing element in the map.
    //! @details If no element keys for the key, a default null element
    //! is returned instead.
    ReferenceWrapper<ValueType> Get(KeyType const& key)
    {
        ScopedReadLock lock(&mRWLock);
        auto const iter = mMap.find(key);
        if (iter == mMap.end()) {
            return ReferenceWrapper<ValueType>(kNull, std::move(lock));
        }
        return ReferenceWrapper<ValueType>(iter->second, std::move(lock));
    }

    //! @brief Clears the map.
    void Clear()
    {
        ScopedWriteLock lock(&mRWLock);
        mMap.clear();
    }

    //! @brief Erases the element in the map with the
    //! given key.
    void Erase(KeyType const& key)
    {
        ScopedWriteLock lock(&mRWLock);
        mMap.erase(key);
    }

    //! @brief Checks if the map is empty.
    bool Empty()
    {
        ScopedReadLock lock(&mRWLock);
        return mMap.empty();
    }

    //! @brief Returns the number of elements in the map.
    size_t Size()
    {
        ScopedReadLock lock(&mRWLock);
        return mMap.size();
    }

    //! @brief Convenience operator for Insert/Get.
    ReferenceWrapper<ValueType> operator[](KeyType const& key)
    {
        mRWLock.LockWrite();
        ValueType& value = mMap[key];
        mRWLock.UnlockWrite();

        ScopedReadLock lock(&mRWLock);
        return ReferenceWrapper<ValueType>(value, std::move(lock));
    }

    //! @brief Convenience const operator for Get
    ReferenceWrapper<ValueType> operator[](KeyType const& key) const
    {
        return Get(key);
    }

    static ValueType kNull;
private:
    std::unordered_map<KeyType, ValueType> mMap;
    RWLock mRWLock;
};

template <typename Key, typename ValueType>
ValueType Map<Key, ValueType>::kNull = {};

} // namespace concurrent
} // namespace gpa
