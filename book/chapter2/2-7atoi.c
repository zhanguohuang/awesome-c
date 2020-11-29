//
// Created by 詹国煌 on 2020/11/29.
//

// atoi: convert s to integer
int atoi(char s[]) {
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; i++) {
        n = n * 10 + (s[i] - '0');
    }
    return n;
}
