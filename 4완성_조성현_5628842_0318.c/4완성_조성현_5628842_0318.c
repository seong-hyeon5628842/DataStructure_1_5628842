#include<stdio.h>
#include <stdbool.h>
/*
<에라토스테네스의 체 알고리즘>
scanf n >> n을 입력받아
2부터 n가지 모든 수에 대해 소수인지 검사해야한다.
소수 판별법:

	1은 소수가 아니다
	2는 소수이므로 출력
	3 이상부터는 2부터 제곱근 까지 나누어 떨어지지 않으면 소수이다
	모든 소수를 출력
*/
void findPrime(int N) {
    bool is_prime[1000001]; // 소수 여부 저장 배열
    for (int i = 0; i <= N; i++)
        is_prime[i] = true; // 모든 숫자를 소수(true)로 초기화

    is_prime[0] = is_prime[1] = false; // 0과 1은 소수가 아님

    for (int i = 2; i * i <= N; i++) {
        if (is_prime[i]) { // i가 소수라면
            for (int j = i * i; j <= N; j += i) {
                is_prime[j] = false; // i의 배수를 모두 제거
            }
        }
    }

    printf("%d 이하의 소수: ", N);
    for (int i = 2; i <= N; i++) {
        if (is_prime[i])
            printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int N;
    printf("정수 n을 입력하세요: ");
    scanf_s("%d", &N);
    findPrime(N);
    return 0;
}

