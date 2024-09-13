#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'a')&&(ch <= 'z'))
    {
        ch = ch -('a' - 'A');
        
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        ch = ch + ('a' - 'A');
    }
    printf("%c\n",ch);

}
int main()
{
    char cValue = '\0';

    printf("Enter the character");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}