#include "header.h"
#include<stdio_ext.h>
#include<string.h>
#include<ctype.h>

contact* newcontact(contact *head) 
{
    char ech1;
    contact *temp;
    contact *newnode;

    newnode = (contact*)calloc(1, sizeof(contact));
    if (newnode == NULL)
    {
        printf("Memory allocation failed!\n");
        return head; 
    }

    newnode->pcnt = 0;

    __fpurge(stdin);

    printf("Enter the name: ");
    scanf("%[^\n]s", newnode->name);  
    __fpurge(stdin);

    printf("Enter the address: ");
    scanf("%[^\n]s", newnode->address); 
    __fpurge(stdin);

    printf("Enter the Gmail: ");
    scanf("%[^\n]s", newnode->gmail);  
    __fpurge(stdin);

    printf("Enter the phone number(s):\n");
    for (int i = 0; i < MAX; i++) 
    {
        printf("Phone %d: ", i + 1);
        __fpurge(stdin);  

        scanf("%s", newnode->number[i]);

        int len = strlen(newnode->number[i]);
        if (len != 10)
       	{
            printf("Invalid phone number length. Please enter a 10-digit number.\n");
            i--;  
	    continue;
        }

        for (int j = 0; j < len; j++)
       	{
            if (!isdigit(newnode->number[i][j]))
	    {
                printf("Invalid phone number. Only digits are allowed.\n");
                i--;  
                break;
            }
        }

        newnode->pcnt++; 
        if (i<MAX-1)
       	{
            __fpurge(stdin); 
            printf("Add another phone number? (y/n): ");
            scanf("%c", &ech1); 
	    if (ech1 != 'y' && ech1 != 'Y') 
	    {
		    printf("\n");
                break;  
            }
        }
    }

    if (head == NULL)
    {
        head = newnode;
    } else 
    {
       
        temp = head;
        while (temp->link) 
	{
            temp = temp->link;
        }
        temp->link = newnode; 
    }

    return head;
}
