///////////////////////////////////////////////////////////
//
//  File name : Assigment23Question5.c
//  Descreption : Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
//  Author : Kartik Ganesh Jare
//  Date : 1/6/25
//  
///////////////////////////////////////////////////////////

/*
Input : A
Output : Decimal 65
         Octal 0101
         Hexadecimal 0X41
*/

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal is : %d\n",ch);
    printf("Octal is : %o\n",ch);
    printf("Hexadcimal is : %x\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the Charecter: \n");
    scanf(" %c",&cValue);

    Display(cValue);

    return 0;
}
