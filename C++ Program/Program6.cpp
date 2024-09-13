#include<iostream>
using namespace std;

void strcpyX(char *dest, char *src)
{
    while(*src != '\0')
    {
        if(*src != ' ')
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

    cout<<"Enter string :"<<endl;
    cin.getline(arr,30);

    strcpyX(brr,arr);

    cout<<"Copied string is :"<<brr<<endl;

    return 0;
}