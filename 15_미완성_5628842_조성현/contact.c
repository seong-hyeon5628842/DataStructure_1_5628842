// contact.c
#include <stdio.h>
#include <string.h>
#include "contact.h"

Contact list[MAX];
int count = 0;

void showMenu() {
    printf("\n===== ��ȭ��ȣ�� �޴� =====\n");
    printf("1. ����ó �߰�\n");
    printf("2. ����ó ����\n");
    printf("3. ����ó �˻�\n");
    printf("4. ��ü ����ó ���\n");
    printf("0. ����\n");
}

void addContact() {
    if (count >= MAX) {
        printf("�� �̻� �߰��� �� �����ϴ�.\n");
        return;
    }

    printf("�̸��� �Է��ϼ���: ");
    fgets(list[count].name, sizeof(list[count].name), stdin);
    list[count].name[strcspn(list[count].name, "\n")] = '\0';

    printf("��ȭ��ȣ�� �Է��ϼ���: ");
    fgets(list[count].phone, sizeof(list[count].phone), stdin);
    list[count].phone[strcspn(list[count].phone, "\n")] = '\0';

    printf("����ó�� �߰��Ǿ����ϴ�.\n");
    count++;
}

void deleteContact() {
    char name[30];
    int i, found = 0;

    printf("������ �̸��� �Է��ϼ���: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (i = 0; i < count; i++) {
        if (strcmp(list[i].name, name) == 0) {
            for (int j = i; j < count - 1; j++) {
                list[j] = list[j + 1];
            }
            count--;
            found = 1;
            printf("�����Ǿ����ϴ�.\n");
            break;
        }
    }

    if (!found) {
        printf("�ش� �̸��� ã�� �� �����ϴ�.\n");
    }
}

void searchContact() {
    char name[30];
    int found = 0;

    printf("�˻��� �̸��� �Է��ϼ���: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; i < count; i++) {
        if (strcmp(list[i].name, name) == 0) {
            printf("�̸�: %s, ��ȭ��ȣ: %s\n", list[i].name, list[i].phone);
            found = 1;
        }
    }

    if (!found) {
        printf("�ش� �̸��� ã�� �� �����ϴ�.\n");
    }
}

void printAllContacts() {
    printf("------ ��ü ����ó ------\n");

    if (count == 0) return;

    for (int i = 0; i < count; i++) {
        printf("[%d] �̸�: %s, ��ȭ��ȣ: %s\n", i + 1, list[i].name, list[i].phone);
    }
}
