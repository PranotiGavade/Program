#include<iostream>
using namespace std;

int SumDigit(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;
    
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10; 
        SumDigit(iNo);
    }   
    return iSum;
    
}

int main()
{
    int iValue = 0,iRet = 0;

    cout<<"Enter number :"<<endl;
    cin>>iValue;

    iRet = SumDigit(iValue);

    cout<<"Summation of digits are :"<<iRet<<endl;

    return 0;
}