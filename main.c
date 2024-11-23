#include"header.h"

int main()
{
    /*variable declarations*/
    Tree_t *root = NULL;
    Slist *head = NULL; 
    Slist *tail = NULL;
    int result;
    int option, data;

    printf("1. insert BST\n2. Convert to linked list\n3. print list\n 4.Exit\n");
    printf("Enter the option: ");
    while (1)
    {
	scanf("%d", &option);

	switch(option)
	{
	    case 1:
	    scanf("%d", &data);
	    if ((result = insert_into_BST(&root, data)) == DUPLICATE)
	    {
		printf("INFO : Duplicate found\n");
	    }
	    else if (result == FAILURE)
	    {
	        printf("INFO : Node not created\n");
	    }
	    break;
	    case 2:
		tree_to_list(root,&head,&tail);
		printf("Linked list created\n");
		break;
	   case 3:
	       print_list(head);
	       break;
	   case 4:
	      return SUCCESS;
              break;
	   default:
	      printf("Invalid Option\n");
	}
    }
}

