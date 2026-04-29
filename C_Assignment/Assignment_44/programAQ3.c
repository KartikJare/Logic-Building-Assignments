///////////////////////////////////////////////////////////
//
//  File name : Assignement44Question3.c
//  Description : Write a program which accept matrix and return largest number from both the
//                diagonals
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

Output : 9
*/

#include<stdio.h>

int MaxDiagonal(int Arr[][4], int iRow, int iCol)
{
    int i = 0;
    int iMax = Arr[0][0];

    for (i = 0; i < iRow; i++)
    {
        if(Arr[i][i] > iMax)
        {
            iMax = Arr[i][i];
        }

        if(Arr[i][iCol - i - 1] > iMax)
        {
            iMax = Arr[i][iCol - i - 1];
        }
    }
    
    return iMax;
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
    
    iRet = MaxDiagonal(Arr,iRow,iCol);

    printf("Largest number is : %d\n",iRet);

    return 0;
}