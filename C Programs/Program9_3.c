#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
    int iCnt = iStart;
    int iSum = 0;
    if(iStart<0)
    {
        iStart = -iStart;
    }
    if(iStart > iEnd)
    {
        printf("Invalid input \n");
    }
    while(iCnt <= iEnd)
    {
        iSum = iSum + iCnt;
        iCnt++;
    }
    return iSum;
    }
    
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1,iValue2);

    printf("Addition is %d",iRet);

    return 0;
}