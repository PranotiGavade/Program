#include<iostream>
using namespace std;

void strcpyX(char *Dest, char *Src)
{
    while(*Dest != '\0')
    {
        Dest++;
    }

    while(*Src != '\0')
    {
        *Dest = *Src;
        Dest++;
        Src++;
    }
    *Dest = '\0';
}
int main()
{
    char Arr[30];
    char Brr[30] = "Hello";

    cout<<"Enter source string :"<<endl;
    cin.getline(Arr,30);

    strcpyX(Brr,Arr);

    cout<<"Destination string is :"<<Brr<<endl;
    return 0;
}