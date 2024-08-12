cmake_minimum_required(VERSION 3.0)
project(TEST)
aux_source_directory(. SRC)
add_executable(test_cmake ${SRC})