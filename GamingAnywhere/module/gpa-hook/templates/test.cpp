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
#include "{{lowerName}}-test.h"

namespace gpa {
namespace test_layer {
namespace {{toLower ./name}} {

{{#functions}}
{{{returnValue.type}}} {{../callingConvention}} {{cStyleMethodName}}({{{fullParameterString true}}})
{
    LAYER_PREAMBLE(tlsRef);
    GPA_LOG_TRACE("%s", "{{name}}");
    return sDispatchTable.{{../name}}.{{cStyleMethodName}}({{parameterNameString true}});
}
{{/functions}}

{{#classes}}
namespace {{classNamespace}} {
{{#staticMethods}}
{{{returnType ../.}}} {{../callingConvention}} {{cStyleMethodName}}({{{fullParameterString true}}})
{
    LAYER_PREAMBLE(tlsRef);
    GPA_LOG_TRACE("%s", "{{../name}}::{{name}}");
    return sDispatchTable.{{../../name}}.{{classTableName ../.}}.{{cStyleMethodName}}({{parameterNameString true}});
}
{{/staticMethods}}

{{#methods}}
{{{returnType ../.}}} {{../callingConvention}} {{cStyleMethodName}}({{{fullParameterString true}}})
{
    LAYER_PREAMBLE(tlsRef);
    GPA_LOG_TRACE("%s", "{{../name}}::{{name}}");
    return sDispatchTable.{{../../name}}.{{classTableName ../.}}.{{cStyleMethodName}}({{parameterNameString true}});
}
{{/methods}}

} // namespace {{classNamespace}}

{{/classes}}

} // {{toLower ./name}}
} // test_layer
} // gpa
