#include"header.h"
void print_list(Slist *head)
{
    if (head == NULL)
    {
	printf("INFO : List is empty\n");
    }
    else
    {
	while (head)
	{
	    printf("%d -> ", head -> data);
	    head = head -> next;
	}

	printf("NULL\n");
    }
}
