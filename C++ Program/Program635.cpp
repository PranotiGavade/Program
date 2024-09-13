#include<iostream>
using namespace std;

template <class T>
struct nodeSC
{
    T data;
    struct nodeSC *next;
};

template <class T>
class SinglyCL
{
    private:
        struct nodeSC<T> * First;
        struct nodeSC<T> * Last;
        int iCount;

    public:
        SinglyCL();

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
SinglyCL<T>::SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void SinglyCL<T>::Display()
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

template <class T>
int SinglyCL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyCL<T>::InsertFirst(T No)
{
    struct nodeSC<T> * newn = NULL;

    newn = new nodeSC<T>;

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

template <class T>
int SinglyCL<T>::Addition()
{
    int iSum = 0;
    struct nodeSC<T> * temp = First;

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

template <class T>
int SinglyCL<T>::EvenCount()
{
    int iCnt = 0;
    struct nodeSC<T> * temp = First;

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

template <class T>
int SinglyCL<T>::OddCount()
{
    int iCnt = 0;
    struct nodeSC<T> * temp = First;

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

template <class T>
int SinglyCL<T>::Frequency(T No)
{
    int iCnt = 0;
    struct nodeSC<T> * temp = First;

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

template <class T>
bool SinglyCL<T>::Search(T No)
{
    int iCnt = 0;
    bool bFlag = false;
    struct nodeSC<T> * temp = First;

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

template <class T>
int SinglyCL<T>::SearchFirstOccurance(T No)
{
   struct nodeSC<T> * temp = First;
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

template <class T>
int SinglyCL<T>::SearchLastOccurance(T No)
{
    struct nodeSC<T> * temp = First;
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

template <class T>
void SinglyCL<T>::SumDigits()
{
    struct nodeSC<T> * temp = First;
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

template <class T>
int SinglyCL<T>::FactorsAddition(T No)
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

template <class T>
void SinglyCL<T>::SumFactors()
{
    struct nodeSC<T> * temp = First;

    do
    {
        cout<<"Sum of factors are :" <<FactorsAddition(temp->data)<<endl;
        temp = temp->next;
    }while(temp != Last->next);
}

template <class T>
bool SinglyCL<T>::CheckPerfect(T No)
{
    struct nodeSC<T> * temp = First;
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

template <class T>
void SinglyCL<T>::DisplayPerfect()
{
    struct nodeSC<T> * temp = First;

    do
    {
        if(CheckPerfect(temp->data) == true)
        {
            cout<<"Perfect number from LL is " <<temp->data<<endl; 
        }
        temp = temp->next;
    }while(temp != Last->next);
}

template <class T>
int SinglyCL<T>::MiddleElement()
{
    struct nodeSC<T> * temp = First;
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
    SinglyCL<int> *iobj = new SinglyCL<int>();
    int iRet = 0;
    bool bRet = false;

    iobj->InsertFirst(51);
    iobj->InsertFirst(28);
    iobj->InsertFirst(11);
    iobj->InsertFirst(84);
    iobj->InsertFirst(11);
    iobj->InsertFirst(6);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of element in LL is :"<<iRet<<endl;

    iRet = iobj->Addition();
    cout<<"Addition of element in LL is :"<<iRet<<endl;

    return 0;
}