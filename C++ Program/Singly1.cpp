#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class ArrayX
{
    public:
        PNODE First;
        int iCount;

        ArrayX();
        void Display();
        int Count();
        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No,int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

ArrayX::ArrayX()
{
    First = NULL;
    iCount = 0;
}

void ArrayX::Display()
{
    while(First != NULL)
    {
        cout<<First->data<<"|->|";
        First = First->next;
    }
    cout<<"NULL\n";
}

int ArrayX::Count()
{
    return iCount;
}

void ArrayX::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

void ArrayX::InsertLast(int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    temp = First;
    newn = new NODE;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

void ArrayX::InsertAtPos(int No,int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int i =0;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;

    if((iPos < 1) || (iPos > iCount+1))
    {
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        temp = First;

        newn = new NODE;
        newn->data = No;
        newn->next = NULL;

        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
    }
    iCount++;
}

void ArrayX::DeleteFirst()
{
    PNODE temp = NULL;
    temp = First;
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First = First->next;
        delete temp;
    }
    iCount--;
}

void ArrayX::DeleteLast()
{
    PNODE temp = NULL;
    temp = First;
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

void ArrayX::DeleteAtPos(int iPos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;
    int i = 0;

    if((iPos < 1) || (iPos > iCount))
    {
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp1 = First;

        for(i = 1; i<iPos-1; i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;

        iCount--;
    }
}

int main()
{
    ArrayX obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are"<<iRet<<endl;

    obj.DeleteFirst();
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are"<<iRet<<endl;

    return 0;
}