#include<stdio.h>
#include<stdlib.h>
struct Student {
	char name[30];
	int num;
	int score;
};
int main() {
	int i, j;
	int hm;
	struct Student s1 = { "asdf",4512,90 };
	struct Student s2 = { "hrqe",1568,900 };
	struct Student s3 = { "qwreg",51,80 };
	int* iptr = &i;
	iptr = (int*)malloc(i = sizeof(int));
	
	printf("����� �л� ������ �Է��Ͻó���? ");
	scanf_s("%d",&hm);	
	printf("[1] �л��� ������ �Է��ϼ��� (�̸� �й� ����): ");
	scanf_s("%s", &s1);
	
}