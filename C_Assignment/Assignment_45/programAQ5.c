///////////////////////////////////////////////////////////
//
//  File name : Assignement45Question5.c
//  Description : Write a program which accept matrix and check whether the matrix is
//                Sparse matrix or not.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Sparse matrix is a matrix with the majority of its elements equal to zero.

Input :
1 0 3 0
0 6 0 0
0 0 1 0
9 0 0 9

Output :
True

*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkSparse(int Arr[][4], int iRow, int iCol)
{
    int i = 0, j = 0;
    int iZero = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Arr[i][j] == 0)
            {
                iZero++;
            }
        }
    }

    if(iZero > (iRow * iCol) / 2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int Arr[4][4];
    int iRow = 0, iCol = 0, i = 0, j = 0;
    BOOL bRet = FALSE;

    printf("Enter number of rows :\n");
    scanf("%d",&iRow);

    printf("Enter number of columns :\n");
    scanf("%d",&iCol);

    printf("Enter matrix elements :\n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    bRet = ChkSparse(Arr, iRow, iCol);

    if(bRet == TRUE)
    {
        printf("Matrix is Sparse Matrix\n");
    }
    else
    {
        printf("Matrix is NOT Sparse Matrix\n");
    }
    
    return 0;
}