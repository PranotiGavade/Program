#include<iostream>
using namespace std;

int Count(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCnt++;
        iNo = iNo / 10;   
    }   
    return iCnt;
    
}

int main()
{
    int iValue = 0,iRet = 0;

    cout<<"Enter number :"<<endl;
    cin>>iValue;

    iRet = Count(iValue);

    cout<<"Number of digits are :"<<iRet<<endl;

    return 0;
}