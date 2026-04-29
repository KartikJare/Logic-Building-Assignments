///////////////////////////////////////////////////////////
//
//  File name : Assigment5Question2.c
//  Descreption : Used to accept number from user and print numbers till that
//  Author : Kartik Ganesh Jare
//  Date : 17/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void Dipaly(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
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