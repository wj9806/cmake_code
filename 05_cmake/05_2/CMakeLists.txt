cmake_minimum_required(VERSION 3.0)

project(HELLOWORD)

include_directories(include)

add_executable(helloworld helloword.cpp src/swap.cpp)