///////////////////////////////////////////////////////////
//
//  File name : Assigment6Question4.c
//  Descreption : Used to accept number from user and display its table.
//  Author : Kartik Ganesh Jare
//  Date : 17/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo <=0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",iNo *iCnt);    
    }


}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    Table(iValue);
    
    return 0;
}
