#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength,int iNo)
{
    int i = 0, iMult = 0;
    for(i=0; i<iLength; i++)
    {
        if(Arr[i] % iNo == 0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0,iValue = 0;
    int *p = NULL;

    printf("Enter number of elements that you want:\n");
    scanf("%d\n",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements :\n");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize,iValue);

    free(p);

    return 0;
}