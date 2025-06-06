///////////////////////////////////////////////////////////
//
//  File name : Assigment10Question3.c
//  Descreption : accept number from user and return the count of digits in between 3 and 7
//  Author : Kartik Ganesh Jare
//  Date : 17/5/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountRange(int iNo)
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
        if((iDigit > 3) && (iDigit < 7))
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

    iRet = CountRange(iValue);

    printf("Number of 3 to 7 digits are: %d",iRet);

    return 0;
}
    