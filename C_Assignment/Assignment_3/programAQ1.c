///////////////////////////////////////////////////////////
//
//  File name : Assigment3Question1.c
//  Descreption : Used to accpet one number from user and print that number of even numbers on screen
//  Author : Kartik Ganesh Jare
//  Date : 09/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    else
    {   
        int iCnt = 0;

        for (iCnt = 2; iCnt <= 2 * iNo; iCnt += 2)
        {
            printf("%d\n", iCnt);
        }
    }
} 

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
    