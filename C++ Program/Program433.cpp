#include<iostream>
using namespace std;

float Addition(float Arr[], int iSize)
{
    int i = 0;
    float iSum = 0;
    
    for(i = 0; i<=Arr[i]; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}
int main()
{
    int iLength = 0;
    float *ptr = NULL;
    float i = 0;
    float fRet = 0.0f;

    cout<<"Enter number of elements :\n";
    cin>>iLength;

    ptr = new float[iLength];

    cout<<"Enter the elements :\n";
    for( i = 0; i<iLength; i++)
    {
        cin>>ptr[i];
    }

    fRet = Addition(ptr,iLength);

    cout<<"Additon is :"<<fRet<<"\n";
    delete []ptr;
    
    return 0;
}