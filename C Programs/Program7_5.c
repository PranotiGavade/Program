#include<stdio.h>
int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact =0;
    int iFactEven = 1;
    int iFactOdd = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFactEven = iFactEven * iCnt;
        }    
    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            iFactOdd = iFactOdd * iCnt;
        }    
    }
    iFact = iFactEven - iFactOdd;
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("Even factorial of %d",iRet);

    return 0;
}