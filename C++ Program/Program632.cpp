#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class Stack
{
    private:
        PNODE First;
        int iCount;

    public:
        Stack();

        void Display();

        int Count();
        void Push(int No);

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

Stack::Stack()
{
    First = NULL;
    iCount = 0;
}

void Stack::Display()
{
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<" |"<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"\n";
}

int Stack::Count()
{
    return iCount;
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

int Stack::Addition()
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

int Stack::EvenCount()
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

int Stack::OddCount()
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

int Stack::Frequency(int No)
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

bool Stack::Search(int No)
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

int Stack::SearchFirstOccurance(int No)
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

int Stack::SearchLastOccurance(int No)
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

void Stack::SumDigits()
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

int Stack::FactorsAddition(int No)
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

bool Stack::CheckPerfect(int No)
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

void Stack::DisplayPerfect()
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

void Stack::SumFactors()
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

int Stack::MiddleElement()
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
    Stack obj;
    int iRet = 0;

    obj.Push(79);
    obj.Push(32);
    obj.Push(67);
    obj.Push(49);
    obj.Push(28);
    obj.Push(67);
    obj.Push(104);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements in LL is :"<<iRet<<endl;

    iRet = obj.Addition();
    cout<<"Addition of elements in LL is :"<<iRet<<endl;

    iRet = obj.EvenCount();
    cout<<"Number of even elements in LL is :"<<iRet<<endl;

    iRet = obj.OddCount();
    cout<<"Number of odd elements in LL is :"<<iRet<<endl;

    obj.DisplayPerfect();
    
    iRet = obj.MiddleElement();
    cout<<"Middle element from LL is :"<<iRet<<endl;
    return 0;
}