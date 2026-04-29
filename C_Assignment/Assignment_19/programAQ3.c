///////////////////////////////////////////////////////////
//
//  File name : Assigment19Question3.c
//  Descreption : Accept N numbers from user check whether that numbers contains 11 in it or not.
//  Author : Kartik Ganesh Jare
//  Date : 27/5/25
//  
///////////////////////////////////////////////////////////

/*
Input : N : 6

Elements :85 66 11 80 93 88

Output : 11 is present

Input : N : 6

Elements :85 66 3 80 93 88

Output : 11 is absent
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool Check(int Arr[], int iSize)
{    
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] == 11))
        {
            break;
        }
    }  

    if(iCnt == iSize )
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
} 

int main()
{
   int iLenght = 0, iRet =0,iCnt = 0;
   int *ptr = NULL;
   bool bRet = false;

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

   bRet = Check(ptr,iLenght);

   if(bRet == TRUE)
   {
    printf("11 is present");
   }
   else
   {
        printf("11 is absent");
   } 

   free(ptr);

    return 0;
}
    