///////////////////////////////////////////////////////////
//
//  File name : Assigment23Question1.c
//  Descreption :Write a program which displays ASCII table. Table contains symbol,Decimal, Hexadecimal and Octal representation of every member from
//               0 to 255.
//  Author : Kartik Ganesh Jare
//  Date : 1/6/25
//  
///////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayASCII()
{
    int iCnt = 0;
    char ch = '\0';

    printf("--------------------------------------\n");
    printf("-------------ASCII TABLE--------------\n");
    printf("Dex\tchar\tHex\n");
    printf("--------------------------------------\n");

    for(iCnt = 0;iCnt < 128;iCnt++)
    {
        ch = iCnt;
        printf("|%d\t",ch);
        printf("|%x\t",ch);
        printf("|%c\t",ch);
        printf("\n");
    }
    printf("--------------------------------------\n");
}

int main()
{
    DisplayASCII();

    return 0;
}
