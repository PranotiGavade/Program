#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    char *start = src;
    char *end = src;
    char temp;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(end >= src)
    {
        *dest = *end;
        dest++;
        end--;

    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];

    StrCpyRev(arr,brr);

    printf("%s",brr);

    return 0;
}