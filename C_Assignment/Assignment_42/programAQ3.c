///////////////////////////////////////////////////////////
//
//  File name : Assignement42Question3.c
//  Description : Write a recursive program which accept string from user and count number
//                of characters.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : Hello
Output : 5
Prototype :

*/

#include<stdio.h>

int Strlen(char *str)
{
    if(*str == '\0')
    {
        return 0;
    }

    return 1 + Strlen(str + 1);
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string: \n");
    scanf("%s",arr);

    iRet = Strlen(arr);

    printf("%d\n",iRet);
    
    return 0;
}