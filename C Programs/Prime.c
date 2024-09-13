#include<stdio.h>
#include<stdbool.h>
bool ChkPerfect(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt=2; iCnt<=(iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iCount++;
        }
    }
    if(iCount==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number :\n");
    scanf("%d",&iValue);

    bRet = ChkPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is prime number\n",iValue);
    }
    else
    {
        printf("%d is not prime number\n",iValue);
    }
    return 0;
}