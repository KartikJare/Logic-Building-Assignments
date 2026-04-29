///////////////////////////////////////////////////////////
//
//  File name : Assigment8Question3.c
//  Descreption : accept distance in kilometre and convert it into meter.
//  Author : Kartik Ganesh Jare
//  Date : 17/5/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

int kMtoMeter(int iNo)
{ 
    iNo = iNo * 1000;

    return iNo;
} 

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter distance: \n");
    scanf("%d",&iValue);

    iRet = kMtoMeter(iValue);

    printf("kilomater in meter is : %d\n",iRet);

    return 0;
}
    