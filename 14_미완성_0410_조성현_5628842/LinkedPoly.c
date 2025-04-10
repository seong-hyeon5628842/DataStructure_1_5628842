#include<stdio.h>
#include "LinkedPoly.h"
ListHead* createLinkedList(void) {
	ListHead* L;
	L = (ListHead*)malloc(sizeof(ListHead));
	L->head = NULL;
	return L;
}
void appendTerm(ListHead* L, float coef, int expo) {
	ListNode* newNode;
	ListNode* p;
	newNode = (ListNode*)malloc(sizeof(ListNode));
	newNode->coef = coef;
	newNode->expo = expo;
	newNode->link = NULL;

	if (L->head == NULL) {
		L->head = newNode;
		return;
	}
	else {
		p = L->head;
		while (p->link != NULL) {
			p = p->link;
		}
		p->link = newNode;
	}
}
void mulPoly(ListHead* A, ListHead* B, ListHead* C) {

}