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
        int Pop()           //deleteFirst
};

Stack::Stacl()
{}

void Stack::Display()
{}

int Stack::Count()
{}

void Stack::Push(int No)
{}

int Stack::Pop()
{}