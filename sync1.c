#include"header.h"
#include<string.h>
#include<stdlib.h>
contact *sync(contact *head) {
    FILE *fptr = fopen("phonebook", "r");
    if (fptr == NULL) {
        return NULL; 
    }

    contact *new_node = NULL;
    contact *last = NULL;

    while (1) {
        new_node = (contact *)calloc(1, sizeof(contact));
        if (!new_node) {
            printf("Memory error while syncing!\n");
            fclose(fptr);
            return head;
        }

        if (fscanf(fptr, "%d\n", &new_node->pcnt) != 1 || fscanf(fptr, "%[^\n]\n", new_node->name) != 1) 
	{
            free(new_node);
            break;
        }

        for (int i = 0; i < new_node->pcnt; i++) {
            if (fscanf(fptr, "%[^\n]\n", new_node->number[i]) != 1) {
                free(new_node);
                goto close; 
            }
        }

        if (fscanf(fptr, "%[^\n]\n", new_node->gmail) != 1 ||
            fscanf(fptr, "%[^\n]\n", new_node->address) != 1) {
            free(new_node);
            break;
        }

        new_node->link = NULL;

        if (!head) {
            head = last = new_node;
        } else {
            last->link = new_node;
            last = new_node;
        }
    }

close:
    fclose(fptr);
    return head;
}
