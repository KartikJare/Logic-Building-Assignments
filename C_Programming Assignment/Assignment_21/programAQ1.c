///////////////////////////////////////////////////////////
//
//  File name : Assigment21Question1.c
//  Descreption :Accept N numbers from user and return the largest number.
//  Author : Kartik Ganesh Jare
//  Date : 28/5/25
//  
///////////////////////////////////////////////////////////

/*
Input : N : 6

Elements :85 66 3 66 93 88

Output : 93
*/

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{    
    int iCnt = 0,iMax = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        printf("Invalid input\n");
        return -1;
    }

    iMax = Arr[0];

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
           iMax = Arr[iCnt];
        }   
    }
    return iMax;     
}

int main()
{
   int iLenght = 0, iRet = 0,iCnt = 0, iValue = 0;
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

   iRet = Maximum(ptr,iLenght);

   printf("Largest Number is %d",iRet);

    free(ptr);

    return 0;
}
    