///////////////////////////////////////////////////////////
//
//  File name : Assignement43Question3.c
//  Description : Write a recursive program which accept string from user and count number
//                of small characters.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : HElloWOrlD
Output : 5

Prototype :

*/

#include<stdio.h>

int Small(char *str)
{
    if(*str == '\0')
    {
        return 0;
    }

    if(*str >= 'a' && *str <='z')
    {
        return 1 + Small(str + 1);
    }
    else
    {
        return Small(str + 1);
    }
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string: \n");
    scanf("%s",arr);

    iRet = Small(arr);

    printf("Number of small characters : %d\n",iRet);
    
    return 0;
}