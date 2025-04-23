#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int stringCompare(const char str1[], const char* str2) {
    //���� �� �ڵ�
    char c1, c2;
    int result = 0;
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] >= 'A' && str1[i] <= 'Z') {
            c1 = str1[i]+32;
        }
        else
            c1 = str1[i];
        if (str2[i] >= 'A' && str2[i] <= 'Z') {
            c2 = str2[i]+32;
        }
        else
            c2 = str2[i];
        result = c1 - c2;
        if (result != 0) {
            return result;
        }
    }
    return result;
}

int main() {
    char string1[100] = { 0 };
    char string2[100] = { 0 };

    printf("ù ��° ���ڿ��� �Է��Ͻÿ� : ");
    scanf("%s", string1);
    printf("�� ��° ���ڿ��� �Է��Ͻÿ� : ");
    scanf("%s", string2);

    int result = stringCompare(string1, string2);

    if (result < 0) {
        printf("ù ��° ���ڿ��� ���� �´�.\n");
    }
    else if (result > 0) {
        printf("�� ��° ���ڿ��� ���� �´�.\n");
    }
    else {
        printf("���� ���ڿ��̴�.\n");
    }

    return 0;
}
