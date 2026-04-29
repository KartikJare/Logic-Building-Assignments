///////////////////////////////////////////////////////////
//
//  File name : Assigment18Question5.c
//  Descreption : Accept N numbers from user and display all such elements which are multiples of 11.
//  Author : Kartik Ganesh Jare
//  Date : 27/5/25
//  
///////////////////////////////////////////////////////////

/*
Input : N : 6

Elements :85 66 3 80 93 88

Output : 66 55 88

*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{    
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 11) == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }   
    }   
} 

int main()
{
   int iLenght = 0,iCnt = 0;
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

   Display(ptr,iLenght);

   free(ptr);

    return 0;
}
    