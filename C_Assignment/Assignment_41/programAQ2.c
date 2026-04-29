///////////////////////////////////////////////////////////
//
//  File name : Assignement41Question2.c
//  Description : Write a recursive program which display below pattern.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 5
Output : 1 2 3 4 5
Prototype :

*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        Display(iNo -1);
        printf("%d\t",iNo);
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