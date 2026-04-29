///////////////////////////////////////////////////////////
//
//  File name : Assigment4Question5.c
//  Descreption : Used to accept number from user and return difference between summation of all its factors and non factors.
//  Author : Kartik Ganesh Jare
//  Date : 17/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0; 
    int iSum2 = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0) 
        {
            iSum1 = iSum1 + iCnt;   
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    return iSum1 - iSum2;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Summation of factors and non factors difference  : %d",iRet);

    return 0;
}