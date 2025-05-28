///////////////////////////////////////////////////////////
//
//  File name : Assigment20Question4.c
//  Descreption : Accept N numbers from user and accept Range, Display all elements from that range
//  Author : Kartik Ganesh Jare
//  Date : 28/5/25
//  
///////////////////////////////////////////////////////////

/*
Input : N : 6
Start: 60
End : 90
Elements :85 66 3 76 93 88

Output : 66 76 88
Input : N : 6
Start: 30
End : 50
Elements :85 66 3 76 93 88

Output : 0
*/

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize,int iStart,int iEnd)
{    
    int iCnt = 0,iCount = 0;

    if((Arr == NULL) || (iSize <= 0))
    {
        return;
    }

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
        {   
            printf("%d\t",Arr[iCnt]);
            iCount = 0;
        }
    }  
} 

int main()
{
   int iLenght = 0, iRet = 0,iCnt = 0, iValue1 = 0,iValue2 = 0;
   int *ptr = NULL;

   printf("Enter number of elements : \n");
   scanf("%d",&iLenght);

   printf("Enter the starting point : \n");
   scanf("%d",&iValue1);

    printf("Enter the ending point : \n");
   scanf("%d",&iValue2);

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

   Range(ptr,iLenght,iValue1,iValue2);


    free(ptr);

    return 0;
}