#include<stdio.h>
#include<stdlib.h>


int FirstOcc(int Arr[], int iSize,int iNo)
{
    int i = 0;
    int j = 0;

    for(i = 0 ; i < iSize; i++)
    {
        if(Arr[i] == Arr[j])
        {
            return i;
        }
        else
        {
            return -1;
        }
    }
}

int main()
{   
    int iSize = 0, iCnt = 0,  iRet = 0,iValue = 0;
    int *p = NULL;
   
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

    iRet = FirstOcc(p,iSize,iValue);
    if(iRet == -1)
    {
        printf("Their is no such number",iRet);
    }
    else
    {
        printf("First occurrence of number is %d",iRet);
    }
    free(p);

    return 0;
}
