// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ToneTimer.djinni

#include "NativeHelloViewModel.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeHelloViewModel::NativeHelloViewModel() : ::djinni::JniInterface<::tonetimer::HelloViewModel, NativeHelloViewModel>("rharriso/tonetimer/HelloViewModel$CppProxy") {}

NativeHelloViewModel::~NativeHelloViewModel() = default;


CJNIEXPORT void JNICALL Java_rharriso_tonetimer_HelloViewModel_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<djinni::CppProxyHandle<::tonetimer::HelloViewModel>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_rharriso_tonetimer_HelloViewModel_00024CppProxy_native_1getGreeting(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_name)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::tonetimer::HelloViewModel>(nativeRef);
        auto r = ref->getGreeting(::djinni::String::toCpp(jniEnv, j_name));
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
