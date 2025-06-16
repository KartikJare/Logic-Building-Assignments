///////////////////////////////////////////////////////////
//
//  File name : Assigment2Question2.c
//  Descreption : Used to accept one number from user & print that number of * on screen
//  Author : Kartik Ganesh Jare
//  Date : 09/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;  
   
    while(iNo > 0)
    {
        printf("*\n");
        iNo --;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}