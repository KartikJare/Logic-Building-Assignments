///////////////////////////////////////////////////////////
//
//  File name : Assignement42Question2.c
//  Description : Write a recursive program which accept number from user and return
//                summation of its digits.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 879
Output : 24
Prototype :

*/

#include<stdio.h>

int Sum(int iNo)
{
    if(iNo == 0)
    {
        return 0;
    }

    return (iNo % 10) + Sum(iNo / 10);
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("%d\n",iRet);
    
    return 0;
}