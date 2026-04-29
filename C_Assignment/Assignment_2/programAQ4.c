///////////////////////////////////////////////////////////
//
//  File name : Assigment3Question4.c
//  Descreption : Used to accept two number from user & display frist number in second numder of time
//  Author : Kartik Ganesh Jare
//  Date : 09/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if (iFrequency < 0)
    {
        iFrequency = -iFrequency;        
    }
    
    for(iCnt = 1; iCnt <= iFrequency ;iCnt++)
    {
        printf("%d\n",iNo);
    }
} 

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    printf("Enter frequency :");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}