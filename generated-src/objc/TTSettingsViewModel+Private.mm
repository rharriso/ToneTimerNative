// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ToneTimer.djinni

#import "TTSettingsViewModel+Private.h"
#import "TTSettingsViewModel.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#include <exception>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface TTSettingsViewModel ()

- (id)initWithCpp:(const std::shared_ptr<::tonetimer::SettingsViewModel>&)cppRef;

@end

@implementation TTSettingsViewModel {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::tonetimer::SettingsViewModel>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::tonetimer::SettingsViewModel>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (void)incIntervalDuration {
    try {
        _cppRefHandle.get()->incIntervalDuration();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)decIntervalDuration {
    try {
        _cppRefHandle.get()->decIntervalDuration();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)incIntervalBreak {
    try {
        _cppRefHandle.get()->incIntervalBreak();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)decIntervalBreak {
    try {
        _cppRefHandle.get()->decIntervalBreak();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)incSetSize {
    try {
        _cppRefHandle.get()->incSetSize();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)decSetSize {
    try {
        _cppRefHandle.get()->decSetSize();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)incSetCount {
    try {
        _cppRefHandle.get()->incSetCount();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)decSetCount {
    try {
        _cppRefHandle.get()->decSetCount();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)incSetBreak {
    try {
        _cppRefHandle.get()->incSetBreak();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)decSetBreak {
    try {
        _cppRefHandle.get()->decSetBreak();
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto SettingsViewModel::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto SettingsViewModel::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<TTSettingsViewModel>(cpp);
}

}  // namespace djinni_generated

@end
