#include<stdio.h>

void CheckDigit(char ch)
{
    
    if((ch >= '0') && (ch <= '9'))
    {
        printf("It is digit\n");
    }
    else
    {
        printf("It is not digit\n");
    }
}

int main()
{
    char cValue;

    printf("Enter one charachter :\n");
    scanf("%c",&cValue);

    CheckDigit(cValue);
   
    return 0;
}