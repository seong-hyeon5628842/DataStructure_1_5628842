// contact.h
#ifndef CONTACT_H
#define CONTACT_H

#define MAX 100

typedef struct {
    char name[30];
    char phone[20];
} Contact;

// 외부에서 접근할 변수
extern Contact list[MAX];
extern int count;

// 함수 선언
void addContact();
void deleteContact();
void searchContact();
void printAllContacts();
void showMenu();

#endif
