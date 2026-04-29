///////////////////////////////////////////////////////////
//
//  File name : Assigment3Question5.c
//  Descreption : Used to accpet on character from user and check whether that character is vowwel (a,e,i,o,u) or not
//  Author : Kartik Ganesh Jare
//  Date : 09/05/25
//  
///////////////////////////////////////////////////////////
#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
    if((CValue == 'A') || (CValue == 'E') || (CValue == 'I') || (CValue == 'O') || (CValue == 'U') ||
       (CValue == 'a') || (CValue == 'e') || (CValue == 'i') || (CValue == 'o') || (CValue == 'u'))
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
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");

    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;

}