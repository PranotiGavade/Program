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
    PNODE newn = NULL;

    newn = new NODE;

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
    PNODE temp = First; 
    int iPos = -1; 
    int iCnt = 1; 

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
{
    PNODE temp = First; 
    int iPos = -1; 
    int iCnt = 1; 

    do
    {
        if(temp->data == No)
        {
            iPos = iCnt;
        }
        temp = temp->next;
        iCnt++;
    } while(temp != Last->next);

    return iPos;
}

void DoublyCL::SumDigits()
{
    PNODE temp = First;
    int iSum = 0;
    int iNo = 0;
    int iDigit = 0;

    do
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
        
    }while(temp != Last->next);
}

int DoublyCL::FactorsAddition(int No)
{
    int iSum = 0;
    int i = 0;

    for(i = 1; i<No; i++)
    {
        if(No % i == 0)
        {
            iSum = iSum + i;
        }
    }

    return iSum;
    
}

bool DoublyCL::CheckPerfect(int No)
{
    PNODE temp = First;
    int i = 0;
    int iSum = 0;

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

void DoublyCL::DisplayPerfect()
{
    PNODE temp = First;

    do
    {
        if(CheckPerfect(temp->data) == true)
        {
            cout<<"Perfect number from LL is :"<<temp->data<<endl;
        }
        temp = temp->next;
    }while(temp != Last->next);
}

void DoublyCL::SumFactors()
{
    PNODE temp = First;
    
    do
    {
        cout<<"Sum of factors are :"<<FactorsAddition(temp->data)<<endl;
        temp = temp->next;
    }while(temp != Last->next);
}

int DoublyCL::MiddleElement()
{
    PNODE temp = First;
    int iCnt = 0;
    int iPos = 0;
    int i = 0;

    do
    {
        iCnt++;
        temp = temp->next;
    }while(temp != Last->next);

    iPos = iCnt/2;

    for(i = 1; i<=iPos; i++)
    {
        First = First->next;
    }

    return First->data;
}

int main()
{
    DoublyCL obj;
    int iRet = 0;
    bool bRet = 0;

    obj.InsertFirst(50);
    obj.InsertFirst(73);
    obj.InsertFirst(108);
    obj.InsertFirst(6);
    obj.InsertFirst(108);
    obj.InsertFirst(28);
    obj.InsertFirst(89);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements in LL is :"<<iRet<<endl;

    bRet = obj.CheckPerfect(28);
    if(bRet == true)
    {
        cout<<"It is perfect number\n";
    }
    else
    {
        cout<<"It is not perfect number\n";
    }

    iRet = obj.FactorsAddition(28);
    cout<<"Sum of factors are :"<<iRet<<endl;

    obj.DisplayPerfect();

    iRet = obj.MiddleElement();
    cout<<"Middle element from LL is :"<<iRet<<endl;
    return 0;
}