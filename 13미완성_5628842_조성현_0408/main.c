#include <stdio.h>
#include"listS.h"

int main() {
    List matrix1 = { .size = 0 };
    List matrix2 = { .size = 0 };
    List result = { .size = 0 };

    printf("행렬을 입력하시오? (-1입력 시 행렬의 입력이 종료됨)\n");
    inputMatrix(&matrix1);

    printf("행렬을 입력하시오? (-1입력 시 행렬의 입력이 종료됨)\n");
    inputMatrix(&matrix2);

    addMatrix(&matrix1, &matrix2, &result);
    printMatrix(&result);

    return 0;
}
