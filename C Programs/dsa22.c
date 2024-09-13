#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE First,PNODE Last)
{
    do
    {
        printf("| %d |->",First->data);
        First = First->next;
    }while(First != Last->next);
    printf("\n");
}

int Count(PNODE First,PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First->next;
    }while(First != Last->next);

    return iCnt;
}
void InsertFirst(PPNODE First,PPNODE Last,int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->prev = NULL;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
        *Last = newn;
        (*First)->prev = newn;
    }
    else
    {
        newn->next = *First;
        newn->prev = *Last;
        *First = newn;
        (*First)->prev = newn;
        (*Last)->next = newn;
    }
}

void InsertLast(PPNODE First,PPNODE Last,int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->prev = NULL;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
        *Last = newn;
        (*First)->prev = newn;
    }
    else
    {
        temp = *Last;

        newn->prev = temp;
        temp->next = newn;
        
        (*First)->prev = newn;
        (*Last)->next = newn;
        *Last = newn;
    }
}

void InsertAtPos(PPNODE First,PPNODE Last,int No,int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    int i = 0;
    int iLength = 0;

    

    iLength = Count(*First,*Last);

    if((iPos < 1) || (iPos > iLength+1))
    {
        return;
    }
    if(iPos == 1)
    {
        InsertFirst(First,Last,No);
    }
    if(iPos == iLength+1)
    {
        InsertLast(First,Last,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;
        temp = *First;
        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
    }
}
void DeleteFirst(PPNODE First,PPNODE Last)
{
    if(*First == NULL)
    {
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *First = (*First)->next;
        free((*Last)->next);
        (*Last)->next = *First;
        (*First)->prev = *Last;
    }
}

void DeleteLast(PPNODE First,PPNODE Last)
{
    PNODE temp = NULL;

    if(*First == NULL)
    {
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        temp = *First;

        while(temp->next != *Last)
        {
            temp = temp->next;
        }
        free(*Last);
        *Last = temp;
        (*Last)->next = *First;
    }
}

void DeleteAtPos(PPNODE First,PPNODE Last,int iPos)
{
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    int i = 0;
    int iLength = 0;

    iLength = Count(*First,*Last);

    if((iPos < 1) || (iPos > iLength))
    {
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst(First,Last);
    }
    if(iPos == iLength)
    {
        DeleteLast(First,Last);
    }
    else
    {
        temp1 = *First;
        for(i = 1; i<iPos-1; i++)
        {
            temp1 = temp1->next;
        }
        temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
        temp1->next->prev = temp1;
    }
}
int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);

    InsertLast(&Head,&Tail,101);
    InsertLast(&Head,&Tail,111);
    InsertLast(&Head,&Tail,121);

    Display(Head,Tail);

   InsertAtPos(&Head,&Tail,105,5);
   Display(Head,Tail);
   iRet = Count(Head,Tail);
   printf("Number of elements are : %d\n",iRet);

   DeleteAtPos(&Head,&Tail,5);
   Display(Head,Tail);
   iRet = Count(Head,Tail);
   printf("Number of elements are : %d\n",iRet);

    return 0;
}