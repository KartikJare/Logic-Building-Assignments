///////////////////////////////////////////////////////////
//
//  File name : Assigment10Question4.c
//  Descreption : accept number from user and return multiplication of all digits
//  Author : Kartik Ganesh Jare
//  Date : 17/5/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iCnt = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iCnt = iDigit * iCnt;
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

    iRet = MultDigits(iValue);

    printf("Number of multiplication digits are: %d",iRet);

    return 0;
}
    