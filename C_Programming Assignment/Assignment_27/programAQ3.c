///////////////////////////////////////////////////////////
//
//  File name : Assigment27Question3.c
//  Descreption : accept string from user and copy capital characters of that string into another string.
//  Author : Kartik Ganesh Jare
//  Date : 5/6/25
//  
///////////////////////////////////////////////////////////

/*

Input : "Marvellous Multi OS"

Output : "MMOS"

*/
#include<stdio.h>

void StrCpyCap(char *src,char *dest)
{
    if(NULL == src || NULL == dest)
    {
        printf("Unable to find the string");
        return;
    }

    while((*src != '\0'))
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};

    printf("Please enter the string : \n");
    scanf("%[^\n]s",arr);

    StrCpyCap(arr,brr);

    printf("Copy String Captail caharater : %s",brr);

    return 0;
}