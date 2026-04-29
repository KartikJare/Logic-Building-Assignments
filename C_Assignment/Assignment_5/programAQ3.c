///////////////////////////////////////////////////////////
//
//  File name : Assigment5Question3.c
//  Descreption : Used to accept accept number from user and print its numbers line.
//  Author : Kartik Ganesh Jare
//  Date : 17/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void Dipaly(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d",iCnt);   
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Dipaly(iValue);

    return 0;
}