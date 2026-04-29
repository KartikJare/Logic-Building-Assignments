///////////////////////////////////////////////////////////
//
//  File name : Assigment25Question2.c
//  Descreption : Accept string from user and convert it into upper case.
//  Author : Kartik Ganesh Jare
//  Date : 5/6/25
//  
///////////////////////////////////////////////////////////

/*
Input : Marvellous Multi OS

Output : MARVELLOUS MULTI OS
*/

#include<stdio.h>

void struprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    struprX(arr);

    printf("Modified string is %s",arr);

    return 0;
}
