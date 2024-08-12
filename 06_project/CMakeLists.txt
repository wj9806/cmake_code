cmake_minimum_required(VERSION 3.0)

project(HELLOWORD)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_BUILD_TYPE DEBUG)

include_directories(include)

add_executable(helloworld helloword.cpp src/swap.cpp)