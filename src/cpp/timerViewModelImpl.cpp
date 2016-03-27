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

    std::shared_ptr<TimerViewModel> TimerViewModel::createWithView(const std::shared_ptr<TimerView> & view){
        return std::make_shared<TimerViewModelImpl>(view);
    }

    TimerViewModelImpl::TimerViewModelImpl(const std::shared_ptr<TimerView> &view) {
        this->mView = view;
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
}

