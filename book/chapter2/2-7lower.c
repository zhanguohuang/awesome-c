//
// Created by 詹国煌 on 2020/11/29.
//

#include <stdio.h>

int low(int c) {
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}
