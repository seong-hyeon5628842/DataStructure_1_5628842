// main.c
#include <stdio.h>
#include "contact.h"

int main() {
    int choice;

    do {
        showMenu();
        printf("메뉴를 선택하세요: ");
        scanf_s("%d", &choice);
        getchar(); // 입력 버퍼 개행 제거

        switch (choice) {
        case 1:
            addContact();
            break;
        case 2:
            deleteContact();
            break;
        case 3:
            searchContact();
            break;
        case 4:
            printAllContacts();
            break;
        case 0:
            break;
        default:
            printf("잘못된 메뉴입니다.\n");
        }
    } while (choice != 0);

    return 0;
}
