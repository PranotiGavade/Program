#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char ch)
{
    bool bFlag = false;
    while(*ch != '\0')
    {
        if((*ch == 'a') || (*ch == 'e') || (*ch == 'i') || (*ch == 'o') || (*ch == 'u'))
        {
            bFlag = true;
            break;
        }
        ch++;
    }
    return bFlag;
}
int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf('contains vowel\n');
    }
    else
    {
        printf("It does not contains vowel\n");
    }

    return 0;
}