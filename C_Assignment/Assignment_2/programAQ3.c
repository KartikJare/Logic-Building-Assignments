///////////////////////////////////////////////////////////
//
//  File name : Assigment2Question3.c
//  Descreption : Used to accept on number from user if number is less than 10 then print "Hello" otherwise print "Demo"
//  Author : Kartik Ganesh Jare
//  Date : 09/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
   if (iNo < 10)
   {
        printf("Hello\n");
   }
   else
   {
        printf("Demo\n");
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