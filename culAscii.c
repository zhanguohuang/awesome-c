//
// Created by bytedance on 2020/11/9.
//

#include <stdio.h>

int main() {
    int c;
    int cl[128];
    for (int i = 0; i < 128; i++) {
        cl[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        cl[c]++;
    }
    for (int i = 0; i < 128; i++) {
        printf("%3d:", i);
        for (int j = 0; j < cl[i]; ++j) {
            printf(" *");
        }
        printf("\n");
    }
}