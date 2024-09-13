// Aproach 1

#include<iostream>
using namespace std;

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iAns = 0;

    cout<<"Enter first number :"<<endl;
    cin>>iValue1;

    cout<<"Enter second number :"<<endl;
    cin>>iValue2;

    iAns = iValue1 + iValue2;

    cout<<"Additon is :"<<iAns<<endl;

    return 0;
}

//g++ Program192.cpp -o  Myexe
//Myexe.exe