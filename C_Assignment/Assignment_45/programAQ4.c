///////////////////////////////////////////////////////////
//
//  File name : Assignement45Question4.c
//  Description : Write a program which accept matrix and check whether the matrix is
//                identity matrix or not.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Identity matrix is a square matrix with 1’s along the diagonal from upper left to
lower right and 0’s in all other positions.
If it satisfies the structure as explained before then the matrix is called as
identity matrix.

Input :
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1

Output : True
*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkIdentity(int Arr[][4], int iRow, int iCol)
{
  int i = 0, j = 0;

    // Matrix must be square
    if(iRow != iCol)
    {
        return FALSE;
    }

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i == j)
            {
                if(Arr[i][j] != 1)
                {
                    return FALSE;
                }
            }
            else
            {
                if(Arr[i][j] != 0)
                {
                    return FALSE;
                }
            }
        }
    }

    return TRUE;
}

int main()
{
    int Arr[4][4];
    int iRow = 0, iCol = 0, i = 0, j = 0;
    int bRet = 0;

    printf("Enter number of rows :\n");
    scanf("%d", &iRow);

    printf("Enter number of columns :\n");
    scanf("%d", &iCol);

    printf("Enter matrix elements :\n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    bRet = ChkIdentity(Arr, iRow, iCol);

    if(bRet == TRUE)
    {
        printf("Matrix is Identity Matrix\n");
    }
    else
    {
        printf("Matrix is NOT Identity Matrix\n");
    }

    return 0;
}