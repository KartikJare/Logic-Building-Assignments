///////////////////////////////////////////////////////////
//
//  File name : Assignement31Question5.c
//  Description : Write a program which accept one number from user and on its first 4
//                bits. Return modified number.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 73
Output : 79

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ONBit(UINT iNo)
{
    UINT iMask = 0;


    iMask = 0x0000000F;

    return (iNo | iMask);
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    iRet = ONBit(iValue);

    printf("changed number is : %u\n",iRet);


    return 0;
}