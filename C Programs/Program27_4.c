#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt = 1, iPos = -1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
        }
        iCnt++;
        str++;
    }
    return iPos++;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",arr);

    printf("Enter Charchter :\n");
    scanf(" %c",&cValue);

    iRet = LastChar(arr,cValue);

    printf("Charachtr location is : %d",iRet);
    return 0;
}