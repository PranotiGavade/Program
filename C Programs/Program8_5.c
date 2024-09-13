#include<stdio.h>

double SquareMeter(int iValue)
{
    double sqm = 0.0;
    sqm = iValue * 0.0929;
    return sqm;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("%d",dRet);
}