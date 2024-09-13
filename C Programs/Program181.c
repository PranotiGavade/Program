#include<stdio.h>
#include<stdbool.h>

bool ChkOccurance(char *str, char ch)
{
    bool bFlag = false;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;
}
int main()
{
    char arr[100];
    char cValue;
    bool bRet = false;

    printf("Enter String :\n");
    scanf("%[^'\n']s",&cValue);

    printf("Enter charachter :\n");
    scanf(" %c",&cValue);

    bRet = ChkOccurance(arr,cValue);

    if(bRet == true)
    {
        printf("Charachter is present\n");
    }
    else
    {
        printf("Character is not present\n");
    }
    return 0;
}