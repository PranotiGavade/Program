#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int i = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    int iSum = 0;
    for(i = 0; i<iLength; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iSumEven = iSumEven + Arr[i];
        }
        if((Arr[i] % 2) != 0)
        {
            iSumOdd = iSumOdd + Arr[i];
        }
        iSum = iSumEven - iSumOdd;
    }
    return iSum;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter elements :\n");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        //printf("Enter elements : %d",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);
    printf("Result is %d",iRet);

    free(p);

    return 0;
}