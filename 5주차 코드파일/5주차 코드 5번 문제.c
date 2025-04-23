#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n;
    int* p = &n;
    scanf("%d", p);
    *p = *p * 2;
    printf("%d", *p);
}
