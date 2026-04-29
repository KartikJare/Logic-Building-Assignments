///////////////////////////////////////////////////////////
//
//  File name : Assigment4Question3.c
//  Descreption : Used to accept number from user and display all its non factors.
//  Author : Kartik Ganesh Jare
//  Date : 17/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0) 
        {
                printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}