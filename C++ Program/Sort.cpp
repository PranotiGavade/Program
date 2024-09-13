#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int No);
        ~ArrayX();
        void Accept();
        void Display();
        bool BiDirectional(int Value);
        bool BinarySearch(int Value);
        void BubbleSort();
        void SelectionSort();
        void InsertionSort();
};

ArrayX::ArrayX(int No)
{
    iSize = No;
    Arr = new int[iSize];
}

ArrayX::~ArrayX()
{
    delete []Arr;
}

void ArrayX::Accept()
{
    cout<<"Enter the elements :";
    int i = 0;

    for(i = 0; iSize; i++)
    {
        cin>>Arr[i];
    }
}

void ArrayX::Display()
{
    int i = 0;

    for(i = 0; i<iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
    cout<<"\n";
}

bool ArrayX::BiDirectional(int Value)
{
    int iStart = 0;
    int iEnd = iSize-1;
    bool flag = false;

    while(iStart<=iEnd)
    {
        if(Arr[iStart] == Value || Arr[iEnd] == Value)
        {
            flag = true;
            break;
        }
        iStart++;
        iEnd--;
    }
    return flag;
}

bool ArrayX::BinarySearch(int Value)
{
    int iStart = 0, iEnd = 0, iMid = 0;
    bool flag = false;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iStart - iEnd) / 2);

        if(Arr[iMid] == Value)
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

    return flag;
}

void ArrayX::BubbleSort()
{
    int i = 0, j = 0;
    int temp;

    for(i = 0; i<iSize-1; i++)
    {
        for(j = 0; j<iSize-1-i; j++)
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
    }
}

void ArrayX::SelectionSort()
{
    int i = 0, j = 0, min_index = 0;
    int temp;

    for(i = 0; i<iSize-1; i++)
    {
        min_index = i;

        for(j = i+1; j<iSize-1-i; j++)
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

int main()
{
    int iLength = 0, No = 0;
    bool bRet = false;

    cout<<"Enter number of elements that you want to enter :";
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();
    aobj.Display();

    cout<<"Enter element that you want to search :\n";
    cin>>No;

    bRet = aobj.BinarySearch(No);
    if(bRet == true)
    {
        cout<<"Number is present\n";
    }
    else
    {
        cout<<"Number is not present\n";
    }
    return 0;
}