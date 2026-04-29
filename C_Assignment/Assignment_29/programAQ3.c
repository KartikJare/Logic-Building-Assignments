///////////////////////////////////////////////////////////
//
//  File name : Assignement29Question3.c
//  Description : Accepts file name from user and counts number 
//                of white space from that file.
//  Author : Kartik Ganesh Jare
//  Date : 13/6/25
//  
///////////////////////////////////////////////////////////
/*

Input : Demo.txt

Output : Number of white spaces are 13
*/

#include <stdio.h>
#include <fcntl.h>
#include <string.h>

#define BUFFER_SIZE 1024

int CountWhite(char FName[])
{
    int fd = 0, iRet = 0, iCnt = 0, iCount = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FName, O_RDONLY);
    if(fd == -1)
    {
        return -1;
    }

    while((iRet = read(fd, Buffer, BUFFER_SIZE)) > 0)
    {
        for(iCnt = 0; iCnt < iRet; iCnt++)
        {
            if(Buffer[iCnt] >= ' ')
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

    printf("Please enter the file name : ");
    scanf("%[^\n]s", FileName);

    iRet = CountWhite(FileName);
    if(iRet == -1)
    {
        printf("Unable to open file");
        return -1;
    }
    else
    {
        printf("Number of white space are %d\n", iRet);
    }
    
    return 0;
}