///////////////////////////////////////////////////////////
//
//  File name : Assigment22Question1.c
//  Descreption :Accept Character from user and check whether it is alphabet or not (A-Z a-z).
//  Author : Kartik Ganesh Jare
//  Date : 1/6/25
//  
///////////////////////////////////////////////////////////

/*
Input : F
Output : TRUE
Input : &
Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    BOOL bResult = FALSE;
    if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is Character");
    }
    else
    {
        printf("It is not a Character");
    }

    return 0;
}
