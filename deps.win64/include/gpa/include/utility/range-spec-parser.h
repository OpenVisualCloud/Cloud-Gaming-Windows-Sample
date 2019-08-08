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

namespace gpa {
namespace utility {

class RangeSpec;

/**
 * @brief The RangeSpecParser class provides a convenient means to parse range specifications
 *        described in string data. @see RangeSpecParser::RangeSpecParser.
 */
class RangeSpecParser
{
public:
    /**
     * @brief RangeSpecParser constructor.
     * @param string String containing range specification(s) to parse.
     * @details Frame numbers begin at 1. All values must be positive.
                Interval capture can be specified using standard 'range'
                notation, where ( and ) indicate 'open' range endpoints,
                and [ and ] indicate 'closed' range endpoints. Ranges may
                include an optional step value, appended to the end of the
                range, for example: (10..100]:10, to indicate every tenth
                frame in the range 10 to 100 (not including 10). The default
                step value is 1. Individual frames are specified as integers
                separated by semicolons, for example: 1;10;100. Individual
                frames and range specifications can be mixed in any order,
                for example: 1;(50..70]:5;10;100.
     */
    RangeSpecParser(TCHAR const* string);
    ~RangeSpecParser();

    /**
     * @brief Parse the next range (if any) into @a destSpec.
     * @param destSpec Pointer to valid RangeSpec instance. If this pointer is null or otherwise
     *        invalid, behavior is undefined.
     * @return True if (a) next range exists, and (b) could be parsed; false otherwise.
     */
    bool ParseNextRange(RangeSpec* destSpec);

private:
    TCHAR const* mCurrent;
};

}  // namespace utility
}  // namespace gpa
