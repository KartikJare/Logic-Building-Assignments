///////////////////////////////////////////////////////////
//
//  File name : Assigment17Question2.c
//  Descreption : Accept number of rows and number of columns from user and display below pattern.
//  Author : Kartik Ganesh Jare
//  Date : 27/5/25
//  
///////////////////////////////////////////////////////////

/*
Input : iRow = 4 iCol = 4
Output : * * * #
         * * # @
         * # @ @
         # @ @ @
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{   
    int i = 0,j = 0;

    if(iRow != iCol)
    {
        printf("Invalid input");
        return;
    }

    for(i =1 ; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            if(i == j)
            {
                printf("#\t");
            }
            else if(i >= j)
            {
                printf("@\t");
            }
            else
            {
                printf("*\t");
            }
          
        }
        printf("\n");
    }
        
} 

int main()
{
    int iValue1 = 0, iValue2 = 0; 
    
    printf("Enter number of rows and columns : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
    