#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int iNonSum = 0;
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum += iCnt;
        }
        else
        {
            iNonSum += iCnt;
        }
    }
    int FactDiff = iSum - iNonSum;
    return FactDiff;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);
    return 0;
}