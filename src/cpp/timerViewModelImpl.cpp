/*
 * helloWorldImpl.cpp
 * Copyright (C) 2016 rharriso <rharriso@lappy>
 *
 * Distributed under terms of the MIT license.
 */

#include <string>
#include <iostream>
#include <timerViewModel.hpp>
#include "timerViewModelImpl.h"

namespace tonetimer {
    std::shared_ptr<TimerViewModel> TimerViewModel::create() {
        return std::make_shared<TimerViewModelImpl>();
    }

    void TimerViewModelImpl::pause() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void TimerViewModelImpl::play() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void TimerViewModelImpl::reset() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
}

