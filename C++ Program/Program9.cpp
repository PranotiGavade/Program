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
    char arr[30];
    char brr[30];
    bool bRet = false;

    cout<<"Enter first string :"<<endl;
    cin.getline(arr,30);

    cout<<"Enter second string :"<<endl;
    cin.getline(brr,30);

    bRet = strcmpX(brr,arr);

    if(bRet == true)
    {
        cout<<"Strings are identical"<<endl;
    }
    else
    {
        cout<<"Strings are different"<<endl;
    }

    return 0;
}