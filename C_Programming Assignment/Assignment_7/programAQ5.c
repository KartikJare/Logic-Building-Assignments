///////////////////////////////////////////////////////////
//
//  File name : Assigment7Question5.c
//  Descreption : Used which returns difference between Even factorial and odd factorial of given number
//  Author : Kartik Ganesh Jare
//  Date : 17/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 1; 
    int iSum2 = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0) 
        {
            iSum1 = iSum1 * iCnt;   
        }
        else
        {
            iSum2 = iSum2 * iCnt;
        }
    }
    return iSum1 - iSum2;
}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);

    return 0;
}