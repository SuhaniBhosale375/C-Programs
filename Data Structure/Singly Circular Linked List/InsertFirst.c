
#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, PPNODE Last, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))    // Empty LL
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else    // LL contains atleast one node
    {
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
    }
}

void Display(PNODE First, PNODE Last)
{
    printf("Elements of Linked list are : \n");

    do
    {
        printf("| %d |-> ",First->data);
        First = First -> next;
    }while(First != Last->next);
    printf("\n");
}

int Count(PNODE First, PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First -> next;
    }while(First != Last->next);
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;
    
    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);

    Display(Head, Tail);
    iRet = Count(Head, Tail);
    printf("Number of elements are : %d\n",iRet);
    
   
    return 0;
}