#include<iostream>
using namespace std;

class base
{
    public:
        int;
        float;
        double;

        void fun()
        {}

        void gun()
        {}
};

class derived:public base
{
    public:
        int;
        double;

        void sun()
};

int main()
{
    base bobj;
    derived dobj;
    
    return 0;
}