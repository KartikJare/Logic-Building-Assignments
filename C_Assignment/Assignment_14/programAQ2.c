///////////////////////////////////////////////////////////
//
//  File name : Assigment14Question2.c
//  Descreption : Accept number of rows and number of columns from user and display below pattern
//  Author : Kartik Ganesh Jare
//  Date : 26/5/25
//  
///////////////////////////////////////////////////////////

/* Input : iRow = 4 iCol = 4
Output : 2 4 6 8 10
         1 3 5 7 9 
         2 4 6 8 10
         1 3 5 7 9  
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{   
    int i = 0,j = 0,iNo1 = 0,iNo2 = 0;

    for(i = 1 ; i <= iRow; i++)
    {
        for(j = 1,iNo1 = 1, iNo2 = 2; j <= iCol; j++,iNo1 += 2,iNo2 += 2)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",iNo1);
            }
            else
            {
                printf("%d\t",iNo2);
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
    