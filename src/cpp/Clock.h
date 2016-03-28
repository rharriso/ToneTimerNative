//
// Created by rharriso on 27/03/16.
//

#ifndef TONETIMERNATIVE_CLOCK_H
#define TONETIMERNATIVE_CLOCK_H

#include <chrono>
#include <memory>
#include <map>
#include <functional>

using namespace std;
using namespace std::chrono;

namespace tonetimer{

    enum ClockState{
        PLAYING,
        PAUSED,
        STOPPED
    };

    class Clock {
    private:
        static shared_ptr<Clock> sharedClock;

        // handle time from begining
        time_point<high_resolution_clock> startTime;

        milliseconds priorTime = milliseconds(0);
        ClockState state = ClockState::STOPPED;

    public:
        static std::shared_ptr<Clock> getSharedClock();
        Clock();

        void pause();
        void play();
        void stop();

        milliseconds getTime();
    };
}

#endif //TONETIMERNATIVE_CLOCK_H
