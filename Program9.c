#include<stdio.h>
#include<stdbool.h>

// user is going to enter only positive inputs

//Algortihtm
/*
    START
        Accept one number as No
        Divide number No by 3
        If remainder is zero
        Divide number No by 5
        If remainder is zero
        Then print number is divisible by 3 and 5
        otherwise display it is not divisible by 3,5
    STOP
*/

/////////////////////////////////////////////////////////

// Function Name : CheckDivisible
// Description :   used to check whether number is divisible by 3 or 5
// Input :         Integer
// Output :        Boolean
// Author :        Pranoti Bapuso Gavade
// Date :          16/04/2024
//////////////////////////////////////////////////////////

bool CheckDivisible(unsigned int iNo)     //postive value sathi unsigned 
{
    if((iNo % 3) == 0) && ((iNo % 5) == 0)
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

    printf("Enter number : \n ");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 3 or 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 3 or 5\n",iValue);
    }

    return 0;
}

/*
    logical && operator

    First       Second      &&      ||
    true        true        true    true
    true        flase       false   true
    false       true        false   true
    false       false       false   false



*/