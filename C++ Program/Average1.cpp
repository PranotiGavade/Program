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
            iSize = No;
            Arr = new int[iSize];
        }
        
        ~ArrayX()
        {
            delete [] Arr;
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
            cout<<"entered elements are :"<<endl;
            for(i = 0; i<iSize; i++)
            {
                cout<<Arr[i]<<endl;
            }
        }

        float Average()
        {
            int i = 0;
            int iSum = 0;
            float fAns = 0;

            for(i = 0; i<iSize; i++)
            {
                iSum = iSum + Arr[i];
            }
            fAns = ((float) iSum / (float)iSize);
            return fAns;
        }

};

int main()
{
    int iLength = 0;
    float fRet = 0.0f;

    cout<<"Enter number of elements that you want to store:"<<endl;
    cin>>iLength;
    
    ArrayX *aobj = new Array(iLength);

    aobj.Accept();
    aobj.Display();

    fRet = aobj.Average();

    cout<<"Average is :"<<fRet<<endl;

    return 0;
}