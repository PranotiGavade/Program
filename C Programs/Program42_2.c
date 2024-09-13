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

bool CheckPrime(PNODE First)
{
    PNODE temp = First;

    while(temp != NULL)
    {
        int iCnt = 0;
        for(iCnt = 2; iCnt <= temp->data/2; iCnt++)
        {
            if(temp->data % iCnt == 0)
            {
               return false;
            }
            else
            {
                return true;
            }
               
        }
        temp = temp->next;
    } 
}
void DisplayPrime(PNODE First)
{
    PNODE temp = NULL;
    bool bRet = false;
    temp = First;
    while(temp != NULL)
    {
        if(bRet == true)
        {
            printf("%d\n",temp->data);
        }
        else
        {
            return;
        }
        temp = temp->next;
    } 
    
}
int main()
{
    PNODE Head = NULL;
    bool bRet = false;

    InsertFirst(&Head,89);
    InsertFirst(&Head,22);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);

    bRet = CheckPrime(Head);
    DisplayPrime(Head);

    return 0;
}