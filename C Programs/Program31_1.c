#include<stdio.h>
#include<stdbool.h>

int WordCount(char *str)
{
    int iCnt = 0;
    bool bAns = false;
    if(str == NULL)
    {
        return -1;
    }
    while(*str != '\0')
    {
        if(*str != ' ')
        {
            bAns = true;
            iCnt++;
        }
        else if(*str == ' ')
        {
            bAns = false;
        }
        str++;
    }
    return iCnt;
}
int main()
{
    int arr[50];
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    iRet = WordCount(arr);

    printf("Numbers of words in string are : %d",iRet);

    return 0;
}