///////////////////////////////////////////////////////////
//
//  File name : Assignement42Question5.c
//  Description : Write a recursive program which accept number from user and return its
//                product of digits.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 523
Output : 30
Prototype :

*/

#include<stdio.h>

int Mult(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }

    return(iNo % 10) * Mult(iNo / 10);
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("%d\n",iRet);
    
    return 0;
}