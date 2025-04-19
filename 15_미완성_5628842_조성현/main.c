// main.c
#include <stdio.h>
#include "contact.h"

int main() {
    int choice;

    do {
        showMenu();
        printf("�޴��� �����ϼ���: ");
        scanf_s("%d", &choice);
        getchar(); // �Է� ���� ���� ����

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
            printf("�߸��� �޴��Դϴ�.\n");
        }
    } while (choice != 0);

    return 0;
}
