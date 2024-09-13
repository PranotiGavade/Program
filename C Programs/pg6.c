#include<stdio.h>
#include<stdbool.h>

//Algorithm
/*
    START
        accept one number from user as No
        Divide it by 3 ans 5
        if remainder is zero
        then display result it is even number
        otherwise display as odd number
    STOP
*/

bool CheckDivisible(unsigned int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
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
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter a number :\n");
    scanf("%d",&iValue);
 
    bRet = CheckDivisible(iValue);

    if (bRet == true)
    {
        printf("%d is divisible 3 and 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 3 or 5\n",iValue);
    }
    return 0;
}