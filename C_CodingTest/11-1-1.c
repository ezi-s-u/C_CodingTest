#include<stdio.h>

int main(void) {
	int arr[5] = { 0 };
	int arrSize = sizeof(arr) / sizeof(arr[0]);
	int max = 0x80000000, min = 0x7FFFFFFF, total = 0;

	for (int i = 0; i < arrSize; i++) {
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &arr[i]);
		if (arr[i] >= max) {
			max = arr[i];
		} else if (arr[i] < min) {
			min = arr[i];
		}
		total += arr[i];
	}

	printf("�ִ� : %d\n", max);
	printf("�ּڰ� : %d\n", min);
	printf("�� �� : %d\n", total);
}