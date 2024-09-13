#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int Value);
        ~ArrayX();
        void Accept();
        void Display();
        bool LinearSearch(int Value);

};

ArrayX::ArrayX(int Value)
{
    iSize = Value;
    Arr = new int[iSize];
}

ArrayX::~ArrayX()
{
    delete []Arr;
}

void ArrayX::Accept()
{
    int i = 0;

    cout<<"Enter the elements : \n";
    for(i = 0; i<iSize; i++)
    {
        cin>>Arr[i];
    }
}

void ArrayX::Display()
{
    int i = 0;

    cout<<"Entered elements are:\n";
    
    for(i = 0; i<iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

bool ArrayX::LinearSearch(int Value)
{
    bool bFlag = false;
    int i = 0;

    for(i = 0; i<iSize; i++)
    {
        if(Arr[i] == Value)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iLength = 0, No = 0;
    bool bRet = false;

    cout<<"Enter number of elements that you want to store :";
    cin>>iLength;

    ArrayX obj(iLength);

    obj.Accept();
    obj.Display();

    cout<<"Enter the elements that you want to search :";
    cin>>No;

    bRet = obj.LinearSearch(No);

    if(bRet == true)
    {
        cout<<"Element is present\n";
    }
    else
    {
        cout<<"Element is not present\n";
    }
    return 0;
}