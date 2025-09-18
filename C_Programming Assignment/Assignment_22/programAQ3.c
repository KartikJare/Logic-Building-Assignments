///////////////////////////////////////////////////////////
//
//  File name : Assigment22Question3.c
//  Descreption :Accept Character from user and check whether it is digit or not (0-9)
//  Author : Kartik Ganesh Jare
//  Date : 1/6/25
//  
///////////////////////////////////////////////////////////

/*
Input : 7
Output : TRUE

Input : d
Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    BOOL bResult = FALSE;
    if((ch >= '0') && (ch <= '9'))
    {
        bResult = TRUE;
    }
    else
    {
        bResult = FALSE;
    }
    return bResult;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: \n");
    scanf(" %c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not a Digit");
    }

    return 0;
}
