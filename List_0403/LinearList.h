#pragma once

#define NULL_ITEM (elementType)-1 //NULL_ITEM �� �ǹ��ϴ� ��(-1)
typedef int elementType;
typedef struct ListType {
	int size; //����Ʈ�� ũ��
	int last; //���� ����Ʈ�� ������ �ε���
	int move; //�̵� Ƚ��
	elementType* array; //��Ҹ� ������ �迭 ������
} listType;
//�Լ� ���� ����
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