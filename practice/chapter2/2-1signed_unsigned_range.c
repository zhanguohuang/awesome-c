//
// Created by 詹国煌 on 2020/11/16.
//

// 编写一个程序以确定分别由signed及unsigned限定的char、short、
// int与long类型变量的取值范围。采用打印标准头文件中的相应值以及直接计算两种方式实现。
// 后一种方法的实现较困难一些，因为要确定各种浮点类型的取值范围。
#include <limits.h>
#include <float.h>

#include <stdio.h>

int main() {
    // 8
    printf("signed: char_min:%d, char_max:%d\n", CHAR_MIN, CHAR_MAX);
    printf("unsigned: unsigned_char_min:%d, unsigned_char_max:%d\n", 0, UCHAR_MAX);
    printf("\n");

    // short 16
    printf("signed: short_min:%d, short_max:%d\n", SHRT_MIN, SHRT_MAX);
    printf("unsigned: unsigned_short_min:%d, unsigned_short_max:%d\n", 0, USHRT_MAX);
    printf("\n");

    // int 32
    printf("signed: int_min:%d, int_max:%d\n", INT_MIN, INT_MAX);
    printf("unsigned: unsigned_int_min:%d, unsigned_int_max:%ld\n", 0, UINT_MAX);
    printf("\n");

    // long 64
    printf("signed: long_min:%d, long_max:%ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned: unsigned_long_min:%d, unsigned_long_max:%lu\n", 0, ULONG_MAX);

    // 二进制有符号运算，以二位为例子
    // 00 ->  0
    // 01 ->  1     0开头，后面全是1最大
    // 10 ->  -2    1开头，后面全是0最小
    // 11 ->  -1
}
