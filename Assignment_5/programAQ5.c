///////////////////////////////////////////////////////////
//
//  File name : Assigment5Question5.c
//  Descreption : Used to aaccept N and print first 5 multiples of N.
//  Author : Kartik Ganesh Jare
//  Date : 17/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5;iCnt++)
    {
        printf("%d\t",iNo * iCnt);    
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);
    
    return 0;
}
