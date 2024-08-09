#include "swap.h"
#include <iostream>

/**
 * 直接编译：g++ main.cpp src/swap.cpp -Iinclude -o gcc_02 -Wall -std=c++11
 * 
 * 生成库文件并编译-链接静态库
 * 1.汇编 生成swap.o文件
 *      g++ src/swap.cpp -c -Iinclude
 * 2.生成静态库
 *      ar rs libswap.a swap.o
 * 3.链接，生成可执行文件
 *      g++ main.cpp -Iinclude -L. -lswap -o gcc_02
 * 
 * 链接动态库
 * 1.生成动态链接库
 *      g++ src/swap.cpp -Iinclude -c -fPIC 
 *      g++ -shared -o libswap.so swap.o
 *  或者: g++ src/swap.cpp -Iinclude -fPIC -shared -o libswap.so
 * 2.链接
 *      g++ main.cpp -Iinclude -L. -lswap -o gcc_02
 * 3.运行可执行文件  LD_LIBRARY_PATH 指定动态库的搜索路径
 *      LD_LIBRARY_PATH=. ./gcc_02
 * 4. ldd可以查看链接哪些动态库 ldd gcc_02
 */
int main() 
{
    int a = 10;
    int b = 20;
    swap(a, b);

    std::cout << "a=" << a << ", b=" << b << std::endl;
}