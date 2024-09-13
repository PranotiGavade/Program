#include<stdio.h>
#include<stdbool.h>

int OffBit(int iNo)
{
    unsigned int iMask = 0x0000000f;
    unsigned int iResult = 0;

    iResult = iNo ^ iMask;

    return iResult;
}
int main()
{
    unsigned int iNo = 0;
    unsigned int iRet = 0;

    printf("Enter number : \n");
    scanf("%u",&iNo);

    iRet = OffBit(iNo);

    printf("Updated number is : %u\n",iRet);

    return 0;
}