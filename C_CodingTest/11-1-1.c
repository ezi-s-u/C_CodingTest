#include<stdio.h>

int main(void) {
	int arr[5] = { 0 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	int max = 0, min = 0, total = 0;

	for (int i = 0; i < arrSize; i++) {
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &arr[i]);
		if (arr[i] >= max) {
			max = arr[i];
		}
		if (arr[i] <= max) {
			min = arr[i];
		}
		total += arr[i];
	}

	printf("�ִ� : %d\n", max);
	printf("�ּڰ� : %d\n", min);
	printf("�� �� : %d\n", total);
}