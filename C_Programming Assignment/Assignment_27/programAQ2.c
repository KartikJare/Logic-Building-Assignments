///////////////////////////////////////////////////////////
//
//  File name : Assigment27Question2.c
//  Descreption : accept string from user and copy the contents of that string into another string. 
//  Date : 5/6/25
//  
///////////////////////////////////////////////////////////
/*

Input : "Marvellous Multi OS"
         10

Output : "Marvellous"

*/

#include<stdio.h>

void StrNCpyX(char *src,char *dest,int iCnt)
{
    if(NULL == src || NULL == dest)
    {
        printf("Unable to find the string");
        return;
    }

    if(iCnt == 0)
    {
        printf("Please enter the numbers of caharater to find");
        return;
    }

    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++; 
        iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = {'\0'};
    char brr[30] = {'\0'};
    int iValue = 0;

    printf("Please enter the string : \n");
    scanf("%[^\n]s",arr);

    printf("Enter numbers of charater to copy: \n");
    scanf("%d",&iValue);

    StrNCpyX(arr,brr,iValue);

    printf("Copy String is : %s",brr);

    return 0;
}