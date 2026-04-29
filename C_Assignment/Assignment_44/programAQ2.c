///////////////////////////////////////////////////////////
//
//  File name : Assignement44Question2.c
//  Description : Write a program which accept matrix and one number from user and return
//                frequency of that number.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input :
Number : 9
3 2 5 9
4 3 2 2
8 4 1 5
3 9 7 5

Output : 9
*/

#include<stdio.h>

int CountFrequency(int Arr[][4],int iRow,int iCol,int iNo)
{
  int i = 0, j = 0,iCount = 0;

    for(i = 0;i < iRow ;i++)
    {
        for(j = 0;j < iCol;j++)
        {
            if(Arr[i][j] == iNo)
            {
                iCount++;
            }
        }
    }

    return iCount;
}

int main()
{
    int iRow = 0,iCol = 0,i = 0,j = 0;
    int Arr[4][4];
    int iRet = 0,iNo = 0;
    
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

    printf("Enter number to search : \n");
    scanf("%d",&iNo);
    
    iRet = CountFrequency(Arr,iRow,iCol,iNo);

    printf("Frequency of %d is : %d\n",iNo,iRet);

    return 0;
}