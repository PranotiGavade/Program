#include<stdio.h>

void StrCpyX(char *src ,char *dest)
{
    while(*src != '\0')
    {
        while(*src != ' ')
        {
            if(' ' > 1)
            {
                *dest = *src;
            }
        }
        src++; 
    }
}
int main()
{
    char arr[30] = "Marvellous   multi    OS";
    char brr[30];

    StrCpyX(arr,brr);

    printf("%s",brr);

    return 0;
}