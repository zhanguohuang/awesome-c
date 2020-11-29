//
// Created by 詹国煌 on 2020/11/29.
//

//练习2-3 编写函数htoi(s),把由十六进制数字组成的字符串(0x或0X)转换为与之等价的整型值。字符串中允许包含的数字包括：0〜9、a〜f以及A〜F。

#include <stdio.h>

int htoi(char s[]) {
    int n = 0;
    int c;
    for (int i = 2; (c = s[i]) != '\0'; i++) {
        if (c >= '0' && c <= '9') {
            n = n * 16 + (c - '0');
        } else if (c >= 'a' && c <= 'f') {
            n = n * 16 + (c - 'a' + 10);
        } else {
            n = n * 16 + (c - 'A' + 10);
        }
    }
    return n;
}

int main() {
    char s[] = {'0', 'x', '1', 'f', '\0'};
    int n = htoi(s);
    printf("%d", n);
}
