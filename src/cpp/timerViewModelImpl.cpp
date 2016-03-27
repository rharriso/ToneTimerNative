/*
 * helloWorldImpl.cpp
 * Copyright (C) 2016 rharriso <rharriso@lappy>
 *
 * Distributed under terms of the MIT license.
 */

#include <string>
#include <iostream>
#include <timerViewModelImpl.h>
#include <timerViewModel.hpp>

namespace tonetimer {

    std::shared_ptr<TimerViewModel> TimerViewModel::create() {
        return std::make_shared<TimerViewModelImpl>();
    }

    TimerViewModelImpl::TimerViewModelImpl() { }


    void TimerViewModelImpl::pause() {
        std::cout << "pause";
    }

    void TimerViewModelImpl::play() {
        std::cout << "play";
    }

    void TimerViewModelImpl::reset() {
        std::cout << "reset";
    }
}

