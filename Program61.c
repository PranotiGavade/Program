#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)
    {
        iDigit = iNo % 10;    
        iNo = iNo /10;
        if(iDigit > 5)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("Number of digits which are greater that 5 are :%d\n",iRet);

    return 0;
}