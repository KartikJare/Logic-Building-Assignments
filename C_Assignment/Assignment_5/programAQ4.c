///////////////////////////////////////////////////////////
//
//  File name : Assigment5Question4.c
//  Descreption : Used to accepts N from user and print all odd numbers up to N.
//  Author : Kartik Ganesh Jare
//  Date : 17/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo;iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }

    }

}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    
    return 0;
}
