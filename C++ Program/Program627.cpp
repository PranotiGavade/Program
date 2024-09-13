#include<iostream>
using namespace std;

template <class T>
struct nodeSL
{
    T data;
    struct nodeSL *next;
};


template <class T>
class SinglyLL
{
    public:
        struct nodeSL<T> * First;
        int iCount;

        SinglyLL();

        void Display();
        int Count();

        void InsertFirst(T No);
        
        int Addition();
        int EvenCount();
        int OddCount();
        int Frequency(T No);

        bool Search(T No);
        int SearchFirstOccurance(T No);
        int SearchLastOccurance(T No);

        void SumDigits();
        int FactorsAddition(T No);

        bool CheckPerfect(T No);
        void DisplayPerfect();

        void SumFactors();
        int MiddleElement(); 
};

template <class T>
SinglyLL<T>::SinglyLL()
{
    cout<<"Inside contsructor\n";
    First = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL<T>::Display()
{
    struct nodeSL<T> * temp = First;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyLL<T>::InsertFirst(T No)
{
    struct nodeSL<T> *  newn = NULL;

    newn = new nodeSL<T>;

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

template <class T>
int SinglyLL<T>::Addition()
{
    int iSum = 0;
    struct nodeSL<T> * temp = First;

    while(temp != NULL)
    {
        iSum = iSum + (temp->data);
        temp = temp->next;
    }
    return iSum;
}

template <class T>
int SinglyLL<T>::EvenCount()
{
    int iCnt = 0;
     struct nodeSL<T> *  temp = First;

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

template <class T>
int SinglyLL<T>::OddCount()
{
    int iCnt = 0;
     struct nodeSL<T> *  temp = First;

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

template <class T>
int SinglyLL<T>::Frequency(T No)
{
    int iCnt = 0;
     struct nodeSL<T> *  temp = First;

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

template <class T>
bool SinglyLL<T>::Search(T No)
{
    bool bFlag = false;
     struct nodeSL<T> *  temp = First;

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

template <class T>
int SinglyLL<T>::SearchFirstOccurance(T No)
{
    int iCnt = 1;
    int iPos = -1;

    struct nodeSL<T> *  temp = First;

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

template <class T>
int SinglyLL<T>::SearchLastOccurance(T No)
{
    int iCnt = 1;
    int iPos = -1;

     struct nodeSL<T> *  temp = First;

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

template <class T>
void SinglyLL<T>::SumDigits()
{
    struct nodeSL<T> *  temp = First;
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

template <class T>
int SinglyLL<T>::FactorsAddition(T No)
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

template <class T>
bool SinglyLL<T>::CheckPerfect(T No)
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

template <class T>
void SinglyLL<T>::DisplayPerfect()
{
    struct nodeSL<T> *  temp = First;

    while(temp != NULL)
    {
        if(CheckPerfect(temp->data) == true)
        {
            printf("Perfect number from LL is:%d\n",temp->data);
        }
        temp = temp->next;
    }
}

template <class T>
void SinglyLL<T>::SumFactors()
{
    struct nodeSL<T> * temp  = First;
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

template <class T>
int SinglyLL<T>::MiddleElement()
{
     struct nodeSL<T> * temp = First;
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
    SinglyLL<int> *iobj = new SinglyLL<int>();
    int iRet = 0;
    bool bRet = false;

    iobj->InsertFirst(51);
    iobj->InsertFirst(16);
    iobj->InsertFirst(6);
    iobj->InsertFirst(16);
    iobj->InsertFirst(21);
    iobj->InsertFirst(28);
    iobj->InsertFirst(84);
    
    iobj->Display();

    iRet = iobj->Count();
    cout<<"Number of elements are :"<<iRet<<endl;

    iobj->DisplayPerfect();
    iobj->SumFactors();

    iRet = iobj->MiddleElement();
    cout<<"Middle Element is :"<<iRet<<endl;
    
    return 0;
}