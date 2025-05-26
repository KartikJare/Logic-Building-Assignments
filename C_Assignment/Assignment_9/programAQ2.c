///////////////////////////////////////////////////////////
//
//  File name : Assigment9Question2.c
//  Descreption : accept number from user and check whether it contains 0 in it or not.
//  Author : Kartik Ganesh Jare
//  Date : 17/5/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo !=0)
    {
       if((iNo % 10) == 0)
       {
        return TRUE;
       }
       iNo = iNo/10;
    }
    return FALSE;
} 

int main()
{
    int iValue = 0; 
    BOOL bRet = FALSE;
    
    printf("Enter Number: \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}
    