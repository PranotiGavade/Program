#include<stdio.h>

int KMtoMeter(int iNo)
{
    int KM = 1000;
    int i = 0;
    i = iNo * KM;
    return i;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d",iRet);

    return 0;
}