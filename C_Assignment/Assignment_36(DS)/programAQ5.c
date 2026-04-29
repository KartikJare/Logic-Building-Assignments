///////////////////////////////////////////////////////////
//
//  File name : Assignement36Question5.c
//  Description : Write a program which display largest digits of all element from singly
//                linear linked list.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//
///////////////////////////////////////////////////////////

/*

Input linked list : |11|->|250|->|532|->|419|

Output : 1 5 5 9

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

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->Data);
        first = first->Next;
    }

    printf("NULL\n");    
}

void Reverse(PNODE Head)
{
    int iNo = 0,iDigit = 0,iRev = 0;

    while (Head != NULL)
    {
        iNo = Head->Data;
        iRev = 0;

        while (iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = (iRev * 10) + iDigit;
            iNo = iNo / 10;
        }

        Head->Data = iRev;

        Head = Head->Next;
    }
}

void DisplayPallindrome(PNODE Head)
{
    int iNo = 0,iDigit = 0,iRev = 0;

    while (Head != NULL)
    {
        iNo = Head->Data;
        iRev = 0;
        int temp = iNo;

        while (temp != 0)
        {
            iDigit = temp % 10;
            iRev = (iRev * 10) + iDigit;
            temp = temp / 10;
        }

        if(iRev == iNo)
        {
            printf("%d\n",iNo);
        }
        
        Head = Head->Next;
    }
}

void DisplayProduct(PNODE Head)
{
    int iNo = 0,iDigit = 0,iProduct = 1;

    while (Head != NULL)
    {
        iNo = Head ->Data;
        iProduct = 1;

        while (iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit != 0)
            {
                iProduct = iProduct * iDigit;
            }
            iNo = iNo / 10;
        }

        printf("%d\n",iProduct);
        
        Head = Head->Next;
    }
}

void DisplaySmall(PNODE Head)
{
    int iNo = 0,iDigit = 0,iMin = 0;

    while (Head != NULL)
    {
        iNo = Head->Data;
        iMin = 9;
        
        while (iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
            iNo = iNo / 10;
        }

        printf("%d\n",iMin);

        Head = Head->Next;
    }
}

void DisplayLarge(PNODE Head)
{
    int iNo = 0,iDigit = 0,iMax = 0;

    while (Head != NULL)
    {
        iNo = Head->Data;
        
        while (iNo != 0)
        {
            iDigit = iNo % 10;

            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            iNo = iNo / 10;
        }

        printf("%d\n",iMax);

        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;
    
    InsertFirst(&First, 419);
    InsertFirst(&First, 532);
    InsertFirst(&First, 250);
    InsertFirst(&First, 11);
    Display(First);

    // Call all functions for below problem statements.

    Reverse(First);

    Display(First);

    printf("Palindrome elements are : \n");
    DisplayPallindrome(First);

    printf("Product of digits are : \n");
    DisplayProduct(First);

    printf("Smallest digits are : \n");
    DisplaySmall(First);
    

    printf("Large digits are : \n");
    DisplayLarge(First);
    return 0;
}