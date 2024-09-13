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

void Perfect(PNODE First)
{
    PNODE temp = First;

    while(temp != NULL)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= temp->data/2; iCnt++)
        {
            if(temp->data % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        if(iSum == temp->data)
        {
            printf("Perfect number is: %d\n",temp->data);
        }
        temp = temp->next;
    } 
}
int main()
{
    PNODE Head = NULL;
   
    InsertFirst(&Head,89);
    InsertFirst(&Head,6);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);

    Perfect(Head);

    return 0;
}