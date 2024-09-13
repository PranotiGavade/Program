#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL
{
    private:
        PNODE First;
        int iCount;

    public:
        DoublyLL();

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

DoublyLL::DoublyLL()
{
    First = NULL;
    iCount = 0;
}

void DoublyLL::Display()
{
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<< "NULL" <<endl;
}

int DoublyLL::Count()
{
    return iCount;
}

void DoublyLL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if (First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    iCount++;
}

int DoublyLL::Addition()
{
    PNODE temp = First;
    int iSum = 0;

    while(temp != NULL)
    {
        iSum = iSum + (temp->data);
        temp = temp->next;
    }
    return iSum;
}

int DoublyLL::EvenCount()
{
    PNODE temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        if((temp->data) % 2 == 0)
        {
            iCnt++;
        }
        temp = temp->next;
    }
    return iCnt;
}

int DoublyLL::OddCount()
{
    PNODE temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        if((temp->data) % 2 != 0)
        {
            iCnt++;
        }
        temp = temp->next;
    }
    return iCnt;
}

int DoublyLL::Frequency(int No)
{
    PNODE temp = First;
    int iCnt = 0;

    while(temp != NULL)
    {
        if((temp->data) == No)
        {
            iCnt++;
        }
        temp = temp->next;
    }
    return iCnt;
}

bool DoublyLL::Search(int No)
{
    bool bFlag = false;
    PNODE temp = First;

    while(temp != NULL)
    {
        if((temp->data) == No)
        {
            bFlag = true;
            break;
        }
        temp = temp->next;
    }
    return bFlag;
}

int DoublyLL::SearchFirstOccurance(int No)
{
    PNODE temp = First;
    int iPos = -1;
    int iCnt = 1;

    while(temp != NULL)
    {
        if((temp->data) == No)
        {
            iPos = iCnt;
            break;
        }
        iCnt++;
        temp = temp->next;
    }
    return iPos;
}

int DoublyLL::SearchLastOccurance(int No)
{
    PNODE temp = First;
    int iPos = -1;
    int iCnt = 1;

    while(temp != NULL)
    {
        if((temp->data) == No)
        {
            iPos = iCnt;
        }
        iCnt++;
        temp = temp->next;
    }
    return iPos;
}

void DoublyLL::SumDigits()
{
    PNODE temp = First;
    int iDigit = 0;
    int iNo = 0,iSum = 0;

    while(temp != NULL)
    {
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        cout<<"Sum of digits are :"<<iSum<<endl;
        iSum = 0;
        temp = temp->next;
    }
}

int DoublyLL::FactorsAddition(int No)
{
    int iSum = 0;
    int i = 0;

    for(i = 1; i<=No/2; i++)
    {
        if(No % i == 0)
        {
            iSum = iSum + i;
        }
    }
   
    return iSum;
}

void DoublyLL::SumFactors()
{
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<"Sum of factor are :" <<FactorsAddition(temp->data)<<endl;
        temp = temp->next;
    }
}

bool DoublyLL::CheckPerfect(int No)
{
    PNODE temp = First;
    int iSum = 0;
    int i = 0;

    for(i = 1; i<=No/2; i++)
    {
        if(No % i == 0)
        {
            iSum = iSum + i;
        }
    }
    
    if(iSum == No)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void DoublyLL::DisplayPerfect()
{
    PNODE temp = First;

    while(temp != NULL)
    {
        if(CheckPerfect(temp->data) == true)
        {
            cout<<"Perfect number from LL is :"<<temp->data<<endl;
        }
        temp = temp->next;
    }
}

int DoublyLL::MiddleElement()
{
    PNODE temp = First;
    int iCnt = 0;
    int iPos = 0;
    int i = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }

    iPos = iCnt/2;

    for(i = 0; i<=iPos; i++)
    {
        First = First->next;
    }
    return First->data;
}

int main()
{
    DoublyLL obj;
    int iRet = 0;
    bool bRet = false;

    obj.InsertFirst(101);
    obj.InsertFirst(28);
    obj.InsertFirst(20);
    obj.InsertFirst(11);
    obj.InsertFirst(20);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elemements is LL are :"<<iRet<<endl;


    obj.SumDigits();

    bRet = obj.CheckPerfect(28);
    if(bRet == true)
    {
        cout<<"It is perfect number"<<endl;
    }
    else
    {
        cout<<"It is not perfect number"<<endl;
    }

    obj.DisplayPerfect();
    obj.SumFactors();

    iRet = obj.MiddleElement();
    cout<<"Middle element from LL is :"<<iRet<<endl;
    return 0;
}