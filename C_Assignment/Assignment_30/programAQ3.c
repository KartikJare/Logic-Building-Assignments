///////////////////////////////////////////////////////////
//
//  File name : Assignement30Question3.c
//  Description : Write a program which checks whether 7th & 15th & 21st , 28th bit
//                is On or OFF
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

    iMask = (1 << 6) | (1 << 14) | (1 << 20) | (1 << 27);

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
        printf("7th,15th,21st and 28th bits is On\n");
    }
    else
    {
        printf("7th,15th,21st and 28th bits is Off\n");
    }
    
    return 0;
}