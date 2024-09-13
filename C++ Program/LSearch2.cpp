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
        bool BiDirectionalSearch(int Value);
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

    cout<<"Entered elemtns are :\n";
    for(i = 0; i<iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

bool ArrayX::BiDirectionalSearch(int Value)
{
    int iStart = 0;
    int iEnd = iSize-1;
    bool bFlag = false;

    while(iStart <= iEnd)
    {
        if(Arr[iStart] == Value || Arr[iEnd] == Value)
        {
            bFlag = true;
            break;
        }
        iStart++;
        iEnd--;
    }

    return bFlag;
}

int main()
{
    int iLength = 0, No = 0;
    bool bRet = false;

    cout<<"Enter number of elements that you want to create:";
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();
    aobj.Display();

    cout<<"Enter element that you want to search:";
    cin>>No;

    bRet = aobj.BiDirectionalSearch(No);

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