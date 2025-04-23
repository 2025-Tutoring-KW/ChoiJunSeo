#include <stdio.h>

int main() {
	char str[101];
    printf("영문 문자열을 입력하시오 : ");
    /*Write Your Code [START]*/
	gets_s(str);
    /*Write Your Code [END]*/

    printf("입력된 문자열 : %s\n", str);
    /*Write Your Code [START]*/
    int len;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 97 && str[i] <= 122) {
            str[i] = str[i] - 32;
        }
        else if (str[i] >= 65 && str[i] <=90) {
            str[i] = str[i] + 32;
        }
        len = i;
    }
    /*Write Your Code [END]*/
    printf("수정된 문자열 : %s", str);
    return 0;
}
