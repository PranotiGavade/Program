#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    if((chDiv == 'A') || (chDiv == 'a'))
    {
        printf("Your exam is at 8 AM\n");
    }
    else if((chDiv == 'B') || (chDiv == 'b'))
    {
        printf("Your exam is at 8:30 AM\n");
    }
    else if((chDiv == 'C') || (chDiv == 'c'))
    {
        printf("Your exam is at 9:20 AM\n");
    }
    else if((chDiv == 'D') || (chDiv == 'd'))
    {
        printf("Your exam is at 10:30 AM\n");
    }
    else
    {
        printf("Invalid input\n");
    }
}

int main()
{
    char cValue = 0;
   
    printf("Enter your division :\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}