#include <stdio.h>

#define str "hello world"

/**
 * 预处理:
 *  gcc -E test.c -o test.i
 * 编译:
 *  gcc -S test.i -o test.s
 * 汇编:
 *  gcc -c test.s -o test.o
 * 链接:
 *  gcc test.o -o test
 * 
 * 编译带调试信息的可执行文件
 *  gcc -g test.c -o test
 * -o 优化源代码
 *  gcc -o2 -g test.c -o test
 * 
 * -l -L 指定库文件 在/lib和/usr/local/lib里的库直接用-l参数就能链接
 * 链接glog库
 * g++ -lglog test.c
 * 如果库文件没放在上面的三个目录中，需要使用-L指定库文件所在目录
 * g++ -L/home/folder -lmytest test.cpp
 * 
 * -I 指定头文件搜索目录
 * g++ -I/myinclude test.cpp
 * 
 * -Wall 打印gcc提供的警告信息
 * -w 关闭警告信息
 * 
 * -std=c++11 设置编译标准
 * 
 * -o 在指定输出文件名称
 * -D 定义宏
 * 
 */
int main() {
    printf("%s\n", str);
    return 0;
}