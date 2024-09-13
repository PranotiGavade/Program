#include<stdio.h>

void CheckCapital(char ch)
{
    
    if((ch >= 'a') && (ch <= 'z'))
    {
        printf("It is small letter\n")
    }
    else
    {
        printf("It is not small letter\n");
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