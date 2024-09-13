#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
    struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyCL
{
    private: 
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        DoublyCL();

        void Display();
        int Count();

        void InsertFirst(int No);

        int Addition();
        int EvenCount();
        int OddCount();
        int Frequency(int No);

        bool Search(int No);
        int SearchFirstOccurance(int No);
        int SearchLastOccurance(int No);

        void SumDigits();
        int FactorsAddition(int No);

        bool CheckPerfect(int No);
        void DisplayPerfect();

        void SumFactors();
        int MiddleElement(); 
};

DoublyCL::DoublyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

void DoublyCL::Display()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"LL is empty\n";
        return;
    }

    PNODE temp = First;
    cout<<"<=>";
    do
    {
        cout<<"| "<<temp->data<<" <=>";
        temp = temp->next;
    }while(temp != Last->next);

    cout<<"\n";
}

int DoublyCL::Count()
{
    return iCount;
}

void DoublyCL::InsertFirst(int No)
{
    PNODE newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    Last->next = First;
    First->prev = Last;
    iCount++;
}

int DoublyCL::Addition()
{
    int iSum = 0;
    PNODE temp = First;

    do
    {
        iSum = iSum + temp->data;
        temp = temp->next;
    }while(temp != Last->next);

    return iSum;
}

int DoublyCL::EvenCount()
{
    int iCnt = 0;
    PNODE temp = First;

    do
    {
        if((temp->data) % 2 == 0)
        {
            iCnt++;
        }
        temp = temp->next;
    }while(temp != Last->next);

    return iCnt;
}

int DoublyCL::OddCount()
{
    int iCnt = 0;
    PNODE temp = First;

    do
    {
        if((temp->data) % 2 != 0)
        {
            iCnt++;
        }
        temp = temp->next;
    }while(temp != Last->next);

    return iCnt;
}

int DoublyCL::Frequency(int No)
{
    int iCnt = 0;
    PNODE temp = First;

    do
    {
        if((temp->data) == No)
        {
            iCnt++;
        }
        temp = temp->next;
    }while(temp != Last->next);

    return iCnt;
}

bool DoublyCL::Search(int No)
{
    bool bFlag = false;
    PNODE temp = First;

    do
    {
        if((temp->data) == No)
        {
            bFlag = true;
            break;
        }
        temp = temp->next;
    }while(temp != Last->next);

    return bFlag;
}

int DoublyCL::SearchFirstOccurance(int No)
{
    PNODE temp = First; // Temporary pointer to traverse the list
    int iPos = -1; // Position of the first occurrence
    int iCnt = 1; // Position counter starting from 1

    do
    {
        if(temp->data == No)
        {
            iPos = iCnt;
            break;
        }
        temp = temp->next;
        iCnt++;
    } while(temp != Last->next);

    return iPos;
}

int DoublyCL::SearchLastOccurance(int No)
{}

void DoublyCL::SumDigits()
{}

int DoublyCL::FactorsAddition(int No)
{}

bool DoublyCL::CheckPerfect(int No)
{}

void DoublyCL::DisplayPerfect()
{}

void DoublyCL::SumFactors()
{}

int DoublyCL::MiddleElement()
{}

int main()
{
    DoublyCL obj;
    int iRet = 0;
    bool bRet = 0;

    obj.InsertFirst(50);
    obj.InsertFirst(73);
    obj.InsertFirst(108);
    obj.InsertFirst(43);
    obj.InsertFirst(108);
    obj.InsertFirst(28);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements in LL is :"<<iRet<<endl;

    iRet = obj.Addition();
    cout<<"Addition of elements in LL is :"<<iRet<<endl;

    iRet = obj.EvenCount();
    cout<<"Number of even elements in LL is :"<<iRet<<endl;

    iRet = obj.OddCount();
    cout<<"Number of odd elements in LL is :"<<iRet<<endl;

    iRet = obj.Frequency(108);
    cout<<"Frequency is :"<<iRet<<endl;

    bRet = obj.Search(50);
    if(bRet == true)
    {
        cout<<"Number is present in LL\n";
    }
    else
    {
        cout<<"Number is not present in LL\n";
    }

    iRet = obj.SearchFirstOccurance(108);
    cout<<"First occurrence of that number is at position :"<<iRet<<endl;
    return 0;
}
