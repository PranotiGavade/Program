#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;

        ArrayX(int No)
        {
            iSize = No;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            delete[]Arr;
        }

        void Accept()
        {
            int i = 0;

            cout<<"Enter the elements :"<<endl;
            for(i = 0; i<iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            int i = 0;

            cout<<"Entered elements are :"<<endl;
            for(i = 0; i<iSize; i++)
            {
                cout<<Arr[i]<<endl;
            }
        }

        void CountDigit()
        {
            int i = 0;
            int iNo = 0;
            int iCount = 0;

            for(i = 0; i<iSize; i++)
            {
                iNo = Arr[i];
                while(iNo != 0)
                {
                    iCount++;
                    iNo = iNo / 10;
                }
                cout<<Arr[i]<<" contains "<<iCount<< " digits in it "<<endl;
                iCount = 0;
            }
        }

};
int main()
{
    int iLength = 0;
    
    cout<<"Enter number of elements that you want to enter :"<<endl;
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength);

    aobj->Accept();
    
    aobj->CountDigit();

    delete aobj;

    return 0;
}