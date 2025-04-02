#include <stdio.h>
#include <stdlib.h>

// 2x2 ��� ������ �����ϴ� �Լ�
void addMatrix(int* mat1, int* mat2, int* result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(result + i * cols + j) = *(mat1 + i * cols + j) + *(mat2 + i * cols + j);
        }
    }
}

int main() {
    int rows = 2, cols = 2; // 2x2 ��� ũ��
    int* matrix1 = (int*)malloc(rows * cols * sizeof(int));
    int* matrix2 = (int*)malloc(rows * cols * sizeof(int));
    int* sumMatrix = (int*)malloc(rows * cols * sizeof(int));

    // NULL üũ (�޸� �Ҵ� ���� Ȯ��)
    if (matrix1 == NULL || matrix2 == NULL || sumMatrix == NULL) {
        printf("�޸� �Ҵ� ����\n");
        return 1;
    }

    // ù ��° ��� �Է�
    printf("ù ��° 2x2 ��� �Է�:\n");
    for (int i = 0; i < rows * cols; i++) {
        scanf_s("%d", matrix1 + i);
    }

    // �� ��° ��� �Է�
    printf("�� ��° 2x2 ��� �Է�:\n");
    for (int i = 0; i < rows * cols; i++) {
        scanf_s("%d", matrix2 + i);
    }

    // ��� ���� �Լ� ȣ��
    addMatrix(matrix1, matrix2, sumMatrix, rows, cols);

    // ��� ���
    printf("��� ���� ���:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(sumMatrix + i * cols + j));
        }
        printf("\n");
    }

    // ���� �޸� ����
    free(matrix1);
    free(matrix2);
    free(sumMatrix);

    return 0;
}
