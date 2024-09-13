#include<iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0;
    
    cout<<"Enter number of element :\n";
    cin>>iLength;

    ptr = new int[iLength];

    cout<<"Enter the elements :\n";
    for(i= 0; i<iLength; i++)
    {
        cin>>ptr[i];
    }

    cout<<"Entered elemens are :\n";
    for(i=0; i<iLength; i++)
    {
        cout<<ptr[i]<<"\n";
    }

    delete []ptr;
    return 0;
}