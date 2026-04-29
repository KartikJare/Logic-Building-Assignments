///////////////////////////////////////////////////////////
//
//  File name : Assigment23Question4.c
//  Descreption : Accept Character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).
//  Author : Kartik Ganesh Jare
//  Date : 1/6/25
//  
///////////////////////////////////////////////////////////

/*
Input : %
Output : TRUE

Input : d
Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch)
{
    BOOL bResult = FALSE;
    if((ch >= 'A') && (ch <= 'Z') || ((ch >= 'a') && (ch <= 'z')) ||((ch >= '0') && (ch <= '9')))
    {
        bResult = FALSE;
    }
    else
    {
        bResult = TRUE;
    }
    return bResult;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: \n");
    scanf(" %c",&cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special Character");
    }
    else
    {
        printf("It is not a special Character");
    }

    return 0;
}
