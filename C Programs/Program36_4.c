#include<stdio.h>

int MinI(int iNo)
{
    int iDigit = 0;
    int iMin = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
    }
    return iMin;
}


int MinR(int iNo)
{
    int iDigit = 0;
    static int iMin = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        MinR(iNo);
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = MinR(iValue);

    printf("Minimum digit is :%d",iRet);

    return 0;
}