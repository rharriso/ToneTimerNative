#pragma once

#include <timerViewModel.hpp>

namespace tonetimer {
    
    class TimerViewModelImpl : public tonetimer::TimerViewModel{
        
    public:
        
        // Constructor
        TimerViewModelImpl();
        std::shared_ptr<TimerViewModel> create();

        // Our method that returns a string
        void pause();
        void play();
        void reset();

    };
    
}
