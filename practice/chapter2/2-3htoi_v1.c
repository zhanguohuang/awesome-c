//
// Created by 詹国煌 on 2020/11/29.
//

#define YES 1
#define NO 0

int htoi(char s[]) {
    int hexdigit, i, inhex, n;

    i = 0;
    if (s[i] == '0') {
        ++i;
        if (s[i] == 'x' || s[i] == 'X')
            ++i;
    }
    n = 0;
    inhex = YES;
    for (; inhex == YES; ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            hexdigit = s[i] - '0';
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            hexdigit = s[i] - 'a';
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            hexdigit = s[i] - 'A';
        } else {
            inhex = NO;
        }
        if (inhex == YES) {
            n = n * 16 + hexdigit;
        }
    }
    return n;
}

