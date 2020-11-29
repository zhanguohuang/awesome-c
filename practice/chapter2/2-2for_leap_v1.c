//
// Created by 詹国煌 on 2020/11/29.
//

#include <stdio.h>

enum loop {
    NO, YES
};
enum loop okloop = YES;

int main() {
    char s[5];
    int i, lim, c;
    i = lim = 0;
    while (okloop = YES) {
        if (i >= lim - 1) {
            okloop = NO;
        } else if((c = getchar()) != '\n') {
            okloop = NO;
        } else if (c == EOF) {
            okloop = NO;
        } else {
            s[i] = c;
            ++i;
        }
    }
}

