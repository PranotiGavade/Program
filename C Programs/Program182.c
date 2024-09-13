#include<stdio.h>

int CountFrequency(char *str,char ch)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return  iCount;
}
int main()
{
    char Arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter character :\n");
    scanf(" %c",&cValue);
    iRet = CountFrequency(Arr,cValue);

    printf("Frequnecy is %d\n",iRet);

    return 0;
}