//algorithm
/*
    Accept first number from user as No1
    accept second number from user as No2
    create one variable to store answer as Ans
    perform the addition of two numbers
    store the result into address
    display the value from Ans

*/

#include<stdio.h>
int Addition
            (
                No1,
                No2
            )
{
    int iAns = 0;
    iAns = No1 + No2;
    return iAns;

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iResult = 0;

    printf("Enter first number :\n");
    scanf("%d",&iValue1);

    printf("Enter second number :\n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1,iValue2);

    printf("Addition is :%d",iResult);

    return 0;
}