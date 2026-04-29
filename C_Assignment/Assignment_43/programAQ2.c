///////////////////////////////////////////////////////////
//
//  File name : Assignement43Question2.c
//  Description : Write a recursive program which accept number from user and return
//                largest digit
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 87983
Output : 9
Prototype :

*/

#include<stdio.h>

int Max(int iNo)
{
   int iDigit = 0,iMax = 0;

   if(iNo == 0)
   {
    return 0;
   }

   iDigit = iNo % 10;

   iMax = Max(iNo / 10);

   if(iDigit > iMax)
   {
    return iDigit;
   }
   else
   {
    return iMax;
   }
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = Max(iValue);

    printf("Largest digits is :%d\n",iRet);
    
    return 0;
}