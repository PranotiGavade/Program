#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    if((ch > 32) || (ch < 48))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter characyer");
    scanf("%c",&cValue);

    if(bRet == TRUE)
    {
        printf("It is special charachter");
    }
    else
    {
        printf("It is not special character");
    }

    return 0;
}