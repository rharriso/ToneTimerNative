//
// Created by rharriso on 29/03/16.
//

#include <atomic>
#include <sstream>
#include "StateMachine.h"

namespace tonetimer {
    std::atomic_bool machineInitialized(false);
    shared_ptr<StateMachine> StateMachine::sharedMachine;

    /*
     *  Return the shared state machine after inititialization
     */
    shared_ptr<StateMachine> StateMachine::getSharedMachine() {
        if (!machineInitialized) {
            machineInitialized = true;
            StateMachine::sharedMachine = make_shared<StateMachine>();
        }
        return StateMachine::sharedMachine;
    }

    /*
     * Initialize the machine with given settings
     */
    void StateMachine::initialize(StateMachineSettings settings) {
        this->settings = make_unique<StateMachineSettings>(settings);
        generateStates();
    }

    /*
     * Create all the states that comprise the machine
     */
    void StateMachine::generateStates() {
        states.clear();
        auto currTime = milliseconds(0);

        // for each set
        for(int i = 0; i < settings->setCount; i++){
            // set break before all but first
            if(i > 0){
                State breakState = {
                        currTime, //startTime
                        currTime + settings->setBreak, // endTime
                        StateType::SET_BREAK,
                };
                states.push_back(breakState);
                currTime = breakState.endTime;
            }

            State rampState = {
                    currTime, //startTime
                    currTime + settings->ramUpTime, // endTime
                    StateType::RAMP_UP,
            };
            states.push_back(rampState);
            currTime = rampState.endTime;

            // create intervals with breaks
            for(int j = 0; j < settings->intervalCount; j++){
                // break before all but first
                if(j > 0){
                    State breakState = {
                            currTime, //startTime
                            currTime + settings->intervalBreak, // endTime
                            StateType::INTERVAL_BREAK,
                    };
                    states.push_back(breakState);
                    currTime = breakState.endTime;
                }

                // add the interval
                State intervalState = {
                        currTime, //startTime
                        currTime + settings->intervalDuration, // endTime
                        StateType::INTERVAL_ON,
                };
                states.push_back(intervalState);
                currTime = intervalState.endTime;
            }
        }

        // add the terminal state
        State terminalState = {
                currTime, //startTime
                currTime + settings->intervalDuration, // endTime
                StateType::TERMINAL,
        };
        states.push_back(terminalState);

        return;
    }

    /*
     * Returns a string representation of the states
     */
    string StateMachine::stateString() {
        string str;
        string strPartial;
        str.append(__PRETTY_FUNCTION__).append(":\n");

        for(auto s : states){
            switch (s.type){
                case StateType::RAMP_UP: str.append("RAMP_UP:\t\t"); break;
                case StateType::INTERVAL_BREAK: str.append("INTERVAL_BREAK:\t"); break;
                case StateType::INTERVAL_ON: str.append("INTERVAL_ON:\t"); break;
                case StateType::SET_BREAK: str.append("SET_BREAK:\t\t"); break;
                case StateType::TERMINAL: str.append("TERMINAL:\t\t"); break;
            }

            ostringstream ss;
            ss << s.startTime.count() << "\t";
            ss << s.endTime.count() << "\n";
            str.append(ss.str());
        }
        return str;
    }
}