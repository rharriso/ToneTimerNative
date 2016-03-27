//
// Created by rharriso on 27/03/16.
//

#include <mutex>
#include <atomic>
#include "Clock.h"

using namespace std;
using namespace chrono;

namespace tonetimer {
    std::atomic_bool initialized(false);
    shared_ptr<Clock> Clock::sharedClock;

    shared_ptr<Clock> Clock::getSharedClock() {
        if(!initialized){
            initialized = true;
            Clock::sharedClock = make_shared<Clock>();
        }
        return Clock::sharedClock;
    }

    Clock::Clock(){
        listeners = make_unique<map<string, string, function<void(milliseconds)>>>();
    }

    void Clock::addListener(string listenerUID, function<void(milliseconds)> lambda) {

    }

    void Clock::removeListener(string listenerUID) {

    }
}
