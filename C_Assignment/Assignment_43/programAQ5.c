///////////////////////////////////////////////////////////
//
//  File name : Assignement43Question5.c
//  Description : Write a recursive program which accept number from user and return its
//                reverse number.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 523
Output : 325
Prototype :

*/

#include<stdio.h>

int Reverse(int iNo)
{
    static int iRev = 0;

    if(iNo == 0)
    {
        return iRev;
    }

    iRev = (iRev * 10) + (iNo % 10);

    return Reverse(iNo / 10);
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);

    printf("Reversed number is : %d\n",iRet);
    
    return 0;
}