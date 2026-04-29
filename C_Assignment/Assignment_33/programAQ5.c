///////////////////////////////////////////////////////////
//
//  File name : Assignement33Question5.c
//  Description : Write a program which accept one number from user and range of
//                positions from user. Toggle all bits from that range.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 897 9 13
Toggle all bits from position 9 to 13 of input number ie 879.

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo,int iStart,int iEnd)
{
    UINT iMask = 0;
    int iCnt = 0;

    for(iCnt = iStart;iCnt <= iEnd;iCnt++)
    {
        iMask = iMask | (1<<(iCnt - 1));
    }

    return (iNo ^ iMask);
}

int main()
{
    UINT iValue = 0;
    int iStart = 0,iEnd = 0;
    UINT iRet = 0;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    printf("Enter start position: \n");
    scanf("%d", &iStart);

    printf("Enter end position: \n");
    scanf("%d", &iEnd);

    iRet = ToggleBitRange(iValue,iStart,iEnd);

    printf("changed number is : %u\n",iRet);

    return 0;
}