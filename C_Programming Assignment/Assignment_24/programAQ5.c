///////////////////////////////////////////////////////////
//
//  File name : Assigment24Question5.c
//  Descreption : accept string from user and display it in reverse order. 
//  Author : Kartik Ganesh Jare
//  Date : 1/6/25
//  
///////////////////////////////////////////////////////////

/*
Input : “MarvellouS”

Output : “SuollevraM”

*/

#include<stdio.h>

void Reserse(char *str)
{
    int iCount = 0;
    int iCnt = 0;

    if(str == NULL)
    {
        return;
    }

    while(*str != '\0')
    {
        iCount++;
        str++;
    }

    str--;

    iCnt = iCount;
    while(iCnt > 0)
    {
        printf("%c",*str);
        iCnt--;
        str--;  
    }
    printf("\n");
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^'\n']s",arr);

    Reserse(arr);

    return 0;
}
