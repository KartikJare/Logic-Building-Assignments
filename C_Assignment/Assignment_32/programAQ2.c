///////////////////////////////////////////////////////////
//
//  File name : Assignement32Question2.c
//  Description : Write a program which accept one number and position from user and off
//                that bit. Return modified number.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 10 2
Output : 8

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo,UINT iPos)
{
    UINT iMask = 1;

    iMask =  iMask << (iPos - 1);

    iMask = ~iMask;

    return (iNo & iMask);
}

int main()
{
    UINT iValue = 0,iLocation = 0,iRet = 0;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    printf("Enter the postion : \n");
    scanf("%u",&iLocation);

    iRet = OffBit(iValue,iLocation);

    printf("changed number is : %u\n",iRet);

    return 0;
}