//
// Created by 詹国煌 on 2020/11/29.
//

#include <stdio.h>


int main() {
    int year = 0;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year\n", year);
    } else {
        printf("%d is not a leap year\n", year);
    }
}
