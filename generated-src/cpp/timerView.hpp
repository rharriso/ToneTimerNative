// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ToneTimer.djinni

#pragma once

#include <cstdint>

namespace tonetimer {

class TimerView {
public:
    virtual ~TimerView() {}

    virtual void setStateTime(int32_t t) = 0;

    virtual void setTotalTime(int32_t t) = 0;

    virtual void setRemainTime(int32_t t) = 0;
};

}  // namespace tonetimer
