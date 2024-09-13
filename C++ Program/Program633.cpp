#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class Queue
{
    private:
        PNODE First;
        int iCount;

    public:
        Queue();        

        void Display();
        int Count();

        void EnQueue(int No); 

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

Queue::Queue()
{
    First = NULL;
    iCount = 0;
}      

void Queue::Display()
{
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<" |"<<temp->data<<" |->";
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

int Queue::Addition()
{
    PNODE temp = First;
    int iSum = 0;

    while(temp != NULL)
    {
        iSum = iSum + temp->data;
        temp = temp->next;
    }

    return iSum;
}

int Queue::EvenCount()
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

int Queue::OddCount()
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

int Queue::Frequency(int No)
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

bool Queue::Search(int No)
{
    PNODE temp = First;
    bool bFlag = false;

    int iCnt = 0;

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

int Queue::SearchFirstOccurance(int No)
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

int Queue::SearchLastOccurance(int No)
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

void Queue::SumDigits()
{
    PNODE temp = First;
    int iDigit = 0, iSum = 0, iNo = 0;

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

int Queue::FactorsAddition(int No)
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

bool Queue::CheckPerfect(int No)
{
    PNODE temp = First;
    int iSum = 0, i = 0;

    for(i  =1; i<=No/2; i++)
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

void Queue::DisplayPerfect()
{
    PNODE temp = First;

    while(temp != NULL)
    {
        if(CheckPerfect(temp->data) == true)
        {
            cout<<"Perfect number from LL is :"<<temp->data;
        }
        temp = temp->next;
    }
}

void Queue::SumFactors()
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

int Queue::MiddleElement()
{
    PNODE temp = First;
    int iCnt = 0;
    int iPos = 0, i = 0;

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
    Queue obj;
    int iRet = 0;
    bool bRet = false;

    obj.EnQueue(67);
    obj.EnQueue(42);
    obj.EnQueue(148);
    obj.EnQueue(28);
    obj.EnQueue(42);
    obj.EnQueue(28);
    obj.EnQueue(60);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements in LL are :"<<iRet<<endl;

    iRet = obj.SearchFirstOccurance(42);
    cout<<"First occurance is at position :"<<iRet<<endl;

    iRet = obj.SearchLastOccurance(42);
    cout<<"Last occurance is at position :"<<iRet<<endl;

    obj.SumDigits();

    iRet = obj.FactorsAddition(28);
    cout<<"Sum of factors are :"<<iRet<<endl;

    bRet = obj.CheckPerfect(28);
    if(bRet == true)
    {
        cout<<"It is a perfect number\n"<<endl;
    }
    else
    {
        cout<<"It is not a perfect number"<<endl;
    }

    obj.DisplayPerfect();

    iRet = obj.MiddleElement();
    cout<<"Middle element from LL is :"<<iRet<<endl;
    return 0;
}