#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main() {
	// ���� ����Ʈ ����
	linkedList_h* myList = createLinkedList();

	int menu, data;

	while (1) {
		printf("\n====== Linked_List Menu ======\n");
		printf("1) insertFirst  (����Ʈ�� ���� �տ� ����)\n");
		printf("2) insertLast   (����Ʈ�� ���� �ڿ� ����)\n");
		printf("3) insertMiddle (Ư�� �� �ڿ� ����)\n");
		printf("4) insertNthNode(N��° ��ġ ����)\n");
		printf("5) deleteNode   (Ư�� �� ����)\n");
		printf("7) print Head/Tail\n");
		printf("0) Program Stop\n");
		printf("Select menu �� ");
		scanf_s("%d", &menu);

		switch (menu) {
		case 1:
			printf("������ �Է�: ");
			scanf_s("%d", &data);
			insertFirstNode(myList, data);  // ������ �Լ� �̸��� ����
			break;
		case 2:
			printf("������ �Է�: ");
			scanf_s("%d", &data);
			insertLastNode(myList, data);   // ������ �Լ� �̸��� ����
			break;
		case 7:
			printHeadTail(myList);          // ����Ʈ ������ ���� ����
			break;
		case 0:
			printf("���α׷� ����\n");
			exit(0);
		default:
			printf("�߸��� �޴��Դϴ�.\n");
		}
	}
	return 0;
}
