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

void DisplayLarge(PNODE First)
{
    PNODE temp = First;
    
    while(temp != NULL)
    {  
        int iDigit = 0;
        int iMax = 0;

        while(temp->data!= 0)
        {
            iDigit = temp->data % 10;
            temp->data = temp->data/10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
        }
        printf("| %d |->",iMax);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,419);
    InsertFirst(&Head,532);
    InsertFirst(&Head,250);
    InsertFirst(&Head,11);

    DisplayLarge(Head);
    
    return 0;
}