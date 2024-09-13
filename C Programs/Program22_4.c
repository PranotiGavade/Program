#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iSize)
{
    int i = 0;
    int iDigit = 0;
    
    while(i > 0)
    {
        iDigit = Arr[i] % 10;
        if(iDigit = 3)
        {
            printf("%d",Arr[i]);
            i++;
        }
    }        
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
 
    Digits(p,iSize);
    
    free(p);

    return 0;
}
