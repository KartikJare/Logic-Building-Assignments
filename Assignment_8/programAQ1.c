///////////////////////////////////////////////////////////
//
//  File name : Assigment8Question1.c
//  Descreption : Accept radius of circle from user and calculate its area. Consider value of PI as 3.14. (Area = PI * Radius * Radius)
//  Author : Kartik Ganesh Jare
//  Date : 17/5/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

double CricleArea(float fRadius)
{
    double PI = 3.14;
    double Area = 0.0;

    Area = PI * fRadius * fRadius;
        
} 

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : \n");
    scanf("%f",&fValue);

    dRet = CricleArea(fValue);

    printf("Area of the circle is : %f\n",dRet);

    return 0;
}
    