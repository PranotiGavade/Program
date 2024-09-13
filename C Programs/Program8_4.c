#include<stdio.h>

double FhtoCs(float fTemp)
{
    float celsius = 0.0;

    celsius = (fTemp-32)*(5/9);
    return celsius;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in fahrenheit");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("temperature in celsius is %f",dRet);

    return 0;
}