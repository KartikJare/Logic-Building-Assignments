///////////////////////////////////////////////////////////
//
//  File name : Assigment26Question1.c
//  Descreption : Accept string from user and accept one character. Check whether that character is present in string or not.
//  Author : Kartik Ganesh Jare
//  Date : 5/6/25
//  
///////////////////////////////////////////////////////////
/*
Input : Marvellous Multi OS

e

Output : TRUE

Input : Marvellous Multi OS

W

Output : FALSE
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
    int i = 0;

    if(str == NULL)
    {
        return FALSE;
    }

    if(ch >= 'a' && ch <='z')
    {
        i = -32;
    }
    else if(ch >= 'A' && ch <= 'Z' )
    {
        i = +32;
    }

    while(*str != '\0')
    {
        if(*str == ch || *str == ch + i)
        {
            break;
        }
        str++;    
    }
    return(*str != '\0');
}

int main()
{
    char arr[20] = {'\0'};
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character not Found");
    }

    return 0;
}
