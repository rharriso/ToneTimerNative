// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ToneTimer.djinni

#import "TTConfig.h"
#include "config.hpp"

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class TTConfig;

namespace djinni_generated {

struct Config
{
    using CppType = ::tonetimer::Config;
    using ObjcType = TTConfig*;

    using Boxed = Config;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCpp(const CppType& cpp);
};

}  // namespace djinni_generated