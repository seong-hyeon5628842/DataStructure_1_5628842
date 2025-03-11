#include<stdio.h>

void binary_print(int a) {
	int n = sizeof(int) * 8;
	int mask = 1 << (n - 1);
	printf("입력된 정수의 32비트 표현 : ");
	for (int i = 1; i <= n; i++) {
		putchar((a & mask) ? '1' : '0');
		a <<= 1;
	}
}

int main(void) {
	int i;
	printf("정수 값을 입력하세요: ");
	scanf_s("%d", &i);
	binary_print(i);
	return 0;
}