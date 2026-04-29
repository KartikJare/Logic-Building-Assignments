///////////////////////////////////////////////////////////
//
//  File name : Assignement44Question5.c
//  Description : Write a program which accept matrix and swap the contents of consecutive rows.
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
4 3 2 2
3 2 5 9
3 9 7 5
8 4 1 9

*/

#include<stdio.h>

void SwapRows(int Arr[][4], int iRow, int iCol)
{
   int i = 0,j = 0;
   int temp = 0;

   for(i = 0;i < iRow;i = i + 2)
   {
    for(j = 0;j < iCol;j++)
    {
        temp = Arr[i][j];
        Arr[i][j] = Arr[i + 1][j];
        Arr[i+1][j] = temp;
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
    int Arr[4][4];
    int iRow = 0, iCol = 0, i = 0, j = 0;

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

    SwapRows(Arr, iRow, iCol);

    printf("Matrix after swapping rows:\n");
    Display(Arr, iRow, iCol);

    return 0;
}