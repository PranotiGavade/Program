#include<stdio.h>
#include<stdbool.h>

bool CheckOccurence(char *str,char ch)
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
    char Arr[100];
    char cValue;
    bool bRet = false;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("enter charachter that you want to search :\n");
    scanf(" %c",&cValue);

    bRet = CheckOccurence(Arr,cValue);

    if(bRet == true)
    {
        printf("charachter is present\n");
    }
    else
    {
        printf("character is not present\n");
    }

    return 0;
}