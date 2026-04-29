///////////////////////////////////////////////////////////
//
//  File name : Assignement45Question1.c
//  Description : Write a program which accept matrix from user and display transpose of the
//                 matrix.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*
The transpose of a given matrix is formed by interchanging the rows and
columns of a matrix.

Input :
3 2 5 9
4 3 2 2
8 4 1 5
3 9 7 5

Output : 
3 4 8 3
2 3 4 9
5 2 1 7
9 2 5 5
*/

#include<stdio.h>

void Transpose(int Arr[][4], int iRow, int iCol)
{
    int i = 0,j = 0;

    for(i = 0;i < iCol;i++)
    {
        for(j = 0;j < iRow;j++)
        {
            printf("%d\t", Arr[j][i]);
        }
        printf("\n");
    }
}

int main()
{
    int iRow = 0,iCol = 0,i = 0,j = 0;
    int Arr[4][4];

    printf("Enter number of rows :\n");
    scanf("%d",&iRow);

    printf("Enter number of columns :\n");
    scanf("%d",&iCol);

    printf("Enter matrix elements :\n");
    for(i = 0;i < iRow;i++)
    {
        for(j = 0;j < iCol;j++)
        {
            scanf("%d",&Arr[i][j]);
        }
    }

    printf("Transpose of matrix is:\n");
    Transpose(Arr,iRow,iCol);

    return 0;
}