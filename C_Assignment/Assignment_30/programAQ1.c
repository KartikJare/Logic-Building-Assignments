///////////////////////////////////////////////////////////
//
//  File name : Assignement30Question1.c
//  Description : Write a program which checks whether 15th bit is On or OFF
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
    UINT iMask = 0x00004000;

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
        printf("15th bits is On\n");
    }
    else
    {
        printf("15th bits is Off\n");
    }
    
    return 0;
}