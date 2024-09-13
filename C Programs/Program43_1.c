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

void Reverse(PNODE First)
{
    PNODE temp = First;
    
    while(temp != NULL)
    {  
        int iDigit = 0;
        int iRev = 0;

        while(temp->data!= 0)
        {
            iDigit = temp->data % 10;
            iRev = (iRev * 10 )+ iDigit; 
            temp->data = temp->data/10;
        }
        temp->data = iRev;
        temp = temp->next;
    }
}
int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,98);
    InsertFirst(&Head,16);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);

    Reverse(Head);

    printf("Reverse number in link list :\n");
    Display(Head);
    return 0;
}