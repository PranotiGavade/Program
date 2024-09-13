#include<stdio.h>

void strtoggle(char *str)
{
    while(*str != 0)
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + ('a' - 'A');
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}
int main()
{
    char arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    strtoggle(arr);

    printf("Modified String is : %s",arr);

    return 0;
}