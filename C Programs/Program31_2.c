#include<stdio.h>

int CountMax(char *str)
{
    int iMax = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            while(*str == ' ') && (*str != '\0')
            {
                str++;
            }
        }
        else if(*str != '\0')
        {
            
        }
    }
}
int main()
{
    char arr[50];
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    iRet = CountMax(arr);

}