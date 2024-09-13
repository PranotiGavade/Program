#include<iostream>
using namespace std;

int SumFactors(int iNo)
{
    int iSum = 0;
    int iCnt = 0;
    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt == 0))
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number\n";
    cin>>iValue;

    iRet = SumFactors(iValue);

    cout<<"Summation of factors is : "<<iRet<<endl;
    return 0;
}