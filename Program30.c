#include<stdio.h>

////////////////////////////////////////////////////
//
//Function name :CalculateTicket
//Description   :Used to display ticket price based on age
//Input         :Integer
//Output        :Integer
//Author        :Pranoti Bapuso Gavade
//Date          :29/04/2024
//
/////////////////////////////////////////////////////////

int CalculateRange(int iNo)
{
    if((iNo > 0) && (iNo <= 4))
    {
        return 0;
    }
    else if((iNo > 4) && (iNo <= 10))
    {
        return 900;
    }
    else if((iNo > 10) && (iNo <= 50))
    {
        return 2000;
    }
    else if((iNo > 50))
    {
        return 500;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter your age :");
    scanf("%d",&iValue);

    iRet = CalculateRange(iValue);

    printf("Your ticket price is :%d\n",iRet);
    return 0;
}