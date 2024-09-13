#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 1;
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        iCnt++;
        str++;
    }
    if(bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
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

    iRet = FirstChar(arr,cValue);

    if(iRet == -1)
    {
        printf("There is no such character");
    }
    else
    {
        printf("First occurence of character is :%d",iRet);
    }
    return 0;
}