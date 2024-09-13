#include<stdio.h>

int SmallI(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int SmallR(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
        SmallR(str);
    }
    return iCount;
}
int main()
{
    char arr[30];
    int iRet = 0;

    printf("Enter String :");
    scanf("%s",arr);

    iRet = SmallR(arr);

    printf("Number of small charachters are :%d",iRet);
    return 0;
}