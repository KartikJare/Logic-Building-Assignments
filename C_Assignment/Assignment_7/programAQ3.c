///////////////////////////////////////////////////////////
//
//  File name : Assigment7Question3.c
//  Descreption : Used to find even factorial of given number
//  Author : Kartik Ganesh Jare
//  Date : 17/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact= 1;

    if(iNo <=0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2)==0)
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

    iRet = Factorial(iValue);

    printf("Even Factorial of number is %d",iRet);

    return 0;
}
