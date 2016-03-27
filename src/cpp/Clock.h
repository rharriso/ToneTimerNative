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
    class Clock {
    private:
        static shared_ptr<Clock> sharedClock;
        time_point<high_resolution_clock> startTime;

        const milliseconds SWEEP_INTERVAL = milliseconds(8);
        unique_ptr<map<string, string, function<void(milliseconds)>>> listeners;
        function<void(milliseconds)> listener;

    public:
        static std::shared_ptr<Clock> getSharedClock();
        Clock();

        void pause();
        void play();
        void reset();

        // handle listeners
        void addListener(string listenerUID, function<void(milliseconds) > lambda);
        void removeListener(string listenerUID);
    };
}

#endif //TONETIMERNATIVE_CLOCK_H
