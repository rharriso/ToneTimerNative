//
// Created by rharriso on 29/03/16.
//

#ifndef TONETIMERNATIVE_STATEMACHINE_H
#define TONETIMERNATIVE_STATEMACHINE_H

#include <chrono>
#include <memory>
#include <vector>
#include <string>

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
        milliseconds intervalDuration = milliseconds(30);
        milliseconds intervalBreak = milliseconds(50);
        milliseconds setBreak = milliseconds(120);

        int intervalCount;
        int setCount;
    };

    /*
     * State machine node
     */
    struct State {
        milliseconds startTime;
        milliseconds endTime;
        StateType type;
    };

    class StateMachine {
    private:
        static shared_ptr<StateMachine> sharedMachine;

        void generateStates();

        // states in this machine
        vector<tonetimer::State> states;

        /* factors state transition */
        int intervalIndex; // current interval in set
        int setIndex; // current set
        unique_ptr<StateMachineSettings> settings;

    public:
        static shared_ptr<StateMachine> getSharedMachine();
        void initialize(StateMachineSettings settings);
        string stateString();
    };
}



#endif //TONETIMERNATIVE_STATEMACHINE_H
