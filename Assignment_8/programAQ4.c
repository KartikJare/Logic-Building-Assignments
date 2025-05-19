///////////////////////////////////////////////////////////
//
//  File name : Assigment8Question4.c
//  Descreption : accept temperature in Fahrenheit and convert it into celsius
//  Author : Kartik Ganesh Jare
//  Date : 17/5/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCS(float fTemp)
{ 
    fTemp = (fTemp - 32.0) * (5.0/9.0);

    return fTemp;  
} 

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheut: \n");
    scanf("%f",&fValue);

    dRet = FhtoCS(fValue);

    printf("temperature in Fahrenheit : %f\n",dRet);

    return 0;
}
    