#include<stdio.h>

void StrCatX(char *src, char *dest, int iCnt)
{
    while(*src != '\0')
    {
        src++;
    }
    while((*dest = '\0') && (iCnt != 0))
    {
        *src = *dest;
        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}
int main()
{
    char arr[50] = "Marvellous Infosystems";
    char brr[30] = "Logic Building ";
    int No = 5;

    StrCatX(arr,brr,No);

    printf("%s",arr);

    return 0;
}