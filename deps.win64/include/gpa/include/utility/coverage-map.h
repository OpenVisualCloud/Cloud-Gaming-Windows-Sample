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

#include <cstdint>
#include <set>

namespace gpa {
namespace utility {

class CoverageMap
{
public:
    CoverageMap();
    ~CoverageMap();

    /**
     * @brief Merge the span defined by start and end into the map
     * @details This operation compares the candidate span, defined by "start" and "end", with
     *          all spans that exist in the map prior to this call. If the candidate is completely
     *          "covered" by all existing spans (that is, it adds nothing new to the aggregate data),
     *          then it is "rejected" and the operation returns "false". Otherwise, the collection of
     *          spans is modified to accommodate the candidate's contribution and the operation
     *          returns "true".
     * @param start Start of the candidate span
     * @param end End of the candidate span
     * @return True if the operation resulted in modification of existing spans; false otherwise
     * @note In all existing and candidate spans, "start" must be less than or equal to "end".
     */
    bool Merge(uint64_t start, uint64_t end);

private:
    struct Span
    {
        uint64_t start;
        uint64_t end;
        bool operator<(Span const& other) const;
        bool Overlap(Span const& other) const;
        bool Contains(Span const& other) const;
        bool MergeIfOverlap(Span const& other);
        void Merge(Span const& other);
    };

    typedef std::set<Span> Spans;
    Spans mSpans;
};

}  // namespace utility
}  // namespace gpa
