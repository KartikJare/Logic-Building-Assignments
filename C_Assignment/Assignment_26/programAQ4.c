///////////////////////////////////////////////////////////
//
//  File name : Assigment26Question4.c
//  Descreption : Accept string from user and accept one character.Return index of last occurrence of that character.
//  Author : Kartik Ganesh Jare
//  Date : 5/6/25
//  
///////////////////////////////////////////////////////////

/*
Input : Marvellous Multi OS

M

Output :  11

Input : Marvellous Multi OS

W

Output :  -1

Input : Marvellous Multi OS

e

Output :  4

*/

#include <stdio.h>

int LastOccurance(char *str, char ch)
{
    if (str == NULL)
    {
        return -1;
    }

    int Displ = 0;
    int iIndex = -1;
    char *start = NULL;
    int pos = 0;

    if (ch >= 'a' && ch <= 'z')
    {
        Displ = -32;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        Displ = 32;
    }

    while (*str != '\0')
    {
        if (*str == ch || *str == ch + Displ)
        {
            iIndex = pos;
        }
        str++;
        pos++;
    }

    return iIndex;
}

int main()
{
    char Arr[50];
    char cValue = '\0';

    printf("Enter the string\n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character\n");
    scanf(" %c", &cValue);

    int iRet = LastOccurance(Arr, cValue);

    if (iRet == -1)
    {
        printf("Character not found in the string.\n");
        return -1;
    }

    printf("Last Occurrence of %c is at index %d\n", cValue, iRet);

    return 0;
}