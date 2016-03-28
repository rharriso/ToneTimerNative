/*
 * helloWorldImpl.cpp
 * Copyright (C) 2016 rharriso <rharriso@lappy>
 *
 * Distributed under terms of the MIT license.
 */

#include <string>
#include <iostream>
#include <sstream>
#include <timerViewModel.hpp>
#include <chrono>
#include "timerViewModelImpl.h"
#include <sstream>

using namespace std;

namespace tonetimer {

    chrono::time_point<chrono::high_resolution_clock> start;

    shared_ptr<TimerViewModel> TimerViewModel::createWithView(const shared_ptr<TimerView> & view){
        return make_shared<TimerViewModelImpl>(view);
    }

    TimerViewModelImpl::TimerViewModelImpl(const shared_ptr<TimerView> &view) {
        mView = view;
        mClock = Clock::getSharedClock();
        start = chrono::high_resolution_clock::now();
    }

    void TimerViewModelImpl::pause() {
        mClock->pause();
    }

    void TimerViewModelImpl::play() {
        mClock->play();
    }

    void TimerViewModelImpl::reset() {
        mClock->stop();
    }

    void TimerViewModelImpl::onTick() {
        stringstream ss;
        string numString;
        ss << mClock->getTime().count();
        ss >> numString;
        mView->displayText(numString);
    }
}

