// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ToneTimer.djinni

#include "NativeTimerView.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeTimerView::NativeTimerView() : ::djinni::JniInterface<::tonetimer::TimerView, NativeTimerView>() {}

NativeTimerView::~NativeTimerView() = default;

NativeTimerView::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeTimerView::JavaProxy::~JavaProxy() = default;

void NativeTimerView::JavaProxy::displayText(const std::string & c_s) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeTimerView>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_displayText,
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_s)));
    ::djinni::jniExceptionCheck(jniEnv);
}

}  // namespace djinni_generated