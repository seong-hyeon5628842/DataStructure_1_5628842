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
		printf("피보나치 수열 방법 선택 (1: 재귀적, 2: 순환적, 0: 종료): ");
		scanf_s("%d", &choice);
		if (choice == 0 ) {
			printf("프로그램이 종료되었습니다.");
			break;
		}
		if (choice < 0 || choice > 2) {
			printf("0-2 사이의 수를 입력하세요.\n");
			continue;
		}
		printf("정수 N을 입력하세요 (종료하려면 0 입력): ");
		scanf_s("%d", &N);
		if (N == 0) {
			printf("프로그램이 종료되었습니다.\n");
			break;
		}
		
		if (choice == 1) {
			printf("F(%d) = %d (재귀적 방법)\n", N, fibo_rec(N));
			if (N == 0) {
				printf("프로그램이 종료되었습니다.");
				break;
			}
		}
		else if (choice == 2) {
			printf("F(%d) = %d (순환적 방법)\n", N, fibo_itr(N));
			if (N == 0) {
				printf("프로그램이 종료되었습니다.");
				break;
			}
		}
	}
}