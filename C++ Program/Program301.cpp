#include<iostream>
using namespace std;

int StrCapX(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++; 
        }
        str++;
        StrCapX(str);
    }
    return iCnt;
}
int main()
{
    char Arr[30];
    int iRet  = 0;

    cout<<"Enter string :"<<endl;
    cin.getline(Arr,30);

    iRet = StrCapX(Arr);

    cout<<"Number of capital letters are  :"<<iRet<<endl;

    return 0;
}