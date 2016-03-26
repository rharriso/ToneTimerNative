// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ToneTimer.djinni

#pragma once

#include "djinni_support.hpp"
#include "helloViewModel.hpp"

namespace djinni_generated {

class NativeHelloViewModel final : ::djinni::JniInterface<::tonetimer::HelloViewModel, NativeHelloViewModel> {
public:
    using CppType = std::shared_ptr<::tonetimer::HelloViewModel>;
    using CppOptType = std::shared_ptr<::tonetimer::HelloViewModel>;
    using JniType = jobject;

    using Boxed = NativeHelloViewModel;

    ~NativeHelloViewModel();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeHelloViewModel>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeHelloViewModel>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeHelloViewModel();
    friend ::djinni::JniClass<NativeHelloViewModel>;
    friend ::djinni::JniInterface<::tonetimer::HelloViewModel, NativeHelloViewModel>;

};

}  // namespace djinni_generated
