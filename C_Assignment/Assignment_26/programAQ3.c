///////////////////////////////////////////////////////////
//
//  File name : Assigment26Question3.c
//  Descreption : Accept string from user and accept one character. Returu  index of first occurrence of that character.
//  Author : Kartik Ganesh Jare
//  Date : 5/6/25
//  
///////////////////////////////////////////////////////////

/*
Input : Marvellous Multi OS

M

Output :  0

Input : Marvellous Multi OS

W

Output :  -1

Input : Marvellous Multi OS

e

Output :  4

*/

#include <stdio.h>

int FirstOccurance(char *str, char ch)
{
    if (str == NULL)
    {
        return -1;
    }

    int Displ = 0;
    int iIndex = 0;
    char *start = NULL;

    if (ch >= 'a' && ch <= 'z')
    {
        Displ = -32;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        Displ = 32;
    }

    start = str;
    while (*str != '\0')
    {
        if (*str == ch || *str == ch + Displ)
        {
            iIndex = str - start;
            return iIndex;
        }
        str++;
    }

    return -1;
}

int main()
{
    char Arr[50];
    char cValue = '\0';

    printf("Enter the string\n");
    scanf(" %[^\n]", Arr);

    printf("Enter the character\n");
    scanf(" %c", &cValue);

    int iRet = FirstOccurance(Arr, cValue);

    if (iRet == -1)
    {
        printf("Character not found in the string.\n");
        return -1;
    }

    printf("First Occurrence of %c is at index %d\n", cValue, iRet);

    return 0;
}