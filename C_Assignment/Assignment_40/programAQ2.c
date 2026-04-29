///////////////////////////////////////////////////////////
//
//  File name : Assignement40Question2.c
//  Description : Write a recursive program which display below pattern
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Output : 1 2 3 4 5
Prototype :

*/

#include<stdio.h>
void Display()
{
    static int i = 1;

    if(i <= 5)
    {
        printf("%d\t",i);
        i++;
        Display();
    }
}

int main()
{
   Display();

    return 0;
}