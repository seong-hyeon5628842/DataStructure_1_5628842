#pragma once

#define NULL_ITEM (elementType)-1 //NULL_ITEM 을 의미하는 값(-1)
typedef int elementType;
typedef struct ListType {
	int size; //리스트의 크기
	int last; //현재 리스트의 마지막 인덱스
	int move; //이동 횟수
	elementType* array; //요소를 저장할 배열 포인터
} listType;
//함수 원형 선언
extern listType* createList(int size);
extern elementType readItem(listType* list, int index);
extern elementType deleteItem(listType* list, int index);
extern int insertItem(listType* list, int index, elementType item);
extern int printList(listType* list);
extern int initList(listType* list);
/*#pragma once

#define NULL_ITEM (elementType)-1
typedef int elementType;
typedef struct ListType {
	int size;
	int last; 
	int move;
	elementType* array;
}listType;
extern listType* createList(int size);
extern elementType  readitem(listType* list, int index);
extern elementType insertitem(listType* list, int index, elementType item);
extern elementType deleteitem(listType* list, int index);
extern elementType  printLIst(listType* list);*/