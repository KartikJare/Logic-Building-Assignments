///////////////////////////////////////////////////////////
//
//  File name : Assigment26Question2.c
//  Descreption : Accept string from user and accept one character. Returu frequency of that character.
//  Author : Kartik Ganesh Jare
//  Date : 5/6/25
//  
///////////////////////////////////////////////////////////
/*
Input : Marvellous Multi OS

M

Output :  2

Input : Marvellous Multi OS

W

Output :  0

*/

#include<stdio.h>

int ChkChar(char *str,char ch)
{
    int i = 0,iCount = 0;

    if(str == NULL)
    {
        return -1;
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
            iCount++;
        }
        str++;    
    }
    return(iCount);
}

int main()
{
    char arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = ChkChar(arr,cValue);

    printf("Character frequency is %d",iRet);
    
    return 0;
}