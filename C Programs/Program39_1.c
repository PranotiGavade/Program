#include<stdio.h>

int CountOne(int iNo)
{
    unsigned int iResult = 0;
    unsigned int iMask = 0;
    int iCount = 0;

    iResult = printf("%ox",iNo);

    if(iResult == 1)
    {
        iCount++;
    }
    return iCount;
}
int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = CountOne(iValue);

    printf("Number of 1 are :%d",iRet);

    return 0;
}