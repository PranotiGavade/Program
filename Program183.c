#include<stdio.h>
#include<stdbool.h>

int CheckOccurence(char *str,char ch)
{
    int iCnt = 1, iPos = -1;
    
    while(*str != '\0')
    {
        if(*str == ch)
        {
           iPos = iCnt;
        }   
        iCnt++;
        str++;
    }
    return iPos;
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

    iRet = CheckOccurence(Arr,cValue);

    if(iRet == -1)
    {
        printf("There is no such charachter");
    }
    else
    {
        printf("Last occurance of letter is %d\n",iRet);
    }
    return 0;
}