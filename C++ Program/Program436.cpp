#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int iSize)
{
    int i = 0;
    T fMax = Arr[i];

    for(i = 0; i<Arr[i]; i++)
    {
        if(Arr[i] > fMax)
        {
            fMax = Arr[i];
        }
    }
    return fMax;
}
int main()
{
    int iLength = 0;
    float *ptr = NULL;
    int i = 0;
    float fRet = 0.0f;

    cout<<"Enter number of elements :\n";
    cin>>iLength;

    ptr = new float[iLength];

    cout<<"Enter the elements :\n";
    for( i = 0; i<iLength; i++)
    {
        cin>>ptr[i];
    }

    fRet = Maximum(ptr,iLength);

    cout<<"maximum number is :"<<fRet<<"\n";
    delete []ptr;
    
    return 0;
}