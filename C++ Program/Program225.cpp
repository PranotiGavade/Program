#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int No)
        {
            cout<<"inside constructor"<<endl;
            iSize = No;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Inside destructor"<<endl;
            delete []Arr;
        }

        void Accept()
        {
            int i  = 0;
            cout<<"Enter the elements :"<<endl;
            for(i = 0; i<iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            int i  = 0;
            cout<<"elements are :"<<endl;
            for(i = 0; i<iSize; i++)
            {
                cout<<Arr[i]<<endl;
            }
        }
};

int main()
{
    int iLength = 0;

    cout<<"enter the number of elements that you want to store :"<<endl;
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();
    aobj.Display();

    //aobj.Arr = NULL;  //error
    //aobj.iSize = 20;  //error

    return 0;
}