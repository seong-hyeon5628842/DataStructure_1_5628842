#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "LinkedPoly.h"

ListHead* createLinkedList(void) {
    ListHead* L = (ListHead*)malloc(sizeof(ListHead));
    L->head = NULL;
    return L;
}

void appendTerm(ListHead* L, float coef, int expo) {
    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->coef = coef;
    newNode->expo = expo;
    newNode->link = NULL;

    if (L->head == NULL) {
        L->head = newNode;
    }
    else {
        ListNode* p = L->head;
        while (p->link != NULL) {
            p = p->link;
        }
        p->link = newNode;
    }
}

void addTerm(ListHead* L, float coef, int expo) {
    ListNode* p = L->head;
    ListNode* prev = NULL;

    while (p != NULL) {
        if (p->expo == expo) {
            p->coef += coef;
            return;
        }
        prev = p;
        p = p->link;
    }

    ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
    newNode->coef = coef;
    newNode->expo = expo;
    newNode->link = NULL;

    if (prev == NULL) {
        L->head = newNode;
    }
    else {
        prev->link = newNode;
    }
}

void mulPoly(ListHead* A, ListHead* B, ListHead* C) {
    ListNode* pA = A->head;
    ListNode* pB;

    for (; pA != NULL; pA = pA->link) {
        pB = B->head;
        for (; pB != NULL; pB = pB->link) {
            float coef = pA->coef * pB->coef;
            int expo = pA->expo + pB->expo;
            addTerm(C, coef, expo);
        }
    }
}

// ✅ 함수 제대로 닫힘
void inputPoly(ListHead* L, const char* name) {
    int n, expo;
    float coef;

    printf("다항식 %s의 항 개수를 입력하세요: ", name);
    scanf_s("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("[%s의 %d번째 항] 계수와 차수를 입력하세요 (예: 3 4 → 3x^4): ", name, i + 1);
        scanf_s("%f %d", &coef, &expo);
        appendTerm(L, coef, expo);
    }
}

void printPoly(ListHead* L) {
    ListNode* p = L->head;
    for (; p != NULL; p = p->link) {
        printf("%3.0fx^%d", p->coef, p->expo);
        if (p->link != NULL) printf("+");
    }
    printf("\n");
}

void parsePoly(const char* input, ListHead* poly) {
    int i = 0;
    int len = strlen(input);
    float coef = 0;
    int expo = 0;

    while (i < len) {
        int sign = 1;
        coef = 0;
        expo = 0;

        while (i < len && input[i] == ' ') i++;

        if (input[i] == '+') {
            sign = 1;
            i++;
        }
        else if (input[i] == '-') {
            sign = -1;
            i++;
        }

        int hasCoef = 0;
        while (i < len && isdigit(input[i])) {
            coef = coef * 10 + (input[i] - '0');
            i++;
            hasCoef = 1;
        }
        if (!hasCoef) coef = 1;

        if (i < len && input[i] == 'x') {
            i++;
            if (i < len && input[i] == '^') {
                i++;
                while (i < len && isdigit(input[i])) {
                    expo = expo * 10 + (input[i] - '0');
                    i++;
                }
            }
            else {
                expo = 1;
            }
        }
        else {
            expo = 0;
        }

        appendTerm(poly, sign * coef, expo);
    }
}
