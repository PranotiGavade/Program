#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
    int iCnt = iStart;
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
            printf("%d ",iCnt);
            
        }
        iCnt++;
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);

    return 0;
}