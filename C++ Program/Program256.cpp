#include<iostream>
using namespace std;

bool strcmpX(char *first, char *second)
{

    while((*first != '\0') && (*second != '\0'))
    {
        if(*first != *second)
        {
            break;
        }
        first++;
        second++;
    }
    if(*first == '\0' && *second == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet = false;
   
    cout<<"enter first string :"<<endl;
    cin.getline(Arr,30);

    cout<<"enter second string :"<<endl;
    cin.getline(Brr,30);

    bRet = strcmpX(Brr,Arr);

    if(bRet == true)
    {
        cout<<"Strings are identical"<<endl;
    }
    else
    {
        cout<<"strings are different"<<endl;
    }
    return 0;
}