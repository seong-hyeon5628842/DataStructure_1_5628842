#include<stdio.h>
#include<stdlib.h>

int fibo_rec(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return fibo_rec(n - 1) + fibo_rec(n - 2);
	}
}
int fibo_itr(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;

	int f_n_2 = 0;
	int f_n_1 = 1;
	int f_n = 0;

	for (int i = 2; i <= n; i++) {
		f_n = f_n_1 + f_n_2;
		f_n_2 = f_n_1;
		f_n_1 = f_n;
		
	}
	return f_n;
}

int main() {
	int choice;
	int N;
	while (1) {
		printf("�Ǻ���ġ ���� ��� ���� (1: �����, 2: ��ȯ��, 0: ����): ");
		scanf_s("%d", &choice);
		if (choice == 0 ) {
			printf("���α׷��� ����Ǿ����ϴ�.");
			break;
		}
		if (choice < 0 || choice > 2) {
			printf("0-2 ������ ���� �Է��ϼ���.\n");
			continue;
		}
		printf("���� N�� �Է��ϼ��� (�����Ϸ��� 0 �Է�): ");
		scanf_s("%d", &N);
		if (N == 0) {
			printf("���α׷��� ����Ǿ����ϴ�.\n");
			break;
		}
		
		if (choice == 1) {
			printf("F(%d) = %d (����� ���)\n", N, fibo_rec(N));
			if (N == 0) {
				printf("���α׷��� ����Ǿ����ϴ�.");
				break;
			}
		}
		else if (choice == 2) {
			printf("F(%d) = %d (��ȯ�� ���)\n", N, fibo_itr(N));
			if (N == 0) {
				printf("���α׷��� ����Ǿ����ϴ�.");
				break;
			}
		}
	}
}