#include<stdio.h>

void StrCpyCapX(char *src,char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32; 
        }
        else
        {
            *dest = *src;
        }
        dest++;
        src++;
    }
    *dest = '\0';
}
int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    StrCpyCapX(arr,brr);

    printf("%s",brr);

    return 0;
}