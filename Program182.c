#include<stdio.h>
#include<stdbool.h>

int CountFrequency(char *str,char ch)
{
    int iCnt = 0;
   
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }   
        str++;
    }
    return iCnt;
    
}

int main()
{
    char Arr[100];
    char cValue;
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("enter charachter that you want to search :\n");
    scanf(" %c",&cValue);

    iRet = CountFrequency(Arr,cValue);

    printf("Frequency of is %d\n",iRet);

    return 0;
}