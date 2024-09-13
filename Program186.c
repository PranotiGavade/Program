#include<stdio.h>
#include<stdbool.h>

void UpdateString(char *str,char ch)
{
   
    while(*str != '\0')
    {
        if(*str == ' ')
        {
            *str = '*';
        }
        str++;
    }
   
}

int main()
{
    char Arr[100];
   

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    UpdateString(Arr)
    
    printf("Updated string is %s\n",Arr);

    return 0;
}