#include<iostream>
using namespace std;

void strcpysmallX(char *dest, char *src)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}
int main()
{
    char arr[30];
    char brr[30];

    cout<<"Enter String :"<<endl;
    cin.getline(arr,30);

    strcpysmallX(brr,arr);

    cout<<"Destination string is :"<<brr<<endl;
    return 0;
}