#pragma once

#include <timerViewModel.hpp>

namespace tonetimer {
    
    class TimerViewModelImpl : public tonetimer::TimerViewModel{
        
    public:
        // Our method that returns a string
        void pause();
        void play();
        void reset();
    };
    
}
