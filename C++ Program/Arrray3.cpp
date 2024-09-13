#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int iLength;
        int *Arr;

        ArrayX(int No)
        {
            iLength = No;
            Arr = new int[iLength];
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            int i = 0;

            cout<<"Enter the elements :\n";
            for(i = 0; i<iLength; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            int i = 0;

            cout<<"Entered elements are :\n";
            for(i = 0; i<iLength; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }
};

int main()
{
    ArrayX obj(5);
    
    obj.Accept();
    obj.Display();

    return 0;
}