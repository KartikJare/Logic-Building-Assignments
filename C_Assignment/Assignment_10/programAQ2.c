///////////////////////////////////////////////////////////
//
//  File name : Assigment10Question2.c
//  Descreption : accept number from user and return the count of odd digits
//  Author : Kartik Ganesh Jare
//  Date : 17/5/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
        {
            iCnt++;
        }
        iNo = iNo /10;
    }
    return iCnt;

} 

int main()
{
    int iValue = 0; 
    int iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("Number of  odd digits are:%d",iRet);

    return 0;
}
    