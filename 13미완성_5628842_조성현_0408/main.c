#include <stdio.h>
#include"listS.h"

int main() {
    List matrix1 = { .size = 0 };
    List matrix2 = { .size = 0 };
    List result = { .size = 0 };

    printf("����� �Է��Ͻÿ�? (-1�Է� �� ����� �Է��� �����)\n");
    inputMatrix(&matrix1);

    printf("����� �Է��Ͻÿ�? (-1�Է� �� ����� �Է��� �����)\n");
    inputMatrix(&matrix2);

    addMatrix(&matrix1, &matrix2, &result);
    printMatrix(&result);

    return 0;
}
