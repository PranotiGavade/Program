#include<stdio.h>

int FactorialI(int iNo)
{
    int i = 1;
    int iFact = 1;

    while(i<=iNo)
    {
        iFact = iFact * i;
        i++;
    }
    return iFact;
}

int FactorialR(int iNo)
{
    static int i = 1;
    static int iFact = 1;

    if(i<=iNo)
    {
        iFact = iFact * i;
        i++;
        FactorialR(iNo);
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = FactorialR(iValue);

    printf("Factorial of number is :%d",iRet);

    return 0;
}