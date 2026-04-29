///////////////////////////////////////////////////////////
//
//  File name : Assigment27Question1.c
//  Descreption :  accept string from user and copy the contents of that string into another string.
//  Author : Kartik Ganesh Jare
//  Date : 5/6/25
//  
///////////////////////////////////////////////////////////
/*
Input : "Marvellous Multi OS"

Output : "Marvellous Multi OS" in another string

*/

#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
    if(NULL == src || NULL == dest)
    {
        printf("Unable to find the string");
        return;
    }

    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++; 
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'} ;

    printf("Please enter the string : \n");
    scanf("%[^\n]s",arr);

    StrCpyX(arr,brr);

    printf("Copy String is : %s",brr);

    return 0;
}
