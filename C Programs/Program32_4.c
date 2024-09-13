#include<stdio.h>

void Pattern(char *str)
{
    int iCnt = 0;
    int i = 0, j = 0;
    while(*str != '\0')
    {
        str++;
        iCnt++; 
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
    }


    for(i = 0; i<iCnt; i++)
    {
        for(j = 0; j<iCnt; j++)
        {
            printf("%c ",str[j]);
        }
        printf("\n");
    }
}
int main()
{
    char arr[30];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    Pattern(arr);

    return 0;
}