#include<iostream>
using namespace std;

void strcpycapX(char *Dest, char *Src)
{
    while(*Src != '\0')
    {
        if(*Src != ' ')
        {
            *Dest = *Src;
            Dest++;
        }
        Src++;
    }

    *Dest = '\0';
}

int main()
{
    
    char Arr[30];
    char Brr[30];
   
    cout<<"enter source string :"<<endl;
    cin.getline(Arr,30);

    strcpycapX(Brr,Arr);

    cout<<"Destination String is :"<<Brr<<endl;
    return 0;
}