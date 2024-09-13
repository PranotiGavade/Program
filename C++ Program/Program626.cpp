#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
        PNODE First;
        int iCount;

        SinglyLL();

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

SinglyLL::SinglyLL()
{
    cout<<"Inside contsructor\n";
    First = NULL;
    iCount = 0;
}

void SinglyLL::Display()
{
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

int SinglyLL::Count()
{
    return iCount;
}

void SinglyLL::InsertFirst(int No)
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

int SinglyLL::Addition()
{
    int iSum = 0;
    PNODE temp = First;

    while(temp != NULL)
    {
        iSum = iSum + temp->data;
        temp = temp->next;
    }

    return iSum;
}

int SinglyLL::EvenCount()
{
    int iCnt = 0;
    PNODE temp = First;

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

int SinglyLL::OddCount()
{
    int iCnt = 0;
    PNODE temp = First;

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

int SinglyLL::Frequency(int No)
{
    int iCnt = 0;
    PNODE temp = First;

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

bool SinglyLL::Search(int No)
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

int SinglyLL::SearchFirstOccurance(int No)
{
    int iCnt = 1;
    int iPos = -1;

    PNODE temp = First;

    while(temp != NULL)
    {
        if(temp->data == No)
        {
            iPos = iCnt;
            break;
        }
        iCnt++;
        temp = temp->next;
    }
    return iPos;
}

int SinglyLL::SearchLastOccurance(int No)
{
    int iCnt = 1;
    int iPos = -1;

    PNODE temp = First;

    while(temp != NULL)
    {
        if(temp->data == No)
        {
            iPos = iCnt;
        }
        iCnt++;
        temp = temp->next;
    }
    return iPos;
}

void SinglyLL::SumDigits()
{
    PNODE temp = First;
    int iDigit = 0;
    int iNo = 0;
    int iSum = 0;

    while(temp != NULL)
    {
        iNo = temp->data;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        cout<<iSum<<endl;
        iSum = 0;

        temp = temp->next;
    }
}

int SinglyLL::FactorsAddition(int No)
{
    int i = 0, iSum = 0;

    for(i = 0; i<=No; i++)
    {
        if(No % i == 0)
        {
            iSum = iSum + i;
        }
    }

    return iSum;
}

bool SinglyLL::CheckPerfect(int No)
{
    int i = 0, iSum = 0;

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

void SinglyLL::DisplayPerfect()
{
    PNODE temp = First;

    while(temp != NULL)
    {
        if(CheckPerfect(temp->data) == true)
        {
            printf("Perfect number from LL is:%d\n",temp->data);
        }
        temp = temp->next;
    }
}

void SinglyLL::SumFactors()
{
    PNODE temp = First;
    int i = 0, iNo = 0;

    while(temp != NULL)
    {
        int iSum = 0;
        iNo = temp->data;

        for(i = 1; i<=iNo/2; i++)
        {
            if(iNo % i == 0)
            {
                iSum = iSum + i;
            }
            
        }
        cout << "Sum of factors of " << iNo << " is: " << iSum << endl;
        temp = temp->next;
    }
}

int SinglyLL::MiddleElement()
{
    PNODE temp = First;
    int iCnt = 0, iPos = 0, i = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }

    iPos = iCnt/2;

    for(i = 1; i<=iPos; i++)
    {
        First = First->next;
    }
    return First->data;
}

int main()
{
    SinglyLL obj;
    int iRet = 0;
    bool bRet = false;

    obj.InsertFirst(51);
    obj.InsertFirst(16);
    obj.InsertFirst(6);
    obj.InsertFirst(16);
    obj.InsertFirst(21);
    obj.InsertFirst(28);
    obj.InsertFirst(84);
    
    obj.Display();

    iRet = obj.Count();
    cout<<"Number of elements are :"<<iRet<<endl;

     iRet = obj.Addition();
    cout<<"Addition Number of elements are :"<<iRet<<endl;

    obj.DisplayPerfect();
    obj.SumFactors();

    iRet = obj.MiddleElement();
    cout<<"Middle Element is :"<<iRet<<endl;
    
    return 0;
}