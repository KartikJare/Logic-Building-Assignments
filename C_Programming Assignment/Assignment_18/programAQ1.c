///////////////////////////////////////////////////////////
//
//  File name : Assigment18Question1.c
//  Descreption : Accept N numbers from user and return difference between summation of even elements and summation of odd elements.
//  Author : Kartik Ganesh Jare
//  Date : 27/5/25
//  
///////////////////////////////////////////////////////////

/*
Input : N : 6

Elements :85 66 3 80 93 88

Output : 53 (234 - 181)
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{    
    int iCnt = 0, iSum1 = 0, iSum2 = 0,iSum3 = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSum1 = iSum1 + Arr[iCnt];
        }
        else
        {
            iSum2 = iSum2 + Arr[iCnt];
        }
    }
    if(iSum1 != iSum2)
    {
        iSum3 = iSum1 - iSum2;
    }
    return iSum3;      
} 

int main()
{
   int iLenght = 0, iRet =0,iCnt = 0;
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

   iRet = Difference(ptr,iLenght);

   printf("Result is %d",iRet);

   free(ptr);

    return 0;
}
    