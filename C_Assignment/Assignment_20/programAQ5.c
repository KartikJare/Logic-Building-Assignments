///////////////////////////////////////////////////////////
//
//  File name : Assigment20Question5.c
//  Descreption : Accept N numbers from user and return product of all odd elements.
//  Author : Kartik Ganesh Jare
//  Date : 28/5/25
//  
///////////////////////////////////////////////////////////

/*
Input : N : 6

Elements :15 66 3 70 10 88

Output : 45
Input : N : 6

Elements :44 66 72 70 10 88

Output : 0
*/

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iSize)
{    
    int iCnt = 0,iSum = 1,iOdd = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
           iSum = iSum * Arr[iCnt];
           iOdd = 1;
        }   
    }
    if(!iOdd)
    {
        return 0;
    }
    return iSum;
} 

int main()
{
   int iLenght = 0, iRet = 0,iCnt = 0;
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

   iRet = Product(ptr,iLenght);

   printf("Product is %d",iRet);

    free(ptr);

    return 0;
}
    