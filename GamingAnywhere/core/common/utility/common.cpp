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

#include "utility/common.h"
#include "logger/logger.h"
namespace gpa {
namespace utility {

    // kEntryDelimiter, kKeyValueSeparator, and kNameAndArgsSep are defined in common.h
    // for easy modification in the event we need to change the delimiters used in the
    // layer args system. 

// Parses a string into keys and values and loads them into vectors supplied by the calling
// code
size_t ParseKeyValuePairsString(std::string stringToParse, std::vector<KeyValPair> &keyValPairs, size_t maxPairs)
{

    // we expect the arguments to be key value pairs, so we count them by looking for the delimiter that seperates keys from values
    size_t numberOfKeyValPairs = (size_t)std::count(stringToParse.begin(), stringToParse.end(), kKeyValueSeparator);
    size_t startPos = 0;

    if (numberOfKeyValPairs > maxPairs) {
        GPA_LOG_ERROR("Too many layer arguments, culling to the max: %i", maxPairs);
    }
 
    for (size_t i = 0; i < numberOfKeyValPairs && i < maxPairs ; ++i) {
     
        std::string key;
        std::string value;
        std::string keyValueString;
        // parse through, grabbing each key value pair
        size_t seperatorLocation = 0;
        size_t delimiterLocation = stringToParse.find( kEntryDelimiter, startPos);
        
        keyValueString = stringToParse.substr(startPos, delimiterLocation - startPos );  
        seperatorLocation = keyValueString.find(kKeyValueSeparator);
        key = keyValueString.substr(0, seperatorLocation);
        value = keyValueString.substr(seperatorLocation + 1);
        
        keyValPairs.push_back(KeyValPair(key.c_str(), value.c_str()));

        startPos = delimiterLocation + 1;
    }
    size_t returnValue = (numberOfKeyValPairs <= maxPairs) ? numberOfKeyValPairs : maxPairs ;
    return returnValue;
}

// split a string from the command line of theformat layer-name<kNameAndArgsSep>keyvaluepairs
void SplitRawLayerString(std::string rawLayerString, std::string &layerName, std::string &layerArgsString) {

    size_t argsLocation = rawLayerString.find(kNameAndArgsSep);
    if (argsLocation != std::string::npos) {
        // extract name of the layer
        layerName = rawLayerString.substr(0, argsLocation);
        layerArgsString = rawLayerString.substr(argsLocation, std::string::npos);

        // remove equals sign
        layerArgsString.erase(layerArgsString.begin(), layerArgsString.begin() + 1);

    } else {
        // extract name of the layer
        layerName = rawLayerString;
    }

}

void CopyKeyValuePair(char * keyDest, char const * keySrc, char * valueDest, char const * valueSrc, size_t size){
    STRCPY(keyDest, keySrc, size);
    STRCPY(valueDest, valueSrc, size);
}

}  // namespace utility
}  // namespace gpa