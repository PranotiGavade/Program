#include<stdio.h>

void strrevx(char *str, char ch)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",arr);

    strrevx(arr,cValue);

    printf("Modified String is : %s",arr);

    return 0;
}