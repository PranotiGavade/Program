#include<stdio.h>

void CheckCapital(char ch)
{
    
    if((ch >= 65) && (ch <= 90))
    {
        printf("It is capital letter\n");
    }
    else
    {
        printf("It is not capital letter\n");
    }
}

int main()
{
    char cValue;
    

    printf("Enter one charachter :\n");
    scanf("%c",&cValue);

    CheckCapital(cValue);
   
    return 0;
}