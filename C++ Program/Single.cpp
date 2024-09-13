#include<iostream>
using namespace std;

class Base
{
    public:
        int A;
        int B;

        Base()
        {
            cout<<"Inside contsructor\n";
            A = 11;
            B = 21;
        }
        ~Base()
        {
            cout<<"Inside destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Base Fun\n";
        }
};

class Derived:public Base
{
    public:
        int X,Y;

        Derived()
        {
            cout<<"Inside derived constructor\n";
            X = 51;
            Y = 101;
        }
        ~Derived()
        {
            cout<<"Inside derived constructor\n";
        }
        void Gun()
        {
            cout<<"Inside derived gun\n";
        }
};

int main()
{
    Derived dobj;

    cout<<"Size of object is:"<<sizeof(dobj)<<"\n";

    cout<<dobj.A<<"\n";
    cout<<dobj.B<<"\n";
    cout<<dobj.X<<"\n";
    cout<<dobj.Y<<"\n";

    return 0;
}