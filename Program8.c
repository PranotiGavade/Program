#include<stdio.h>
#include<stdbool.h>

// user is going to enter only positive inputs

//Algortihtm
/*
    START
        Accept one number as No
        Divide number No by 2
        If remainder is zero
        Then dispay result as even number
        otherwise display result as odd number
    STOP
*/
/////////////////////////////////////////////////////////
// Function Name : CcheckEvenOdd
// Description :   used to check whether number is even or odd
// Input :         Integer
// Output :        Boolean
// Author :        Pranoti Bapuso Gavade
// Date :          16/04/2024
//////////////////////////////////////////////////////////

bool CheckEvenOdd(unsigned int iNo)     //postive value sathi unsigned 
{
    if(iNo % 2 == 0)
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