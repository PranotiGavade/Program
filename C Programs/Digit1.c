
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

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if (*First == NULL)
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
    while (temp != NULL)
    {
        printf("| %d |->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void Reverse(PNODE First)
{
    PNODE temp = First;
    while (temp != NULL)
    {
        int iRev = 0;
        int iNum = temp->data;
        while (iNum != 0)
        {
            int iDigit = iNum % 10;
            iRev = (iRev * 10) + iDigit;
            iNum = iNum / 10;
        }
        temp->data = iRev;
        temp = temp->next;
    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 41);
    InsertFirst(&Head, 32);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);

    printf("Original List:\n");
    Display(Head);

    Reverse(Head);

    printf("Reversed Numbers in List:\n");
    Display(Head);

    return 0;
}