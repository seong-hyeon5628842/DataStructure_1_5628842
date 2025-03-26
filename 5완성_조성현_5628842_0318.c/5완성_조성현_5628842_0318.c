#include <stdio.h>

//사칙연산 함수
/*
int add(int a, int b){
함수 기능 구현
}
int sub(int a, int b){
함수 기능 구현
}
int mul(int a, int b){
함수 기능 구현
}
double div(double a, double b){
함수 기능 구현
}->소수점 두 째짜리까지 표현


*/






    int add(int a,int b) {
        return a + b;
    }
    int sub(int a, int b) {
        return a - b;
    }
    int mul(int a, int b) {
        return a * b;
    }
    double div(double a, double b) {
        return a / b;
    }

int main() {
    int a, b;

    printf("첫 번째 양의 정수를 입력하세요 : ");
    scanf_s("%d",&a);
    printf("두 번째 양의 정수를 입력하세요 : ");
    scanf_s("%d",&b);

    printf("덧셈: %d\n", add(a,b));
    printf("뺼셈: %d\n", sub(a,b));
    printf("곱셈: %d\n", mul(a,b));
    printf("나눗셈: %.2f\n", div(a,b));


    return 0;
}
