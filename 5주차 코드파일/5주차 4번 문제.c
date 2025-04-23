#include <stdio.h>

int main() {
    int n = 15;
    int* p = &n;
    printf("林家 %p\n", p);
    printf("林家 蔼 %d\n", *p);
    printf("沥荐 %d\n", n);
    printf("沥荐 林家 %p\n", &n);
    return 0;
}