///////////////////////////////////////////////////////////
//
//  File name : Assigment28Question3.c
//  Descreption : accept file name from user and read all data from that file and display contents on screen. 
//  Date : 5/6/25
//  
///////////////////////////////////////////////////////////

/*

Input : Demo.txt

Output : Display all data of file.

*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024 

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    printf("Enter the file name that you want to open :\n");
    scanf("%s",Fname);

    fd = open(Fname,O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File is successfully opened with fd: %d\n",fd);

        while((iRet = read(fd,Buffer,BUFFER_SIZE))!= 0)
        {
            write(1,Buffer,iRet);
            memset(Buffer,'\0',BUFFER_SIZE); 
        }
        
        close(fd);
    }

    return 0;
}