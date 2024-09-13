#include<iostream>
using namespace std;

class Demo
{
    public:
        void fun(int *p)
        {
            cout<<"first defination\n";
        }
        void fun(float *p)
        {
            cout<<"second defination\n";
        }
        void fun(int no)
        {
            cout<<"third defination\n";
        }

};
int main()
{
    int no =11;
    float f = 3.14;

    Demo obj();

    obj.fun(no);
    obj.fun(&no);
    obj.fun(&f);
    
    return 0;
}