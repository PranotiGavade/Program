#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[], int iSize,int iStart,int iEnd)
{
    int i = 0;
    //int iNo = 0;
    printf("Numbers in range are :\n");
    for(i = 0 ; i < iSize; i++)
    {
        if((Arr[i] > iStart) && (Arr[i] < iEnd))
        {
            printf("%d\n",Arr[i]);
        }
    }
}

int main()
{   
    int iSize = 0, iCnt = 0,iValue1 = 0, iValue2 = 0;
    int *p = NULL;
   
    printf("Enter number of elements that you want : \n");
    scanf("%d",&iSize);

    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
 
    Range(p,iSize,iValue1,iValue2);
    
    free(p);

    return 0;
}
