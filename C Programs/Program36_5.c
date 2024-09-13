#include<stdio.h>

int ReverseI(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }
    return iRev;
}

int ReverseR(int iNo)
{
    int iDigit = 0;
    static int iRev = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
        ReverseR(iNo);
    }
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = ReverseR(iValue);

    printf("Reverse number  is :%d",iRet);

    return 0;
}