//
// Created by rharriso on 27/03/16.
//
#include <iostream>
#include <chrono>
#include "Clock.h"
#include "StateMachine.h"

using namespace std;
using namespace std::chrono;

int main(){
    auto s = tonetimer::StateMachine::getSharedMachine();
    tonetimer::StateMachineSettings settings = {
            milliseconds(5000),
            milliseconds(10000),
            milliseconds(15000),
            milliseconds(20000),
            5,
            5
    };
    s->initialize(settings);
    cout << s->stateString().c_str();


    return 0;
}
