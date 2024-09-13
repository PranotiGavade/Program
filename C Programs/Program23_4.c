#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character :\n");
    scanf("%c",&cValue);

    bRet == ChkDigit(cValue);

    if(bRet == true)
    {
        printf("It is small case letter\n");
    }
    else
    {
        printf("It is not a small case letter\n");
    }

    return 0;
}