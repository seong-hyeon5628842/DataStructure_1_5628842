#pragma once

typedef int elementType;

typedef struct ListNode {
	elementType data;
	struct ListNode* link;
}listNode;

/*Node_h : Head 더미, Node_tail : Tail 더미 (link ==NULL)*/

typedef struct {
	int follow;
	listNode* Node_h;
	listNode* Node_tail;
}linkedList_h;

/* ===== 인터페이스 ===== */

linkedList_h* createLinkedList(void);
int printList(linkedList_h* L);

extern void insertFirstNode(linkedList_h* L, elementType item);
extern void insertLastNode(linkedList_h* L, elementType item);
extern void insertMiddleNode(linkedList_h* L, listNode* pre, elementType item);
extern void insertNthNode(linkedList_h* L, int loc, elementType item);
extern void ordered_insertNode(linkedList_h* L, elementType item);
extern void deleteNode(linkedList_h* L, listNode* p);
extern void printHeadTail(linkedList_h* L);

listNode* searchNode(linkedList_h* L, elementType item);