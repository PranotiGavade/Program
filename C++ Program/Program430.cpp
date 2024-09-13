#include<iostream>
using namespace std;

template <class T>
void Swap(T &A,T &B)
{
    T Temp;

    Temp = A;
    A = B;
    B = Temp;
}

int main()
{
    char cValue1 = 'A', cValue2 = 'M';

    int iValue1 = 10, iValue2 = 20;

    float fValue1 = 10.5f, fValue2 = 11.6f;

   double dValue1 = 10.43, dValue2 = 20.43;

    cout<<"Value of Value1 varibale is :"<<Value1<<"\n";
    cout<<"Value of Value2 varibale is :"<<Value2<<"\n";

    Swap(Value1,Value2);

    cout<<"Value of Value1 variable after swapping is :"<<Value1<<"\n";
    cout<<"Value of Value2 variable after swapping is :"<<Value2<<"\n";

    return 0;
}