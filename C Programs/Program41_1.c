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

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}

int CheckOcc(PNODE First,int No)
{
    int iCnt = 1;
    bool bFlag = false;

    while(First != NULL)
    {
        if(First->data == No)
        {
            bFlag = true;
            break;
        }
        iCnt++;
        First = First->next;
    }
    if(bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iRet1 = 0;

    InsertFirst(&Head,70);
    InsertFirst(&Head,30);
    InsertFirst(&Head,50);
    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);

    iRet = Count(Head);

    iRet1 = CheckOcc(Head,30);

    if(iRet1 == -1)
    {
        printf("There is no such element");
    }
    else
    {
        printf("element occurs at position : %d",iRet1);
    }
    return 0;
}