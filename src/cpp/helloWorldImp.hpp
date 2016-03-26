#pragma once
 
#include "helloWorld.hpp"
 
namespace tonetimer {
    
    class HelloWorldImpl : public tonetimer::HelloWorld {
        
    public:
        
        // Constructor
        HelloWorldImpl();
        
        // Our method that returns a string
        std::string getGreeting(const std::string & name);
        
    };
    
}
