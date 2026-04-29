///////////////////////////////////////////////////////////
//
//  File name : Assignement31Question2.c
//  Description : Write a program which accept one number from user and off 7th and 10th
//                bit of that number. Return modified number.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 577
Output : 1

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0;
    UINT iResult = 0;

    iMask = (1 << 6) | (1 << 9);
    iMask = ~iMask;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    iRet = OffBit(iValue);

    printf("changed number is : %u\n",iRet);


    return 0;
}