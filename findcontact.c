#include "header.h"  //find contact
#include<string.h>
//extern int j;
void find_contact(contact *head)
{
        char str[100];
        int flag=0;
        printf("enter the name\n");
        scanf("%s",str);
        while(head)
        {
                if(strcmp(head->name,str)==0)
                {
                        flag=1;
                        printf("name: %s\n",head->name);
                        printf("address: %s\n",head->address);
                        for(int i=0;i<head->pcnt;i++)
                        {
                                printf("phone number: %s\n",head->number[i]);
                        }
                        printf("mail id: %s\nf",head->gmail);
			printf("\n");


                }
                head=head->link;
        }
        if(!flag)
        {
                printf("Contact not found!!!\n");
		printf("\n");
        }

}
