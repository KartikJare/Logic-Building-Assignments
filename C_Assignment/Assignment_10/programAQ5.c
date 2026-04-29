///////////////////////////////////////////////////////////
//
//  File name : Assigment10Question4.c
//  Descreption : accept number from user and return difference between summation of even digits and summation of odd digits
//  Author : Kartik Ganesh Jare
//  Date : 17/5/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0;
    int iSum1 = 0, iSum2 = 0;


    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSum1 = iSum1 + iDigit;
        }
        else
        {
            iSum2 = iSum2 + iDigit;
        } 
        iNo = iNo /10;
    }
    return (iSum1 - iSum2);

} 

int main()
{
    int iValue = 0; 
    int iRet = 0;

    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);

    printf("Number of summation of even and  odd digits.: %d",iRet);

    return 0;
}
    