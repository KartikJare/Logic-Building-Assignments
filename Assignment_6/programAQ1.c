///////////////////////////////////////////////////////////
//
//  File name : Assigment6Question1.c
//  Descreption : Used to accept number from user and if number is less than 50 then print small , 
//                if it is greater than 50 and less than 100 then print medium, if it is greater than 100 then print large.
//  Author : Kartik Ganesh Jare
//  Date : 17/5/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("Small");
    }
    else if(iNo >=50 && iNo <=100)
    {
        printf("Medium");
    }
    else
    {
        printf("Greater");
    }
    
} 

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}
    