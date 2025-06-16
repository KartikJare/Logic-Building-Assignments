///////////////////////////////////////////////////////////
//
//  File name : Assigment7Question4.c
//  Descreption : Used to accept number from user and display its table.
//  Author : Kartik Ganesh Jare
//  Date : 17/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact= 1;

    if(iNo <=0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iFact = iFact * iCnt;
        }          
    }
    return iFact;
}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("OddFactorial of number is %d",iRet);

    return 0;
}
