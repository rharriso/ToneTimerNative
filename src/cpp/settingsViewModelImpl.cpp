//
// Created by rharriso on 27/03/16.
//

#include "settingsViewModelImpl.h"
#include <iostream>

namespace tonetimer {

    std::shared_ptr<SettingsViewModel> SettingsViewModel::create() {
        return std::make_shared<SettingsViewModelImpl>();
    }

    void SettingsViewModelImpl::incIntervalDuration() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void SettingsViewModelImpl::decIntervalDuration() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void SettingsViewModelImpl::incIntervalBreak() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void SettingsViewModelImpl::decIntervalBreak() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void SettingsViewModelImpl::incSetSize() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void SettingsViewModelImpl::decSetSize() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void SettingsViewModelImpl::incSetCount() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void SettingsViewModelImpl::decSetCount() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void SettingsViewModelImpl::incSetBreak() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }

    void SettingsViewModelImpl::decSetBreak() {
        std::cout << __PRETTY_FUNCTION__ << std::endl;
    }
}
