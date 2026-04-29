///////////////////////////////////////////////////////////
//
//  File name : Assigment3Question4.c
//  Descreption : Used to accpet one character from user and convert case of that character
//  Author : Kartik Ganesh Jare
//  Date : 09/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>
#include<ctype.h> // has isupper and tolower,toupper

char DisplayCovert(char CValue)
{
    if(isupper(CValue)) //function returns a non-zero value if a character is an uppercase letter.
    {
        printf("The Lower case is:%c",tolower(CValue)); //tolower is used to convert an uppercase character to its lowercase 
    }
    else
    {
         printf("The Upper case is:%c",toupper(CValue)); //toupper is used to convert a lowercase character to its uppercase 
    }
}



int main()
{
    char cValue = '\0';

    printf("Enter character\n");

    scanf("%c",&cValue);

    DisplayCovert(cValue);

    return 0;
}