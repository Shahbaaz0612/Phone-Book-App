#include "header.h"   //delete contact
#include<string.h>
contact *delete_contact(contact *head)
{

        char str[100];
        printf("enter the name\n");
        scanf("%s",str);
        if(head==NULL)
        {
                printf("Phonebook is empty!!!\n");
		printf("\n");
                return head;
        }
        if(strcmp(head->name,str)==0)
        {
                contact *temp=head;
                head=head->link;
                free(temp);
                return head;
        }
        contact *temp=head;
        while(temp!=NULL && temp->link!=NULL)
        {
                if(strcmp(temp->link->name,str)==0)
                {
                        contact *detect=temp->link;
                        temp->link=temp->link->link;
                        free(detect);
                        return head;
                }
		printf("\n");
                temp=temp->link;
	}

        printf("Contact not found!!!\n");
	printf("\n");
        return head;
}
