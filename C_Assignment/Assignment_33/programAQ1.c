///////////////////////////////////////////////////////////
//
//  File name : Assignement33Question1.c
//  Description : Write a program which accept one number from user and count number of
//                ON (1) bits in it without using % and / operator.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 11
Output : 3

*/

#include<stdio.h>

typedef unsigned int UINT;

int CountOne(UINT iNo)
{
    int iCount = 0;

    while (iNo != 0)
    {
        if((iNo & 1) == 1)
        {
            iCount++;
        }
        iNo = iNo >> 1;
    }
    
    return iCount;
}

int main()
{
    UINT iValue = 0,iRet = 0;

    printf("Enter number: \n");
    scanf("%u",&iValue);

    iRet = CountOne(iValue);

    printf("ON 1 bits are : %u\n",iRet);
    
    return 0;
}