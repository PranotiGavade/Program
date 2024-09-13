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

void Display(PNODE First,PNODE Last)
{
    if((First == NULL) && (Last == NULL))
    {
        printf("Linked List is empty");
        return;
    }
    do
    {
        printf("| %d |->",First->data);
        First = First->next;
    }while(First != Last->next);

    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;

    if((First == NULL) && (Last == NULL))
    {
        printf("Linked List is empty\n");
    }
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
    newn->next = NULL;

    if((*First == NULL) &&(*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn; 
    }
    (*Last)->next = *First;
}

void InsertLast(PPNODE First,PPNODE Last,int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*First == NULL) &&(*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        (*Last)->next = newn;
        *Last = newn;
    }
    (*Last)->next = *First;
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
    int i = 0;
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
    printf("Number of elements are :%d",iRet);

    DeleteLast(&Head,&Tail);
    Display(Head,Tail);

    return 0;
}