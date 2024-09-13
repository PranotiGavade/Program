#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt=10; iCnt<=1; iCnt--)
    {
        if(iCnt % iNo == 0)
        {
            printf("%d ",iCnt);
            iNo = iNo * iCnt;
        }
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}