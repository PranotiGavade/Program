#include<iostream>
using namespace std;

int strlenX(char *str)
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
    char arr[30];
    int iRet = 0;

    cout<<"Enter your name :"<<endl;
    cin.getline(arr,30);

    iRet = strlenX(arr);

    cout<<"Length of string is :"<<iRet<<endl;

    return 0;
}