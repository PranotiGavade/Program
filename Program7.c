#include<stdio.h>

float Addition(
                float fNo1,   //first input
                float fNo2    //second input
            )
{
    float fAns = 0.0;        //variable to store result
    fAns = fNo1 + fNo2;
    return fAns;
}

int main()
{
    float fValue1 = 0.0f;    //variable to store first input
    float fValue2 = 0.0f;    //variable to store second input
    float fResult = 0.0f;    //variabl to store return value  

    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number :\n");
    scanf("%f",&fValue2);

    fResult = Addition(fValue1, fValue2);

    printf("Addition is : %f\n",fResult);

    return 0;
}

//Step 5 : Test the program
//Test case :
//Input 1 = 10.0 Input 2 = 20.0  Result = 10.0
//Input 1 = 0.0 Input 2 = 10.0  Result = 10.0
//Input 1 = 0.0 Input 2 = 0.0  Result = 0.0
//Input 1 = 10.0 Input 2 = -7.0  Result = 3.0
//Input 1 = -10.0 Input 2 = -7.0  Result = -17.0