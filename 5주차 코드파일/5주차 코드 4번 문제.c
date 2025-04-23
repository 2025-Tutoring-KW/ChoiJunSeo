#include <stdio.h>

int main() {
    int n = 15;
    int* p = &n;
    printf("주소 %p\n", p);
    printf("주소 값 %d\n", *p);
    printf("정수 %d\n", n);
    printf("정수 주소 %p\n", &n);
    return 0;
}
