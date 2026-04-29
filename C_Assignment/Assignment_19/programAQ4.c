///////////////////////////////////////////////////////////
//
//  File name : Assigment19Question4.c
//  Descreption : Accept N numbers from user and return frequency of 11 form it.
//  Author : Kartik Ganesh Jare
//  Date : 27/5/25
//  
///////////////////////////////////////////////////////////

/*
Input : N : 6

Elements :85 66 11 80 93 88

Output : 0

Input : N : 6

Elements :85 66 3 80 93 88

Output : 2
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize)
{    
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] == 11))
        {
            iCount++;
        }   
    }  
    return iCount;
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

   iRet = Frequency(ptr,iLenght);

   printf("%d\t",iRet);

    free(ptr);

    return 0;
}
    