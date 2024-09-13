#include<stdio.h>
#include<stdbool.h>

//algorith
/*
    START
        accept one number from user and consider it as No
        perform No divisible by 2
        if remainder is zero
        then display result as even number
        otherwise display result as odd number
    STOP
*/
bool CheckEvenOdd(unsigned int iNo)
{
        if((iNo % 2)==0)
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

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);
    }
    return 0;
}