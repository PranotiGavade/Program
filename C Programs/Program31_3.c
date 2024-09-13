#include<stdio.h>

void StrWrdRev(char *str)
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
        while(*str != '\0')
        {
            temp = *start;
            *start = *end;
            *end = temp;

            start++;
            end--;
        }
    }
}
int main()
{
    char arr[50];

    printf("enter string :");
    scanf("%[^'\n']s",arr);

    StrWrdRev(arr);

    printf("Reverse string is : %s");
    
    return 0;
}