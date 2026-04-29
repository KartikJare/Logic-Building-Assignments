///////////////////////////////////////////////////////////
//
//  File name : Assigment28Question2.c
//  Descreption :  accept file name from user and create that file 
//  Date : 5/6/25
//  
///////////////////////////////////////////////////////////
/*

Input : Demo.txt

Output : File created successfully.

*/

#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname [50];
    
    printf("Enter the file name that you want to create : \n");
    scanf("%s",Fname);

    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("unable to create file\n");
    }
    else
    {
        printf("File is succesfully created with fd : %d\n",fd);
    }

    return 0;
}