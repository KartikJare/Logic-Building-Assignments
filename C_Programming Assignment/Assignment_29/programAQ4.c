///////////////////////////////////////////////////////////
//
//  File name : Assignement29Question4.c
//  Description : Accepts file name and one character from user and count number of 
//                occurrences of that characters from that file.
//  Author : Kartik Ganesh Jare
//  Date : 13/6/25
//  
///////////////////////////////////////////////////////////
/*

Input : Demo.txt ‘M’

Output : Frequency of M is 7

*/

#include <stdio.h>
#include <fcntl.h>
#include <string.h>

#define BUFFER_SIZE 1024

int CountChar(char FName[],char Ch)
{
    int fd = 0, iRet = 0, iCnt = 0, iCount = 0,Displ = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FName, O_RDONLY);
    if(fd == -1)
    {
        return -1;
    }

    if((Ch >= 'A') && (Ch <= 'Z'))
    {
        Displ = 32;
    }
    else if((Ch >= 'a') && (Ch <= 'z'))
    {
        Displ = -32;
    }
    
    while((iRet = read(fd, Buffer, BUFFER_SIZE)) > 0)
    {
        for(iCnt = 0; iCnt < iRet; iCnt++)
        {
            if((Buffer[iCnt] == Ch) || (Buffer[iCnt] == Ch + Displ))
            {
                iCount++;
            }
        }
    }

    close(fd);
    return iCount;
}

int main()
{
    char FileName[60] = {'\0'};
    int iRet = 0;
    char cValue; 

    printf("Please enter the file name : ");
    scanf("%[^\n]s", FileName);

    printf("Enter the character : ");
    scanf(" %c",&cValue);

    iRet = CountChar(FileName,cValue);
    if(iRet == -1)
    {
        printf("Unable to open file");
        return -1;
    }
    else
    {
        printf("Frequency is %d\n", iRet);
    }
    
    return 0;
}