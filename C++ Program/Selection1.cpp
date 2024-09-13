#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int iSize;
        int *Arr;

        ArrayX(int No)
        {
            iSize = No;
            Arr = new int[iSize];
        }

        void Accept()
        {
            cout<<"Enter the elements:";

            int i = 0;
            for(i = 0; i<iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            cout<<"Entered elements are :";

            int i = 0;
            for(i = 0; i<iSize; i++)
            {
                cout<<Arr[i]<<"\t";
            }
            cout<<"\n";
        }
        

        void BubbleSort()
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
                cout<<"\n Array after pass"<<i+1<<"\n";
                Display();
            }
        }

        void SelectionSort()
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
};

int main()
{
    int iLength = 0;

    cout<<"Enter number of elements which you want to store:";
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();
    aobj.Display();

    aobj.BubbleSort();
    aobj.SelectionSort();

    return 0;
}