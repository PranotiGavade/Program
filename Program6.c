/*
step 1: Understand the problem statement
step 2: Write the algorithm
step 3: Decide the programing lagnuage
step 4: Write the program
step 5: Test the program


*/


//problem statement :accept 2 numbers and perform addition

//


















#include<stdio.h>
////////////////////////////////////////////////////////////
//
// Function name :  Addition
// Description:     It is used to perform addition of 2 floats
// Input :          Float,Float
// Output :         Float
// Author :         Pranoti bapuso gavade
// Date :           15/04/2024
//
///////////////////////////////////////////////////////////

float Addition(float fNo1,float fNo2)
{
    float fAns = 0.0;
    fAns = fNo1 + fNo2;
    return fAns;
}

//////////////////////////////////////////////
//Fu
////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    float fResult = 0.0f;


    printf("Enter first number : \n");
    scanf("%f",&fValue1);

    printf("Enter second number :\n");
    scanf("%f",&fValue2);

    fResult = Addition(fValue1, fValue2);

    printf("Addition is : %d\n",fResult);

    return 0;
}