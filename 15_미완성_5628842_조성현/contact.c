// contact.c
#include <stdio.h>
#include <string.h>
#include "contact.h"

Contact list[MAX];
int count = 0;

void showMenu() {
    printf("\n===== 전화번호부 메뉴 =====\n");
    printf("1. 연락처 추가\n");
    printf("2. 연락처 삭제\n");
    printf("3. 연락처 검색\n");
    printf("4. 전체 연락처 출력\n");
    printf("0. 종료\n");
}

void addContact() {
    if (count >= MAX) {
        printf("더 이상 추가할 수 없습니다.\n");
        return;
    }

    printf("이름을 입력하세요: ");
    fgets(list[count].name, sizeof(list[count].name), stdin);
    list[count].name[strcspn(list[count].name, "\n")] = '\0';

    printf("전화번호를 입력하세요: ");
    fgets(list[count].phone, sizeof(list[count].phone), stdin);
    list[count].phone[strcspn(list[count].phone, "\n")] = '\0';

    printf("연락처가 추가되었습니다.\n");
    count++;
}

void deleteContact() {
    char name[30];
    int i, found = 0;

    printf("삭제할 이름을 입력하세요: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (i = 0; i < count; i++) {
        if (strcmp(list[i].name, name) == 0) {
            for (int j = i; j < count - 1; j++) {
                list[j] = list[j + 1];
            }
            count--;
            found = 1;
            printf("삭제되었습니다.\n");
            break;
        }
    }

    if (!found) {
        printf("해당 이름을 찾을 수 없습니다.\n");
    }
}

void searchContact() {
    char name[30];
    int found = 0;

    printf("검색할 이름을 입력하세요: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; i < count; i++) {
        if (strcmp(list[i].name, name) == 0) {
            printf("이름: %s, 전화번호: %s\n", list[i].name, list[i].phone);
            found = 1;
        }
    }

    if (!found) {
        printf("해당 이름을 찾을 수 없습니다.\n");
    }
}

void printAllContacts() {
    printf("------ 전체 연락처 ------\n");

    if (count == 0) return;

    for (int i = 0; i < count; i++) {
        printf("[%d] 이름: %s, 전화번호: %s\n", i + 1, list[i].name, list[i].phone);
    }
}
