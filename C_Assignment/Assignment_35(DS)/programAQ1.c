///////////////////////////////////////////////////////////
//
//  File name : Assignement35Question1.c
//  Description : Write a program which displays all elements which are perfect from singly
//                linear linked list.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//
///////////////////////////////////////////////////////////

/*
Input linked list : |11|->|28|->|17|->|41|->|6|->|89|
Output : 6 28
*/


#include <stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Next = NULL;
    newn->Data = no;

    if (*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE first,int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while(temp ->Next != NULL)
        {
            temp = temp -> Next;
        }

        temp -> Next = newn;
    }
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->Data);
        first = first->Next;
    }

    printf("NULL\n");    
}

int DisplayPerfect(PNODE Head)
{
    int i = 0,iSum = 0,iCount = 0;

    while (Head != NULL)
    {
        iSum = 0;

        for(i = 1;i <= Head->Data/2;i++)
        {
            if((Head->Data % i) == 0)
            {
                iSum = iSum + i;
            }
        }

        if(iSum == Head->Data)
        {
            printf("%d\n", Head->Data);
            // iCount++;
        }

        Head = Head->Next;
    }

    // return iCount;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    Display(First);

    InsertLast(&First,28);
    InsertLast(&First,17);
    InsertLast(&First,41);
    InsertLast(&First,6);
    InsertLast(&First,89);

    Display(First);

    // Call all functions for below problem statements.

    DisplayPerfect(First);
    // printf("Number of perfect elements are : %d\n",iRet);

    return 0;
}