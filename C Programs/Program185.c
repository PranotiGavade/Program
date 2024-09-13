#include<stdio.h>

void Display(char * str)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt <= str[iCnt]; iCnt++)
    {
        printf("%c\n",str[iCnt]);
    }
}
int main()
{
    char arr[100];

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    Display(arr);

    return 0;
}