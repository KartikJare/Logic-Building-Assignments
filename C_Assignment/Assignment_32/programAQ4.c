///////////////////////////////////////////////////////////
//
//  File name : Assignement32Question4.c
//  Description : Write a program which accept one number from user and toggle 7th and
//                10th bit of that number. Return modified number.
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

UINT ToggleBit(UINT iNo,UINT iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos -1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    UINT iValue = 0,iLocation = 0,iRet = 0;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    printf("Enter the postion : \n");
    scanf("%u",&iLocation);

    iRet = ToggleBit(iValue,iLocation);

    printf("changed number is : %u\n",iRet);


    return 0;
}