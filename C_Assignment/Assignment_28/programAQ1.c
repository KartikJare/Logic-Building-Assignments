///////////////////////////////////////////////////////////
//
//  File name : Assigment28Question1.c
//  Descreption : accept file name from user and open that file in read mode
//  Author : Kartik Ganesh Jare
//  Date : 5/6/25
//  
///////////////////////////////////////////////////////////
/*

Input : Demo.txt

Output : File opened successfully

*/

#include<stdio.h>
#include<fcntl.h>

int main()
{
    char fName[60];
    int fd = 0;

    printf("Please enter the file name : \n");
    scanf("%s",fName);

    fd = open(fName,O_RDONLY);

    if(fd == -1)
    {
        printf("unable to create file\n");
        return -1;
    }
    else
    {
        printf("File is succesfully open with fd : %d\n",fd);
    }

    close(fd);

    return 0;
}
