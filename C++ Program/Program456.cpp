//Generic Linked List

#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyLL
{
    private:
        struct node<T> * First;
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
    struct node<T> * temp = First;

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
    struct node<T> * newn = NULL;

    newn = new node<T>;

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
    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL;

    newn = new node<T>;

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
    struct node<T> * newn = NULL;
    struct node<T> * temp = NULL;
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
        newn = new node<T>;
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
    struct node<T> * temp = First;

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
    struct node<T> * temp = First;

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
    struct node<T> * temp1 = NULL;
    struct node<T> * temp2 = NULL;
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
    return 0;
}