///////////////////////////////////////////////////////////
//
//  File name : Assigment11Question1.c
//  Descreption : Accept number from user and display
//  Author : Kartik Ganesh Jare
//  Date : 26/5/25
//  
///////////////////////////////////////////////////////////

//Input : 5
//Output : A B C D E

#include<stdio.h>

void Pattern(int iRow)
{   
    int i = 0;
    char ch = 'A';

    for(i = 1; i <= iRow; i++)
    {
        printf("%c\t",ch);
        ch++;
    }
} 

int main()
{
    int iValue = 0; 
    
    printf("Enter Number of elements : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
    