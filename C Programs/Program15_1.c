#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;
    int iCnt = 1;
    
    for(i = 1; i<=iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            if(iCnt <= 9)
            {
                printf("%d\t",iCnt++);
            }
        }
        printf("\n");
    }
    
}
int main()
{
    int iValue1 = 0,iValue2 = 0;

    printf("Enter number of rows");
    scanf("%d",&iValue1);

    printf("Enter number of columns");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;

}