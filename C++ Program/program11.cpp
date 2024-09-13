#include<iostream>
using namespace std;

float Average(int arr[], int iSize)
{
    int i = 0, iSum = 0;
    float fAns = 0;
    for(i = 0; i<iSize; i++)
    {
        iSum = iSum + arr[i];
    }
    fAns = (float)iSum / (float)iSize;
    return fAns;
}
int main()
{
    int i = 0, iLength = 0;
    int *ptr = NULL;
    float fRet = 0;

    cout<<"Enter number of elements that you want to store :";
    cin>>iLength;

    ptr = new int[iLength];
    
    cout<<"Enter the elements:"<<endl;
    for(i = 0; i<iLength; i++)
    {
        cin>>ptr[i];
    }

    fRet = Average(ptr,iLength);

    cout<<"Average is :"<<fRet<<endl;

    return 0;
}