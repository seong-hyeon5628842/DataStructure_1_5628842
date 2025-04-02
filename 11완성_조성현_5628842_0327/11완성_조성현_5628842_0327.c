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
	
	printf("몇명의 학생 정보를 입력하시나요? ");
	scanf_s("%d",&hm);	
	printf("[1] 학생의 정보를 입력하세요 (이름 학번 점수): ");
	scanf_s("%s", &s1);
	
}