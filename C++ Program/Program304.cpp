#include<iostream>
using namespace std;

int CountEven(int Arr[],int iSize)
{
    int i = 0;
    int iCnt = 0;

    while(i<=iSize)
    {
        if(Arr[i] % 2 == 0)
        {
            iCnt++;
        }
        i++;
    }
    return iCnt;
}
int main()
{
    int *Arr = NULL;
    int iCount = 0, i = 0,iRet = 0;

    cout<<"Enter number of elements :"<<endl;
    cin>>iCount;

    Arr = new int[iCount];

    cout<<"Enter elements :"<<endl;
    for(i = 0; i<iCount; i++)
    {
        cin>>Arr[i];
    }

    cout<<"Entered elements are :"<<endl;
    for(i = 0; i<iCount; i++)
    {
        cout<<Arr[i]<<endl;
    }

    iRet = CountEven(Arr,iCount);

    cout<<"Number of even elemets are :"<<iRet<<endl;


    delete []Arr;

    return 0;
}