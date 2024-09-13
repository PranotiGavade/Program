//Input: 5
//Output :*5    5 -4    4   -3  3   -2  2   1   0 
            
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = -iNo; iCnt<=iNo; iCnt++)
    {  
        printf("%d\t",iCnt);
        
    }
    //for(iCnt = 0;iCnt <= 5; iCnt++)
    //{
    //    printf("%d\t",iCnt);
    //}
    printf("\n"); 
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}