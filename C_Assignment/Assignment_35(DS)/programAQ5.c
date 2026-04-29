///////////////////////////////////////////////////////////
//
//  File name : Assignement35Question5.c
//  Description : Write a program which display addition of digits of element from singly
//                linear linked list.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//
///////////////////////////////////////////////////////////

/*

Input linked list : |110|->|230|->|20|->|240|->|640|
Output : 2 5 2 6 10

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

int DisplayPrime(PNODE Head)
{
    int i = 0,iFlag = 0;

    while (Head != NULL)
    {
        iFlag = 1;

        if(Head ->Data <= 1)
        {
            iFlag = 0;
        }

        for(i = 2;i <= Head->Data/2;i++)
        {
            if((Head->Data % i) == 0)
            {
                iFlag = 0;
                break;
            }
        }

        if(iFlag == 1)
        {
            printf("%d\n",Head->Data);
        }

        Head = Head->Next;
    }
}

int AdditionEven(PNODE Head)
{
    int iSum = 0;

    while (Head != NULL)
    {
        if((Head->Data % 2) == 0)
        {
            iSum = iSum + Head->Data;
        }
        Head = Head->Next;
    }

    return iSum;
}

int SecMaximum(PNODE Head)
{
    int iMax = 0,iSecondMax = 0;

    if(Head == NULL || Head->Next == NULL)
    {
        return -1;
    }

    iMax = Head->Data;
    iSecondMax = Head->Data;

    while (Head != NULL)
    {
        if(Head->Data > iMax)
        {
            iSecondMax = iMax;
            iMax = Head->Data;
        }
        else if ((Head->Data > iSecondMax) && (Head->Data != iMax))
        {
            iSecondMax = Head->Data;
        }
        Head = Head->Next;
    }
    
    return iSecondMax;
}

void SumDigit(PNODE Head)
{
    int iDigit = 0,iSum = 0,iNo = 0;

    while (Head != NULL)
    {
        iNo = Head->Data;
        iSum = 0;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        
        printf("%d\n", iSum); 
        
        Head = Head ->Next;
    }
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
    InsertLast(&First,110);
    InsertLast(&First,230);
    InsertLast(&First,320);
    InsertLast(&First,240);

    Display(First);

    // Call all functions for below problem statements.

    printf("Perfect element are : \n");
    DisplayPerfect(First);
    // printf("Number of perfect elements are : %d\n",iRet);

    printf("Prime element are : \n");
    DisplayPrime(First);
    
    iRet = AdditionEven(First);

    printf("Addition of even number is : %d\n",iRet);

    iRet = SecMaximum(First);
    
    printf("Second maximum element is :%d\n",iRet);

    printf("Sum of digits is : ");
    
    SumDigit(First);

    return 0;
}