///////////////////////////////////////////////////////////
//
//  File name : Assigment11Question5.c
//  Descreption : Accept number from user and display below pattern.
//  Author : Kartik Ganesh Jare
//  Date : 26/5/25
//  
///////////////////////////////////////////////////////////

//Input : 8
//Output : 2 4 6 8 10 12 14 16

#include<stdio.h>

void Pattern(int iNo)
{   
    int iCnt = 0;

    for(iCnt =1  ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t",iCnt * 2); 
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
    