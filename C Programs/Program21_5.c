#include<stdio.h>
#include<stdlib.h>


int Product(int Arr[], int iSize)
{
    int i = 0;
    int iMult = 1;
   
    for(i = 0 ; i < iSize; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            iMult = iMult * Arr[i];
        }
    }
    return iMult;
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
 
    iRet = Product(p,iSize);

    printf("Product is %d",iRet);
    
    free(p);

    return 0;
}
