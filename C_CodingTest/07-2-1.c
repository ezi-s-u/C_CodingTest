#include<stdio.h>

int main(void) {
	int res = 0, i = 0, total = 0;
	while (i < 5) {
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &res);
		while (res <= 0) {
			printf("0���� ū ���� �Է��ϼ��� : ");
			scanf_s("%d", &res);
		}
		total += res;
		res = 0;
		i++;
	}
	printf("%d", total);

	return 0;
}