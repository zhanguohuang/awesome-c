//
// Created by bytedance on 2020/11/9.
//
#include <stdio.h>

int main() {
    int c, cl;
    int nl[15];
    for (int i = 0; i < 15; i++) {
        nl[i] = 0;
    }
    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (cl >= 15) {
                ++nl[15-1];
            } else {
                ++nl[cl-1];
            }
            cl = 0;
        } else {
            ++cl;
        }
    }
    for (int i = 15; i > 0; i--) {
        for (int j = 0; j < 15; j++) {
            if (nl[j] >= i) {
                printf(" * ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < 15; i++) {
        printf("%3d", i);
    }
}
