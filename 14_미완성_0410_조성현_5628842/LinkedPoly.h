#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode {
    float coef; // ���
    int expo;   // ����
    struct ListNode* link;
} ListNode;

typedef struct ListHead {
    ListNode* head;
} ListHead;

// �Լ� ���� ����
ListHead* createLinkedList(void);
void appendTerm(ListHead* L, float coef, int expo);
void mulPoly(ListHead* A, ListHead* B, ListHead* C);
void printPoly(ListHead* L);
