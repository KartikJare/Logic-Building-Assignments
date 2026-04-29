///////////////////////////////////////////////////////////
//
//  File name : Assignement32Question5.c
//  Description : Write a program which accept one number from user and toggle contents
//                of first and last nibble of the number. Return modified number. (Nibble is a
//                group of four bits)
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////


#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0;

    iMask = 0xF000000F;

    return (iNo ^ iMask);
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