#include "header.h"  //edit_contact.c
#include<string.h>
#include<stdio_ext.h>
contact *edit_contact(contact *head)
{
        char str[100];
	if(head==NULL)
	{
		printf("Phonebook is empty!!!\n");
		printf("\n");
	}
	else
	{
        printf("enter the name\n");
        scanf("%s",str);
        contact *temp=head;
        while(temp)
        {
                if(strcmp(temp->name,str)==0)
                {
                        char ch;
                        int n;
                        printf("p:-phonenumber:..g:-gmail:..a:-address:..n:-name..e:exit..\n");
                        while(1)
                        {
                        printf("enter the edit option..\n");
                        __fpurge(stdin);
                        scanf("%c",&ch);
                        switch(ch)
                        {
                                case 'a':printf("enter the new address\n");
                                        scanf("%s",temp->address);
                                         break;
                                case 'g':printf("enter the new gmail\n");
                                         scanf("%s",temp->gmail);
                                         break;
                                case 'n':printf("enter the new name\n");
                                         scanf("%s",temp->name);
                                         break;
                                case 'p':for(int i=0;i<temp->pcnt;i++)
                                         {
                                                 printf("%d: %s\n ",i+1,temp->number[i]);
                                         }
                                         printf("enthe index number to edit mobile number\n");
                                         scanf("%d",&n);
                                         for(int i=0;i<temp->pcnt;i++)
                                         {
                                                 if(n-1==i)
                                                 {
                                                         printf("enter the new number\n");
                                                         scanf("%s",temp->number[i]);


                                                 }

                                         }
                                         break;
                                case 'e':return head;

                                default:
                                         printf("invalid input\n");

                        }
                        }
                }
                temp=temp->link;

        }
	}

}
