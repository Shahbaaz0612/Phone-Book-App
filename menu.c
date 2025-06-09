#include "header.h"  //menu.c
#include<stdio_ext.h>
#include<ctype.h>
int main()
{
        contact *head=NULL;
        head=sync(head);
	char choice;
	while(1)
	{
		printf("./phonebook\n");
		printf("------------** MENU **--------------------\n");
        	printf(" C/c: Create a new contact\n P/p: Print all contacts\n F/f: Find contact\n D/d: Delete  contact\n E/e: Edit a contact\n S/s: To save the contacts in the file\n Q/q: Quit from app\n");
                printf("Enter the choice: ");
                __fpurge(stdin);
                scanf("%c",&choice);
		printf("-------\n");
		choice=tolower(choice);
                switch(choice)
                {
                        case 'c':head=newcontact(head);
                                 break;
                        case 'p':print(head);
                                 break;
                        case 'f':find_contact(head);
                                 break;
                        case 'd':head=delete_contact(head);
                                 break;
                        case 'e':head=edit_contact(head);
                                 break;
			case 's':save_phonebook(head);
				 break;
				 
			case 'q':exit(0);
				 break;
                        default: printf("Invalid Input!!!\n");
				 printf("\n");
                                 break;

                }
        }
}
