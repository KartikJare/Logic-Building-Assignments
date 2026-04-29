///////////////////////////////////////////////////////////
//
//  File name : Assignement40Question1.c
//  Description : Write a recursive program which display below pattern.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Output : * * * * *

Prototype :

*/

#include<stdio.h>

void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        printf("*\t");
        i++;
        Display();
    }
}

int main()
{
    Display();
    
    return 0;
}