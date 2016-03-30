//
// Created by rharriso on 29/03/16.
//

#include "StateMachine.h"

namespace tonetimer {
    std::atomic_bool initialized(false);
    shared_ptr<StateMachine> StateMachine::sharedMachine;

    /*
     *  Return the shared state machine after inititialization
     */
    shared_ptr<Machine> Machine::getSharedMachine() {
        if (!initialized) {
            initialized = true;
            StateMachine::sharedMachine = make_shared<StateMachine>();
        }
        return Machine::sharedMachine;
    }

    /*
     * Initialize the machine with given settings
     */
    void StateMachine::initialize(StateMachineSettings settings) {
        this->settings = settings;
        generateStates();
    }

    /*
     * Create all the states that comprise the machine
     */
    void StateMachine::generateStates() {
        states.clear();

    }
}