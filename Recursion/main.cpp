#include <stdio.h>
#include <stdlib.h>

int plus_count; // 피보나치 덧셈 횟수 카운트 변수

// 반복문을 이용한 팩토리얼 계산
int fact_itr(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

// 재귀를 이용한 팩토리얼 계산
int fact_rec(int n) {
    if (n == 1) return 1;
    else return n * fact_rec(n - 1);
}

// 재귀를 이용한 피보나치 수열
int fibo_recu(int n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    else {
        plus_count++; // 덧셈 횟수 증가
        return fibo_recu(n - 1) + fibo_recu(n - 2);
    }
}

// 반복문을 이용한 피보나치 수열
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
        plus_count++; // 반복문에서는 (n - 1)번 덧셈이 수행됨
    }
    return f_n;
}

int main() {
    int m;
    printf("m 은 무엇인가? ");
    scanf_s("%d", &m); // Visual Studio 외의 환경에서는 scanf 사용

    printf("%d! = %d by recursion\n", m, fact_rec(m));
    printf("%d! = %d by iterative\n", m, fact_itr(m));

    plus_count = 0;
    printf("f(%d) = %d by recursion (plus: %d)\n", m, fibo_recu(m), plus_count);

    plus_count = 0;
    printf("f(%d) = %d by iterative (plus: %d)\n", m, fibo_itr(m), plus_count);

    return 0;
}
