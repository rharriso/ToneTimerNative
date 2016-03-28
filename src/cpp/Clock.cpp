//
// Created by rharriso on 27/03/16.
//

#include <mutex>
#include <atomic>
#include <thread>
#include <future>
#include "Clock.h"

using namespace std;
using namespace chrono;

namespace tonetimer {
    std::atomic_bool initialized(false);
    shared_ptr<Clock> Clock::sharedClock;

    shared_ptr<Clock> Clock::getSharedClock() {
        if (!initialized) {
            initialized = true;
            Clock::sharedClock = make_shared<Clock>();
        }
        return Clock::sharedClock;
    }

   Clock::Clock() {}

    void Clock::pause() {
        if(state == PLAYING) {
            priorTime = priorTime +
                duration_cast<milliseconds>(high_resolution_clock::now() - startTime);
        }
        state = ClockState::PAUSED;
    }
    void Clock::stop() {
        priorTime = milliseconds(0);
        state = ClockState::PAUSED;
    }

    void Clock::play() {
        if(state == ClockState::STOPPED || state == ClockState::PAUSED) {
            startTime = high_resolution_clock::now();
        }

        state = ClockState::PLAYING;
    }

    milliseconds Clock::getTime() {
        if(state == ClockState::PLAYING)
            return duration_cast<milliseconds>(high_resolution_clock::now() - startTime)
                + priorTime;
        else
            return priorTime;
    }
}
