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
        void BubbleSort();
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

    cout<<"Enter the elements :\n";
    for(i = 0; i<iSize; i++)
    {
        cin>>Arr[i];
    }
}

void ArrayX::Display()
{
    int i = 0;
    
    for(i = 0; i<iSize; i++)
    {
        cout<<Arr[i]<<"\t";
    }
    cout<<"\n";
}

void ArrayX::BubbleSort()
{
    int temp;
    int i = 0, j = 0;

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
        cout<<"\nArray after pass :"<<i+1<<"\n";
        Display();
    }
}

int main()
{
    int iLength = 0;

    cout<<"Enter number of elements that you want to enter :";
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();

    cout<<"Data before sorting :\n";
    aobj.Display();

     aobj.BubbleSort();

    cout<<"Data after sorting :\n";
    aobj.Display();


    return 0;
}