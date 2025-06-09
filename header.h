#include<stdio.h>  //header.h
#include<stdlib.h>
#define MAX 5
typedef struct Contact
{
        char name[100];
         char number[MAX][11];
         int pcnt;
        char address[100];
        char gmail[100];
        struct Contact *link;
}contact;

contact *newcontact(contact *);
void print(contact *);
void find_contact(contact *);
contact *delete_contact(contact *);
contact *edit_contact(contact *);
contact *sync(contact *);
void save_phonebook(contact *);
