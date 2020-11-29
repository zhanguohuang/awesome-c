//
// Created by 詹国煌 on 2020/11/29.
//

int strlen(char s[]) {
    int i;

    while(s[i] != '\0') {
        i++;
    }
    return i;
}