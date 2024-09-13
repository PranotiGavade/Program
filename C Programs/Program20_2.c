#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int i = 0;
    int iEven = 0;
    int iOdd = 0;
    int iFrequency  = 0;

    for(i = 0 ; i < iSize; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iEven++;
        }
        if((Arr[i] % 2) != 0)
        {
            iOdd++;
        }
        iFrequency = iEven - iOdd;
    }
    return iFrequency;
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

    iRet = CountEven(p,iSize);
    printf("Frequency of even  and odd elements are : %d\n",iRet);
    
    free(p);

    return 0;
}
