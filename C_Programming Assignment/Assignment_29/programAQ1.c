///////////////////////////////////////////////////////////
//
//  File name : Assignement29Question1.c
//  Description : Accepts file name from user and counts number 
//                of capital characters from that file.
//  Author : Kartik Ganesh Jare
//  Date : 13/6/25
//  
///////////////////////////////////////////////////////////
/*

Input : Demo.txt

Output : Number of capital characters are 23

*/

#include <stdio.h>
#include <fcntl.h>
#include <string.h>

#define BUFFER_SIZE 1024

int CountCapital(char FName[])
{
    int fd = 0, iRet = 0, iCnt = 0, iCapCount = 0;
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
            if((Buffer[iCnt] >= 'A') && (Buffer[iCnt] <= 'Z'))
            {
                iCapCount++;
            }
        }
    }

    close(fd);
    return iCapCount;
}

int main()
{
    char FileName[60] = {'\0'};
    int iRet = 0;

    printf("Please enter the file name : ");
    scanf("%[^\n]s", FileName);

    iRet = CountCapital(FileName);
    if(iRet == -1)
    {
        printf("Unable to open file");
        return -1;
    }
    else
    {
        printf("Number of Capital characters are %d\n", iRet);
    }
    
    return 0;
}