#include <stdio.h>
#include <stdlib.h>

// 사칙연산을 위한 구조체 정의 (추상자료형)
typedef struct {
    int num1;
    int num2;
    int (*add)(int, int);
    int (*sub)(int, int);
    int (*mul)(int, int);
    double (*div)(int, int);
} Calculator;

// 연산 함수 정의
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
double div(int a, int b) { return (b != 0) ? (double)a / b : 0; }

int main() {
    Calculator calc;
    char expression[100];

    // 구조체 내 함수 포인터 초기화
    calc.add = add;
    calc.sub = sub;
    calc.mul = mul;
    calc.div = div;

    // 사용자 입력
    printf("첫 번째 양의 정수를 입력하세요: ");
    scanf_s("%d", &calc.num1);
    printf("두 번째 양의 정수를 입력하세요: ");
    scanf_s("%d", &calc.num2);

    // 연산 수행 및 출력
    printf("\n덧셈: %d\n", calc.add(calc.num1, calc.num2));
    printf("뺄셈: %d\n", calc.sub(calc.num1, calc.num2));
    printf("곱셈: %d\n", calc.mul(calc.num1, calc.num2));
    printf("나눗셈: %.2f\n", calc.div(calc.num1, calc.num2));

    // 사용자로부터 수식 입력받기
    printf("\n계산할 수식을 입력하세요 (예: 3 + 5 * 2 - 8 / 4): ");
    scanf_s(" %[^\n]", expression, (unsigned)_countof(expression));
    printf("결과: %.6lf",expression);
   

    return 0;
}
