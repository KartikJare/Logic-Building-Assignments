///////////////////////////////////////////////////////////
//
//  File name : Assigment20Question3.c
//  Descreption : Accept N numbers from user and accept one another number as NO , return index of last occurrence of that NO.
//  Author : Kartik Ganesh Jare
//  Date : 28/5/25
//  
///////////////////////////////////////////////////////////

/*
Input : N : 6
NO: 66
Elements :85 66 3 66 93 88

Output : 3

Input : N : 6
NO: 93
Elements :85 66 3 66 93 88

Output : 4

Input : N : 6
NO: 12
Elements :85 11 3 15 11 111

Output : -1
*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iSize,int iNo)
{    
    int iCnt = 0, iCount = -1;

    if((Arr == NULL) || (iSize <= 0))
    {
        return -1;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount = iCnt;
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

   iRet = LastOcc(ptr,iLenght,iValue);

   if(iRet == -1)
   {
        printf("There is no such number\n");
   }
   else
   {
       printf("Last occurrence of number is %d",iRet);
   }

    free(ptr);

    return 0;
}