///////////////////////////////////////////////////////////
//
//  File name : Assigment4Question1.c
//  Descreption : Used to accept number from user and display its multiplication of factors
//  Author : Kartik Ganesh Jare
//  Date : 17/5/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

int MultFact(int iNo)
{
   int iCnt = 0;
   int iSum = 1;

   for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum * iCnt;         
        }
    }
    return iSum;
    
} 

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}
    