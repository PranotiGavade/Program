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

int Maximum(PNODE First)
{
    int iMax = 0;

    while(First != NULL)
    {
        if(First->data > iMax)
        {
            iMax = First->data;
        }
        First = First->next;
    } 
    return iMax;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;
   
    InsertFirst(&Head,240);
    InsertFirst(&Head,320);
    InsertFirst(&Head,230);
    InsertFirst(&Head,110);

    iRet = Maximum(Head);

    printf("Maximum number is :%d",iRet);

    return 0;
}