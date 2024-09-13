#include<stdio.h>

void StrRevTog(char *str)
{
    char temp;
    char *first,*last;
    first = str;
    last = str;

    while(*last != '\0')
    {
        last++;
    }
    last--;

    while(first <= last)
    { 
        temp = *first;
        *first = *last;
        *last = temp;

        if((*first >= 'A') && (*first <= 'Z'))
        {
            *first = *first + 32;
        }
        else if((*first >= 'a') && (*first <= 'z'))
        {
            *first = *first - 32;
        }
        else if((*last >= 'A') && (*last <= 'Z'))
        {
            *last = *last + 32;
        }
        else if((*last >= 'a') && (*last <= 'z'))
        {
            *last = *last - 32;
        }
        first++;
        last--;
    }
}
int main()
{
    char arr[50] = "Marvellous";
    
    StrRevTog(arr);

    printf("%s",arr);

    return 0;
}