///////////////////////////////////////////////////////////
//
//  File name : Assignement32Question1.c
//  Description : Write a program which accept one number and position from user and
//                check whether bit at that position is on or off. If bit is one return TURE
//                otherwise return FALSE
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 10 2
Output : TRUE

*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 1;

    iMask = iMask << (iPos -1);

    if((iNo & iMask) != 0)
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
    UINT iValue = 0,iLoaction = 0;
    BOOL bRet = FALSE;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    printf("Enter the postion : \n");
    scanf("%u",&iLoaction);

    bRet = ChkBit(iValue,iLoaction);

    if (bRet == TRUE)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }
    
    return 0;
}