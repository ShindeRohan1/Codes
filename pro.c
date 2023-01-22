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

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL) && (*Last == NULL))       //LL is empty
    {
          *First = newn;
          *Last = newn;
    }
    else
    {  //if contain one or more node
          
          newn->next = *First;
          (*First)->prev = newn;
          *First = newn;
    }
    (*First)->prev = *Last;
    (*Last)->next = *First;
}
void InsertLast(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL) && (*Last == NULL))       //LL is empty
    {
          *First = newn;
          *Last = newn;
    }
    else
    {  //if contain one or more node
          (*Last)->next = newn;
          newn->prev = *Last;
          *Last = newn;
    }
    (*First)->prev = *Last;
    (*Last)->next = *First;
}

void Display(PNODE First , PNODE Last)
{
    if(First == NULL && Last == NULL)
    {
        printf("ll is empty");
        return;
    }
    do
    {
        printf("| %d | <-> ",First->data);
        First = First -> next;

    }while(First != Last->next);

    printf("\n");

}

int Count(PNODE First , PNODE Last)
{
    int icnt = 0;
    if(First == NULL && Last == NULL)
    {
        
        return icnt;
    }
    do
    {
        icnt++;
        First = First -> next;

    }while(First != Last->next);

    return icnt;

}

void DeleteFirst(PPNODE First, PPNODE Last)
{
    if(*First == NULL && *Last == NULL)
    {
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;       //return;
    }
    else
    {
        (*First) = (*First)->next;
        free((*Last)->next);    //free((*First)->prev)

        (*First)->prev = *Last;
    (*Last)->next = *First;
    }

    
}
void DeleteLast(PPNODE First, PPNODE Last)
{
    if(*First == NULL && *Last == NULL)
    {
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *Last = (*Last) ->prev;
        free((*First)->prev);
        (*First)->prev = *Last;
    (*Last)->next = *First;
    }
}

void InsertAtPos(PPNODE First, PPNODE Last, int no, int ipos)
{
    int iNodeCount = Count(*First, *Last);
    PNODE newn = NULL;
    PNODE temp = NULL;
    int icnt = 0;

    if((ipos < 1) && ipos > iNodeCount+1)
    {
        printf("Invalid position");
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(First,Last,no);
    }
    else if (ipos == iNodeCount+1)
    {
        InsertLast(First,Last,no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *First;

        for(icnt = 1; icnt < ipos - 1; icnt++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

    }

}

void DeleteAtPos(PPNODE First, PPNODE Last, int ipos)
{
    int iNodeCount = Count(*First, *Last);
    PNODE temp = NULL;
    int icnt = 0;

    if((ipos < 1) && ipos > iNodeCount)
    {
        printf("Invalid position");
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst(First,Last);
    }
    else if(ipos == iNodeCount)
    {
        DeleteLast(First,Last);
    }
    else
    {
        
        temp = *First;

        for(icnt = 1; icnt < ipos - 1; icnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;

    }

}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;

    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);

    InsertLast(&Head,&Tail,101);
    InsertLast(&Head,&Tail,111);
    InsertLast(&Head,&Tail,121);


    Display(Head,Tail);
    int iret = Count(Head,Tail);
    printf("Number of nodes :%d",iret);

    InsertAtPos(&Head,&Tail,105,5);
    Display(Head,Tail);
     iret = Count(Head,Tail);
    printf("Number of nodes :%d",iret);

    DeleteAtPos(&Head,&Tail,5);
    Display(Head,Tail);
    iret = Count(Head,Tail);
    printf("Number of nodes :%d",iret);



    DeleteFirst(&Head,&Tail);
    DeleteLast(&Head,&Tail);

    Display(Head,Tail);
    int iRet = Count(Head,Tail);
    printf("Number of nodes :%d",iRet);

    return 0;
}