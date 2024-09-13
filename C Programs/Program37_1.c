#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
    unsigned int iMask = 0x00004000;
    unsigned iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
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
    bool bRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }

    return 0;
}