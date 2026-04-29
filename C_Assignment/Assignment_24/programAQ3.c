///////////////////////////////////////////////////////////
//
//  File name : Assigment24Question3.c
//  Descreption : Accept string from user and return difference between frequency of small characters and frequency of      
//                capital characters.
//  Author : Kartik Ganesh Jare
//  Date : 1/6/25
//  
///////////////////////////////////////////////////////////

/*
Input : MarvellouS

Output : 6 (8-2)
*/
#include<stdio.h>

int Difference(char *str)
{
    int iSmallCount = 0;
    int iCaptialCount = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if((*str>= 'a') && (*str <= 'z'))
        {
            iSmallCount++;    
        }
        else if((*str>= 'A') && (*str <= 'Z'))
        {
           iCaptialCount++;
        }
        str++;
    }

    return (iSmallCount - iCaptialCount);
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return 0;
}
