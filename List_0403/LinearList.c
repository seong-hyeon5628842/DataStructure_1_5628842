#include <stdio.h>
#include <stdlib.h>

#include "LinearList.h"
//리스트 생성함수
listType* createList(int size) {
	listType* lptr;

	lptr = (listType*)malloc(sizeof(listType));
	lptr->array = (elementType*)malloc(sizeof(elementType) * size);
	lptr->size = size;
	lptr->last = -1;
	lptr->move = 0;

	return lptr;
}

elementType readItem(listType* list, int index) {
	if (index < 0 || index > list->last) {
		fprintf(stderr, "Index error %d in readItem\n", index);
		return NULL_ITEM;
	}
	return list->array[index];
}
int ordered_insertItem(listType* list, elementType item) {
	int i;
	for (i = 0; i <= list->last; i++) {
		if (compare_item(list->array[i], item) > 0)break;
	}
}
int insertItem(listType* list, int index, elementType item) {
	if (index < 0 || index >(list->last + 1)) {
		fprintf(stderr, "Index error %d in readItem\n", index);
		return NULL_ITEM;
	}
	if (index > list->size) {
		fprintf(stderr, "list is full(%d) in readItem\n", index);
		return NULL_ITEM;
	}

	for (int i = list->last + 1; i > index; i--) {
		list->array[i] = list->array[i - 1];
		list->move++;
	}
	list->array[index] = item;
	list->last++;
}

elementType deleteItem(listType* list, int index) {
	elementType r = list->array[index];

	if (index < 0 || index > list->last) {
		fprintf(stderr, "Index error %d in deleteItem\n", index);
		return NULL_ITEM;
	}

	for (int i = index; i < list->last; i++) {
		list->array[i] = list->array[i + 1];
		list->move++;
	}
	list->last--;

	return r;
}

int printList(listType* list) {
	printf("List: size = %d, last = %d, move = %d\n\t Items:", list->size, list->last, list->move);
	for (int i = 0; i <= list->last; i++) {
		printf(" [%d][%d] ", i, list->array[i]);
	}
	printf("\n");
}

int initList(listType* list) {
	list->last = -1;
	list->move = 0;
}
/*#include<stdio.h>
#include<stdlib.h>

#include"LinearList.h"
//
listType* createList(int size) {
	listType* lptr;
	lptr = (listType*)malloc(sizeof(listType));
	lptr->array = (elementType*)malloc(sizeof(elementType) * size);
	lptr->size = size;
	lptr->last = -1;
	lptr->move = 0;
	return lptr;
}
elementType readitem(listType* list, int index) {
	if (index < 0 || index>list->last) {
		fprintf(stderr, "Index error %d in readitem\n", index);
		return NULL_ITEM;
	}
	return list->array[index];

}
int insertitem(listType* list, int index, elementType item) {
	if (index < 0 || index>list->last + 1) {
		fprintf(stderr, "Index error %d in insertitem\n", index);
		return NULL_ITEM;
	}
	if (index > list->size) {
		fprintf(stderr, "list is full(%d) in insertitem\n", index);
		return NULL_ITEM;
	}
	for (int i = list->last + 1; i > index; i--) {
		list->array[i] = list->array[i - 1];
		list->move++;
	}
	list->array[index] = item;
	list->last++;
}
elementType deleteitem(listType* list, int index) {
	elementType r = list->array[index];
	if (index < 0 || index>list->last) {
		fprintf(stderr, "Index error %d in deleteitem\n", index);
		return NULL_ITEM;
	}
	for (int i = index; i < list->last; i++) {
		list->array[i] = list->array[i + 1];
		list->move++;
	}
	list->last--;
	return r;
}
int printLIst(listType* list) {
	printf("List : size = %d, last = %d, move = %d\n\t items", list->size, list);
		for (int i = 0; i <= list->last; i++) {
			printf(" [%d][%d] ", i, list->array[i]);
		}
	printf("\n");
}
int initList(listType* list) {
	list->last = -1;
	list->move = 0;
}*/