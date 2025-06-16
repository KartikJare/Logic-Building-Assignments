///////////////////////////////////////////////////////////
//
//  File name : Assigment19Question2.c
//  Descreption : Accept N numbers from user and return frequency of even numbers.
//  Author : Kartik Ganesh Jare
//  Date : 27/5/25
//  
///////////////////////////////////////////////////////////

/*
Input : N : 7

Elements :85 66 3 80 93 88 90

Output : 1 (4 - 3)
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{    
    int iCnt = 0, iCount1 = 0,iCount2 = 0,iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iCount1++;
        }
        else
        {
            iCount2++;
        }
    }
    if(iCount1 != iCount2)
    {
        iSum = iCount1 - iCount2;
    }
    return iSum;      
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

   iRet = Frequency(ptr,iLenght);

   printf("Result is %d\t",iRet);

   free(ptr);

    return 0;
}
    