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

void Display(PNODE First)
{
    PNODE temp = First;
    while(temp != NULL)
    {
        printf("| %d |->",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void SumDigit(PNODE First)
{
    PNODE temp = First;
    
    while(temp != NULL)
    {  
        int iDigit = 0;
        int iSum = 0;
        while(temp->data != 0)
        {
            iDigit = temp->data % 10;
            iSum = iSum + iDigit;
            temp->data = temp->data/10;
        }
        temp->data = iSum;
        temp = temp->next;
    }
}
int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,640);
    InsertFirst(&Head,240);
    InsertFirst(&Head,20);
    InsertFirst(&Head,230);
    InsertFirst(&Head,110);

    SumDigit(Head);

    printf("Summation of digits are :");
    Display(Head);
    return 0;
}