#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n1, n2;
    int* p1 = &n1, * p2 = &n2;
    scanf("%d", p1);
    scanf("%d", p2);

    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;

    printf("n1 = %d n2 = %d", *p1, *p2);
}