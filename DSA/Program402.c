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
    PNODE temp = First;

    while(temp != NULL)
    {
        printf("%d\t",temp->data);
        temp = temp->next;
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
void EnQueue(PPNODE First,int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

int DeQueue(PPNODE First)
{
    PNODE temp = NULL;
    int iValue = 0;

    if(*First == NULL)
    {
        printf("Unable to delete element as LL is empty\n");
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

    EnQueue(&Head,40);
    EnQueue(&Head,30);
    EnQueue(&Head,20);
    EnQueue(&Head,10);

    Display(Head);
    iRet = Count(Head);
    printf("Number of elements in queue are :%d\n",iRet);

    iRet = DeQueue(&Head);
    printf("Romoved elements removed from queue is:%d\n",iRet);
    Display(Head);

    iRet = Count(Head);
    printf("Number of elements in queue are:%d\n",iRet);

    EnQueue(&Head,50);
    Display(Head);

    iRet = Count(Head);
    printf("Number of elements in queue are :%d\n",iRet);

    return 0;
}