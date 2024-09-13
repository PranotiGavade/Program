#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
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
}

int main()
{
    char arr[20];
    char cValue;
    bool bRet = false;

    printf("Enter String :\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Charchter :\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == true)
    {
        printf("Character found");
    }
    else
    {
        printf("Charachter not found");
    }
    return 0;
}