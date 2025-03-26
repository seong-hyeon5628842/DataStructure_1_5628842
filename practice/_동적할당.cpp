#include<stdio.h>

struct student {
	int number;
	char name[10];
	double grade;
};
int main(void) {
	struct student list[3];
	for (int i = 0; i < 3; i++) {
		printf("학번 : ");
		scanf_s("%d", &list[i].number);
		printf("이름 : ");
		scanf_s("%s", &list[i].name);
		printf("학점 : ");
		scanf_s("lf", &list[i].grade);
	}
	for (int i = 0; i < 3; i++) {
		printf("\n이름: %s 학점: %lf\n", list[i].name, list[i].grade);
	}
	return 0;
}