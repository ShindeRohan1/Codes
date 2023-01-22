#include<stdio.h>
#include<stdlib.h>
/*type def*/
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
   
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = 11;
    newn->next = NULL;

    printf("%d\n",newn->data);
    printf("%d\n",sizeof(struct node));
    

    
    return 0;
}