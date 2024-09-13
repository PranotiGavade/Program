#include<stdio.h>

int RangeSumEven(int iStart,int iEnd)
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
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
            
        }
        iCnt++;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    RangeSumEven(iValue1,iValue2);

    printf("Addition is %d ",iRet);

    return 0;
}