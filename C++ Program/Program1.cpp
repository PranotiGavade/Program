#include<iostream>
using namespace std;

int main()
{
    char arr[30];

    cout<<"Enter your name :"<<endl;
    cin.getline(arr,30);

    cout<<"Hello "<<arr<<endl;

    return 0;
}