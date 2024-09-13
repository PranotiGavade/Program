#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Stack
{
    public:
        int iCount;
        PNODE First;

        Stack();
        int Count();
        void Display();
        void Push(int No);
        int pop();
};

Stack::Stack()
{
    First = NULL;
    iCount = 0;
}

int Stack::Count()
{
    return iCount;
}

void Stack::Display()
{
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"\n";
}

void Stack::Push(int No)
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

int Stack::pop()
{
    int iValue = 0;
    PNODE temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to delete as stack is empty";
        return -1;
    }
    else
    {
        temp = First;

        iValue = First->data;
        First = First->next;
        delete temp;

        iCount--;
    }
    return iValue;
}

int main()
{
    Stack obj;
    int iRet = 0;

    obj.Push(51);
    obj.Push(21);
    obj.Push(11);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements in LL are :"<<iRet<<"\n";

    iRet = obj.pop();
    cout<<"Poped element is :"<<iRet<<"\n";

    iRet = obj.pop();
    cout<<"Poped element is :"<<iRet<<"\n";

    obj.Push(50);

    obj.Display();

    return 0;
}