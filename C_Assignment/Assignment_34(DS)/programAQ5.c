///////////////////////////////////////////////////////////
//
//  File name   : Assignement34Question5.c
//  Description : Write a program which return smallest element from singly linear linked
//                list.
//  Author      : Kartik Ganesh Jare
//  Date        : 13/11/25
//
///////////////////////////////////////////////////////////

/*

Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 20

*/

#include <stdio.h>
#include <stdlib.h>

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

void InsertLast(PPNODE first, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = no;
    newn->Next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while (temp->Next != NULL)
        {
            temp = temp->Next;
        }

        temp->Next = newn;
    }
}

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d | -> ", first->Data);
        first = first->Next;
    }

    printf("NULL\n");
}

int SearchFirstOcc(PNODE Head, int no)
{
    int iPos = 1;

    while (Head != NULL)
    {
        if (Head->Data == no)
        {
            return iPos;
        }
        Head = Head->Next;
        iPos++;
    }
    return -1;
}

int SearchLastOcc(PNODE Head, int no)
{
    int iPos = 1;
    int LastPos = -1;

    while (Head != NULL)
    {
        if (Head->Data == no)
        {
            LastPos = iPos;
        }
        Head = Head->Next;
        iPos++;
    }
    return LastPos;
}

int Addition(PNODE Head)
{
    int iSum = 0;
    
    while (Head != NULL)
    {
        iSum = Head->Data + iSum;    
        Head = Head ->Next;
    }
    
    return iSum;
}

int Maximum(PNODE Head)
{
    int iMax = 0;

    if (Head == NULL)
    {
        return 0;
    }
    
    iMax = Head->Data;

    while (Head != NULL)
    {
        if ((Head->Data > iMax))
        {
            iMax = Head->Data;
        }
        Head = Head->Next;
    }

    return iMax;
}

int Minimum(PNODE Head)
{
    int Min = 0;

    if (Head == NULL)
    {
        return 0;
    }
    
    Min = Head->Data;

    while (Head != NULL)
    {
        if ((Head->Data < Min))
        {
            Min = Head->Data;
        }
        Head = Head->Next;
    }

    return Min;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    // InsertFirst(&First, 101);
    // InsertFirst(&First, 51);
    // InsertFirst(&First, 21);
    // InsertFirst(&First, 11);
    // Display(First);

    InsertLast(&First, 10);
    InsertLast(&First, 20);
    InsertLast(&First, 30);
    InsertLast(&First, 40);
    InsertLast(&First, 50);
    InsertLast(&First, 30);
    InsertLast(&First, 70);
    InsertLast(&First, 101);
    InsertLast(&First, 230);
    InsertLast(&First, 320);
    InsertLast(&First, 240);
    
    Display(First);

    // Call all functions for below problem statements.

    iRet = SearchFirstOcc(First, 30);

    if (iRet == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at position : %d\n", iRet);
    }

    iRet = SearchLastOcc(First, 30);

    if (iRet == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at position : %d\n", iRet);
    }

    iRet = Addition(First);

    printf("Addition of element is : %d\n",iRet);

    iRet = Maximum(First);

    printf("Maximun element is : %d\n",iRet);

    iRet = Minimum(First);

    printf("Minimum element is : %d\n",iRet);

    return 0;
}