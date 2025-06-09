#include "header.h"  //save.c
void save_phonebook(contact* head)
{
        FILE *fptr=fopen("phonebook","w");
        if(fptr==NULL)
        {
                printf("        FILE NOT OPENED!\n");
                exit(0);
        }
        contact *temp=head;
        while(temp)
        {
                fprintf(fptr,"%d\n",temp->pcnt);
                fprintf(fptr,"%s\n",temp->name);
                for(int i=0;i<temp->pcnt;i++)
                        fprintf(fptr,"%s\n",temp->number[i]);
                fprintf(fptr,"%s\n",temp->gmail);
                fprintf(fptr,"%s\n",temp->address);
                temp=temp->link;
        }
        fclose(fptr);
}
