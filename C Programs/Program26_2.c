#include<stdio.h>

void strupx(char *str)
{
    while(*str != 0)
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    strupx(arr);

    printf("Modified String is : %s",arr);

    return 0;
}