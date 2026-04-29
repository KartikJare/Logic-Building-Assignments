///////////////////////////////////////////////////////////
//
//  File name : Assignement43Question4.c
//  Description : Write a recursive program which accept number from user and return
//                smallest digit
//  Author : Kartik Ganesh Jare
//  Date : 13/11/25
//  
///////////////////////////////////////////////////////////

/*

Input : 87983
Output : 3
Prototype :

*/

#include<stdio.h>

int Min(int iNo)
{
    int iDigit = 0;
    int iMin = 0;

    if(iNo == 0)
    {
        return 9;
    }
    iDigit = iNo % 10;

    iMin = Min(iNo / 10);

    if(iDigit < iMin)
    {
        return iDigit;
    }
    else
    {
        return iMin;
    }
}

int main()
{
    int iValue = 0,iRet = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    iRet = Min(iValue);

    printf("Smallest digit is : %d\n",iRet);
    
    return 0;
}