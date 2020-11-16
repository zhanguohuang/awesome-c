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
    printf("signed: char_min:%d, char_max:%d", CHAR_MIN, CHAR_MAX);
    printf("unsigned: unsigned_char_min:%d, unsigned_char_max:%d", 0, UCHAR_MAX);
    printf("signed: int_min:%d, int_max:%d", INT_MIN, INT_MAX);
    printf("signed: char_min:%d, char_max:%d", CHAR_MIN, CHAR_MAX);
}
