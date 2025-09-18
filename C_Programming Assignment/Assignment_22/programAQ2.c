///////////////////////////////////////////////////////////
//
//  File name : Assigment22Question2.c
//  Descreption :Accept Character from user and check whether it is capital or not(A-Z)
//  Author : Kartik Ganesh Jare
//  Date : 1/6/25
//  
///////////////////////////////////////////////////////////

/*
Input : F
Output : TRUE

Input : d
Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCaptial(char ch)
{
    BOOL bResult = FALSE;
    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = ChkCaptial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character");
    }
    else
    {
        printf("It is not a Capital Character");
    }

    return 0;
}
