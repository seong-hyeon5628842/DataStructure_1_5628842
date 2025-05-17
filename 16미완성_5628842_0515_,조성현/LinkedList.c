#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

// 연결 리스트 생성
linkedList_h* createLinkedList(void) {
	linkedList_h* L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L->follow = 0;
	L->Node_h = NULL;
	L->Node_tail = NULL;
	return L;
}

// 리스트 끝에 노드 삽입 (원형 리스트 유지)
void insertLastNode(linkedList_h* L, elementType item) {
	listNode* newNode = (listNode*)malloc(sizeof(listNode));
	newNode->data = item;

	if (L->Node_h == NULL) {
		L->Node_h = newNode;
		L->Node_tail = newNode;
		newNode->link = newNode; // 원형
	}
	else {
		newNode->link = L->Node_h;
		L->Node_tail->link = newNode;
		L->Node_tail = newNode;
	}
	L->follow++;
}

// 리스트 처음에 노드 삽입
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

// head, tail 출력
void printHeadTail(linkedList_h* L) {
	if (L->Node_h == NULL) {
		printf("리스트가 비어 있습니다.\n");
		return;
	}
	printf("Head: %d\n", L->Node_h->data);
	printf("Tail: %d\n", L->Node_tail->data);
}

// 리스트 전체 출력
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
