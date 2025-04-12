#include"LinkedPoly.h"
void main(void) {
	ListHead* A, * B, * C;
	A = createLinkedList();
	B = createLinkedList();
	C = createLinkedList();
	printf("첫 번째 다형식을 입력하세요 (예: 3x^2+4x+1):\n");
	scanf_s("%dx^2+%dx+%d", &A, &B, &C);
	printf("두 번째 다형식을 입력하세요 (예: 2x^2+5x+3):\n");
	
}