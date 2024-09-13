#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo < 0)
    {
        return;
    }
    
    int iCount = 0;
    int i = 0; 
    for(i =1; iCount < iNo; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ",i);
            iCount++;
        }
        
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}