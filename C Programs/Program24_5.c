#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A')&&(ch <= 'Z'))
    {
        printf("%d\n",ch);
        printf("%o\n",ch);
        printf("%x\n",ch);
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