///////////////////////////////////////////////////////////
//
//  File name : Assigment14Question1.c
//  Descreption : Accept number of rows and number of columns from user and display below pattern. 
//  Author : Kartik Ganesh Jare
//  Date : 26/5/25
//  
///////////////////////////////////////////////////////////

/* Input : iRow = 4 iCol = 4
Output : 1 2 3 4
         5 6 7 8
         9 1 2 3
         4 5 6 7
*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{   
    int i = 0,j = 0,iCnt = 0;

    for(i = 1,iCnt = 1 ; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(iCnt > 9)
            {
                iCnt = 1;
            }
            printf("%d\t",iCnt);
            iCnt++;
               
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
    