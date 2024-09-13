#include<stdio.h>
#include<stdlib.h>

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

int Addition(PNODE First)
{
    PNODE temp = First;
   int iSum = 0;
    while(temp != NULL)
    {  
         
        if(temp->data % 2 == 0)
        {
            iSum = iSum + temp->data;
        }
        temp = temp->next;
    }
    return iSum;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,41);
    InsertFirst(&Head,32);
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);

    iRet = Addition(Head);

    printf("Summation of even elements is : %d",iRet);
    return 0;
}