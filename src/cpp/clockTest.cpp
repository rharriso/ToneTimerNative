//
// Created by rharriso on 27/03/16.
//
#include <iostream>
#include "Clock.h"

using namespace std;


const seconds TICK_INTERVAL = seconds(5);
// interval settings
seconds intervalDuration = seconds(30);
seconds intervalBreak = seconds(50);

// workout set settings
int setSize = 5;
int setCount = 5;
seconds setBreak = seconds(120);

int main(){
    cout << "YOHO" << endl;

    auto clock = tonetimer::Clock::getSharedClock();
    clock->addListener("MAIN", [](chrono::milliseconds ms){
        cout << ms.count() << endl;
    });

    clock->removeListener("MAIN");

    return 0;
}
