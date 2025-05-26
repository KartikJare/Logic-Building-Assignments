///////////////////////////////////////////////////////////
//
//  File name : Assigment7Question2.c
//  Descreption : Used to Accept amount in US dollar and return its corresponding value in Indian currency. Consider 1$ as 70 rupees.
//  Author : Kartik Ganesh Jare
//  Date : 17/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

int DollarToInr(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD:\n");
    scanf("%d",&iValue);

    iRet = DollarToInr(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}