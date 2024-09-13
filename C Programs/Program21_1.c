#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iSize,int iNo)
{
    int i = 0;

    for(i = 0 ; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }
    }
    
}

int main()
{   
    int iSize = 0, iCnt = 0, iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements that you want : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
 
    printf("Enter the element that you want to search :\n");
    scanf("%d",&iValue);

    bRet = Check(p,iSize,iValue);
    if(bRet == TRUE)
    {
        printf("Number is present",bRet);
    }
    else
    {
        printf("Number is not present",bRet);
    }
    free(p);

    return 0;
}
