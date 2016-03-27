#pragma once

#include <timerViewModel.hpp>
#include <timerView.hpp>

namespace tonetimer {
    
    class TimerViewModelImpl : public tonetimer::TimerViewModel{
        
    public:
        TimerViewModelImpl(const std::shared_ptr<TimerView> & view);

        // Our method that returns a string
        void pause();
        void play();
        void reset();

        std::shared_ptr<TimerView> mView;
    };
    
}
