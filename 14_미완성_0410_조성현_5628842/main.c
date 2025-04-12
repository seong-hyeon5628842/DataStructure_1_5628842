#include <stdio.h>
#include <stdlib.h>
#include "LinkedPoly.h"

#define MAX_INPUT 100

void parsePoly(const char* input, ListHead* poly); // ���� �߰�

int main() {
    ListHead* A = createLinkedList();
    ListHead* B = createLinkedList();
    ListHead* C = createLinkedList();
    char input[MAX_INPUT];

    printf("ù ��° ���׽��� �Է��ϼ��� (��: 3x^2+4x+1):\n ");
    fgets(input, MAX_INPUT, stdin);
    input[strcspn(input, "\n")] = 0; // ���� ����
    parsePoly(input, A);

    printf("�� ��° ���׽��� �Է��ϼ��� (��: 2x^1+1):\n ");
    fgets(input, MAX_INPUT, stdin);
    input[strcspn(input, "\n")] = 0; // ���� ����
    parsePoly(input, B);

    printf("[���� ���]\n");
    printf("List: size = %d, last = %d, move = %d\n");
 
    mulPoly(A, B, C);

    printf("Items: P(x) = ");
    printPoly(C);

    return 0;
}
