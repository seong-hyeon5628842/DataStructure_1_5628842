#include<stdio.h>

struct student {
	int number;
	char name[10];
	double grade;
};
int main(void) {
	struct student list[3];
	for (int i = 0; i < 3; i++) {
		printf("�й� : ");
		scanf_s("%d", &list[i].number);
		printf("�̸� : ");
		scanf_s("%s", &list[i].name);
		printf("���� : ");
		scanf_s("lf", &list[i].grade);
	}
	for (int i = 0; i < 3; i++) {
		printf("\n�̸�: %s ����: %lf\n", list[i].name, list[i].grade);
	}
	return 0;
}