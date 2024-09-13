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
    if((First == NULL) && (Last == NULL))
    {
        return;
    }
    do
    {
        printf("| %d |<=>",First->data);
        First = First->next;
    }while(First != Last->next);

    printf("\n");
}

int Count(PNODE First,PNODE Last)
{
    int iCnt = 0;
    if((First == NULL) && (Last == NULL))
    {
        return 0;
    }
    do
    {
        iCnt++;
        First = First->next;
    }while(First != (Last)->next);

    return iCnt;
}
void InsertFirst(PPNODE First,PPNODE Last,int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;
        //newn->prev = *Last;
        //(*Last)->next = newn;
    }
    *First = newn;
}

void InsertLast(PPNODE First,PPNODE Last,int No)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
        (*First)->prev = newn;
    }
    else
    {
        newn->prev = *Last;
        newn->next = *First;
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
        printf("Invalid position\n");
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
    if((*First == NULL) && (*Last == NULL))
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
    }
}

void DeleteLast(PPNODE First,PPNODE Last)
{
    PNODE temp = NULL;

    if((*First == NULL) && (*Last == NULL))
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
    PNODE temp = NULL;

    int i = 0;
    int iLength = 0;

    iLength = Count(*First,*Last);

   
    if((iPos < 1) || (iPos > iLength+1))
    {
        printf("Invalid position\n");
        return;
    }
    if(iPos == 1)
    {
        DeleteFirst(First,Last);
    }
    if(iPos == iLength+1)
    {
        DeleteLast(First,Last);
    }
    else
    {
        temp = *First;

        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;  
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
    iRet = Count(Head,Tail);
    printf("Number of elements are : %d\n",iRet);

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