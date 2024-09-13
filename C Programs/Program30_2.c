#include<stdio.h>
#include<stdbool.h>

bool StrCmpX(char *first, char *second)
{
    while((*first != '\0') && (*second = '\0'))
    {
        if(*first != *second)
        {
            break;
        }
        first++;
        second++;
    }

    if(*first == '\0' && *second == '\0')
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
    char arr[50] = "Marvellous Infosysytem";
    char brr[30] = "Marvellous Infosystem";

    bRet = StrCmpX(arr,brr);

    if(bRet == true)
    {
        printf("Strings are identical\n");
    }
    else
    {
        printf("Strings are different\n");
    }
    return 0;
}