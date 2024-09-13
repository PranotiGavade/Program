#include<stdio.h>
#include<stdlib.h>

int Sum(int Arr[], int iSize)
{
    int i = 0;
    int iDigit = 0;
    int iSum = 0;
    while(i > 0)
    {
        iDigit = Arr[i] % 10;
        iSum = iSum + iDigit;
        i++;
    }
    return iSum;      
}

int main()
{   
    int iSize = 0, iCnt = 0, iRet = 0;
    int *p = NULL;
   
    printf("Enter number of elements that you want : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
 
    iRet = Sum(p,iSize);

    printf("Summation is : %d",iRet);
    
    free(p);

    return 0;
}
