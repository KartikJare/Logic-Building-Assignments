///////////////////////////////////////////////////////////
//
//  File name : Assignement44Question1.c
//  Description : Write a program which accept matrix from user and return addition of diagonal
//                elements.
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
Output : 12
*/

#include<stdio.h>

int AddDiagonal(int Arr[][4],int iRow,int iCol)
{
    int i = 0,iSum = 0;

    for(i = 0;i < iRow && i < iCol;i++)
    {
        iSum = iSum + Arr[i][i];
    }

    return iSum;
}

int main()
{
    int iRow = 0,iCol = 0,i = 0,j = 0;
    int Arr[4][4];
    int iRet = 0;
    
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

    iRet = AddDiagonal(Arr,iRow,iCol);

    printf("Addition is : %d\n",iRet);

    return 0;
}