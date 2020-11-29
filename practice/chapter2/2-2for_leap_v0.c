//
// Created by 詹国煌 on 2020/11/29.
//

#include <stdio.h>

int main() {
    int i, lim, c;
    int s[5];
    for (i = 0; i < lim - 1; i++) {
        if ((c = getchar()) != '\n') {
           if (c != EOF) {
               s[i] = c;
           }
        }
    }
}
