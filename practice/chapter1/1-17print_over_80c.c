//
// Created by bytedance on 2020/11/11.
//

#include <stdio.h>

#define MAXLINE 1000
#define MAXLEN 5

int getLine(char s[], int lim);
void copy(char to[], char from[]);

int main() {
    int n;
    char line[MAXLINE];
    while((n = getLine(line, MAXLINE)) > 0) {
        if (n >= 5) {
            printf("%s", line);
        }
    }
}

// 如果已经到终点了，返回0
int getLine(char s[], int lim) {
    int c, i;
    // 如果i是因为到了Lim终止的，那至少后面还能放一个结束符，如果是因为换行了，则至少会有两个位置
    // 这里很巧妙是因为如果因为lim的话，那上一个肯定就不是换行
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
