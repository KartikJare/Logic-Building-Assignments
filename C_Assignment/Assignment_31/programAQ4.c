///////////////////////////////////////////////////////////
//
//  File name : Assignement31Question4.c
//  Description : Write a program which accept one number from user and toggle 7th and
//                10th bit of that number. Return modified number.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 137
Output : 713

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0;
    UINT iResult = 0;

    iMask = (1 << 6) | (1 << 9);
    iNo = iNo ^ iMask;

    return iNo;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue);

    printf("changed number is : %u\n",iRet);


    return 0;
}