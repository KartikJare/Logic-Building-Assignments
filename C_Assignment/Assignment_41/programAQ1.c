///////////////////////////////////////////////////////////
//
//  File name : Assignement41Question1.c
//  Description : Write a recursive program which display below pattern..
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 5
Output : * * * * *
Prototype :

*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("*\t");
        Display(iNo -1);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}