///////////////////////////////////////////////////////////
//
//  File name : Assigment21Question5.c
//  Descreption :Accept N numbers from user and return the smallest number.
//  Author : Kartik Ganesh Jare
//  Date : 28/5/25
//  
///////////////////////////////////////////////////////////

/*
Input : N : 6

Elements :8225 665 3 76 953 858

Output : 17 17 3 13 17 21
*/

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iSize)
{    
    int iCnt = 0,iNum = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid input\n");
        return;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((iNum >= 100) && (iNum <= 999))
        {
            printf("%d\t",Arr[iNum]);
        }

    }
}

int main()
{
   int iLenght = 0,iCnt = 0;
   int *ptr = NULL;

   printf("Enter number of elements : \n");
   scanf("%d",&iLenght);

   ptr =(int *)malloc(iLenght * sizeof(int));

   if(ptr == NULL)
   {
        printf("Unable to allocate memory");
        return -1;
   }

   printf("Enter %d elements : \n",iLenght);

   for(iCnt = 0; iCnt < iLenght;iCnt++)
   {
        printf("Enter element : %d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
   }

    DigitsSum(ptr,iLenght);

    free(ptr);

    return 0;
}