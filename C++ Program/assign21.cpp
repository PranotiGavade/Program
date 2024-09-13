#include<iostream>
using namespace std;

class Demo
{
    public:
        void fun(int i)
        {
            cout<<"first defination\n";
        }
        void fun(int i,int j)
        {
            cout<<"second defination\n";
        }
};

int main()
{
    Demo obj;

    obj.fun(10);
    obj.fun(10,20);

    return 0;
}