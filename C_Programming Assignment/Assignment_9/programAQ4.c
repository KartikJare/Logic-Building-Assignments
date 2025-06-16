///////////////////////////////////////////////////////////
//
//  File name : Assigment9Question4.c
//  Descreption : accept number from user and count frequency of 4 in it.
//  Author : Kartik Ganesh Jare
//  Date : 17/5/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

int CountTwo(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo !=0)
    {
        iDigit = iNo % 10;

       if(iDigit == 4)
       {
            iCnt++;
       }
       iNo = iNo/10;
    }
    return iCnt++;
} 

int main()
{
    int iValue = 0; 
    int iRet = 0;
    
    printf("Enter Number: \n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("Number of 4 are : %d\n",iRet);

    return 0;
}
    