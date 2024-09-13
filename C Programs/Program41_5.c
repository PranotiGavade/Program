#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First,int No)
{
   PNODE newn = NULL;

   newn = (PNODE)malloc(sizeof(NODE));

   newn->data = No;
   newn->next = NULL;

   if(*First == NULL)
   {
        *First = newn;
   }
   else
   {
        newn->next = *First;
        *First = newn;
   }
}

int Minimum(PNODE First)
{
    int iMin = First->data;

    while(First != NULL)
    {
        if(First->data < iMin)
        {
            iMin = First->data;
        }
        First = First->next;
    } 
    return iMin;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;
   
    InsertFirst(&Head,240);
    InsertFirst(&Head,320);
    InsertFirst(&Head,230);
    InsertFirst(&Head,110);

    iRet = Minimum(Head);

    printf("Minimum number is :%d",iRet);

    return 0;
}