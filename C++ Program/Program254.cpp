#include<iostream>
#include<string.h>

using namespace std;


int main()
{
    char Arr[30] = "hello world";
    char Brr[30] = "India";
   
    strcat(Brr,Arr);

    cout<<"Destination String is :"<<Brr<<endl;
    return 0;
}