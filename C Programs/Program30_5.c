#include<stdio.h>
#include<stdbool.h>

bool StrPallindrome(char *str)
{
    char *first = str;
    char *last = str;
    while(*str != '\0')
    {
        last++;
    }
    last--;

    while(first < last)
    {
        //temp = *first;
        //*first = *last;
        //*last = temp;

        first++;
        last--;
    }

    if(*first == *last)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    bool bRet = false;
    char arr[20] = "abccBa";

    bRet = StrPallindrome(arr);

    if(bRet == true)
    {
        printf("String is pallindrome\n");
    }
    else
    {
        printf("String is not pallindrome\n");
    }
}