#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1;
        int No2;

        Demo()
        {
            cout<<"Inside constructor\n";
            No1 = 11;
            No2 = 21;
        }
        ~Demo()
        {
            cout<<"Inside destructor\n";
        }
        void Fun()
        {
            cout<<"Inside fun of demo class\n";
        }
};

int main()
{
    cout<<"Inside main\n";

    Demo obj1;

    cout<<"size of object is :"<<sizeof(obj1)<<"\n";
    cout<<"value of no1 :"<<obj1.No1<<"\n";
    cout<<"value of no2 :"<<obj1.No2<<"\n";

    obj1.Fun();

    return 0;
}