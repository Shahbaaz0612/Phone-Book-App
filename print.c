#include "header.h"  //print.c
void print(contact *head)
{
        if(head==NULL)
        {
                printf("list is empty!!!\n");
		printf("\n");
        }
        else
        {
                while(head)
                {
                        printf("name: %s\n",head->name);
                        printf("gmail: %s\n",head->gmail);
                        for(int i=0;i<head->pcnt;i++)
                        {
                                printf("phone number: %s\n",head->number[i]);
                        }
                        printf("address: %s\n",head->address);
                        head=head->link;


                printf("\n");
                }
        }


}
