#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void reverseString(char* str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    for (int i = 0; i < len / 2; i++) {
        char tmp = str[i];
        str[i] = str[len - i-1];
        str[(len-1) - i] = tmp;
    }
}
int main() {
    char str[100];
    printf("���ڿ� �Է�: ");
    scanf("%s", str);

    reverseString(str);

    printf("������ ���ڿ�: %s\n", str);

    return 0;
}
