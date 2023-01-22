#include<iostream>
using namespace std;

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

class DoublyCL
{
    public:
        PNODE First;
        PNODE Last;

        DoublyCL();

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        int Count();

};

DoublyCL :: DoublyCL()
{
    First = NULL;
    Last = NULL;
}

/*
returnvalue classname :: functionname()
{
    function define outside the class

}
*/

void DoublyCL :: InsertFirst(int no)
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))       //LL is empty
    {
          First = newn;
          Last = newn;
    }
    else
    {  //if contain one or more node
          
          newn->next = First;
          (First)->prev = newn;
          First = newn;
    }
    (First)->prev = Last;
    (Last)->next = First;
}
void DoublyCL :: InsertLast( int no)
{
    PNODE newn = new NODE;

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))       //LL is empty
    {
          First = newn;
          Last = newn;
    }
    else
    {  //if contain one or more node
          (Last)->next = newn;
          newn->prev = Last;
          Last = newn;
    }
    (First)->prev = Last;
    (Last)->next = First;
}

void DoublyCL :: Display()
{
    PNODE temp = First;
    if(First == NULL && Last == NULL)
    {
        cout<<"LL is empty"<<"\n";
        return;
    }
    do
    {
       cout<<"|"<<temp->data<<"| <>";
        temp = temp -> next;

    }while(temp != Last->next);

    printf("\n");

}

int DoublyCL :: Count()
{
    PNODE temp = First;
    int icnt = 0;
    if(temp == NULL && Last == NULL)
    {
        
        return icnt;
    }
    do
    {
        icnt++;
        temp = temp -> next;

    }while(temp != Last->next);

    return icnt;

}

void DoublyCL :: DeleteFirst()
{
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;       //return;
    }
    else
    {
        (First) = (First)->next;
        delete(Last)->next;    //free((*First)->prev)

        (First)->prev = Last;
        (Last)->next = First;
    }

    
}
void DoublyCL :: DeleteLast()
{
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        Last = (Last) ->prev;
        delete(First)->prev;
        (First)->prev = Last;
        (Last)->next = First;
    }
}

void DoublyCL :: InsertAtPos(int no, int ipos)
{
    int iNodeCount = Count();
    PNODE newn = NULL;
    PNODE temp = NULL;
    int icnt = 0;

    if((ipos < 1) && ipos > iNodeCount+1)
    {
        cout<<"Invalid pos"<<"\n";
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(no);
    }
    else if (ipos == iNodeCount+1)
    {
        InsertLast(no);
    }
    else
    {
        newn = new NODE;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;

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

void DoublyCL :: DeleteAtPos( int ipos)
{
    int iNodeCount = Count();
    PNODE temp = NULL;
    int icnt = 0;

    if((ipos < 1) && ipos > iNodeCount)
    {
        cout<<"Invalid pos"<<"\n";
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst();
    }
    else if(ipos == iNodeCount)
    {
        DeleteLast();
    }
    else
    {
        
        temp = First;

        for(icnt = 1; icnt < ipos - 1; icnt++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;
        delete(temp->next->prev);
        temp->next->prev = temp;

    }

}

int main()
{
    
    int iret = 0;
    DoublyCL obj;
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);


    obj.Display();
    iret  = obj.Count();
   cout<<"Number of nodes :"<<iret<<"\n";

    obj.InsertAtPos(105,5);
    obj.Display();
    iret = obj.Count();
    cout<<"Number of nodes :"<<iret<<"\n";

    obj.DeleteAtPos(5);
    obj.Display();
    iret = obj.Count();
   cout<<"Number of nodes :"<<iret<<"\n";



    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();
    iret = obj.Count();
    cout<<"Number of nodes :"<<iret<<"\n";

    return 0;
}
