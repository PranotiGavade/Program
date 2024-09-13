#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Stack
{
    private:
        PNODE First;
        int iCount;

    public:
        Stack();        //constructor
        void Display();
        int Count();
        void Push(int No);  //InsertFirst
        int Pop();        //deleteFirst
};

Stack::Stack()
{
    First = NULL;
    iCount = 0;
}

void Stack::Display()
{
    cout<<"Elements of stack are :\n";
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<"\n";
        temp = temp->next;
    }
    cout<<"\n";
}

int Stack::Count()
{
    return iCount;
}

void Stack::Push(int No)
{}

int Stack::Pop()
{
    return 0;
}

int main()
{
    Stack obj;

    return 0;
}