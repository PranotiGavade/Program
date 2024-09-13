#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
   int i = 0;
   for(i = 0; i<iSize; i++)
   {
        if(Arr[i] % 5 == 0)
        {
            printf("%d\n",Arr[i]);
        }
   }
   
}

int main()
{
    int iCount = 0, i = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you want : \n");
    scanf("%d",&iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d",&Brr[i]);
    }

   printf("Entered number of elements are :\n");
    for(i = 0; i<iCount; i++)
    {
        printf("%d\n",Brr[i]);
    }

    Display(Brr,iCount);

    free(Brr);

    return 0;
}

