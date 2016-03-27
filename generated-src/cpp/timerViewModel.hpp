// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ToneTimer.djinni

#pragma once

#include <memory>

namespace tonetimer {

class TimerView;

/**
 *
 * Timer View 
 *
 */
class TimerViewModel {
public:
    virtual ~TimerViewModel() {}

    static std::shared_ptr<TimerViewModel> createWithView(const std::shared_ptr<TimerView> & view);

    virtual void pause() = 0;

    virtual void play() = 0;

    virtual void reset() = 0;
};

}  // namespace tonetimer