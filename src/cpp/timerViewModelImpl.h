#pragma once

#include <timerViewModel.hpp>
#include <timerView.hpp>
#include "Clock.h"

namespace tonetimer {
    
    class TimerViewModelImpl : public tonetimer::TimerViewModel{

    private:
        shared_ptr<Clock> mClock;

    public:
        TimerViewModelImpl(const std::shared_ptr<TimerView> & view);

        // Our method that returns a string
        void pause();
        void play();
        void reset();
        void onTick();

        std::shared_ptr<TimerView> mView;
    };
    
}
