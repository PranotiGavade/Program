#include<stdio.h>

void UpdateString(char *str,char ch)
{
   
    while(*str != '\0')
    {
       
        str++;
    }
   
}

int main()
{
    char Arr[100];
   

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Updated string is %s\n",Arr);

    return 0;
}