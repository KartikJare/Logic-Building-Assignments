///////////////////////////////////////////////////////////
//
//  File name : Assignement40Question4.c
//  Description : Write a recursive program which display below pattern.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Output : A B C D E F
Prototype :

*/

#include<stdio.h>

void Display()
{
    static char ch = 'A';

    if(ch <= 'F')
    {
        printf("%c\t",ch);
        ch++;
        Display();
    }
}

int main()
{
   Display();

    return 0;
}