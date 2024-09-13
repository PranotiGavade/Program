//Input: 5
//Output :  &   &   &   &   &
        //*   *   *   *   *
    //      $   $   $   $   $
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1;iCnt<= iNo; iCnt++)
    {
        printf("&\t");    
    }
    printf("\n"); 
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("*\t\n");
    }
    printf("\n"); 
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("$\t\n");
    }
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