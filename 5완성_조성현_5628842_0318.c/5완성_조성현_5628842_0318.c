#include <stdio.h>

//��Ģ���� �Լ�
/*
int add(int a, int b){
�Լ� ��� ����
}
int sub(int a, int b){
�Լ� ��� ����
}
int mul(int a, int b){
�Լ� ��� ����
}
double div(double a, double b){
�Լ� ��� ����
}->�Ҽ��� �� °¥������ ǥ��


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

    printf("ù ��° ���� ������ �Է��ϼ��� : ");
    scanf_s("%d",&a);
    printf("�� ��° ���� ������ �Է��ϼ��� : ");
    scanf_s("%d",&b);

    printf("����: %d\n", add(a,b));
    printf("�E��: %d\n", sub(a,b));
    printf("����: %d\n", mul(a,b));
    printf("������: %.2f\n", div(a,b));


    return 0;
}
