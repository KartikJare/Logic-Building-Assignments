///////////////////////////////////////////////////////////
//
//  File name : Assigment27Question4.c
//  Descreption : accept string from user and copy small characters of that string into another string
//  Author : Kartik Ganesh Jare
//  Date : 5/6/25
//  
///////////////////////////////////////////////////////////

/*

Input : "Marvellous multi OS"

Output : "arvellous multi"

*/

#include<stdio.h>

void StrCpySmall(char *src,char *dest)
{
    if(NULL == src || NULL == dest)
    {
        printf("Unable to find the string");
        return;
    }

    while((*src != '\0'))
    {
        if((*src >= 'a') && (*src <= 'z'))
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

    StrCpySmall(arr,brr);

    printf("Copy String Captail caharater : %s",brr);

    return 0;
}