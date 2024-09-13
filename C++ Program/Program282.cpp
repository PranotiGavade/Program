#include<iostream>
using namespace std;

int Addition(int iNo)
{
    int iSum = 0;
    
    i = 1;
    while(i <= iNo)
    {
        iSum = iSum + i;
        iNo--;   
    }   
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number :"<<endl;
    cin>>iValue;

    iRet = Addition(iValue);

    cout<<"Addition is %d :"<<iRet<<endl;

    return 0;
}