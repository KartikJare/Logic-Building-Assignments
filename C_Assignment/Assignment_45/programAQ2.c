///////////////////////////////////////////////////////////
//
//  File name : Assignement45Question2.c
//  Description : Write a program which accept matrix and reverse the contents of each row.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//
///////////////////////////////////////////////////////////

/*

Input :
3 2 5 9
4 3 2 2
8 4 1 5
3 9 7 5

Output :
9 5 2 3
2 2 3 4
9 1 4 8
5 7 9 3

*/

#include <stdio.h>

void ReverseRow(int Arr[][4], int iRow, int iCol)
{
    int i = 0, start = 0, end = 0;
    int temp = 0;

    for (i = 0; i < iRow; i++)
    {
        start = 0;
        end = iCol - 1;

        while (start < end)
        {
            temp = Arr[i][start];
            Arr[i][start] = Arr[i][end];
            Arr[i][end] = temp;

            start++;
            end--;
        }
    }
}

void Display(int Arr[][4], int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t", Arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int iRow = 0, iCol = 0, i = 0, j = 0;
    int Arr[4][4];

    printf("Enter number of rows :\n");
    scanf("%d", &iRow);

    printf("Enter number of columns :\n");
    scanf("%d", &iCol);

    printf("Enter matrix elements :\n");
    for (i = 0; i < iRow; i++)
    {
        for (j = 0; j < iCol; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    ReverseRow(Arr, iRow, iCol);

    printf("Matrix after reversing each row:\n");
    Display(Arr, iRow, iCol);

    return 0;
}