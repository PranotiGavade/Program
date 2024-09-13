#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int i = 0;
    int iMax = Arr[0]; 
    int iMin = Arr[0];
    int iDifference = 0;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
        iDifference = iMax - iMin;
    }
    return iDifference;
}


int main()
{   
    int iSize = 0, iCnt = 0,iRet = 0;
    int *p = NULL;
   
    printf("Enter number of elements that you want : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
 
    iRet = Difference(p,iSize);

    printf("Difference is : %d\n",iRet);
    
    free(p);

    return 0;
}
