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

void Display(PNODE First)
{
    if(First == NULL)
    {
        return;
    }
    while(First != NULL)
    {
        printf("%d\t",First->data);
        First = First->next;
    }
    printf("\n");
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
void Push(PPNODE First,int No)
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

int Pop(PPNODE First)
{
    int iValue = 0;
    PNODE temp = NULL;

    if(*First == NULL)
    {
        printf("Unable to delet as LL is empty\n");
        return -1;
    }
    else
    {
        temp = *First;

        iValue = (*First)->data;
        *First = (*First)->next;
        free(temp);
    }
    return iValue;
}
int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    Push(&Head,10);
    Push(&Head,20);
    Push(&Head,30);
    Push(&Head,40);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements are:%d\n",iRet);

    iRet = Pop(&Head);
    printf("Poped elemens is :%d\n",iRet);
    Display(Head);

    iRet = Pop(&Head);
    printf("Poped elemens is :%d\n",iRet);
    Display(Head);

    iRet = Count(Head);
    printf("Number of elements are:%d\n",iRet);

    Push(&Head,50);

    Display(Head);

    return 0;
}