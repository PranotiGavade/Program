#include<stdio.h>
#include<stdbool.h>

int ChkOccurance(char *str, char ch)
{
    bool bFlag = false;
    int iCnt = 1;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
        iCnt++;
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
    char arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",arr);

    printf("Enter charachter :\n");
    scanf(" %c",&cValue);

    iRet = ChkOccurance(arr,cValue);

    if(iRet == -1)
    {
        printf("There is no such charachter\n");
    }
    else
    {
        printf("Letter occurs at position : %d",iRet);
    }
    return 0;
}