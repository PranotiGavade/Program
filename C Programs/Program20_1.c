#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
    int i = 0;
    int iFrequency = 0;
    for(i = 0; i<iLength; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}
int main()
{
    int iCnt = 0, iSize = 0, iRet = 0;
    int *p = NULL;

    printf("Enter number of elements that you want :\n");
    scanf("%d ",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter elements :\n");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p,iSize);

    printf("Frequency of even elements are : %d\n",iRet);

    free(p);

    return 0;
}