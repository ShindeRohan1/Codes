#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE  First , int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE)); //1Allocate memory

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL) //If linked list is empty
    {
        *First = newn;
    }
    else //if linked list contains atleast one node
    {
        newn->next = *First;
        *First = newn;

    }

}
void InsertLast(PPNODE  First , int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE)); //1Allocate memory
    PNODE temp = *First;
    newn->data = no;
    newn->next = NULL;

    if(*First == NULL) //If linked list is empty
    {
        *First = newn;
    }
    else //if linked list contains atleast one node
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void DeleteFirst(PPNODE First)
{
    PNODE temp = *First;
    if(*First == NULL)
    {
        return;
    }
    else if((*First) -> next == NULL)
    {
       free(*First);
       *First = NULL;
    }
    else
    {
        (*First) = (*First) -> next;
        free(temp);

    }
}

void Display(PNODE First)
{
    printf("Elements from the linkedlist are :\n");

        while(First != NULL)
        {
            printf("| %d |->",First->data);
            First = First -> next;
        }
        printf("NULL \n");
}

void InsertAtPos(PPNODE First, int no, int ipos)
{
    int NodeCnt = 0, icnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    //NodeCnt = Count(*First);

    if(ipos < 1) //) || (ipos > (NodeCnt + 1))
    {
        printf("Invalid position\n");
        return;
    }

    if(ipos == 1)
    {
        InsertFirst(First,no);
    }
    else if(ipos == NodeCnt+1)
    {
        InsertLast(First,no);
    }
    else{
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        temp = *First;
        
        for(icnt = 1; icnt < ipos - 1; icnt++)
        {
            temp = temp -> next;
        }
        newn->next = temp ->next;
        temp->next = newn;
    }
}

void DeleteAtPos(PPNODE, int ipos)
{
    PPNODE temp = NULL;
    int icnt = 0, NodeCnt = 0;

    if(ipos < 1)
    {

    }
    if(ipos == 1)
    {
        DeleteFirst(First)
    }else if(ipos == NodeCnt)
    {

      //DeleteLast()
    }
    else{

    }

}
int main()
{
    PNODE Head = NULL;

    
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    InsertLast(&Head,101);
    InsertLast(&Head,111);

    Display(Head);

    DeleteFirst(&Head);
    
    Display(Head);

    InsertAtPos(&Head,66,2);
    

    Display(Head);
                                    


    return 0;
    
}