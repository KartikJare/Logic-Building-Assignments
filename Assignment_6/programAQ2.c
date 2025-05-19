///////////////////////////////////////////////////////////
//
//  File name : Assigment6Question2.c
//  Descreption : Used to Accept single digit number from user and print it into word
//  Author : Kartik Ganesh Jare
//  Date : 17/05/25
//  
///////////////////////////////////////////////////////////

#include<stdio.h>

void Dipaly(int iNo)
{
   if(iNo <= 0 )
   {
        iNo = -iNo;
   }

   if(iNo >= 0 && iNo <= 9)
   {    
        switch (iNo)
        {
            case 0:
            printf("Zero");
            break;

            case 1:
            printf("One");
            break;

            case 2:
            printf("Two");
            break;

            case 3:
            printf("Three");
            break;

            case 4:
            printf("Four");
            break;

            case 5:
            printf("Five");
            break;

            case 6:
            printf("Six");
            break;

            case 7:
            printf("Seven");
            break;

            case 8:
            printf("Egith");
            break;

            case 9:
            printf("Nine");
            break;       
        }
    }
    else
    {
        printf("Invaid Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Dipaly(iValue);

    return 0;
}