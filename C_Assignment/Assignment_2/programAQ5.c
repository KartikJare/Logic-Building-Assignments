///////////////////////////////////////////////////////////
//
//  File name : pAssigment2Question5.c
//  Descreption : Used to accept number from user & check whether number is even or odd
//  Author : Kartik Ganesh Jare
//  Date : 09/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if (iNo % 2 == 0)
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

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    
    if(bRet == TRUE)
    {
        printf("%d number is Even\n",iValue);
    }
    else
    {
        printf("%d number is odd\n",iValue);
    }

    return 0;
}   