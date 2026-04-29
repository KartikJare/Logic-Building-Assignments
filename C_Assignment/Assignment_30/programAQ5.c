///////////////////////////////////////////////////////////
//
//  File name : Assignement30Question5.c
//  Description : Write a program which checks whether first and last bit is On or
//                OFF.First bit means bit number 1 and last bit means bit number 32
//  Author : Kartik Ganesh Jare
//  Date : 13/6/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    UINT iMask = 0;

    iMask = (1 << 0) | (1 << 31);

    if((iNo & iMask) == iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == TRUE)
    {
        printf("0th and 32th bits is On\n");
    }
    else
    {
        printf("0th and 32th bits is Off\n");
    }
    
    return 0;
}