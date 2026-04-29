///////////////////////////////////////////////////////////
//
//  File name : Assignement42Question4.c
//  Description : Write a recursive program which accept number from user and return its
//                factorial.
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 5
Output : 120
Prototype :

*/

#include<stdio.h>

int Fact(int iNo)
{
    if(iNo == 0 || iNo == 1)
    {
        return 1;
    }

    return iNo * Fact(iNo - 1);
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("%d\n",iRet);
    
    return 0;
}