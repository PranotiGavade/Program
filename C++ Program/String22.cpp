#include<iostream>
using namespace std;

int Count(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }  

    return iCnt; 
}
int main()
{
    char Arr[30];
    int iRet = 0;

    cout<<"Enter string :";
    cin.getline(Arr,30);

    iRet = Count(Arr);

    printf("length of string is :%d",iRet);

    return 0;
}