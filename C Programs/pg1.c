//algorithm
/*
    Accept first number from user and consider it as No1
    Accept second number from user and consider it as No2
    create one variable as Ans to store the amswer
    perform the addition of two numbers of No1 and No2
    Store the result into ans
    display the value of Ans as result
*/

#include<stdio.h>
float Addition
            (
                float No1,
                float No2          
            )
{
    float fAns = 0.0;
    fAns = No1 + No2;
    return fAns;
}    


int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    float fResult = 0.0;

    printf("Enter first number :\n");
    scanf("%f",&fValue1);

    printf("Enter second number :\n");
    scanf("%f",&fValue2);

    fResult = Addition(fValue1,fValue2);

    printf("Addition is :%f\n",fResult);


    return 0;
}
