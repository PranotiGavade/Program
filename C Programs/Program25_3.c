#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;
    int i = 0;
    int j = 0;
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            i++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            j++;
        }
        str++;
        iCnt = i - j;
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet  = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("%d",iRet);

    return 0;
}