#include<iostream>
#include<string.h>

using namespace std;

void strcpyX(char *dest, char *src)
{
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
int main()
{
    char arr[30] = "Radhe Radhe";
    char brr[30];

    strcpyX(brr,arr);

    cout<<"Destination string is :"<<brr<<endl;

    return 0;
}