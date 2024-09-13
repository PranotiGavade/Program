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

int CheckOcc(PNODE First,int No)
{
    int iCnt = 1, iPos = -1;

    bool bFlag = false;

    while(First != NULL)
    {
        if(First->data == No)
        {
            iPos = iCnt;
        }
        iCnt++;
        First = First->next;
    }
    return iPos;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,70);
    InsertFirst(&Head,30);
    InsertFirst(&Head,50);
    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);

    iRet = CheckOcc(Head,30);

    if(iRet == -1)
    {
        printf("There is no such element");
    }
    else
    {
        printf("Last occurence of element at position : %d",iRet1);
    }
    return 0;
}