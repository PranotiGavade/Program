#include<stdio.h>
#include<stdbool.h>

bool StrNCmp(char *src,char *dest)
{
    while((*src != '\0') && (*dest != '\0'))
    {
        if(*src != *dest)
        {
            break;
        }
    }
    src++;
    dest++;

    if(*src == '\0' && *dest == '\0')
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
    char arr[50] = "Marvellous Infosystem";
    char brr[30] = "Marvellous Infosystem";

    bRet = StrNCmp(arr,brr);

    if(bRet == true)
    {
        printf("strings are identical");
    }
    else
    {
        printf("strings are different");
    }

    return 0;
}