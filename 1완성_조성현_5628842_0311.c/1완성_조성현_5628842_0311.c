#include<stdio.h>

void binary_print(int a) {
	int n = sizeof(int) * 8;
	int mask = 1 << (n - 1);
	printf("�Էµ� ������ 32��Ʈ ǥ�� : ");
	for (int i = 1; i <= n; i++) {
		putchar((a & mask) ? '1' : '0');
		a <<= 1;
	}
}

int main(void) {
	int i;
	printf("���� ���� �Է��ϼ���: ");
	scanf_s("%d", &i);
	binary_print(i);
	return 0;
}