//
// Created by 詹国煌 on 2020/11/9.
//
#include <stdio.h>

#define INITLINE 2

int getLine(char line[]);

void copy(char to[], char from[]);

void resize(char s[]);

int currLen;

main() {
    int len;
    int max;
    char line[INITLINE];
    char longest[INITLINE];

    currLen = INITLINE;
    max = 0;
    while ((len = getLine(line)) > 0) {
        if (len > max) {
            max = len;
            longest = char[3]{};
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("%s", longest);
    }
    return 0;
}

int getLine(char s[]) {
    int c, i;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        if (i >= currLen) {
            resize(s);
        }
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

void resize(char s[]) {
    char ns[2 * currLen];
    for (int i = 0; i < currLen; i++) {
        ns[i] = s[i];
    }
    s = ns;
    currLen = 2 * currLen;
}