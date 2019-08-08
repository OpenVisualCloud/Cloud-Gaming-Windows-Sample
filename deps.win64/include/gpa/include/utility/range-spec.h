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

#include <cstddef>

namespace gpa {
namespace utility {

/**
 * @brief The RangeSpec class provides a common description of a positive, integral range of
 *        numbers.
 */
class RangeSpec
{
public:
    RangeSpec();
    //! @see RangeSpecParser
    RangeSpec(size_t frame);
    //! @see RangeSpecParser
    RangeSpec(size_t start, bool startOpen, size_t end, bool endOpen);
    //! @see RangeSpecParser
    RangeSpec(size_t start, bool startOpen, size_t end, bool endOpen, size_t step);
    ~RangeSpec();

    /**
     * @brief Convenience operator to allow use of this class as key in STL sets and maps.
     */
    bool operator<(RangeSpec const& other) const;

    /**
     * @brief Determine if @a frame matches the range specification described by this object.
     * @param frame Integer frame number to test.
     * @return True if @a frame matches the range specification described by this object, false otherwise.
     */
    bool Matches(size_t frame) const;

    //! Retrieve the range start value or the single-frame value from the spec
    size_t Start() const;

    //! Retrieve the range end value from the spec; if spec describes a single frame, then the value returned by End() is undefined
    size_t End() const;

    //! Retrieve the step value for the range, or for single-frame specifications, starting with the single frame described. If not present
    //! in the spec, then the step value is 1
    size_t Step() const;

    //! If a range is specified, describes whether the "left" side is open (does not include the Start() value) or closed (includes the Start()
    //! value). Default is "closed" range (includes the start value). Undefined for single-frame specifications.
    bool StartOpen() const;

    //! If a range is specified, describes whether the "right" side is open (does not include the End() value) or closed (includes the End()
    //! value). Default is "closed" range (includes the end value). Undefined for single-frame specifications.
    bool EndOpen() const;

private:
    size_t mStart;
    size_t mEnd;
    size_t mStep;
    bool mStartOpen;
    bool mEndOpen;
};

}  // namespace utility
}  // namespace gpa
