#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;       //n
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;     //

    if(*First == NULL)
    { 
        *First = newn;

    }
    else{
           newn->next = *First;
           (*First)-prev = newn;  //
           

           *First = newn;
    }

}
void InsertLast
(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;     //

    if(*First == NULL)
    { 
        *First = newn;

    }
    else{
           
    }

}

int main()
{
    PNODE Head = NULL;



    return 0;
    
}