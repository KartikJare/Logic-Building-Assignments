///////////////////////////////////////////////////////////
//
//  File name : Assigment1Question4.c
//  Descreption : Used to accpect one number & chech whether is divisible by 5 or not
//  Author : Kartik Ganesh Jare
//  Date : 09/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE -1

BOOL Check(int iNo)
{
    if((iNo %5)== 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisble by 5\n");
    }
    else
    {
        printf("Not Divisble by 5\n");
    }

    return 0;
}