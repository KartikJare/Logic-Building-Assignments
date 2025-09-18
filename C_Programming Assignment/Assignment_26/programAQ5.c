///////////////////////////////////////////////////////////
//
//  File name : Assigment24Question5.c
//  Descreption :accept string from user reverse that string in place.
//  Author : Kartik Ganesh Jare
//  Date : 5/6/25
//  
///////////////////////////////////////////////////////////

/*
Input : abcd

Output : dcba

Input : abba

Output : abba

*/

#include<stdio.h>

void StrRevX(char *str)
{   
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*str != '\0')
    {
        end++;
        str++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    StrRevX(arr);

    printf("Modified string is %s",arr);

    return 0;
}