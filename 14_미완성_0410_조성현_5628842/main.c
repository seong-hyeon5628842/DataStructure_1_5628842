#include <stdio.h>
#include <stdlib.h>
#include "LinkedPoly.h"

#define MAX_INPUT 100

void parsePoly(const char* input, ListHead* poly); // 선언 추가

int main() {
    ListHead* A = createLinkedList();
    ListHead* B = createLinkedList();
    ListHead* C = createLinkedList();
    char input[MAX_INPUT];

    printf("첫 번째 다항식을 입력하세요 (예: 3x^2+4x+1):\n ");
    fgets(input, MAX_INPUT, stdin);
    input[strcspn(input, "\n")] = 0; // 개행 제거
    parsePoly(input, A);

    printf("두 번째 다항식을 입력하세요 (예: 2x^1+1):\n ");
    fgets(input, MAX_INPUT, stdin);
    input[strcspn(input, "\n")] = 0; // 개행 제거
    parsePoly(input, B);

    printf("[곱셈 결과]\n");
    printf("List: size = %d, last = %d, move = %d\n");
 
    mulPoly(A, B, C);

    printf("Items: P(x) = ");
    printPoly(C);

    return 0;
}
