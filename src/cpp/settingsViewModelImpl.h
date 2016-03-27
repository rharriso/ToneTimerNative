//
// Created by rharriso on 27/03/16.
//

#ifndef TONETIMERNATIVE_SETTINGSVIEWMODELIMPL_H
#define TONETIMERNATIVE_SETTINGSVIEWMODELIMPL_H

#include <settingsViewModel.hpp>

namespace tonetimer{
    class SettingsViewModelImpl : public tonetimer::SettingsViewModel {

        void incIntervalDuration();
        void decIntervalDuration();
        void incIntervalBreak();
        void decIntervalBreak();
        void incSetSize();
        void decSetSize();
        void incSetCount();
        void decSetCount();
        void incSetBreak();
        void decSetBreak();
    };
}

#endif //TONETIMERNATIVE_SETTINGSVIEWMODELIMPL_H
