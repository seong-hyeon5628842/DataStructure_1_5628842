// contact.h
#ifndef CONTACT_H
#define CONTACT_H

#define MAX 100

typedef struct {
    char name[30];
    char phone[20];
} Contact;

// �ܺο��� ������ ����
extern Contact list[MAX];
extern int count;

// �Լ� ����
void addContact();
void deleteContact();
void searchContact();
void printAllContacts();
void showMenu();

#endif
