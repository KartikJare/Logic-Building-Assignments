///////////////////////////////////////////////////////////
//
//  File name : Assigment25Question1.c
//  Descreption : Accept string from user and convert it into lower case.
//  Author : Kartik Ganesh Jare
//  Date : 5/6/25
//  
///////////////////////////////////////////////////////////
/*
Input : Marvellous Multi OS

Output : marvellous multi os
*/

#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("Modified string is %s",arr);

    return 0;
}
