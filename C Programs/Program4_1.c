#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    for(iCnt = 1; iCnt <iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}