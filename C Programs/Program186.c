#include<stdio.h>

void strrevx(char *str)
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
    char arr[100];
    
    printf("Enter string :\n");
    scanf("%[^'\n's]",arr);

    strrevx(arr);

    printf("Updated string is :%s\n",arr);

    return 0;
}