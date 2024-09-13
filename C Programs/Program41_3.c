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

int Sum(PNODE First)
{
    int iSum = 0, i = 0;

    while(First != NULL)
    {
        iSum = First->data + iSum;
        First = First->next;
    } 
    i++;
    return iSum;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;
   
    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);

   
    iRet = Sum(Head);

    printf("Summation is : %d",iRet);

    return 0;
}