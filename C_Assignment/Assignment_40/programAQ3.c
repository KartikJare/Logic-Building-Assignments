///////////////////////////////////////////////////////////
//
//  File name : Assignement40Question3.c
//  Description : Write a recursive program which display below pattern.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Output : 5 4 3 2 1
Prototype :

*/

#include<stdio.h>

void Display()
{
    static int i = 5;

    if(i >= 1)
    {
        printf("%d\t",i);
        i--;
        Display();
    }
}

int main()
{
   Display();

    return 0;
}