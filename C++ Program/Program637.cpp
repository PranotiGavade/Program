#include<iostream>
using namespace std;

template <class T>
struct nodeDS
{
    int data;
    struct nodeDS * next;
};

template <class T>
class Stack
{
    private:
        struct nodeDS<T> * First;
        int iCount;

    public:
        Stack();

        void Display();

        int Count();
        void Push(T No);

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
Stack<T>::Stack()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void Stack<T>::Display()
{
    struct nodeDS<T> * temp = First;

    while(temp != NULL)
    {
        cout<<" |"<<temp->data<<" |->";
        temp = temp->next;
    }
    cout<<"\n";
}

template <class T>
int Stack<T>::Count()
{
    return iCount;
}

template <class T>
void Stack<T>::Push(T No)
{
    struct nodeDS<T> * newn = NULL;

    newn = new nodeDS<T>;

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
int Stack<T>::Addition()
{
    int iSum = 0;
    struct nodeDS<T> * temp = First;

    while(temp != NULL)
    {
        iSum = iSum + temp->data;
        temp = temp->next;
    }

    return iSum;
}

template <class T>
int Stack<T>::EvenCount()
{
    int iCnt = 0;
    struct nodeDS<T> * temp = First;

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
int Stack<T>::OddCount()
{
    int iCnt = 0;
    struct nodeDS<T> * temp = First;

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
int Stack<T>::Frequency(T No)
{
    int iCnt = 0;
    struct nodeDS<T> * temp = First;

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
bool Stack<T>::Search(T No)
{
    bool bFlag = false;
    struct nodeDS<T> * temp = First;

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
int Stack<T>::SearchFirstOccurance(T No)
{
    int iCnt = 1;
    int iPos = -1;

    struct nodeDS<T> * temp = First;

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
int Stack<T>::SearchLastOccurance(T No)
{
     int iCnt = 1;
    int iPos = -1;

    struct nodeDS<T> * temp = First;

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
void Stack<T>::SumDigits()
{
    struct nodeDS<T> * temp = First;
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
int Stack<T>::FactorsAddition(T No)
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
bool Stack<T>::CheckPerfect(T No)
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
void Stack<T>::DisplayPerfect()
{
     struct nodeDS<T> * temp = First;

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
void Stack<T>::SumFactors()
{
    struct nodeDS<T> * temp = First;
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
int Stack<T>::MiddleElement()
{
     struct nodeDS<T> * temp = First;
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
    Stack<int> *iobj = new Stack<int>();
    int iRet = 0;

    iobj->Push(79);
    iobj->Push(32);
    iobj->Push(67);
    iobj->Push(49);
    iobj->Push(28);
    iobj->Push(67);
    iobj->Push(104);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements in LL is :"<<iRet<<endl;

    iRet = iobj->Addition();
    cout<<"Addition of elements in LL is :"<<iRet<<endl;

    iRet = iobj->EvenCount();
    cout<<"Number of even elements in LL is :"<<iRet<<endl;

    iRet = iobj->OddCount();
    cout<<"Number of odd elements in LL is :"<<iRet<<endl;

    return 0;
}