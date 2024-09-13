#include<stdio.h>

bool CheckCapital(char ch)
{
    
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("It is capital letter\n")
    }
    else
    {
        printf("It is not capital letter\n");
    }
}

int main()
{
    char cValue;
    bool bRet = false;

    printf("Enter one charachter :\n");
    scanf("%c",&ch);

    CheckCapital(cValue);
   
    return 0;
}