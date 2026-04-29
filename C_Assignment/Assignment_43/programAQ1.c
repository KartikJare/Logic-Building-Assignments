///////////////////////////////////////////////////////////
//
//  File name : Assignement43Question1.c
//  Description : Write a recursive program which accept string from user and count white
//                spaces.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : HE llo WOr lD
Output : 3
Prototype :

*/

#include<stdio.h>

int WhiteSpace(char *str)
{
    if(*str == '\0')
    {
        return 0;
    }

    if(*str == ' ')
    {
        return 1 + WhiteSpace(str + 1);
    }
    else
    {
        return WhiteSpace(str + 1);
    }
}

int main()
{
    int iRet = 0;
    char arr[50];

    printf("Enter string:\n");
    scanf("%[^\n]",arr);

    iRet = WhiteSpace(arr);

    printf("Number of white spaces in : %d\n",iRet);

    return 0;
}