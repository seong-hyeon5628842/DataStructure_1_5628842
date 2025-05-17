#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

// ���� ����Ʈ ����
linkedList_h* createLinkedList(void) {
	linkedList_h* L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L->follow = 0;
	L->Node_h = NULL;
	L->Node_tail = NULL;
	return L;
}

// ����Ʈ ���� ��� ���� (���� ����Ʈ ����)
void insertLastNode(linkedList_h* L, elementType item) {
	listNode* newNode = (listNode*)malloc(sizeof(listNode));
	newNode->data = item;

	if (L->Node_h == NULL) {
		L->Node_h = newNode;
		L->Node_tail = newNode;
		newNode->link = newNode; // ����
	}
	else {
		newNode->link = L->Node_h;
		L->Node_tail->link = newNode;
		L->Node_tail = newNode;
	}
	L->follow++;
}

// ����Ʈ ó���� ��� ����
void insertFirstNode(linkedList_h* L, elementType item) {
	listNode* newNode = (listNode*)malloc(sizeof(listNode));
	newNode->data = item;

	if (L->Node_h == NULL) {
		L->Node_h = newNode;
		L->Node_tail = newNode;
		newNode->link = newNode;
	}
	else {
		newNode->link = L->Node_h;
		L->Node_tail->link = newNode;
		L->Node_h = newNode;
	}
	L->follow++;
}

// head, tail ���
void printHeadTail(linkedList_h* L) {
	if (L->Node_h == NULL) {
		printf("����Ʈ�� ��� �ֽ��ϴ�.\n");
		return;
	}
	printf("Head: %d\n", L->Node_h->data);
	printf("Tail: %d\n", L->Node_tail->data);
}

// ����Ʈ ��ü ���
int printList(linkedList_h* L) {
	if (L->Node_h == NULL) {
		printf("List is empty.\n");
		return 0;
	}
	listNode* p = L->Node_h;
	do {
		printf("%d -> ", p->data);
		p = p->link;
	} while (p != L->Node_h);
	printf("(head)\n");
	return 1;
}
