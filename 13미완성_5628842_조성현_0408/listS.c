#include <stdio.h>
#include "listS.h"

void insert(List* list, int r, int c, int val) {
    if (list->size >= MAX) {
        printf("리스트가 가득 찼습니다.\n");
        return;
    }
    list->data[list->size].row = r;
    list->data[list->size].col = c;
    list->data[list->size].value = val;
    list->size++;
}

void inputMatrix(List* list) {
    int r, c, val;
    while (1) {
        scanf_s("%d", &r);
        if (r == -1) break;
        scanf_s("%d %d", &c, &val);
        insert(list, r, c, val);
    }
}

void addMatrix(List* a, List* b, List* result) {
    int i = 0, j = 0;

    while (i < a->size && j < b->size) {
        int r1 = a->data[i].row;
        int c1 = a->data[i].col;
        int r2 = b->data[j].row;
        int c2 = b->data[j].col;

        if (r1 == r2 && c1 == c2) {
            insert(result, r1, c1, a->data[i].value + b->data[j].value);
            i++; j++;
        }
        else if (r1 < r2 || (r1 == r2 && c1 < c2)) {
            insert(result, r1, c1, a->data[i].value);
            i++;
        }
        else {
            insert(result, r2, c2, b->data[j].value);
            j++;
        }
    }

    while (i < a->size) {
        insert(result, a->data[i].row, a->data[i].col, a->data[i].value);
        i++;
    }

    while (j < b->size) {
        insert(result, b->data[j].row, b->data[j].col, b->data[j].value);
        j++;
    }
}

void printMatrix(List* list) {
    printf("두 행렬의 합\n");
    printf("List: size = %d, last = %d\n", MAX, list->size - 1);
    printf("Items:\n");
    for (int i = 0; i < list->size; i++) {
        printf("  [%d] %d, %d, %d\n", i,
            list->data[i].row,
            list->data[i].col,
            list->data[i].value);
    }
}
