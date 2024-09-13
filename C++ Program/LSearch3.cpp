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
        bool BinarySearch(int Value);
};

ArrayX::ArrayX(int Value)
{
    iSize = Value;
    Arr = new int[iSize];
}

ArrayX::~ArrayX()
{
    delete [] Arr;
}

void ArrayX::Accept()
{
    int i = 0;

    cout<<"Enter the elements:\n";

    for(i = 0; i<iSize; i++)
    {
        cin>>Arr[i];
    }
}

void ArrayX::Display()
{
    int i = 0;

    cout<<"Entered the elements are:\n";

    for(i = 0; i<iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

bool ArrayX::BinarySearch(int Value)
{
    int iStart = 0, iEnd = 0, iMid = 0;
    bool bFlag = false;

    iStart = 0;
    iEnd = iSize-1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart/2));

        if(Arr[iMid] == Value)
        {
            bFlag = true;
            break;
        }
        else if(Value > Arr[iMid])
        {
            iStart = iMid + 1;
        }
        else if(Value < Arr[iMid])
        {
            iEnd = iMid - 1;
        }
    }

    return bFlag;
}

void ArrayX::BinarySearch(int Value)
{
    int iStart = 0, iEnd =  0, iMid = 0;
    bool flag = false;

    iStart = 0;
    iEnd =  iSize -1;

    while(iStart <= iEnd)
    {
        iMid = iStart + (iEnd - iStart/2);

        if(Arr[iMid] == Value || Arr[iMid] == iStart || Arr[iMid] == iEnd)
        {
            flag = true;
            break;
        }
        else if(Value > Arr[iMid])
        {
            iStart = iMid + 1;
        }
        else if(Value < Arr[iMid])
        {
            iEnd = iMid - 1;
        }
    }
}

int main()
{
    int iLength = 0, No = 0;
    bool bRet = 0;

    cout<<"Enter number of elements that you want to enter :\n";
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();
    aobj.Display();

    cout<<"Enter element that you want to search :\n";
    cin>>No;

    bRet = aobj.BinarySearch(No);
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