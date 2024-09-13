#include<iostream>
using namespace std;

// Code for Singly Linear LinkedList
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
    private:
        struct nodeSL<T> * First;
        int iCount;

    public:
        SinglyLL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

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
        cout<<"|"<<temp->data<<"|->";
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
    struct nodeSL<T> * newn = NULL;

    newn = new nodeSL<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)   //if(iCount == 0)
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
void SinglyLL<T>::InsertLast(T No)
{
    struct nodeSL<T> * newn = NULL;
    struct nodeSL<T> * temp = NULL;

    newn = new nodeSL<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)   //if(iCount == 0)
    {
        First = newn;
    }
    else 
    {
        temp = First;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
         
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T No,int iPos)
{
    struct nodeSL<T> * newn = NULL;
    struct nodeSL<T> * temp = NULL;
    int i = 0;

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        newn = new nodeSL<T>;
        newn->data = No;
        newn->next = NULL;
        
        temp = First;
        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    }
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    struct nodeSL<T> * temp = First;

    if(First == NULL)
    {
        cout<<"LL is empty\n";
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First = First->next;
        delete temp;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
    struct nodeSL<T> * temp = First;

    if(First == NULL)
    {
        cout<<"LL is empty\n";
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    struct nodeSL<T> * temp1 = NULL;
    struct nodeSL<T> * temp2 = NULL;
    int i = 0;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
       temp1 = First;

       for(i = 1; i<iPos-1; i++)
       {
            temp1 = temp1->next;
       }
       temp2 = temp1->next;

       temp1->next = temp2->next;
       delete temp2;

       iCount--;
    }
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

// Code for Doubly Linear LinkedList
template <class T>
struct nodeDL
{
    T data;
    struct nodeDL *next;
    struct nodeDL *prev;
};

template <class T>
class DoublyLL
{
    private:
        struct nodeDL<T> * First;
        int iCount;

    public:
        DoublyLL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);        
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

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
    struct nodeDL<T> * temp = First;

    while(temp != NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }
    cout<<"NULL\n";
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

    if(First == NULL)
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
void DoublyLL<T>::InsertLast(T No)
{
    struct nodeDL<T> * newn = NULL;
    struct nodeDL<T> * temp = NULL;
    newn = new nodeDL<T>;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    iCount++;
}

template <class T>
void DoublyLL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeDL<T> * newn = NULL;
    struct nodeDL<T> * temp = NULL;
    int i = 0;

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid position\n";
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(No);
    }
    if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        newn = new nodeDL<T>;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;
        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        iCount++;
    }
}

template <class T>
void DoublyLL<T>::DeleteFirst()
{
    if(First == NULL)
    {
        printf("Unable to delete as LL is empty\n");
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First =First->next;
        delete First->prev;
        First->prev = NULL;
    }
    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteLast()
{
    struct nodeDL<T> * temp = NULL;

    if(First == NULL)
    {
        printf("Unable to delete as LL is empty\n");
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        temp = First;
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

template <class T>
void DoublyLL<T>::DeleteAtPos(int iPos)
{
    struct nodeDL<T> * temp = NULL;
    int i = 0;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid position\n";
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = First;
        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        iCount--;
    }
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

// Code for Singly Circular LinkedList
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
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

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
    if((First == NULL)&&(Last == NULL))
    {
        cout<<"LL is empty\n";
        return;
    }
    struct nodeSC<T> * temp = First;
    do
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp->next;
    }while(temp != Last->next);
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

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    Last->next = First;
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertLast(T No)
{
    struct nodeSC<T> * newn = NULL;

    newn = new nodeSC<T>;

    newn->data = No;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        Last = newn;
    }
    Last->next = First;
    iCount++;
}

template <class T>
void SinglyCL<T>::InsertAtPos(T No, int iPos)
{
    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        struct nodeSC<T> * newn = NULL;

        newn = new nodeSC<T>;

        newn->data = No;
        newn->next = NULL;

        struct nodeSC<T> * temp = First;
        for(int i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;
        iCount++;
    } 
}

template <class T>
void SinglyCL<T>::DeleteFirst()
{
    if((First == NULL) && (Last == NULL))
    {
        cout<<"LL is empty\n";
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        struct nodeSC<T> * temp = First;
        First = First->next;
        delete temp;
        Last->next = First;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
{
    if((First == NULL) && (Last == NULL))
    {
        cout<<"LL is empty"<<endl;
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        struct nodeSC<T> * temp = First;
        while(temp->next != Last)
        {
            temp = temp->next;
        }
        delete Last;
        Last = temp;
        Last->next = First;
    }
    iCount--;
}

template <class T>
void SinglyCL<T>::DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid position"<<endl;
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct nodeSC<T> * temp1 = First;
        for(int i = 1; i < iPos-1; i++)
        {
            temp1 = temp1->next;
        }
        struct nodeSC<T> * temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
        iCount--;
    }
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


// Code for Doubly Circular LinkedList
template <class T>
struct nodeDC
{
    T data;
    struct nodeDC *next;
    struct nodeDC *prev;
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
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

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
DoublyCL<T> :: DoublyCL()
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
        cout<<"Linked List is emprty\n";
        return;
    }

    cout<<"<=> ";
    do
    {
        cout<<"| "<<First->data <<"| <=> ";
        First = First -> next;
    }while(Last -> next != First);

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
    Last -> next = First;
    First -> prev = Last;

    iCount++;
}

template <class T>
void DoublyCL<T>::InsertLast(T No)
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
        Last ->next = newn;
        newn->prev = Last;
        Last = newn;
    }
    Last -> next = First;
    First -> prev = Last;

    iCount++;    
}

template <class T>
void DoublyCL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeDC<T> * temp = NULL;
    struct nodeDC<T> * newn = NULL;

    int i = 0;

    if(iPos < 1 || iPos > iCount+1)
    {
        cout<<"Invalid postion\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        newn = new nodeDC<T>;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        temp = First;

        for(i = 1; i < iPos -1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp->next->prev = newn;

        temp->next = newn;
        newn->prev = temp;

        iCount++;
    }
}

template <class T>
void DoublyCL<T>::DeleteFirst()
{
    if(First == NULL && Last == NULL)   // Empty LL
    {
        return;
    }
    else if(First == Last)   // Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    // More than one node
    {
        First = First -> next;
        delete Last->next;
        First -> prev = Last;
        Last -> next = First;
    }
    iCount--;
}

template <class T>
void DoublyCL<T>::DeleteLast()
{
    if(First == NULL && Last == NULL)   // Empty LL
    {
        return;
    }
    else if(First == Last)   // Single node
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else    // More than one node
    {
        Last = Last -> prev;
        delete First -> prev;

        Last -> next = First;
        First -> prev = Last;
    }
    iCount--;    
}

template <class T>
void DoublyCL<T>::DeleteAtPos(int iPos)
{
    struct nodeDC<T> * temp = NULL;

    int i = 0;

    if(iPos < 1 || iPos > iCount)
    {
        cout<<"Invalid postion\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        temp = First;

        for(i = 1; i < iPos -1; i++)
        {
            temp = temp -> next;
        }

        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;

        iCount--;
    }    
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

// Code for Stack 
template <class T>
struct nodeDS
{
    T data;
    struct nodeDS *next;
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
        int Pop(); 

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
    cout<<"Elements of stack are :\n";
    struct nodeDS<T> * temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<"\n";
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
int Stack<T>::Pop()
{
    int iValue = 0;
    struct nodeDS<T> * temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to pop element as stack is empty\n";
        return -1;
    }
    else
    {
        temp = First;

        iValue = First->data;
        First = First->next;
        delete temp;

        iCount--;
    }
    return iValue;
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

//Code for Queue
template <class T>
struct nodeDQ
{
    T data;
    struct nodeDQ *next;
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
        void EnQueue(T No);  
        int DeQue();   

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
    cout<<"Elements of Queue are :\n";
    struct nodeDQ<T> * temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
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
void Queue<T>::EnQueue(T No)
{
    struct nodeDQ<T> * newn = NULL;
    struct nodeDQ<T> * temp = NULL;

    newn = new nodeDQ<T>;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        temp = First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
    iCount++;
}

template <class T>
int Queue<T>::DeQue()
{
    int iValue = 0;
    struct nodeDQ<T> * temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to pop element as queue is empty\n";
        return -1;
    }
    else
    {
        temp = First;

        iValue = First->data;
        First = First->next;
        delete temp;

        iCount--;
    }
    return iValue;
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
template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int Value);
        ~ArrayX();

        void Accept();
        void Display();
        
        bool LinearSearch(T Value);
        bool BiDirectionalSearch(T Value);
        bool BinarySearch(T Value);

        void BubbleSort();
        void BubbleSortEfficient();

        void SelectionSort();

        void InsertionSort();
};

template <class T>
ArrayX<T>::ArrayX(int Value)
{
    this->iSize = Value;
    this->Arr = new T[iSize];
}

template <class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX<T>::Accept()
{
    int i = 0;

    cout<<"Enter the elements : \n";
    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\t";
    }
}

template <class T>
bool ArrayX<T>::LinearSearch(T Value)
{
    bool flag = false;
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == Value)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

template <class T>
bool ArrayX<T>::BiDirectionalSearch(T Value)
{
    int iStart = 0, iEnd = 0;
    bool flag = false;

    for(iStart = 0, iEnd = iSize-1; iStart <= iEnd; iStart++, iEnd--)
    {
        if(Arr[iStart] == Value || Arr[iEnd] == Value)
        {
                flag = true;
                break;
        }
    }
    return flag;
}

template <class T>
bool ArrayX<T>::BinarySearch(T Value)
{
    int iStart = 0, iEnd = 0, iMid = 0;
    bool flag = false;

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart) / 2);

        if((Arr[iMid] == Value) || (Arr[iStart] == Value) || (Arr[iEnd] == Value))
        {
            flag = true;
            break;
        }
        else if(Value < Arr[iMid])
        {
            iStart = iMid + 1;
        }
        else if(Value > Arr[iMid])
        {
            iEnd = iMid -1;
        }
    }

    return flag;
}

template <class T>
void ArrayX<T>::BubbleSort()
{
    T temp;
    int i = 0, j = 0;

    //     1        2      3  
    for(i = 0; i < iSize -1; i++)  // Outer
    {   //    1         2         3  
        for(j = 0; j< iSize - 1 - i; j++)   // Inner
        {
            if(Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
        cout<<"\nArray after pass : "<<i+1<<"\n";
        Display();
    }
}   

template <class T>
void ArrayX<T>::BubbleSortEfficient()
{
    T temp;
    int i = 0, j = 0;
    bool flag = true;

    //     1        2      3  
    for(i = 0; (i < iSize -1) && (flag == true) ; i++)  // Outer
    {
        flag = false;
           //    1         2         3  
        for(j = 0; j< iSize - 1 - i; j++)   // Inner
        {
            if(Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
                flag = true;
            }
        }
    
        cout<<"\nArray after pass : "<<i+1<<"\n";
        Display();
    }
}  

template <class T>
void ArrayX<T>::SelectionSort()
{
    int i = 0, j = 0, min_index = 0;
    T temp;

    for(i = 0; i < iSize -1; i++)
    {
        min_index = i;

        for(j = i + 1; j < iSize; j++)
        {
            if(Arr[j] < Arr[min_index])
            {
                min_index = j;
            }
        }
        temp = Arr[i];
        Arr[i] = Arr[min_index];
        Arr[min_index] = temp;
    }
}  

template <class T>
void ArrayX<T>::InsertionSort()
{
    int i = 0, j = 0;
    T selected;

    for(i =1 ; i < iSize; i++)
    {
        for(j = i -1, selected = Arr[i]; (j >= 0) && (Arr[j] > selected); j--)
        {
            Arr[j + 1] = Arr[j];
        }
        Arr[j+1] = selected;
    }
}  

int main()
{
    //LL of Integer
    cout<<"---------LinkedList of Integers--------";
    SinglyLL<int> *iobj = new SinglyLL<int>();

    int iRet = 0;

    iobj->InsertFirst(51);
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);
    
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are :"<<iRet<<endl;

    iobj->InsertLast(101);
    iobj->InsertLast(111);
    iobj->InsertLast(121);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are :"<<iRet<<endl;

    iobj->InsertAtPos(105,5);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are :"<<iRet<<endl;

    iobj->DeleteAtPos(5);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elements are :"<<iRet<<endl;
    
    // LL of charachter
    cout<<"---------LinkedList of charachter--------";
    SinglyLL<char> *cobj = new SinglyLL<char>();

    cobj->InsertFirst('A');
    cobj->InsertFirst('B');
    cobj->InsertFirst('C');
    
    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elements are :"<<iRet<<endl;

    cobj->InsertLast('D');
    cobj->InsertLast('E');
    cobj->InsertLast('F');

    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elements are :"<<iRet<<endl;

    cobj->InsertAtPos('P',5);

    cobj->Display();
    iRet =cobj->Count();
    cout<<"Number of elements are :"<<iRet<<endl;

    cobj->DeleteAtPos(5);

    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elements are :"<<iRet<<endl;

    // LL of Float
    cout<<"---------LinkedList of Floats--------";
    SinglyLL<float> *fobj = new SinglyLL<float>();

    float fRet = 0;

    fobj->InsertFirst(51.20);
    fobj->InsertFirst(21.37);
    fobj->InsertFirst(11.23);
    
    fobj->Display();
    fRet = fobj->Count();
    cout<<"Number of elements are :"<<fRet<<endl;

    fobj->InsertLast(101.23);
    fobj->InsertLast(111.23);
    fobj->InsertLast(121.12);

    fobj->Display();
    fRet = fobj->Count();
    cout<<"Number of elements are :"<<fRet<<endl;

    fobj->InsertAtPos(105.12,5);

    fobj->Display();
    fRet = fobj->Count();
    cout<<"Number of elements are :"<<fRet<<endl;

    fobj->DeleteAtPos(5);

    fobj->Display();
    fRet = fobj->Count();
    cout<<"Number of elements are :"<<fRet<<endl;

    // LL of Double
    cout<<"---------LinkedList of Doubles--------";
    SinglyLL<double> *dobj = new SinglyLL<double>();

    double dRet = 0;

    dobj->InsertFirst(51.2023);
    dobj->InsertFirst(21.3745);
    dobj->InsertFirst(11.2312);
    
    dobj->Display();
    dRet = dobj->Count();
    cout<<"Number of elements are :"<<dRet<<endl;

    dobj->InsertLast(101.23345);
    dobj->InsertLast(111.2378);
    dobj->InsertLast(121.12678);

    dobj->Display();
    dRet = dobj->Count();
    cout<<"Number of elements are :"<<dRet<<endl;

    dobj->InsertAtPos(105.12235,5);

    dobj->Display();
    dRet = dobj->Count();
    cout<<"Number of elements are :"<<dRet<<endl;

    dobj->DeleteAtPos(5);

    dobj->Display();
    dRet = dobj->Count();
    cout<<"Number of elements are :"<<dRet<<endl;


    // Doubly Linear LL
    DoublyLL<int> *diobj = new DoublyLL<int>();
    int idRet = 0;

    diobj->InsertFirst(51);
    diobj->InsertFirst(21);
    diobj->InsertFirst(11);

    diobj->InsertLast(101);
    diobj->InsertLast(111);
    diobj->InsertLast(121);

    diobj->Display();
    idRet = diobj->Count();
    cout<<"Number of elements are :"<<idRet<<endl;

    diobj->InsertAtPos(110,5);

    diobj->Display();
    idRet = diobj->Count();
    cout<<"Number of elements are :"<<idRet<<endl;

    diobj->DeleteAtPos(5);

    diobj->Display();
    idRet = diobj->Count();
    cout<<"Number of elements are :"<<idRet<<endl;

    //Singly Circular LL

    SinglyCL<int> *scobj = new SinglyCL<int>();
    int icRet = 0;

    scobj->InsertFirst(51);
    scobj->InsertFirst(21);
    scobj->InsertFirst(11);

    scobj->InsertLast(101);
    scobj->InsertLast(111);
    scobj->InsertLast(121);

    scobj->Display();
    icRet = scobj->Count();
    cout<<"Number of elements are:"<<icRet<<endl;
    
    scobj->InsertAtPos(105,5);

    scobj->Display();
    icRet = scobj->Count();
    cout<<"Number of elements are:"<<icRet<<endl;

    scobj->DeleteAtPos(5);
    
    scobj->Display();
    icRet = scobj->Count();
    cout<<"Number of elements are: "<<icRet<<endl;

    //Doubly Circular LL
    DoublyCL<int> *dcobj = new DoublyCL<int>();
    int cdRet = 0;

    dcobj->InsertFirst(51);
    dcobj->InsertFirst(21);
    dcobj->InsertFirst(11);
    
    dcobj->InsertLast(101);
    dcobj->InsertLast(111);
    dcobj->InsertLast(121);
    
    dcobj->Display();
    cdRet = dcobj->Count();

    dcobj->DeleteAtPos(5);
    
    dcobj->Display();
    cdRet = dcobj->Count();

    //For Stack
    Stack<int> *sobj = new Stack<int>();
    int sRet = 0;
    
    sobj->Push(10);
    sobj->Push(20);
    sobj->Push(30);
    sobj->Push(40);

    sobj->Display();

    sRet = sobj->Count();

    cout<<"Number of elements in stack are :"<<sRet<<"\n";
    sRet = sobj->Pop();

    cout<<"Poped element is :"<<sRet<<"\n";

    sRet = sobj->Pop();

    cout<<"Poped element is :"<<sRet<<"\n";

    sobj->Push(50);

    sobj->Display();
    sRet = sobj->Count();

    //For Queue
    Queue<int> *qobj = new Queue<int>();
    int qRet = 0;
    
    qobj->EnQueue(10);
    qobj->EnQueue(20);
    qobj->EnQueue(30);
    qobj->EnQueue(40);

    qobj->Display();

    qRet = qobj->Count();

    cout<<"Number of elements in queue are :"<<qRet<<"\n";
    qRet = qobj->DeQue();

    cout<<"removed element is :"<<qRet<<"\n";

    qRet = qobj->DeQue();

    cout<<"removed element is :"<<qRet<<"\n";

    qobj->EnQueue(50);

    qobj->Display();
    qRet = qobj->Count();

    cout<<"Number of elemets in queue :"<<qRet<<"\n";
    return 0;
}