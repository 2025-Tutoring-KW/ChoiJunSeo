#include <stdio.h>

int main() {
    int n = 15;
    int* p = &n;
    printf("�ּ� %p\n", p);
    printf("�ּ� �� %d\n", *p);
    printf("���� %d\n", n);
    printf("���� �ּ� %p\n", &n);
    return 0;
}