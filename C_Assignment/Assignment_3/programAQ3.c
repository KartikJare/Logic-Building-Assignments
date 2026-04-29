///////////////////////////////////////////////////////////
//
//  File name : Assigment3Question3.c
//  Descreption : Used to accpet number from user and print even factors of that number
//  Author : Kartik Ganesh Jare
//  Date : 09/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayEventFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d",&iValue);

    DisplayEventFactor(iValue);

    return 0;
}