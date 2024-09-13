//algorithm
/*
    START
        accept one number from user as No
        divide that number by 2
        if remainder is zero
        then display result as even 
        otherwise display it as odd
    STOP
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(unsigned int iNo)
{
    if((iNo % 2) == 0)
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

    if (bRet == true)
    {
        printf("%d is even number",iValue);
    }
    else
    {
        printf("%d is odd number",iValue);
    }
    return 0;
}