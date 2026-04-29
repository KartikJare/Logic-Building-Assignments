///////////////////////////////////////////////////////////
//
//  File name : Assigment25Question4.c
//  Descreption : Accept string from user and check whether it contains vowels in it or not.
//  Author : Kartik Ganesh Jare
//  Date : 5/6/25
//  
///////////////////////////////////////////////////////////

/*
Input : marve89llous121

Output : 89121

Input : Demo

Output :

*/

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
           printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}