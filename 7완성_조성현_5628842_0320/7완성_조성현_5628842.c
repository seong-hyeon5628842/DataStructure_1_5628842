#include <stdio.h>
#include <stdlib.h>

// ��Ģ������ ���� ����ü ���� (�߻��ڷ���)
typedef struct {
    int num1;
    int num2;
    int (*add)(int, int);
    int (*sub)(int, int);
    int (*mul)(int, int);
    double (*div)(int, int);
} Calculator;

// ���� �Լ� ����
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
double div(int a, int b) { return (b != 0) ? (double)a / b : 0; }

int main() {
    Calculator calc;
    char expression[100];

    // ����ü �� �Լ� ������ �ʱ�ȭ
    calc.add = add;
    calc.sub = sub;
    calc.mul = mul;
    calc.div = div;

    // ����� �Է�
    printf("ù ��° ���� ������ �Է��ϼ���: ");
    scanf_s("%d", &calc.num1);
    printf("�� ��° ���� ������ �Է��ϼ���: ");
    scanf_s("%d", &calc.num2);

    // ���� ���� �� ���
    printf("\n����: %d\n", calc.add(calc.num1, calc.num2));
    printf("����: %d\n", calc.sub(calc.num1, calc.num2));
    printf("����: %d\n", calc.mul(calc.num1, calc.num2));
    printf("������: %.2f\n", calc.div(calc.num1, calc.num2));

    // ����ڷκ��� ���� �Է¹ޱ�
    printf("\n����� ������ �Է��ϼ��� (��: 3 + 5 * 2 - 8 / 4): ");
    scanf_s(" %[^\n]", expression, (unsigned)_countof(expression));
    printf("���: %.6lf",expression);
   

    return 0;
}
