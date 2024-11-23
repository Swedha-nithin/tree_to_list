#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE -1
#define NOELEMENT -2
#define DUPLICATE -3

/* structure for tree*/
typedef struct tree_node
{
    struct node *left;
    int data;
    struct node *right;
}Tree_t;

typedef int data_t;

/*structure for linked list*/
typedef struct node
{
    int data;
    struct node *next;
}Slist;

//function prototypes
int insert_into_BST(Tree_t **root, int data);
int tree_to_list(Tree_t *root,Slist **head,Slist **tail);
void print_list(Slist *head);
