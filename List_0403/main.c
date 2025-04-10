#include <stdio.h>
#include <stdlib.h>

#include "LinearList.h"

main() {
	listType* myList;

	myList = createList(10);
	insertItem(myList, 0, 10);
	insertItem(myList, 1, 20);
	insertItem(myList, 2, 30);
	insertItem(myList, 3, 40);

	printList(myList);

	insertItem(myList, 0, 5);
	printList(myList);

	insertItem(myList, 2, 15);
	printList(myList);

	insertItem(myList, 6, 45);
	printList(myList);

	insertItem(myList, -1, 100);
	printList(myList);

	insertItem(myList, 8, 100);
	printList(myList);
	ordered_insertItem(myList, { elementType } { 0, 2, 2 });
	ordered_insertItem(myList, { elementType } { 0, 6, 12 });
	ordered_insertItem(myList, { elementType } { 1,4,7});
	ordered_insertItem(myList, { elementType } { 2,0,23 });
	ordered_insertItem(myList, { elementType } { 3,3,31});
	ordered_insertItem(myList, { elementType } { 4,1,14 });
	ordered_insertItem(myList, { elementType } { 4,5,26 });
	ordered_insertItem(myList, { elementType } { 5,6,6 });
	ordered_insertItem(myList, { elementType } { 6,9,52 });
	ordered_insertItem(myList, { elementType } { 7,4,11});
}
//#include<stdio.h>
//#include<stdlib.h>
//
//#include "LinearList.h"
//main() {
//	listType* myList;
//	myList=createList(10);
//	insertitem(myList, 0, 10);
//	insertitem(myList, 1, 20);
//	insertitem(myList, 2, 30);
//	insertitem(myList, 3, 40);
//	printList(myList);
//	insertitem(myList, 0, 5);
//	printList(myList);
//	insertitem(myList, 2, 15);
//	printList(myList);
//	insertitem(myList, 0, 43);
//	printList(myList);
//	insertitem(myList, -1, 100);
//	printList(myList);
//	insertitem(myList, 8, 100);
//	printList(myList);
//
//}