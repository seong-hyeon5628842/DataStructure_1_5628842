#include<stdio.h>
#include<stdlib.h>
struct stdType {
    char name[30];
    int id;
    int score;
} StdType;

int main() {
    struct stdType students[3] = {
        {"Honggil Dong", 10, 90},
        {"Lee MongRyong", 20, 80},
        {"Seong hyeon", 30, 70}
    };

    // �迭�� ���� ���� ����
    for (int k = 0; k < 3; k++) {
        students[k].score += 10;
    }

    // �����͸� �̿��� ���� ����
    struct stdType* sptr = students; // �迭�� ù ��° ���Ҹ� ����Ŵ
    for (int k = 0; k < 3; k++) {
        sptr->score += 10; // �ùٸ� ����ü ��� ���� ���
        sptr++; // ���� �л��� ����Ű���� �̵�
    }

    // ��� ���
    for (int k = 0; k < 3; k++) {
        printf("Name: %s, ID: %d, Score: %d\n", students[k].name, students[k].id, students[k].score);
    }

    return 0;
}
	//int i;
	//int* iptr = &i;
	//int iArray[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int iArray2[10] = { 10,20,30,40,50,60,70,80,90,100 };
	//iptr = &iArray[0];
	//printf("number of iArray element?");
	//scanf_s("^d", &i);
	/*iptr =(int *) malloc(i = sizeof(int));
	for (int j = 0; j < 10; j++) {
		*(iptr + j) = j + 1;
	}*/
	//printf("memory alloc array");
	//for (int j = 0; j < i; j++) {
	//	printf("")
	//}
	//printf("i: %d, address of i 0x%X\n", i, &i);
	//printf("iptr: 0x%X, value of iptr pointer : %d\n", iptr, *iptr);
