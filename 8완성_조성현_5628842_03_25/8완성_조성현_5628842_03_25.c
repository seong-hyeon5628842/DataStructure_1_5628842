#include<stdio.h>

/*
arr1[2][2]
arr2[2][2]
sum_arr[2][2]
printf arr1
printf arr2
sum_arr = arr1 + arr2
printf sum_arr
*/

int main() {
	int arr1[2][2];
	int arr2[2][2];
	int sum_arr[2][2];
	int i, j;
	printf("ù ��° 2x2 ��� �Է�:\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			scanf_s("%d", &arr1[i][j]);
		}
	}
	printf("�� ��° 2x2 ��� �Է�:\n");
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			scanf_s("%d", &arr2[i][j]);
		}
	}
	printf("��� ���� ���: \n");
	for(i=0;i<2;i++){
		for (j = 0; j < 2; j++) {
			sum_arr[i][j] = arr1[i][j] + arr2[i][j];
			printf("%d ", sum_arr[i][j]);
		}
		printf("\n");

	}
}