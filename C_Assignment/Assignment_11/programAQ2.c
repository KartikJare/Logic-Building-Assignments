///////////////////////////////////////////////////////////
//
//  File name : Assigment11Question2.c
//  Descreption : Accept number from user and display below pattern.
//  Author : Kartik Ganesh Jare
//  Date : 26/5/25
//  
///////////////////////////////////////////////////////////

//Input : 5
//Output : 5 # 4 # 3 # 2 # 1 #

#include<stdio.h>

void Pattern(int iNo)
{   
    int iCnt = 0;

    for(iCnt = iNo ; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
        
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
    