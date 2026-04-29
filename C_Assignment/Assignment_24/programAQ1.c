///////////////////////////////////////////////////////////
//
//  File name : Assigment24Question1.c
//  Descreption : Accept string from user and count number of capital characters.
//  Author : Kartik Ganesh Jare
//  Date : 1/6/25
//  
///////////////////////////////////////////////////////////
/*
Input : Marvellous Multi OS

Output : 4
*/

#include<stdio.h>

int CountCaptil(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str>= 'A' && *str <= 'Z')
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

    iRet = CountCaptil(arr);

    printf("%d",iRet);

    return 0;
}
