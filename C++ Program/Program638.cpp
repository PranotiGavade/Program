#include<iostream>
using namespace std;

template <class T>
struct nodeDQ
{
    int data;
    struct nodeDQ * next;
};

template <class T>
class Queue
{
    private:
        struct nodeDQ<T> * First;
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

template <class T>
Queue<T>::Queue()
{
    First = NULL;
    iCount = 0;
}      

template <class T>
void Queue<T>::Display()
{
    struct nodeDQ<T> * temp = First;

    while(temp != NULL)
    {
        cout<<" |"<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"\n";
}

template <class T>
int Queue<T>::Count()
{
    return iCount;
}

template <class T>
void Queue<T>::EnQueue(int No)
{
    struct nodeDQ<T> * newn = NULL;

    newn = new nodeDQ<T>;

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
int Queue<T>::Addition()
{
    struct nodeDQ<T> * temp = First;
    int iSum = 0;

    while(temp != NULL)
    {
        iSum = iSum + temp->data;
        temp = temp->next;
    }

    return iSum;
}

template <class T>
int Queue<T>::EvenCount()
{
    struct nodeDQ<T> * temp = First;
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
int Queue<T>::OddCount()
{
    struct nodeDQ<T> * temp = First;
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
int Queue<T>::Frequency(int No)
{
    struct nodeDQ<T> * temp = First;

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
bool Queue<T>::Search(int No)
{
    struct nodeDQ<T> * temp = First;
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

template <class T>
int Queue<T>::SearchFirstOccurance(int No)
{
    struct nodeDQ<T> * temp = First;

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
int Queue<T>::SearchLastOccurance(int No)
{
    struct nodeDQ<T> * temp = First;

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
void Queue<T>::SumDigits()
{
    struct nodeDQ<T> * temp = First;
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

template <class T>
int Queue<T>::FactorsAddition(int No)
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
bool Queue<T>::CheckPerfect(int No)
{
    struct nodeDQ<T> * temp = First;
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

template <class T>
void Queue<T>::DisplayPerfect()
{
    struct nodeDQ<T> * temp = First;

    while(temp != NULL)
    {
        if(CheckPerfect(temp->data) == true)
        {
            cout<<"Perfect number from LL is :"<<temp->data;
        }
        temp = temp->next;
    }
}

template <class T>
void Queue<T>::SumFactors()
{
    struct nodeDQ<T> * temp = First;
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
int Queue<T>::MiddleElement()
{
    struct nodeDQ<T> * temp = First;
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
    Queue<int> *obj = new Queue<int>();
    int iRet = 0;
    bool bRet = false;

    obj->EnQueue(67);
    obj->EnQueue(42);
    obj->EnQueue(148);
    obj->EnQueue(28);
    obj->EnQueue(42);
    obj->EnQueue(28);
    obj->EnQueue(60);

    obj->Display();
    iRet = obj->Count();
    cout<<"Number of elements in LL are :"<<iRet<<endl;

    iRet = obj->SearchFirstOccurance(42);
    cout<<"First occurance is at position :"<<iRet<<endl;

    iRet = obj->SearchLastOccurance(42);
    cout<<"Last occurance is at position :"<<iRet<<endl;

    iRet = obj->FactorsAddition(28);
    cout<<"Sum of factors are :"<<iRet<<endl;

    bRet = obj->CheckPerfect(28);
    if(bRet == true)
    {
        cout<<"It is a perfect number\n"<<endl;
    }
    else
    {
        cout<<"It is not a perfect number"<<endl;
    }

    obj->DisplayPerfect();

    iRet = obj->MiddleElement();
    cout<<"Middle element from LL is :"<<iRet<<endl;
    return 0;
}