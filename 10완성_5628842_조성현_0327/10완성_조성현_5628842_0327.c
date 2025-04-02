#include <stdio.h>
#include <stdlib.h>

// 2x2 행렬 덧셈을 수행하는 함수
void addMatrix(int* mat1, int* mat2, int* result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(result + i * cols + j) = *(mat1 + i * cols + j) + *(mat2 + i * cols + j);
        }
    }
}

int main() {
    int rows = 2, cols = 2; // 2x2 행렬 크기
    int* matrix1 = (int*)malloc(rows * cols * sizeof(int));
    int* matrix2 = (int*)malloc(rows * cols * sizeof(int));
    int* sumMatrix = (int*)malloc(rows * cols * sizeof(int));

    // NULL 체크 (메모리 할당 실패 확인)
    if (matrix1 == NULL || matrix2 == NULL || sumMatrix == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    // 첫 번째 행렬 입력
    printf("첫 번째 2x2 행렬 입력:\n");
    for (int i = 0; i < rows * cols; i++) {
        scanf_s("%d", matrix1 + i);
    }

    // 두 번째 행렬 입력
    printf("두 번째 2x2 행렬 입력:\n");
    for (int i = 0; i < rows * cols; i++) {
        scanf_s("%d", matrix2 + i);
    }

    // 행렬 덧셈 함수 호출
    addMatrix(matrix1, matrix2, sumMatrix, rows, cols);

    // 결과 출력
    printf("행렬 덧셈 결과:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(sumMatrix + i * cols + j));
        }
        printf("\n");
    }

    // 동적 메모리 해제
    free(matrix1);
    free(matrix2);
    free(sumMatrix);

    return 0;
}
