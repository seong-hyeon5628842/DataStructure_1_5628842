#include<stdio.h>
#include <stdbool.h>

/*
함수 findPrime(N):
    배열 is_prime[1000001]을 선언
    0부터 N까지 모든 값을 true(소수)로 초기화

    0과 1은 소수가 x -> is_prime[0]과 is_prime[1]을 false로 설정 

    2부터 √N까지 반복:
        만약 is_prime[i]가 true라면 -> i가 소수라면
            i의 배수들을 모두 false로 변경 ->소수가 아니다

    "N 이하의 소수:" 출력
    2부터 N까지 반복해서 ->    만약 is_prime[i]가 true라면
            i를 출력

*/
void findPrime(int N) {
    bool is_prime[1000001]; 
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

