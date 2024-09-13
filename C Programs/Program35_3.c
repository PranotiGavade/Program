#include<stdio.h>

int StrlenX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        str++;
        iCount++;
    }
    return iCount;
}

int StrlenR(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        str++;
        iCount++;
        StrlenR(str);
    }
    return iCount;
}
int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string :");
    scanf("%s",arr);

    iRet = StrlenR(arr);

    printf("Length of string is :%d",iRet);

    return 0;
}