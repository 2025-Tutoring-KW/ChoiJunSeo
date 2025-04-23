#include <stdio.h>

int main() {
	int arr[10] = { 10,23,15,26,17,37,45,44,3,11 };
	int max = 0;
	int min = 0;
	double average = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    for (int i = 0;i < 10;i++) {
        average = average + arr[i];
    }

    max = arr[9];min = arr[0];

	printf("가장 큰 수 : %d\n", max);
	printf("가장 작은 수 : %d\n", min);
	printf("배열의 평균값 : %f\n", average/10);
}
