#include<stdio.h>
#include <stdbool.h>
/*
<�����佺�׳׽��� ü �˰���>
scanf n >> n�� �Է¹޾�
2���� n���� ��� ���� ���� �Ҽ����� �˻��ؾ��Ѵ�.
�Ҽ� �Ǻ���:

	1�� �Ҽ��� �ƴϴ�
	2�� �Ҽ��̹Ƿ� ���
	3 �̻���ʹ� 2���� ������ ���� ������ �������� ������ �Ҽ��̴�
	��� �Ҽ��� ���
*/
void findPrime(int N) {
    bool is_prime[1000001]; // �Ҽ� ���� ���� �迭
    for (int i = 0; i <= N; i++)
        is_prime[i] = true; // ��� ���ڸ� �Ҽ�(true)�� �ʱ�ȭ

    is_prime[0] = is_prime[1] = false; // 0�� 1�� �Ҽ��� �ƴ�

    for (int i = 2; i * i <= N; i++) {
        if (is_prime[i]) { // i�� �Ҽ����
            for (int j = i * i; j <= N; j += i) {
                is_prime[j] = false; // i�� ����� ��� ����
            }
        }
    }

    printf("%d ������ �Ҽ�: ", N);
    for (int i = 2; i <= N; i++) {
        if (is_prime[i])
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int N;
    printf("���� n�� �Է��ϼ���: ");
    scanf_s("%d", &N);
    findPrime(N);
    return 0;
}

