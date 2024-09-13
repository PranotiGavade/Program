#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iNo = iNo/10;
        if(iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        if(iDigit % 2 != 0)
        {
            iSumOdd = iSumOdd + iDigit;
        }
        iSum = iSumEven - iSumOdd;
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = CountDiff(iValue);

    printf("%d",iRet);

    return 0;
}