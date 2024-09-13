//Input: 5
//Output :A   B   C   D   E 
            
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = 'A';

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {  
        printf("%c\t",ch);
        ch++;
        
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