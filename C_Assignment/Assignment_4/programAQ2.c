///////////////////////////////////////////////////////////
//
//  File name : Assigment4Question2.c
//  Descreption : Used to accept number from user and display its factors in decreasing order.
//  Author : Kartik Ganesh Jare
//  Date : 17/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2; iNo > 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}