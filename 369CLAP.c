/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        int n = i;
        int r = 0;
        while (n > 0) {
            if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9) {
                r = 1;
                break;
            }
            n /= 10;
        }
        if (r == 1) {
            if (i % 10 == 0) {
                printf("CLAP\n");
            } else {
                printf("CLAP\t");
            }
        } else {
            if (i % 10 == 0) {
                printf("%d\n", i);
            } else {
                printf("%d\t", i);
            }
        }
    }
    return 0;
}