#include<iostream>
using namespace std;

template <class T>
struct nodeDC
{
    T data;
    struct nodeDC * next;
    struct nodeDC * prev;
};

template <class T>
class DoublyCL
{
    private: 
        struct nodeDC<T> * First;
        struct nodeDC<T> * Last;
        int iCount;

    public:
        DoublyCL();

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
DoublyCL<T>::DoublyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void DoublyCL<T>::Display()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"LL is empty\n";
        return;
    }

    struct nodeDC<T> * temp = First;
    cout<<"<=>";
    do
    {
        cout<<"| "<<temp->data<<" <=>";
        temp = temp->next;
    }while(temp != Last->next);

    cout<<"\n";
}

template <class T>
int DoublyCL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyCL<T>::InsertFirst(T No)
{
    struct nodeDC<T> * newn = NULL;

    newn = new nodeDC<T>;

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

template <class T>
int DoublyCL<T>::Addition()
{
    int iSum = 0;
    struct nodeDC<T> * temp = First;

    do
    {
        iSum = iSum + temp->data;
        temp = temp->next;
    }while(temp != Last->next);

    return iSum;
}

template <class T>
int DoublyCL<T>::EvenCount()
{
    int iCnt = 0;
    struct nodeDC<T> * temp = First;

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
int DoublyCL<T>::OddCount()
{
    int iCnt = 0;
    struct nodeDC<T> * temp = First;

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
int DoublyCL<T>::Frequency(T No)
{
    int iCnt = 0;
    struct nodeDC<T> * temp = First;

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
bool DoublyCL<T>::Search(T No)
{
    bool bFlag = false;
    struct nodeDC<T> * temp = First;

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
int DoublyCL<T>::SearchFirstOccurance(T No)
{
    struct nodeDC<T> * temp = First; 
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

template <class T>
int DoublyCL<T>::SearchLastOccurance(T No)
{
    struct nodeDC<T> * temp = First; 
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

template <class T>
void DoublyCL<T>::SumDigits()
{
    struct nodeDC<T> * temp = First;
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
int DoublyCL<T>::FactorsAddition(T No)
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

template <class T>
bool DoublyCL<T>::CheckPerfect(T No)
{
    struct nodeDC<T> * temp = First;
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

template <class T>
void DoublyCL<T>::DisplayPerfect()
{
    struct nodeDC<T> * temp = First;

    do
    {
        if(CheckPerfect(temp->data) == true)
        {
            cout<<"Perfect number from LL is :"<<temp->data<<endl;
        }
        temp = temp->next;
    }while(temp != Last->next);
}

template <class T>
void DoublyCL<T>::SumFactors()
{
    struct nodeDC<T> * temp = First;
    
    do
    {
        cout<<"Sum of factors are :"<<FactorsAddition(temp->data)<<endl;
        temp = temp->next;
    }while(temp != Last->next);
}

template <class T>
int DoublyCL<T>::MiddleElement()
{
    struct nodeDC<T> * temp = First;
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
    DoublyCL<int> *iobj = new DoublyCL<int>();
    int iRet = 0;
    bool bRet = 0;

    iobj->InsertFirst(50);
    iobj->InsertFirst(73);
    iobj->InsertFirst(108);
    iobj->InsertFirst(6);
    iobj->InsertFirst(108);
    iobj->InsertFirst(28);
    iobj->InsertFirst(89);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements in LL is :"<<iRet<<endl;

    iRet = iobj->FactorsAddition(28);
    cout<<"Sum of factors are :"<<iRet<<endl;

    iobj->DisplayPerfect();

    iRet = iobj->MiddleElement();
    cout<<"Middle element from LL is :"<<iRet<<endl;
    return 0;
}