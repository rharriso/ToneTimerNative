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
        this->mView = view;
        start = chrono::high_resolution_clock::now();
    }

    void TimerViewModelImpl::pause() {
        mView->displayText(__PRETTY_FUNCTION__);
    }

    void TimerViewModelImpl::play() {
        mView->displayText(__PRETTY_FUNCTION__);
    }

    void TimerViewModelImpl::reset() {
        mView->displayText(__PRETTY_FUNCTION__);
    }

    void TimerViewModelImpl::onTick() {
        auto now = chrono::high_resolution_clock::now();
        stringstream ss;
        string numString;
        ss << (now - start).count();
        ss >> numString;
        mView->displayText(numString);
    }
}

