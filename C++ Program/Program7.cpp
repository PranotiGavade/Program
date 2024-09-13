#include<iostream>
using namespace std;

void strcpyX(char *dest, char *src)
{
    while(*dest != '\0')
    {
        dest++;
    }
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
int main()
{
    char arr[30];
    char brr[30] = "Radhe";

    cout<<"Enter source string :"<<endl;
    cin.getline(arr,30);

    strcpyX(brr,arr);

    cout<<"Destination string is :"<<brr<<endl;
    return 0;
}