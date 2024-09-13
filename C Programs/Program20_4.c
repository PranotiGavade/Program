#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize,int iNo)
{
    int i = 0, iFrequency = 0;

    for(i = 0 ; i < iSize; i++)
    {
        if(Arr[i] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{   
    int iSize = 0, iCnt = 0,iRet = 0, iValue = 0;
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

    iRet = Frequency(p,iSize,iValue);

    printf("Frequency of 11 is : %d",iRet);
    
    free(p);

    return 0;
}
