///////////////////////////////////////////////////////////
//
//  File name : Assigment1Question5.c
//  Descreption : Used to accept one number from user & print that number of * in screen
//  Author : Kartik Ganesh Jare
//  Date : 09/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt <= iNo; iCnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}