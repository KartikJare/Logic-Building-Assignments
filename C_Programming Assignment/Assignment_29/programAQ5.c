///////////////////////////////////////////////////////////
//
//  File name : Assignement29Question5.c
//  Description : Accepts file name and one count from user and 
//                that number of characters from starting position.
//  Author : Kartik Ganesh Jare
//  Date : 13/6/25
//  
///////////////////////////////////////////////////////////
/*

Input : Demo.txt 12

Output : Display first 12 characters from Demo.txt

*/

#include <stdio.h>
#include <fcntl.h>
#include <string.h>

#define BUFFER_SIZE 1024

void Display(char FName[],int iSize)
{
    int fd = 0, iRet = 0, iCnt = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FName, O_RDONLY);
    if(fd == -1)
    {
        return -1;
    }
    
    while((iRet = read(fd, Buffer, BUFFER_SIZE)) > 0)
    {
        if(iRet > iSize)
        {
            write(1,Buffer,iSize);
        }


    }

    close(fd);
}

int main()
{
    char FileName[60] = {'\0'};
    int iValue = 0;

    printf("Please enter the file name : ");
    scanf("%[^\n]s", FileName);

    printf("Enter the number of character : ");
    scanf(" %d",&iValue);

    Display(FileName,iValue);
        
    return 0;
}