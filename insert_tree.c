#include"header.h"

int insert_into_BST(Tree_t **root, int data)
{
    int flag;
    
    /*Creating root node dynamically*/
    Tree_t *new = malloc(sizeof(Tree_t));
    if(new == NULL)
    {
        return FAILURE;
    }
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    
    /* if tree is empty new node as root node*/
    if(*root == NULL)
    {
        *root = new;
        return SUCCESS;
    }
    
    Tree_t *temp = *root;
    Tree_t *parent = NULL;
    
    /*Traversing through the tree*/
    while(temp != NULL)
    {
        parent = temp;
        if(data<(temp->data))   // left child
        {
            temp = temp->left;
            flag = 1;
        }
        else if(data>(temp->data)) // right child
        {
            temp = temp->right;
            flag = 0;
        }
        else
        return DUPLICATE;
    }
    if(flag == 1)
    parent->left = new;
    else
    parent->right = new;
    
    return SUCCESS;
    
}
