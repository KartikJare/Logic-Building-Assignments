///////////////////////////////////////////////////////////
//
//  File name : Assigment20Question1.c
//  Descreption :Accept N numbers from user and accept one another number as NO , check whether NO is present or not.
//  Author : Kartik Ganesh Jare
//  Date : 27/5/25
//  
///////////////////////////////////////////////////////////

/*
Input : N : 6

        NO: 66
        Elements :85 66 3 66 93 88

        Output : TRUE

Input : N : 6
        NO: 12
        Elements :85 11 3 15 11 111

        Output : FALSE
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iSize,int iNo)
{    
    int iCnt = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        return FALSE;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }   
    }

    if (iCnt == iSize)
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
   int iLenght = 0, iRet = 0,iCnt = 0, iValue = 0;
   int *ptr = NULL;
   BOOL bRet = FALSE;

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

   bRet = Check(ptr,iLenght,iValue);

   if(bRet == TRUE)
   {
        printf("Number is present\n");
   }
   else
   {
    printf("Number is not present\n");
   }

    free(ptr);

    return 0;
}
    