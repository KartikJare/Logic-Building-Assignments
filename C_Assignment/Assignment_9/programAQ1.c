///////////////////////////////////////////////////////////
//
//  File name : Assigment9Question1.c
//  Descreption : accept number from user and display its digits in reverse order.
//  Author : Kartik Ganesh Jare
//  Date : 17/5/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    int iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d",iDigit);
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }

} 

int main()
{
    int iValue = 0; 
    
    printf("Enter Number: \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}
    