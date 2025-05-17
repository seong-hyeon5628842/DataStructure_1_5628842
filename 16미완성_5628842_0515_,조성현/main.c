#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main() {
	// 연결 리스트 생성
	linkedList_h* myList = createLinkedList();

	int menu, data;

	while (1) {
		printf("\n====== Linked_List Menu ======\n");
		printf("1) insertFirst  (리스트의 제일 앞에 삽입)\n");
		printf("2) insertLast   (리스트의 제일 뒤에 삽입)\n");
		printf("3) insertMiddle (특정 값 뒤에 삽입)\n");
		printf("4) insertNthNode(N번째 위치 삽입)\n");
		printf("5) deleteNode   (특정 값 삭제)\n");
		printf("7) print Head/Tail\n");
		printf("0) Program Stop\n");
		printf("Select menu ▶ ");
		scanf_s("%d", &menu);

		switch (menu) {
		case 1:
			printf("데이터 입력: ");
			scanf_s("%d", &data);
			insertFirstNode(myList, data);  // 수정된 함수 이름과 인자
			break;
		case 2:
			printf("데이터 입력: ");
			scanf_s("%d", &data);
			insertLastNode(myList, data);   // 수정된 함수 이름과 인자
			break;
		case 7:
			printHeadTail(myList);          // 리스트 포인터 인자 전달
			break;
		case 0:
			printf("프로그램 종료\n");
			exit(0);
		default:
			printf("잘못된 메뉴입니다.\n");
		}
	}
	return 0;
}
