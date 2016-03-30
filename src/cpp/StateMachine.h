//
// Created by rharriso on 29/03/16.
//

#ifndef TONETIMERNATIVE_STATEMACHINE_H
#define TONETIMERNATIVE_STATEMACHINE_H

#include <chrono>
#include <memory>
#include <vector>

using namespace std;
using namespace std::chrono;

namespace tonetimer{
    enum StateType {
        RAMP_UP,
        INTERVAL_ON,
        INTERVAL_BREAK,
        SET_BREAK,
        TERMINAL
    };

    /*
     * State machine settings
     */
    struct StateMachineSettings {
        milliseconds ramUpTime = milliseconds(5);
        milliseconds intervalDuration;
        milliseconds interValBreak;
        milliseconds setBreak;

        int intervalCount;
        int setCount;
    };

    /*
     * State machine node
     */
    struct State {
        time_point<high_resolution_clock> startTime;
        time_point<high_resolution_clock> endTime;
        StateType type;
    };

    class StateMachine {
    private:
        static shared_ptr<Clock> sharedClock;

        void generateStates();

        // states in this machine
        vector<tonetimer::State> states;

        /* factors state transition */
        int intervalIndex; // current interval in set
        int setIndex; // current set
        unique_ptr<StateMachineSettings> settings;

    public:
        static shared_ptr<StateMachine> sharedStateMachine;
        void initialize(StateMachineSettings settings);
    };
}



#endif //TONETIMERNATIVE_STATEMACHINE_H
