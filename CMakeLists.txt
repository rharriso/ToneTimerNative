cmake_minimum_required(VERSION 3.4)
project(ToneTimerNative)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

file(GLOB generatedSrc
        "generated-src/cpp/*.h"
        "generated-src/cpp/*.cpp")

file(GLOB srcSrc
        "src/cpp/*.h"
        "src/cpp/*.cpp")

include_directories(generated-src/cpp
    src/cpp)

add_library(ToneTimerNative
    ${generatedSrc}
    ${srcSrc})

add_executable(clockTest
    ${srcSrc}
    ${generatedSrc})

find_package (Threads)
target_link_libraries (clockTest ${CMAKE_THREAD_LIBS_INIT})