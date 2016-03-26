/*
 * helloWorldImpl.cpp
 * Copyright (C) 2016 rharriso <rharriso@lappy>
 *
 * Distributed under terms of the MIT license.
 */

#include <helloWorld.hpp>
#include "helloWorldImp.hpp"
#include <string>

namespace tonetimer {

    std::shared_ptr<HelloWorld> HelloWorld::create() {
        return std::make_shared<HelloWorldImpl>();
    }
    
    HelloWorldImpl::HelloWorldImpl() { }

    std::string HelloWorldImpl::getGreeting(const std::string & name){
        std::string response = "What's up ";
        response.append(name);
        response.append("?");
        return response;
    }
    
}

