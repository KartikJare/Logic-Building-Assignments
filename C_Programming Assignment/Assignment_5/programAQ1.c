///////////////////////////////////////////////////////////
//
//  File name : Assigment5Question1.c
//  Descreption : Used to accept number from user and print that number of $ & * on screen
//  Author : Kartik Ganesh Jare
//  Date : 17/5/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo;iCnt++)
    {
        printf("$ * ");
    }
    
} 

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
    