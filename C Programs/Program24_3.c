#include<stdio.h>

void Display(char ch)
{
    char i = 0;
    
    if((ch >= 'A') || (ch <= 'Z'))
    {
        for(i = ch; i<='Z'; i++) 
        {
            printf("%c ",i);
        }
    }
    if((ch >= 'a') || (ch <= 'z'))
    {
        for(i = ch; i >= 'a'; i--)
        {
            printf("%c ",i);
        }
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}