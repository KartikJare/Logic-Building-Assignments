///////////////////////////////////////////////////////////
//
//  File name : Assigment7Question1.c
//  Descreption : accept number from user and display below pattern.
//  Author : Kartik Ganesh Jare
//  Date : 17/5/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }

    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("*");
    }

    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("#");
    }
    
} 

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
    