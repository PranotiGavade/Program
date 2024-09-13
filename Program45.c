#include<stdio.h>
#include<stdbool.h>

// Input : 11
bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 2; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        { 
            break;
        }
    }
    if(iCnt > (iNo/2))
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
    
    bRet = CheckPrime(iValue);

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