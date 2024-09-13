#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    for(iCnt=1; iCnt<=5; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number ");
    scanf("%d",&iValue);
    
    MultipleDisplay(iValue);

    return 0;
}