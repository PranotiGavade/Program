#include<iostream>
using namespace std;

template <class T>
struct nodeDL
{
    T data;
    struct nodeDL *next;
    struct nodeDL *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

template <class T>
class DoublyLL
{
    private:
        struct nodeDL<T>* First;
        int iCount;

    public:
        DoublyLL();

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
DoublyLL<T>::DoublyLL()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void DoublyLL<T>::Display()
{
    struct nodeDL<T>* temp = First;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<< "NULL" <<endl;
}

template <class T>
int DoublyLL<T>::Count()
{
    return iCount;
}

template <class T>
void DoublyLL<T>::InsertFirst(T No)
{
    struct nodeDL<T> * newn = NULL;

    newn = new nodeDL<T>;

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


template <class T>
int DoublyLL<T>::Addition()
{
    struct nodeDL<T> * temp = First;
    int iSum = 0;

    while(temp != NULL)
    {
        iSum = iSum + (temp->data);
        temp = temp->next;
    }
    return iSum;
}

template <class T>
int DoublyLL<T>::EvenCount()
{
    struct nodeDL<T>* temp = First;
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

template <class T>
int DoublyLL<T>::OddCount()
{
    struct nodeDL<T>* temp = First;
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

template <class T>
int DoublyLL<T>::Frequency(T No)
{
    struct nodeDL<T>* temp = First;
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

template <class T>
bool DoublyLL<T>::Search(T No)
{
    bool bFlag = false;
    struct nodeDL<T>* temp = First;

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
int DoublyLL<T>::SearchFirstOccurance(T No)
{
    struct nodeDL<T>* temp = First;
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

template <class T>
int DoublyLL<T>::SearchLastOccurance(T No)
{
    struct nodeDL<T>* temp = First;
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

template <class T>
void DoublyLL<T>::SumDigits()
{
    struct nodeDL<T>* temp = First;
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

template <class T>
int DoublyLL<T>::FactorsAddition(T No)
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
void DoublyLL<T>::SumFactors()
{
    struct nodeDL<T>* temp = First;

    while(temp != NULL)
    {
        cout<<"Sum of factor are :" <<FactorsAddition(temp->data)<<endl;
        temp = temp->next;
    }
}

template <class T>
bool DoublyLL<T>::CheckPerfect(T No)
{
    struct nodeDL<T>* temp = First;
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
void DoublyLL<T>::DisplayPerfect()
{
    struct nodeDL<T>* temp = First;

    while(temp != NULL)
    {
        if(CheckPerfect(temp->data) == true)
        {
            cout<<"Perfect number from LL is :"<<temp->data<<endl;
        }
        temp = temp->next;
    }
}

template <class T>
int DoublyLL<T>::MiddleElement()
{
    struct nodeDL<T>* temp = First;
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
    DoublyLL<int> *iobj = new DoublyLL<int>();
    int iRet = 0;
    bool bRet = false;

    iobj->InsertFirst(101);
    iobj->InsertFirst(28);
    iobj->InsertFirst(20);
    iobj->InsertFirst(11);
    iobj->InsertFirst(20);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemements is LL are :"<<iRet<<endl;

    iobj->SumDigits();

    bRet = iobj->CheckPerfect(28);
    if(bRet == true)
    {
        cout<<"It is perfect number"<<endl;
    }
    else
    {
        cout<<"It is not perfect number"<<endl;
    }

    iobj->DisplayPerfect();
    iobj->SumFactors();

    iRet = iobj->MiddleElement();
    cout<<"Middle element from LL is :"<<iRet<<endl;
    return 0;
}