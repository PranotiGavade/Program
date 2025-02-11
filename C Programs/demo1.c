#include<stdio.h>

void fun();
void gun();

int main()
{
    printf("Inside main\n");
    fun();
    gun();

    return 0;
}
void gun()
{
    printf("Inside gun\n");
}
void fun()
{
    printf("Inside fun\n");
}

