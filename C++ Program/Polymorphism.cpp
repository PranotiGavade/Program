#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void Fun()
        {
            cout<<"Base fun\n";
        }
        virtual void Gun()
        {
            cout<<"Base Gun\n";
        }
        void Sun()
        {
            cout<<"base Sun\n";
        }
        virtual void Mun()
        {
            cout<<"Base Mun\n";
        }

};

class Derived:public Base
{
    public:
        int X,Y;
        virtual void Gun()
        {
            cout<<"Derived Gun\n";
        }
        virtual void Sun()
        {
            cout<<"Derived Sun\n";
        }
        virtual void Run()
        {
            cout<<"Derived Run\n";
        }
};

int main()
{
    Derived dobj;
    Base *bp = &dobj;

    bp->Fun();
    bp->Gun();
    bp->Sun();
    bp->Mun();
    //bp->Run();

    return 0;
}