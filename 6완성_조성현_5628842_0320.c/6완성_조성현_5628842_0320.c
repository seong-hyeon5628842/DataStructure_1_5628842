#include<stdio.h>
#include <stdbool.h>

/*
�Լ� findPrime(N):
    �迭 is_prime[1000001]�� ����
    0���� N���� ��� ���� true(�Ҽ�)�� �ʱ�ȭ

    0�� 1�� �Ҽ��� x -> is_prime[0]�� is_prime[1]�� false�� ���� 

    2���� ��N���� �ݺ�:
        ���� is_prime[i]�� true��� -> i�� �Ҽ����
            i�� ������� ��� false�� ���� ->�Ҽ��� �ƴϴ�

    "N ������ �Ҽ�:" ���
    2���� N���� �ݺ��ؼ� ->    ���� is_prime[i]�� true���
            i�� ���

*/
void findPrime(int N) {
    bool is_prime[1000001]; 
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

