#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char *ch)
{
    if((*ch >= 'A') && (*ch <= 'Z'))
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

    printf("Enter character :\n");
    scanf("%c",&cValue);

    bRet == ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is capital letter\n");
    }
    else
    {
        printf("It is not a chapital letter\n");
    }

    return 0;
}