#include"header.h"

int tree_to_list(Tree_t *root,Slist **head,Slist **tail)
{
  if(root != NULL)
  {
   /* creating newnode for linked list*/  
    Slist *new = malloc(sizeof(Slist));
    if (new == NULL)
    {
	return FAILURE;
    }
    new->data = (root)->data;
    new->next = NULL;

    /* if list is empty added as first node*/
    if (*head == NULL)
    {
	*head = new;
    }
    // adding to the tail node
    else
    {
        (*tail)->next = new; 
    }
    // connecting tail pointer to last node
    *tail=new;

    // moving to child nodes recrsively
    tree_to_list(root->left,head,tail);
    tree_to_list(root->right,head,tail);
  }
  return SUCCESS;
}
