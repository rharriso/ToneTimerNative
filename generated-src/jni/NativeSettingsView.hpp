// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ToneTimer.djinni

#pragma once

#include "djinni_support.hpp"
#include "settingsView.hpp"

namespace djinni_generated {

class NativeSettingsView final : ::djinni::JniInterface<::tonetimer::SettingsView, NativeSettingsView> {
public:
    using CppType = std::shared_ptr<::tonetimer::SettingsView>;
    using CppOptType = std::shared_ptr<::tonetimer::SettingsView>;
    using JniType = jobject;

    using Boxed = NativeSettingsView;

    ~NativeSettingsView();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeSettingsView>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeSettingsView>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeSettingsView();
    friend ::djinni::JniClass<NativeSettingsView>;
    friend ::djinni::JniInterface<::tonetimer::SettingsView, NativeSettingsView>;

    class JavaProxy final : ::djinni::JavaProxyHandle<JavaProxy>, public ::tonetimer::SettingsView
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        void setIntervalDuration(int32_t d) override;
        void setIntervalBreak(int32_t b) override;
        void setSetSize(int32_t s) override;
        void setSetBreak(int32_t b) override;
        void setSetCount(int32_t c) override;

    private:
        friend ::djinni::JniInterface<::tonetimer::SettingsView, ::djinni_generated::NativeSettingsView>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("rharriso/tonetimer/SettingsView") };
    const jmethodID method_setIntervalDuration { ::djinni::jniGetMethodID(clazz.get(), "setIntervalDuration", "(I)V") };
    const jmethodID method_setIntervalBreak { ::djinni::jniGetMethodID(clazz.get(), "setIntervalBreak", "(I)V") };
    const jmethodID method_setSetSize { ::djinni::jniGetMethodID(clazz.get(), "setSetSize", "(I)V") };
    const jmethodID method_setSetBreak { ::djinni::jniGetMethodID(clazz.get(), "setSetBreak", "(I)V") };
    const jmethodID method_setSetCount { ::djinni::jniGetMethodID(clazz.get(), "setSetCount", "(I)V") };
};

}  // namespace djinni_generated