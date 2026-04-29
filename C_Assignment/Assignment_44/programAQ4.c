///////////////////////////////////////////////////////////
//
//  File name : Assignement44Question4.c
//  Description : Write a program which accept matrix and display addition of elements From each
//               column.
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

Output : 18 18 15 25
*/

#include<stdio.h>

int AddColumn(int Arr[][4], int iRow, int iCol)
{
    int i = 0,j = 0;
    int iSum = 0;

    for( j = 0; j < iCol; j++)
    {
        iSum = 0;

        for (i = 0; i < iRow; i++)
        {
            iSum = iSum + Arr[i][j];
        }
        
        printf("%d\t",iSum);
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
    
    printf("Column-wise addition : ");
    AddColumn(Arr, iRow, iCol);

    return 0;
}