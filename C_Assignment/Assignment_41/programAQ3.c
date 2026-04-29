///////////////////////////////////////////////////////////
//
//  File name : Assignement41Question3.c
//  Description : Write a recursive program which display below pattern.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 5
Output : 5 4 3 2 1
Prototype :

*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("%d\t",iNo);
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