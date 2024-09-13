#include<stdio.h>

int WhiteSpacesI(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str = ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int WhiteSpacesR(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str = ' ')
        {
            iCount++;
        }
        str++;
        WhiteSpacesR(str);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string :");
    scanf("%s",arr);

    iRet = WhiteSpacesR(arr);

    printf("Number of white spaces in string are :%d",iRet);

    return 0;
}