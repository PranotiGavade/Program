#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        SinglyCL();

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

SinglyCL::SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

void SinglyCL::Display()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"LL is empty\n";
        return;
    }
    do
    {
        cout<<"| "<<First->data<<"| <=>";
        First = First->next;
    }while(Last->next != First);

    cout<<endl;

}

int SinglyCL::Count()
{
    return iCount;
}

void SinglyCL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
        Last->next = First;
    }
     
    iCount++;
}

int SinglyCL::Addition()
{
    int iSum = 0;
    PNODE temp = First;

    if(First == NULL)
    {
        cout<<"LL is empty\n";
        return 0;
    }

    do 
    {
        iSum = iSum + temp->data;
        temp = temp->next;
    }while(temp != Last->next);

    return iSum;
}

int SinglyCL::EvenCount()
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

int SinglyCL::OddCount()
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

int SinglyCL::Frequency(int No)
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

bool SinglyCL::Search(int No)
{
    int iCnt = 0;
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

int SinglyCL::SearchFirstOccurance(int No)
{
    PNODE temp = First;
    int iCnt = 1;
    int iPos = -1;

    do
    {
        if((temp->data) == No)
        {
            iPos = iCnt;
            break;      
        }
        temp = temp->next;
        iCnt++;
    }while(temp != Last->next);

    return iPos;
}

int SinglyCL::SearchLastOccurance(int No)
{
    PNODE temp = First;
    int iCnt = 1;
    int iPos = -1;

    do
    {
        if((temp->data) == No)
        {
            iPos = iCnt;      
        }
        iCnt++;
        temp = temp->next;
    }while(temp != Last->next);

    return iPos;
}

void SinglyCL::SumDigits()
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

int SinglyCL::FactorsAddition(int No)
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

void SinglyCL::SumFactors()
{
    PNODE temp = First;

    do
    {
        cout<<"Sum of factors are :" <<FactorsAddition(temp->data)<<endl;
        temp = temp->next;
    }while(temp != Last->next);
}

bool SinglyCL::CheckPerfect(int No)
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

void SinglyCL::DisplayPerfect()
{
    PNODE temp = First;

    do
    {
        if(CheckPerfect(temp->data) == true)
        {
            cout<<"Perfect number from LL is " <<temp->data<<endl; 
        }
        temp = temp->next;
    }while(temp != Last->next);
}

int SinglyCL::MiddleElement()
{
    PNODE temp = First;
    int iCnt = 1;
    int iPos = -1;
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
    SinglyCL obj;
    int iRet = 0;
    bool bRet = false;

    obj.InsertFirst(51);
    obj.InsertFirst(28);
    obj.InsertFirst(11);
    obj.InsertFirst(84);
    obj.InsertFirst(11);
    obj.InsertFirst(6);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of element in LL is :"<<iRet<<endl;

    iRet = obj.Addition();
    cout<<"Addition of element in LL is :"<<iRet<<endl;

    iRet = obj.EvenCount();
    cout<<"Number of even element in LL is :"<<iRet<<endl;

    iRet = obj.OddCount();
    cout<<"Number of odd element in LL is :"<<iRet<<endl;

    iRet = obj.Frequency(11);
    cout<<"Frequency is :"<<iRet<<endl;

    iRet = obj.FactorsAddition(28);
    cout<<"Addition of factors is"<<iRet<<endl;

    obj.SumFactors();

    bRet = obj.CheckPerfect(28);
    if(bRet == true)
    {
        cout<<"It is perfect number\n";
    }
    else
    {
        cout<<"It is not perfect number\n";
    }

    obj.DisplayPerfect();

    iRet = obj.MiddleElement();
    cout<<"Middle element from LL is:" <<iRet<<endl;

    return 0;
}