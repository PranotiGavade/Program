
#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Queue
{
    private:
        PNODE First;
        int iCount;

    public:
        Queue();        //constructor
        void Display();
        int Count();
        void EnQueue(int No);  //InsertLast()
        int DeQue();        //DeleteFirst
};

Queue::Queue()
{
    First = NULL;
    iCount = 0;
}

void Queue::Display()
{
    cout<<"Elements of Queue are :\n";
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp->next;
    }
    cout<<"\n";
}

int Queue::Count()
{
    return iCount;
}

void Queue::EnQueue(int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

int Queue::DeQue()
{
    int iValue = 0;
    PNODE temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to pop element as queue is empty\n";
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
    Queue obj;
    
    cout<<"Implementation of"
    return 0;
}