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
        void SelectionSort();
        void BubbleSort();
        void InsertionSort();
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

void ArrayX::InsertionSort()
{
    int i = 0, j = 0;
    int selected;

    for(i = 1; i<iSize; i++)
    {
        for(j = i-1, selected = Arr[i]; (j>=0)&&(Arr[j]>selected); j--)
        {
            Arr[j+1] = Arr[j];
        }
        Arr[j+1] = selected;
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

    aobj.InsertionSort();

    cout<<"Data after sorting :\n";
    aobj.Display();

    return 0;
}