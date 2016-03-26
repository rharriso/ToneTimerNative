// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ToneTimer.djinni

#pragma once

#include "djinni_support.hpp"
#include "settingsViewModel.hpp"

namespace djinni_generated {

class NativeSettingsViewModel final : ::djinni::JniInterface<::tonetimer::SettingsViewModel, NativeSettingsViewModel> {
public:
    using CppType = std::shared_ptr<::tonetimer::SettingsViewModel>;
    using CppOptType = std::shared_ptr<::tonetimer::SettingsViewModel>;
    using JniType = jobject;

    using Boxed = NativeSettingsViewModel;

    ~NativeSettingsViewModel();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeSettingsViewModel>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeSettingsViewModel>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeSettingsViewModel();
    friend ::djinni::JniClass<NativeSettingsViewModel>;
    friend ::djinni::JniInterface<::tonetimer::SettingsViewModel, NativeSettingsViewModel>;

};

}  // namespace djinni_generated