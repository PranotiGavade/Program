#include<iostream>
using namespace std;

void strcatX(char *dest, char *src)
{
    while(*dest != '\0')
    {
        dest++;
    }
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
    char arr[30] = "Shyam";
    char brr[30] = "Radhe";

    strcatX(brr,arr);

    cout<<"Destination is :"<<brr<<endl;

    return 0;
}