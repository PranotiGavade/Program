#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int i = 0;
    for(i = 0; i<iLength; i++)
    {
        if(((Arr[i] % 2) == 0) && (Arr[i] % 5) == 0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
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
 
    printf("Entered number of elements are :\n");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("%d\n",p[iCnt]);
    }

    Display(p,iSize);
   
    free(p);

    return 0;
}