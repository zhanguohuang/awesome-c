//
// Created by bytedance on 2020/11/11.
//

// 编写一个程序，删除每个输入行末尾的空格及制表符，并删除完全是空格的行。
#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int lim);
// 删除末尾是空格的行
int removeSpace(char line[]);

int main() {
    char line[MAXLINE];
    while(getLine(line, MAXLINE) > 0) {
        if (removeSpace(line) > 0) {
            printf("%s", line);
        }
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

int removeSpace(char line[]) {
    int i;
    i = 0;
    while (line[i] != '\n')
        ++i;
    while (i > 0 && (line[i] == '\t' || line[i] == ' ')) {
        --i;
    }
    if (i > 0) {
        ++i;
        line[i] = '\n';
        ++i;
        line[i] = '\0';
    }
    return i;
}