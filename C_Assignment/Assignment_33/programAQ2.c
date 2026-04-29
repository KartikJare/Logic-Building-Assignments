///////////////////////////////////////////////////////////
//
//  File name : Assignement33Question2.c
//  Description : Write a program which accept two numbers from user and display position
//                of common ON bits from that two numbers.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 10 15 (1010 1111)
Output : 2 4

*/

#include<stdio.h>

typedef unsigned int UINT;

void CommonBits(UINT iNo1,UINT iNo2)
{
    UINT iResult = 0;
    int iPos = 1;

    iResult = iNo1 & iNo2;

    while (iResult != 0)
    {
        if((iResult & 1) == 1)
        {
            printf("%d \n",iPos);
        }
        iResult = iResult >> 1;
        iPos++;
    }
}

int main()
{
    UINT iValue1 = 0,iValue2 = 0;

    printf("Enter first number: \n");
    scanf("%u",&iValue1);

    printf("Enter second number : \n");
    scanf("%u",&iValue2);

    CommonBits(iValue1,iValue2);

    return 0;
}