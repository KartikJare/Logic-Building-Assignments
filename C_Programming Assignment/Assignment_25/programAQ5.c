///////////////////////////////////////////////////////////
//
//  File name : Assigment24Question5.c
//  Descreption :accept string from user and count number of white spaces
//  Author : Kartik Ganesh Jare
//  Date : 5/6/25
//  
///////////////////////////////////////////////////////////

/*
Input : MarvellouS

Output : 0

Input : MarvellouS Infosystems

Output : 1

Input : MarvellouS Infosystems by Piyush Manohar Khairnnar

Output : 5

*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
           iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("%d",iRet);

    return 0;
}