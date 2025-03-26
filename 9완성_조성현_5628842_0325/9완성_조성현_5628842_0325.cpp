#include <stdio.h>
#include <stdlib.h>

// ���� ���� �Լ�
void bubbleSort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("������ ������ �Է��ϼ���: ");
    scanf_s("%d", &n); 

    // n���� ������ ������ �� �ִ� ������ ���� �Ҵ�
    int* numbers = (int*)malloc(n * sizeof(int));
    if (numbers == NULL) {
        printf("�޸� �Ҵ� ����\n");
        return 1; // ���α׷� ����
    }

    // ���� �Է�
    printf("%d���� ������ �Է��ϼ���:\n", n);
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &numbers[i]); 
    }

    // ���� ����
    bubbleSort(numbers, n);

    // ���ĵ� ��� ���
    printf("������������ ���ĵ� ������:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // ���� �Ҵ� ����
    free(numbers);

    return 0;
}
