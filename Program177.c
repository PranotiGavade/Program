#include<stdio.h>
#include<stdbool.h>

bool CheckOccurence(char *str)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if((*str == 'l') || (*str == 'L'))
        {
            bFlag = true;
            break;
        }   
        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[100];
    bool bRet = false;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    bRet = CheckOccurence(Arr);

    if(bRet == true)
    {
        printf("w is not present\n");
    }
    else
    {
        printf("w is not present\n");
    }

    return 0;
}