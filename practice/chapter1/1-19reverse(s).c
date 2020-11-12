//
// Created by 詹国煌 on 2020/11/12.
//

//编写函数reverse(s)，将字符串s中的字符顺序颠倒过来。
//使用该函数编写一个程序，每次颠倒一个输入行中的字符顺序。

#include <stdio.h>
#define MAXLINE 1000

int getLine(char s[], int lim);
void revertLine(char s[]);
void revertLinePlus(char s[]);

int main() {
    char line[MAXLINE];
    while (getLine(line, MAXLINE) > 0) {
        revertLine(line);
        printf("%s", line);
    }
}

int getLine(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void revertLine(char s[]) {
    int i;
    i = 0;
    while (s[i] != '\n') {
        i++;
    }
    for (int j = 0; j < (i + 1) / 2; j++) {
        char temp;
        temp = s[j];
        s[j] = s[i-j];
        s[i-j] = temp;
    }
}

void revertLinePlus(char s[]) {
    int i, j;
    char temp;
    i = j = 0;
    while (s[i] != '\n') {
        i++;
    }
    while (j < i) {
        temp = s[j];
        s[j] = s[i];
        s[i] = s[j];
        j++;
        i--;
    }
}