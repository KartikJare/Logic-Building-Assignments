///////////////////////////////////////////////////////////
//
//  File name : Assignement32Question3.c
//  Description : Write a program which accept one number and position from user and on
//                that bit. Return modified number.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 10 3
Output : 14

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ONBit(UINT iNo,UINT iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask =  iMask << (iPos - 1);

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0,iLocation = 0,iRet = 0;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    printf("Enter the postion : \n");
    scanf("%u",&iLocation);

    iRet = ONBit(iValue,iLocation);

    printf("changed number is : %u\n",iRet);

    return 0;
}