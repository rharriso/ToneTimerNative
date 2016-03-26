// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ToneTimer.djinni

#pragma once

#include "djinni_support.hpp"
#include "helloWorld.hpp"

namespace djinni_generated {

class NativeHelloWorld final : ::djinni::JniInterface<::tonetimer::HelloWorld, NativeHelloWorld> {
public:
    using CppType = std::shared_ptr<::tonetimer::HelloWorld>;
    using CppOptType = std::shared_ptr<::tonetimer::HelloWorld>;
    using JniType = jobject;

    using Boxed = NativeHelloWorld;

    ~NativeHelloWorld();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeHelloWorld>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeHelloWorld>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeHelloWorld();
    friend ::djinni::JniClass<NativeHelloWorld>;
    friend ::djinni::JniInterface<::tonetimer::HelloWorld, NativeHelloWorld>;

};

}  // namespace djinni_generated
