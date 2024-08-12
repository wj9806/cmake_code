#include<iostream>
#include "swap.h"
using namespace std;

/**
 * cmake相关指令：
 * cmake_minimum_required(VERSION 2.8.3)        指定cmake最小版本需求
 * project(hello)                               定义工程名称
 * set(SRC helloword.cpp swap.cpp)              显式的定义变量
 * include_directories(./include /myinclude)    向工程中添加多个特定的头文件搜索路径 类似gcc -I参数
 * link_directories(dir1 dir2)                  向工程中添加多个特定的库文件搜索路径 类似gcc -L参数
 * add_library(hello SHARED ${SRC})             生成库文件，通过变量SRC生成libhello.so库文件
 * add_compile_options(-Wall -std=c++11 -o2)    添加编译参数
 * add_executable(main main.cpp)                生成可执行文件，编译main.cpp生成可执行文件
 * target_link_libraries(target lib1 lib2)      为target添加需要链接的共享库 类似gcc -l参数
 * add_subdirectory(src)                        向当前工程添加存放源文件的子目录，并可以指定中间二进制和目标二进制存放的位置，添加src子目录，src中需要有CMakeLists.txt
 * aux_source_directory(. SRC)                  定义SRC变量，其值为当前目录下所有的源代码文件（这个指令临时被用来自动构建源文件列表）
 * 
 * cmake常用变量：
 * CMAKE_C_FLAGS        gcc 编译选项
 * CMAKE_CXX_FLAGS      g++ 编译选项
 * CMAKE_BUILD_TYPE     编译类型(Debug Release)
 * 
 * 外部构建：
 *  mkdir build
 *  cd build
 *  cmake ..
 *  make
 */
int main()
{
    std::cout << "goto test..." << std::endl;
    int a = 10;
    int b = 20;
    swap(a, b);

    std::cout << "a=" << a << ", b=" << b << std::endl;
    return 0;
}