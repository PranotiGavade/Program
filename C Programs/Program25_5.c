#include<stdio.h>
#include<stdbool.h>

bool Reverse(char *ch)
{
    char *start = ch;
    char *end = ch;
    char temp;
    
    while(*end != '\0')
    {
       end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
}
int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    printf("Reverse string is : %s\n",arr);

    return 0;
}

