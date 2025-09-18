///////////////////////////////////////////////////////////
//
//  File name : Assigment22Question4.c
//  Descreption :Accept Character from user and check whether it is small case or not (a-z).
//  Author : Kartik Ganesh Jare
//  Date : 1/6/25
//  
///////////////////////////////////////////////////////////

/*
Input : g
Output : TRUE

Input : D
Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    BOOL bResult = FALSE;
    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Character");
    }
    else
    {
        printf("It is not a small case Character");
    }

    return 0;
}
