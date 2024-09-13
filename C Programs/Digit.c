
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No) {
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->data = No;
    newn->next = NULL;

    if (*First == NULL) {
        *First = newn;
    } else {
        newn->next = *First;
        *First = newn;
    }
}

int SumDigit(PNODE First) {
    PNODE temp = First;
    int totalSum = 0;

    while (temp != NULL) {
        int num = temp->data;
        int digitSum = 0;
        
        while (num != 0) {
            digitSum += num % 10;
            num /= 10;
        }
        
        totalSum += digitSum;
        temp = temp->next;
    }
    
    return totalSum;
}

int main() {
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head, 41);
    InsertFirst(&Head, 32);
    InsertFirst(&Head, 20);
    InsertFirst(&Head, 11);

    iRet = SumDigit(Head);

    printf("Summation of digits is : %d\n", iRet);
    return 0;
}

