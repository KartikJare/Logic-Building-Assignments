///////////////////////////////////////////////////////////
//
//  File name : Assigment19Question5.c
//  Descreption : Accept N numbers from user and accept one another number as NO ,return frequency of NO form it.
//  Author : Kartik Ganesh Jare
//  Date : 27/5/25
//  
///////////////////////////////////////////////////////////

/*
Input : N : 6

        NO: 66
        Elements :85 66 3 66 93 88

        Output : 2

Input : N : 6
        NO: 12
        Elements :85 11 3 15 11 111

        Output : 0
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize,int iNo)
{    
    int iCnt = 0, iCount = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] == iNo))
        {
            iCount++;
        }   
    }  
    return iCount;
} 

int main()
{
   int iLenght = 0, iRet = 0,iCnt = 0, iValue = 0;
   int *ptr = NULL;

   printf("Enter number of elements : \n");
   scanf("%d",&iLenght);

   printf("Enter the number: \n");
   scanf("%d",&iValue);

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

   iRet = Frequency(ptr,iLenght,iValue);

   printf("%d\t",iRet);

    free(ptr);

    return 0;
}
    