#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iStart = 0, iEnd = 0, temp = 0;

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart < iEnd)
    {
        temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}
int main()
{
    int iCount = 0, i = 0;
    int *p = NULL;

    printf("Enter number of elements that you want :\n");
    scanf("%d",&iCount);

    p = (int *)malloc(iCount * sizeof(int));

    printf("Enter elements :\n");
    for(i = 0; i<iCount; i++)
    {
        scanf("%d",&p[i]);
    }

    Display(p,iCount);

    printf("Data after updation :\n");
    for(i = 0; i<iCount; i++)
    {
        printf("%d\n",p[i]);
    }

    return 0;
}
