#include<stdio.h>
#include<stdbool.h>

/*
    START
        Accept one number
        If number is greater that 30
        And it is less that 50
        Then display the massage as
        The number is in range
        Otherwise display the massage as
        The number is not in rane
    STOP
*/
bool CheckRange(int iNo)
{
    if((iNo>=30)&&(iNo<=50))
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

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckRange(iValue);

    if (bRet == true)
    {
        printf("%d is in the range 30 and 50\n",iValue);
    }
    else
    {
        printf("%d is not in the range 30 and 50\n",iValue);
    }
    return 0;
}