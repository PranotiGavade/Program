#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int No)
        {
            iSize = No;
            Arr = new T[iSize];
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            int i = 0;

            cout<<"Enter the elements :\n";

            for(i = 0; i<iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            int i = 0;

            cout<<"Elemets of array are :\n";

            for(i = 0; i<iSize; i++)
            {
                cout<<Arr[i]<<"\n";
            }
        }

        T Addition()
        {
            int i = 0;
            T iSum = 0;

            for(i =0; i<iSize; i++)
            {
                iSum = iSum + Arr[i];
            }
            return iSum;
        }
};

int main()
{
    ArrayX <int>aobj(5);
    int iRet = 0;

    aobj.Accept();
    aobj.Display();

    iRet = aobj.Addition();

    cout<<"Addition is :"<<iRet<<"\n";
    return 0;
}